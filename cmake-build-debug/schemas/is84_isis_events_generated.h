// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_IS84ISISEVENTS_H_
#define FLATBUFFERS_GENERATED_IS84ISISEVENTS_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 23 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 3,
             "Non-compatible flatbuffers version included");

struct ISISData;
struct ISISDataBuilder;

enum class RunState : int8_t {
  SETUP = 0,
  RUNNING = 1,
  MIN = SETUP,
  MAX = RUNNING
};

inline const RunState (&EnumValuesRunState())[2] {
  static const RunState values[] = {
    RunState::SETUP,
    RunState::RUNNING
  };
  return values;
}

inline const char * const *EnumNamesRunState() {
  static const char * const names[3] = {
    "SETUP",
    "RUNNING",
    nullptr
  };
  return names;
}

inline const char *EnumNameRunState(RunState e) {
  if (::flatbuffers::IsOutRange(e, RunState::SETUP, RunState::RUNNING)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesRunState()[index];
}

struct ISISData FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ISISDataBuilder Builder;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "ISISData";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PERIOD_NUMBER = 4,
    VT_RUN_STATE = 6,
    VT_PROTON_CHARGE = 8
  };
  uint32_t period_number() const {
    return GetField<uint32_t>(VT_PERIOD_NUMBER, 0);
  }
  bool mutate_period_number(uint32_t _period_number = 0) {
    return SetField<uint32_t>(VT_PERIOD_NUMBER, _period_number, 0);
  }
  RunState run_state() const {
    return static_cast<RunState>(GetField<int8_t>(VT_RUN_STATE, 0));
  }
  bool mutate_run_state(RunState _run_state = static_cast<RunState>(0)) {
    return SetField<int8_t>(VT_RUN_STATE, static_cast<int8_t>(_run_state), 0);
  }
  float proton_charge() const {
    return GetField<float>(VT_PROTON_CHARGE, 0.0f);
  }
  bool mutate_proton_charge(float _proton_charge = 0.0f) {
    return SetField<float>(VT_PROTON_CHARGE, _proton_charge, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_PERIOD_NUMBER, 4) &&
           VerifyField<int8_t>(verifier, VT_RUN_STATE, 1) &&
           VerifyField<float>(verifier, VT_PROTON_CHARGE, 4) &&
           verifier.EndTable();
  }
};

struct ISISDataBuilder {
  typedef ISISData Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_period_number(uint32_t period_number) {
    fbb_.AddElement<uint32_t>(ISISData::VT_PERIOD_NUMBER, period_number, 0);
  }
  void add_run_state(RunState run_state) {
    fbb_.AddElement<int8_t>(ISISData::VT_RUN_STATE, static_cast<int8_t>(run_state), 0);
  }
  void add_proton_charge(float proton_charge) {
    fbb_.AddElement<float>(ISISData::VT_PROTON_CHARGE, proton_charge, 0.0f);
  }
  explicit ISISDataBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ISISData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ISISData>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<ISISData> CreateISISData(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t period_number = 0,
    RunState run_state = RunState::SETUP,
    float proton_charge = 0.0f) {
  ISISDataBuilder builder_(_fbb);
  builder_.add_proton_charge(proton_charge);
  builder_.add_period_number(period_number);
  builder_.add_run_state(run_state);
  return builder_.Finish();
}

#endif  // FLATBUFFERS_GENERATED_IS84ISISEVENTS_H_
