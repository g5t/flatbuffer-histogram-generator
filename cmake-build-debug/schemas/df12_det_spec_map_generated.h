// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_DF12DETSPECMAP_H_
#define FLATBUFFERS_GENERATED_DF12DETSPECMAP_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 3,
             "Non-compatible flatbuffers version included");

struct SpectraDetectorMapping;
struct SpectraDetectorMappingBuilder;

struct SpectraDetectorMapping FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef SpectraDetectorMappingBuilder Builder;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "SpectraDetectorMapping";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SPECTRUM = 4,
    VT_DETECTOR_ID = 6,
    VT_N_SPECTRA = 8
  };
  const ::flatbuffers::Vector<int32_t> *spectrum() const {
    return GetPointer<const ::flatbuffers::Vector<int32_t> *>(VT_SPECTRUM);
  }
  ::flatbuffers::Vector<int32_t> *mutable_spectrum() {
    return GetPointer<::flatbuffers::Vector<int32_t> *>(VT_SPECTRUM);
  }
  const ::flatbuffers::Vector<int32_t> *detector_id() const {
    return GetPointer<const ::flatbuffers::Vector<int32_t> *>(VT_DETECTOR_ID);
  }
  ::flatbuffers::Vector<int32_t> *mutable_detector_id() {
    return GetPointer<::flatbuffers::Vector<int32_t> *>(VT_DETECTOR_ID);
  }
  int32_t n_spectra() const {
    return GetField<int32_t>(VT_N_SPECTRA, 0);
  }
  bool mutate_n_spectra(int32_t _n_spectra = 0) {
    return SetField<int32_t>(VT_N_SPECTRA, _n_spectra, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SPECTRUM) &&
           verifier.VerifyVector(spectrum()) &&
           VerifyOffset(verifier, VT_DETECTOR_ID) &&
           verifier.VerifyVector(detector_id()) &&
           VerifyField<int32_t>(verifier, VT_N_SPECTRA, 4) &&
           verifier.EndTable();
  }
};

struct SpectraDetectorMappingBuilder {
  typedef SpectraDetectorMapping Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_spectrum(::flatbuffers::Offset<::flatbuffers::Vector<int32_t>> spectrum) {
    fbb_.AddOffset(SpectraDetectorMapping::VT_SPECTRUM, spectrum);
  }
  void add_detector_id(::flatbuffers::Offset<::flatbuffers::Vector<int32_t>> detector_id) {
    fbb_.AddOffset(SpectraDetectorMapping::VT_DETECTOR_ID, detector_id);
  }
  void add_n_spectra(int32_t n_spectra) {
    fbb_.AddElement<int32_t>(SpectraDetectorMapping::VT_N_SPECTRA, n_spectra, 0);
  }
  explicit SpectraDetectorMappingBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<SpectraDetectorMapping> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<SpectraDetectorMapping>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<SpectraDetectorMapping> CreateSpectraDetectorMapping(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<int32_t>> spectrum = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int32_t>> detector_id = 0,
    int32_t n_spectra = 0) {
  SpectraDetectorMappingBuilder builder_(_fbb);
  builder_.add_n_spectra(n_spectra);
  builder_.add_detector_id(detector_id);
  builder_.add_spectrum(spectrum);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<SpectraDetectorMapping> CreateSpectraDetectorMappingDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<int32_t> *spectrum = nullptr,
    const std::vector<int32_t> *detector_id = nullptr,
    int32_t n_spectra = 0) {
  auto spectrum__ = spectrum ? _fbb.CreateVector<int32_t>(*spectrum) : 0;
  auto detector_id__ = detector_id ? _fbb.CreateVector<int32_t>(*detector_id) : 0;
  return CreateSpectraDetectorMapping(
      _fbb,
      spectrum__,
      detector_id__,
      n_spectra);
}

inline const SpectraDetectorMapping *GetSpectraDetectorMapping(const void *buf) {
  return ::flatbuffers::GetRoot<SpectraDetectorMapping>(buf);
}

inline const SpectraDetectorMapping *GetSizePrefixedSpectraDetectorMapping(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<SpectraDetectorMapping>(buf);
}

inline SpectraDetectorMapping *GetMutableSpectraDetectorMapping(void *buf) {
  return ::flatbuffers::GetMutableRoot<SpectraDetectorMapping>(buf);
}

inline SpectraDetectorMapping *GetMutableSizePrefixedSpectraDetectorMapping(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<SpectraDetectorMapping>(buf);
}

inline const char *SpectraDetectorMappingIdentifier() {
  return "df12";
}

inline bool SpectraDetectorMappingBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, SpectraDetectorMappingIdentifier());
}

inline bool SizePrefixedSpectraDetectorMappingBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, SpectraDetectorMappingIdentifier(), true);
}

inline bool VerifySpectraDetectorMappingBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<SpectraDetectorMapping>(SpectraDetectorMappingIdentifier());
}

inline bool VerifySizePrefixedSpectraDetectorMappingBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<SpectraDetectorMapping>(SpectraDetectorMappingIdentifier());
}

inline void FinishSpectraDetectorMappingBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<SpectraDetectorMapping> root) {
  fbb.Finish(root, SpectraDetectorMappingIdentifier());
}

inline void FinishSizePrefixedSpectraDetectorMappingBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<SpectraDetectorMapping> root) {
  fbb.FinishSizePrefixed(root, SpectraDetectorMappingIdentifier());
}

#endif  // FLATBUFFERS_GENERATED_DF12DETSPECMAP_H_