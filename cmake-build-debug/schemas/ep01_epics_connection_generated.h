// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_EP01EPICSCONNECTION_H_
#define FLATBUFFERS_GENERATED_EP01EPICSCONNECTION_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 3,
             "Non-compatible flatbuffers version included");

struct EpicsPVConnectionInfo;
struct EpicsPVConnectionInfoBuilder;

enum class ConnectionInfo : int16_t {
  UNKNOWN = 0,
  NEVER_CONNECTED = 1,
  CONNECTED = 2,
  DISCONNECTED = 3,
  DESTROYED = 4,
  CANCELLED = 5,
  FINISHED = 6,
  REMOTE_ERROR = 7,
  MIN = UNKNOWN,
  MAX = REMOTE_ERROR
};

inline const ConnectionInfo (&EnumValuesConnectionInfo())[8] {
  static const ConnectionInfo values[] = {
    ConnectionInfo::UNKNOWN,
    ConnectionInfo::NEVER_CONNECTED,
    ConnectionInfo::CONNECTED,
    ConnectionInfo::DISCONNECTED,
    ConnectionInfo::DESTROYED,
    ConnectionInfo::CANCELLED,
    ConnectionInfo::FINISHED,
    ConnectionInfo::REMOTE_ERROR
  };
  return values;
}

inline const char * const *EnumNamesConnectionInfo() {
  static const char * const names[9] = {
    "UNKNOWN",
    "NEVER_CONNECTED",
    "CONNECTED",
    "DISCONNECTED",
    "DESTROYED",
    "CANCELLED",
    "FINISHED",
    "REMOTE_ERROR",
    nullptr
  };
  return names;
}

inline const char *EnumNameConnectionInfo(ConnectionInfo e) {
  if (::flatbuffers::IsOutRange(e, ConnectionInfo::UNKNOWN, ConnectionInfo::REMOTE_ERROR)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesConnectionInfo()[index];
}

struct EpicsPVConnectionInfo FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef EpicsPVConnectionInfoBuilder Builder;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "EpicsPVConnectionInfo";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TIMESTAMP = 4,
    VT_STATUS = 6,
    VT_SOURCE_NAME = 8,
    VT_SERVICE_ID = 10
  };
  int64_t timestamp() const {
    return GetField<int64_t>(VT_TIMESTAMP, 0);
  }
  bool mutate_timestamp(int64_t _timestamp = 0) {
    return SetField<int64_t>(VT_TIMESTAMP, _timestamp, 0);
  }
  ConnectionInfo status() const {
    return static_cast<ConnectionInfo>(GetField<int16_t>(VT_STATUS, 0));
  }
  bool mutate_status(ConnectionInfo _status = static_cast<ConnectionInfo>(0)) {
    return SetField<int16_t>(VT_STATUS, static_cast<int16_t>(_status), 0);
  }
  const ::flatbuffers::String *source_name() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SOURCE_NAME);
  }
  ::flatbuffers::String *mutable_source_name() {
    return GetPointer<::flatbuffers::String *>(VT_SOURCE_NAME);
  }
  const ::flatbuffers::String *service_id() const {
    return GetPointer<const ::flatbuffers::String *>(VT_SERVICE_ID);
  }
  ::flatbuffers::String *mutable_service_id() {
    return GetPointer<::flatbuffers::String *>(VT_SERVICE_ID);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int64_t>(verifier, VT_TIMESTAMP, 8) &&
           VerifyField<int16_t>(verifier, VT_STATUS, 2) &&
           VerifyOffsetRequired(verifier, VT_SOURCE_NAME) &&
           verifier.VerifyString(source_name()) &&
           VerifyOffset(verifier, VT_SERVICE_ID) &&
           verifier.VerifyString(service_id()) &&
           verifier.EndTable();
  }
};

struct EpicsPVConnectionInfoBuilder {
  typedef EpicsPVConnectionInfo Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_timestamp(int64_t timestamp) {
    fbb_.AddElement<int64_t>(EpicsPVConnectionInfo::VT_TIMESTAMP, timestamp, 0);
  }
  void add_status(ConnectionInfo status) {
    fbb_.AddElement<int16_t>(EpicsPVConnectionInfo::VT_STATUS, static_cast<int16_t>(status), 0);
  }
  void add_source_name(::flatbuffers::Offset<::flatbuffers::String> source_name) {
    fbb_.AddOffset(EpicsPVConnectionInfo::VT_SOURCE_NAME, source_name);
  }
  void add_service_id(::flatbuffers::Offset<::flatbuffers::String> service_id) {
    fbb_.AddOffset(EpicsPVConnectionInfo::VT_SERVICE_ID, service_id);
  }
  explicit EpicsPVConnectionInfoBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<EpicsPVConnectionInfo> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<EpicsPVConnectionInfo>(end);
    fbb_.Required(o, EpicsPVConnectionInfo::VT_SOURCE_NAME);
    return o;
  }
};

inline ::flatbuffers::Offset<EpicsPVConnectionInfo> CreateEpicsPVConnectionInfo(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int64_t timestamp = 0,
    ConnectionInfo status = ConnectionInfo::UNKNOWN,
    ::flatbuffers::Offset<::flatbuffers::String> source_name = 0,
    ::flatbuffers::Offset<::flatbuffers::String> service_id = 0) {
  EpicsPVConnectionInfoBuilder builder_(_fbb);
  builder_.add_timestamp(timestamp);
  builder_.add_service_id(service_id);
  builder_.add_source_name(source_name);
  builder_.add_status(status);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<EpicsPVConnectionInfo> CreateEpicsPVConnectionInfoDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    int64_t timestamp = 0,
    ConnectionInfo status = ConnectionInfo::UNKNOWN,
    const char *source_name = nullptr,
    const char *service_id = nullptr) {
  auto source_name__ = source_name ? _fbb.CreateString(source_name) : 0;
  auto service_id__ = service_id ? _fbb.CreateString(service_id) : 0;
  return CreateEpicsPVConnectionInfo(
      _fbb,
      timestamp,
      status,
      source_name__,
      service_id__);
}

inline const EpicsPVConnectionInfo *GetEpicsPVConnectionInfo(const void *buf) {
  return ::flatbuffers::GetRoot<EpicsPVConnectionInfo>(buf);
}

inline const EpicsPVConnectionInfo *GetSizePrefixedEpicsPVConnectionInfo(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<EpicsPVConnectionInfo>(buf);
}

inline EpicsPVConnectionInfo *GetMutableEpicsPVConnectionInfo(void *buf) {
  return ::flatbuffers::GetMutableRoot<EpicsPVConnectionInfo>(buf);
}

inline EpicsPVConnectionInfo *GetMutableSizePrefixedEpicsPVConnectionInfo(void *buf) {
  return ::flatbuffers::GetMutableSizePrefixedRoot<EpicsPVConnectionInfo>(buf);
}

inline const char *EpicsPVConnectionInfoIdentifier() {
  return "ep01";
}

inline bool EpicsPVConnectionInfoBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, EpicsPVConnectionInfoIdentifier());
}

inline bool SizePrefixedEpicsPVConnectionInfoBufferHasIdentifier(const void *buf) {
  return ::flatbuffers::BufferHasIdentifier(
      buf, EpicsPVConnectionInfoIdentifier(), true);
}

inline bool VerifyEpicsPVConnectionInfoBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<EpicsPVConnectionInfo>(EpicsPVConnectionInfoIdentifier());
}

inline bool VerifySizePrefixedEpicsPVConnectionInfoBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<EpicsPVConnectionInfo>(EpicsPVConnectionInfoIdentifier());
}

inline void FinishEpicsPVConnectionInfoBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<EpicsPVConnectionInfo> root) {
  fbb.Finish(root, EpicsPVConnectionInfoIdentifier());
}

inline void FinishSizePrefixedEpicsPVConnectionInfoBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<EpicsPVConnectionInfo> root) {
  fbb.FinishSizePrefixed(root, EpicsPVConnectionInfoIdentifier());
}

#endif  // FLATBUFFERS_GENERATED_EP01EPICSCONNECTION_H_