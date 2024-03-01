//
// Created by Gregory Tucker, European Spallation Source ERIC on 2024-03-01
//

#ifndef HISTOGRAM_SENDER_H
#define HISTOGRAM_SENDER_H

#include <string>
#include <utility>
#include <vector>
#include <cmath>
#include <iostream>

#include "dataarray.h"

namespace histograms {
    namespace fake_peak
    {
        template<class T>
        std::enable_if_t<std::is_floating_point_v<T>, T> gaussian(T center, T half_width, T height, T x)
        {
            auto sigma = half_width / 2.35482; // sqrt(2*ln(2))
            auto z = - (x - center) * (x - center) / 2 / sigma / sigma;
            return std::exp(z) * height;
        }
    }

    /// \brief A class to handle sending 1-D data collected over a frame to Kafka using da00 flatbuffers schema
    template<class T, class R=T>
    class Frame1DHistogramSender
    {
        using data_t = std::vector<T>;
        using time_t = int32_t;

        std::string _topic;
        time_t _period;
        time_t _count;
        std::string _name;
        std::string _unit;
        std::string _time_unit;

    public:
        /// \brief Construct a Frame1DHistogramSender
        Frame1DHistogramSender(
            std::string topic,                    //!< Kafka stream topic destination
            const time_t period,                  //!< length of time of one frame in the specified units
            const time_t bin_count,               //!< number of time bins used
            std::string name,                     //!< name of the binned data
            std::string unit,                     //!< unit of the binned data
            std::string time_unit = "millisecond" //!< unit of time used for period, and the binned axis
            )
        :
        _topic(std::move(topic)),
        _period(period),
        _count(bin_count),
        _name(std::move(name)),
        _unit(std::move(unit)),
        _time_unit(std::move(time_unit))
        {}

        void serialize(const data_t & data) const
        {
            if (data.size() != _count)
            {
                std::stringstream ss;
                ss << "Expected data to serialize to have " << _count << " elements but provided " << data.size();
                throw std::runtime_error(ss.str());
            }
            auto x = axis();
            auto y = (
                dataarray::Variable(_name, {"t"}, {_count})
                .unit(_unit)
                .source("histogram_sender")
                .label("Frame 1D Histogram intensity")
                .data(data)
            );
            const auto dataarray = dataarray::DataArray("histogram_sender", {x, y});
            flatbuffers::FlatBufferBuilder builder(1024);
            builder.Finish(dataarray.pack(builder));
            const auto buffer = builder.Release();

            std::cout << "Now we could send a flatbuffer with " << buffer.size() << " bytes to topic " << _topic << "\n";
        }

        void fake_serialize() const
        {
            auto x = axis();
            auto ax = x.template data<R>();


            auto signal_func = [] (const double x)
            {
                return fake_peak::gaussian(100.0, 10.0, 1000.0, x)
                + fake_peak::gaussian(200.0, 20.0, 450.0, x)
                + fake_peak::gaussian(300.0, 30.0, 300.0, x);
            };
            std::vector<int64_t> signal;
            signal.reserve(_count);
            for (size_t i=0; i<_count; ++i)
            {
                signal.push_back(static_cast<int64_t>(1024 * signal_func((ax[i] + ax[i+1]) / 2.0)));
            }
            auto y = (
                dataarray::Variable(_name, {"t"}, {_count})
                .unit(_unit)
                .source("histogram_sender")
                .label("Frame 1D Histogram intensity")
                .data(signal)
            );

            const auto dataarray = dataarray::DataArray("histogram_sender", {x, y});
            flatbuffers::FlatBufferBuilder builder(1024);
            builder.Finish(dataarray.pack(builder));
            const auto buffer = builder.Release();

            std::cout << "Now we could send a flatbuffer with " << buffer.size() << " bytes to topic " << _topic << "\n";
        }

    private:
        auto axis() const
        {
            std::vector<R> ax;
            ax.reserve(_count + 1);
            auto dt = static_cast<R>(_period) / static_cast<R>(_count);
            ax.push_back(0);
            for (auto i=0; i<_count; ++i) ax.push_back(ax.back() + dt);

            return (
                dataarray::Variable("t", {"t"}, {_count+1})
                .unit(_time_unit)
                .source("histogram_sender")
                .label("Frame 1D Histogram time")
                .data(ax)
                );
        }
    };

}

#endif //HISTOGRAM_SENDER_H
