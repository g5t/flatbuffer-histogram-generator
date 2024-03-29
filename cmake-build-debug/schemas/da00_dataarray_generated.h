// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_DA00DATAARRAY_H_
#define FLATBUFFERS_GENERATED_DA00DATAARRAY_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 3,
             "Non-compatible flatbuffers version included");

struct da00_Variable;
struct da00_VariableBuilder;

struct da00_DataArray;
struct da00_DataArrayBuilder;

enum class da00_dtype : int8_t {
  none = 0,
  int8 = 1,
  uint8 = 2,
  int16 = 3,
  uint16 = 4,
  int32 = 5,
  uint32 = 6,
  int64 = 7,
  uint64 = 8,
  float32 = 9,
  float64 = 10,
  c_string = 11,
  MIN = none,
  MAX = c_string
};

inline const da00_dtype (&EnumValuesda00_dtype())[12] {
  static const da00_dtype values[] = {
    da00_dtype::none,
    da00_dtype::int8,
    da00_dtype::uint8,
    da00_dtype::int16,
    da00_dtype::uint16,
    da00_dtype::int32,
    da00_dtype::uint32,
    da00_dtype::int64,
    da00_dtype::uint64,
    da00_dtype::float32,
    da00_dtype::float64,
    da00_dtype::c_string
  };
  return values;
}

inline const char * const *EnumNamesda00_dtype() {
  static const char * const names[13] = {
    "none",
    "int8",
    "uint8",
    "int16",
    "uint16",
    "int32",
    "uint32",
    "int64",
    "uint64",
    "float32",
    "float64",
    "c_string",
    nullptr
  };
  return names;
}

inline const char *EnumNameda00_dtype(da00_dtype e) {
  if (::flatbuffers::IsOutRange(e, da00_dtype::none, da00_dtype::c_string)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesda00_dtype()[index];
}

struct da00_Variable FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef da00_VariableBuilder Builder;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "da00_Variable";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_UNIT = 6,
    VT_LABEL = 8,
    VT_SOURCE = 10,
    VT_DATA_TYPE = 12,
    VT_AXES = 14,
    VT_SHAPE = 16,
    VT_DATA = 18
  };
  const ::flatbuffers::String *name() const {
    return GetPointer<const ::flatbuffers::String *>(VT_NAME);
  }
  ::flatbuffers::String *mutable_name() {
    return GetPointer<::flatbuffers::String *>(VT_NAME);
  }
  const ::flatbuffers::String *unit() const {
    return GetPointer<const ::flatbuffers::String *>(VT_UNIT);
  }
  ::flatbuffers::String *mutable_unit() {
    return GetPointer<::flatbuffers::String *>(VT_UNIT);
  }
  const ::flatbuffers::String *label() const {
    return GetPointer<const ::flatbuffers::String *>(VT_LABEL);
  }
  ::flatbuffers::String *mutable_label() {
    return GetPointer<::flatbuffers::String *>(VT_LABEL);
  }
  const ::flatbuffers::String *source() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SOURCE);
  }
  ::flatbuffers::String *mutable_source() {
    return GetPointer<::flatbuffers::String *>(VT_SOURCE);
  }
  da00_dtype data_type() const {
    return static_cast<da00_dtype>(GetField<int8_t>(VT_DATA_TYPE, 0));
  }
  bool mutate_data_type(da00_dtype _data_type = static_cast<da00_dtype>(0)) {
    return SetField<int8_t>(VT_DATA_TYPE, static_cast<int8_t>(_data_type), 0);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>> *axes() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>> *>(VT_AXES);
  }
  ::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>> *mutable_axes() {
    return GetPointer<::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>> *>(VT_AXES);
  }
  const ::flatbuffers::Vector<int64_t> *shape() const {
    return GetPointer<const ::flatbuffers::Vector<int64_t> *>(VT_SHAPE);
  }
  ::flatbuffers::Vector<int64_t> *mutable_shape() {
    return GetPointer<::flatbuffers::Vector<int64_t> *>(VT_SHAPE);
  }
  const ::flatbuffers::Vector<uint8_t> *data() const {
    return GetPointer<const ::flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  ::flatbuffers::Vector<uint8_t> *mutable_data() {
    return GetPointer<::flatbuffers::Vector<uint8_t> *>(VT_DATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_UNIT) &&
           verifier.VerifyString(unit()) &&
           VerifyOffset(verifier, VT_LABEL) &&
           verifier.VerifyString(label()) &&
           VerifyOffset(verifier, VT_SOURCE) &&
           verifier.VerifyString(source()) &&
           VerifyField<int8_t>(verifier, VT_DATA_TYPE, 1) &&
           VerifyOffset(verifier, VT_AXES) &&
           verifier.VerifyVector(axes()) &&
           verifier.VerifyVectorOfStrings(axes()) &&
           VerifyOffsetRequired(verifier, VT_SHAPE) &&
           verifier.VerifyVector(shape()) &&
           VerifyOffsetRequired(verifier, VT_DATA) &&
           verifier.VerifyVector(data()) &&
           verifier.EndTable();
  }
};

struct da00_VariableBuilder {
  typedef da00_Variable Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_name(::flatbuffers::Offset<::flatbuffers::String> name) {
    fbb_.AddOffset(da00_Variable::VT_NAME, name);
  }
  void add_unit(::flatbuffers::Offset<::flatbuffers::String> unit) {
    fbb_.AddOffset(da00_Variable::VT_UNIT, unit);
  }
  void add_label(::flatbuffers::Offset<::flatbuffers::String> label) {
    fbb_.AddOffset(da00_Variable::VT_LABEL, label);
  }
  void add_source(::flatbuffers::Offset<::flatbuffers::String> source) {
    fbb_.AddOffset(da00_Variable::VT_SOURCE, source);
  }
  void add_data_type(da00_dtype data_type) {
    fbb_.AddElement<int8_t>(da00_Variable::VT_DATA_TYPE, static_cast<int8_t>(data_type), 0);
  }
  void add_axes(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>>> axes) {
    fbb_.AddOffset(da00_Variable::VT_AXES, axes);
  }
  void add_shape(::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> shape) {
    fbb_.AddOffset(da00_Variable::VT_SHAPE, shape);
  }
  void add_data(::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> data) {
    fbb_.AddOffset(da00_Variable::VT_DATA, data);
  }
  explicit da00_VariableBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<da00_Variable> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<da00_Variable>(end);
    fbb_.Required(o, da00_Variable::VT_NAME);
    fbb_.Required(o, da00_Variable::VT_SHAPE);
    fbb_.Required(o, da00_Variable::VT_DATA);
    return o;
  }
};

inline ::flatbuffers::Offset<da00_Variable> Createda00_Variable(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> name = 0,
    ::flatbuffers::Offset<::flatbuffers::String> unit = 0,
    ::flatbuffers::Offset<::flatbuffers::String> label = 0,
    ::flatbuffers::Offset<::flatbuffers::String> source = 0,
    da00_dtype data_type = da00_dtype::none,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<::flatbuffers::String>>> axes = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<int64_t>> shape = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<uint8_t>> data = 0) {
  da00_VariableBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_shape(shape);
  builder_.add_axes(axes);
  builder_.add_source(source);
  builder_.add_label(label);
  builder_.add_unit(unit);
  builder_.add_name(name);
  builder_.add_data_type(data_type);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<da00_Variable> Createda00_VariableDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const char *unit = nullptr,
    const char *label = nullptr,
    const char *source = nullptr,
    da00_dtype data_type = da00_dtype::none,
    const std::vector<::flatbuffers::Offset<::flatbuffers::String>> *axes = nullptr,
    const std::vector<int64_t> *shape = nullptr,
    const std::vector<uint8_t> *data = nullptr) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto unit__ = unit ? _fbb.CreateString(unit) : 0;
  auto label__ = label ? _fbb.CreateString(label) : 0;
  auto source__ = source ? _fbb.CreateString(source) : 0;
  auto axes__ = axes ? _fbb.CreateVector<::flatbuffers::Offset<::flatbuffers::String>>(*axes) : 0;
  auto shape__ = shape ? _fbb.CreateVector<int64_t>(*shape) : 0;
  auto data__ = data ? _fbb.CreateVector<uint8_t>(*data) : 0;
  return Createda00_Variable(
      _fbb,
      name__,
      unit__,
      label__,
      source__,
      data_type,
      axes__,
      shape__,
      data__);
}

struct da00_DataArray FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef da00_DataArrayBuilder Builder;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "da00_DataArray";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SOURCE_NAME = 4,
    VT_TIMESTAMP = 6,
    VT_DATA = 8
  };
  const ::flatbuffers::String *source_name() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SOURCE_NAME);
  }
  ::flatbuffers::String *mutable_source_name() {
    return GetPointer<::flatbuffers::String *>(VT_SOURCE_NAME);
  }
  int64_t timestamp() const {
    return GetField<int64_t>(VT_TIMESTAMP, 0);
  }
  bool mutate_timestamp(int64_t _timestamp = 0) {
    return SetField<int64_t>(VT_TIMESTAMP, _timestamp, 0);
  }
  const ::flatbuffers::Vector<::flatbuffers::Offset<da00_Variable>> *data() const {
    return GetPointer<const ::flatbuffers::Vector<::flatbuffers::Offset<da00_Variable>> *>(VT_DATA);
  }
  ::flatbuffers::Vector<::flatbuffers::Offset<da00_Variable>> *mutable_data() {
    return GetPointer<::flatbuffers::Vector<::flatbuffers::Offset<da00_Variable>> *>(VT_DATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_SOURCE_NAME) &&
           verifier.VerifyString(source_name()) &&
           VerifyField<int64_t>(verifier, VT_TIMESTAMP, 8) &&
           VerifyOffsetRequired(verifier, VT_DATA) &&
           verifier.VerifyVector(data()) &&
           verifier.VerifyVectorOfTables(data()) &&
           verifier.EndTable();
  }
};

struct da00_DataArrayBuilder {
  typedef da00_DataArray Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_source_name(::flatbuffers::Offset<::flatbuffers::String> source_name) {
    fbb_.AddOffset(da00_DataArray::VT_SOURCE_NAME, source_name);
  }
  void add_timestamp(int64_t timestamp) {
    fbb_.AddElement<int64_t>(da00_DataArray::VT_TIMESTAMP, timestamp, 0);
  }
  void add_data(::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<da00_Variable>>> data) {
    fbb_.AddOffset(da00_DataArray::VT_DATA, data);
  }
  explicit da00_DataArrayBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<da00_DataArray> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<da00_DataArray>(end);
    fbb_.Required(o, da00_DataArray::VT_SOURCE_NAME);
    fbb_.Required(o, da00_DataArray::VT_DATA);
    return o;
  }
};

inline ::flatbuffers::Offset<da00_DataArray> Createda00_DataArray(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> source_name = 0,
    int64_t timestamp = 0,
    ::flatbuffers::Offset<::flatbuffers::Vector<::flatbuffers::Offset<da00_Variable>>> data = 0) {
  da00_DataArrayBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_data(data);
  builder_.add_source_name(source_name);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<da00_DataArray> Createda00_DataArrayDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *source_name = nullptr,
    int64_t timestamp = 0,
    const std::vector<::flatbuffers::Offset<da00_Variable>> *data = nullptr) {
  auto source_name__ = source_name ? _fbb.CreateString(source_name) : 0;
  auto data__ = data ? _fbb.CreateVector<::flatbuffers::Offset<da00_Variable>>(*data) : 0;
  return Createda00_DataArray(
      _fbb,
      source_name__,
      timestamp,
      data__);
}

inline const da00_DataArray *Getda00_DataArray(const void *buf) {
  return ::flatbuffers::GetRoot<da00_DataArray>(buf);
}

inline const da00_DataArray *GetSizePrefixedda00_DataArray(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<da00_DataArray>(buf);
}

inline da00_DataArray *GetMutableda00_DataArray(void *buf) {
  return ::flatbuffers::GetMutableRoot<da00_DataArray>(buf);
}

inline da00_DataArray *GetMutableSizePrefixedda00_DataArray(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<da00_DataArray>(buf);
}

inline const char *da00_DataArrayIdentifier() {
  return "da00";
}

inline bool da00_DataArrayBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, da00_DataArrayIdentifier());
}

inline bool SizePrefixedda00_DataArrayBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, da00_DataArrayIdentifier(), true);
}

inline bool Verifyda00_DataArrayBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<da00_DataArray>(da00_DataArrayIdentifier());
}

inline bool VerifySizePrefixedda00_DataArrayBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<da00_DataArray>(da00_DataArrayIdentifier());
}

inline void Finishda00_DataArrayBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<da00_DataArray> root) {
  fbb.Finish(root, da00_DataArrayIdentifier());
}

inline void FinishSizePrefixedda00_DataArrayBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<da00_DataArray> root) {
  fbb.FinishSizePrefixed(root, da00_DataArrayIdentifier());
}

#endif  // FLATBUFFERS_GENERATED_DA00DATAARRAY_H_
