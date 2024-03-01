#include <iostream>
#include "histogram_sender.h"

int main() {
    auto sender = histograms::Frame1DHistogramSender<double, double>(
        "some topic",
        1'000'000 / 14, 10'000,
        "intensity", "counts"
        );
    sender.fake_serialize();

    return 0;
}
