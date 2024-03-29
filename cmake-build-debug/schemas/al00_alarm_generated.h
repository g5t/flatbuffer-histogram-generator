// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_AL00ALARM_H_
#define FLATBUFFERS_GENERATED_AL00ALARM_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 3,
             "Non-compatible flatbuffers version included");

struct Alarm;
struct AlarmBuilder;

enum class Severity : int16_t {
  OK = 0,
  MINOR = 1,
  MAJOR = 2,
  INVALID = 3,
  MIN = OK,
  MAX = INVALID
};

inline const Severity (&EnumValuesSeverity())[4] {
  static const Severity values[] = {
    Severity::OK,
    Severity::MINOR,
    Severity::MAJOR,
    Severity::INVALID
  };
  return values;
}

inline const char * const *EnumNamesSeverity() {
  static const char * const names[5] = {
    "OK",
    "MINOR",
    "MAJOR",
    "INVALID",
    nullptr
  };
  return names;
}

inline const char *EnumNameSeverity(Severity e) {
  if (::flatbuffers::IsOutRange(e, Severity::OK, Severity::INVALID)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesSeverity()[index];
}

struct Alarm FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef AlarmBuilder Builder;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "Alarm";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_SOURCE_NAME = 4,
    VT_TIMESTAMP = 6,
    VT_SEVERITY = 8,
    VT_MESSAGE = 10
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
  Severity severity() const {
    return static_cast<Severity>(GetField<int16_t>(VT_SEVERITY, 0));
  }
  bool mutate_severity(Severity _severity = static_cast<Severity>(0)) {
    return SetField<int16_t>(VT_SEVERITY, static_cast<int16_t>(_severity), 0);
  }
  const ::flatbuffers::String *message() const {
    return GetPointer<const ::flatbuffers::String *>(VT_MESSAGE);
  }
  ::flatbuffers::String *mutable_message() {
    return GetPointer<::flatbuffers::String *>(VT_MESSAGE);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_SOURCE_NAME) &&
           verifier.VerifyString(source_name()) &&
           VerifyField<int64_t>(verifier, VT_TIMESTAMP, 8) &&
           VerifyField<int16_t>(verifier, VT_SEVERITY, 2) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           verifier.EndTable();
  }
};

struct AlarmBuilder {
  typedef Alarm Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_source_name(::flatbuffers::Offset<::flatbuffers::String> source_name) {
    fbb_.AddOffset(Alarm::VT_SOURCE_NAME, source_name);
  }
  void add_timestamp(int64_t timestamp) {
    fbb_.AddElement<int64_t>(Alarm::VT_TIMESTAMP, timestamp, 0);
  }
  void add_severity(Severity severity) {
    fbb_.AddElement<int16_t>(Alarm::VT_SEVERITY, static_cast<int16_t>(severity), 0);
  }
  void add_message(::flatbuffers::Offset<::flatbuffers::String> message) {
    fbb_.AddOffset(Alarm::VT_MESSAGE, message);
  }
  explicit AlarmBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Alarm> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Alarm>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Alarm> CreateAlarm(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> source_name = 0,
    int64_t timestamp = 0,
    Severity severity = Severity::OK,
    ::flatbuffers::Offset<::flatbuffers::String> message = 0) {
  AlarmBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_message(message);
  builder_.add_source_name(source_name);
  builder_.add_severity(severity);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<Alarm> CreateAlarmDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *source_name = nullptr,
    int64_t timestamp = 0,
    Severity severity = Severity::OK,
    const char *message = nullptr) {
  auto source_name__ = source_name ? _fbb.CreateString(source_name) : 0;
  auto message__ = message ? _fbb.CreateString(message) : 0;
  return CreateAlarm(
      _fbb,
      source_name__,
      timestamp,
      severity,
      message__);
}

inline const Alarm *GetAlarm(const void *buf) {
  return ::flatbuffers::GetRoot<Alarm>(buf);
}

inline const Alarm *GetSizePrefixedAlarm(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<Alarm>(buf);
}

inline Alarm *GetMutableAlarm(void *buf) {
  return ::flatbuffers::GetMutableRoot<Alarm>(buf);
}

inline Alarm *GetMutableSizePrefixedAlarm(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<Alarm>(buf);
}

inline const char *AlarmIdentifier() {
  return "al00";
}

inline bool AlarmBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, AlarmIdentifier());
}

inline bool SizePrefixedAlarmBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, AlarmIdentifier(), true);
}

inline bool VerifyAlarmBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Alarm>(AlarmIdentifier());
}

inline bool VerifySizePrefixedAlarmBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<Alarm>(AlarmIdentifier());
}

inline void FinishAlarmBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<Alarm> root) {
  fbb.Finish(root, AlarmIdentifier());
}

inline void FinishSizePrefixedAlarmBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<Alarm> root) {
  fbb.FinishSizePrefixed(root, AlarmIdentifier());
}

#endif  // FLATBUFFERS_GENERATED_AL00ALARM_H_
