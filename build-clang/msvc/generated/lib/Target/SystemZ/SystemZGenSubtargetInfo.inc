/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM
namespace llvm {
namespace SystemZ {
enum : uint64_t {
  FeatureDistinctOps = 0,
  FeatureFPExtension = 1,
  FeatureFastSerialization = 2,
  FeatureHighWord = 3,
  FeatureInterlockedAccess1 = 4,
  FeatureLoadStoreOnCond = 5,
  FeatureMiscellaneousExtensions = 6,
  FeaturePopulationCount = 7,
  FeatureProcessorAssist = 8,
  FeatureTransactionalExecution = 9,
  FeatureVector = 10
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[] = {
  { "distinct-ops", "Assume that the distinct-operands facility is installed", { SystemZ::FeatureDistinctOps }, { } },
  { "fast-serialization", "Assume that the fast-serialization facility is installed", { SystemZ::FeatureFastSerialization }, { } },
  { "fp-extension", "Assume that the floating-point extension facility is installed", { SystemZ::FeatureFPExtension }, { } },
  { "high-word", "Assume that the high-word facility is installed", { SystemZ::FeatureHighWord }, { } },
  { "interlocked-access1", "Assume that interlocked-access facility 1 is installed", { SystemZ::FeatureInterlockedAccess1 }, { } },
  { "load-store-on-cond", "Assume that the load/store-on-condition facility is installed", { SystemZ::FeatureLoadStoreOnCond }, { } },
  { "miscellaneous-extensions", "Assume that the miscellaneous-extensions facility is installed", { SystemZ::FeatureMiscellaneousExtensions }, { } },
  { "population-count", "Assume that the population-count facility is installed", { SystemZ::FeaturePopulationCount }, { } },
  { "processor-assist", "Assume that the processor-assist facility is installed", { SystemZ::FeatureProcessorAssist }, { } },
  { "transactional-execution", "Assume that the transactional-execution facility is installed", { SystemZ::FeatureTransactionalExecution }, { } },
  { "vector", "Assume that the vectory facility is installed", { SystemZ::FeatureVector }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV SystemZSubTypeKV[] = {
  { "generic", "Select the generic processor", { }, { } },
  { "z10", "Select the z10 processor", { }, { } },
  { "z13", "Select the z13 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeatureHighWord, SystemZ::FeatureFPExtension, SystemZ::FeaturePopulationCount, SystemZ::FeatureFastSerialization, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureProcessorAssist, SystemZ::FeatureVector }, { } },
  { "z196", "Select the z196 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeatureHighWord, SystemZ::FeatureFPExtension, SystemZ::FeaturePopulationCount, SystemZ::FeatureFastSerialization, SystemZ::FeatureInterlockedAccess1 }, { } },
  { "zEC12", "Select the zEC12 processor", { SystemZ::FeatureDistinctOps, SystemZ::FeatureLoadStoreOnCond, SystemZ::FeatureHighWord, SystemZ::FeatureFPExtension, SystemZ::FeaturePopulationCount, SystemZ::FeatureFastSerialization, SystemZ::FeatureInterlockedAccess1, SystemZ::FeatureMiscellaneousExtensions, SystemZ::FeatureTransactionalExecution, SystemZ::FeatureProcessorAssist }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // SystemZWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // SystemZWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // SystemZReadAdvanceTable

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  0, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV SystemZProcSchedKV[] = {
  { "generic", (const void *)&NoSchedModel },
  { "z10", (const void *)&NoSchedModel },
  { "z13", (const void *)&NoSchedModel },
  { "z196", (const void *)&NoSchedModel },
  { "zEC12", (const void *)&NoSchedModel }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createSystemZMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, SystemZFeatureKV, SystemZSubTypeKV, 
                      SystemZProcSchedKV, SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 0, 0, 0);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::SystemZSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[SystemZ::FeatureDistinctOps]) HasDistinctOps = true;
  if (Bits[SystemZ::FeatureFPExtension]) HasFPExtension = true;
  if (Bits[SystemZ::FeatureFastSerialization]) HasFastSerialization = true;
  if (Bits[SystemZ::FeatureHighWord]) HasHighWord = true;
  if (Bits[SystemZ::FeatureInterlockedAccess1]) HasInterlockedAccess1 = true;
  if (Bits[SystemZ::FeatureLoadStoreOnCond]) HasLoadStoreOnCond = true;
  if (Bits[SystemZ::FeatureMiscellaneousExtensions]) HasMiscellaneousExtensions = true;
  if (Bits[SystemZ::FeaturePopulationCount]) HasPopulationCount = true;
  if (Bits[SystemZ::FeatureProcessorAssist]) HasProcessorAssist = true;
  if (Bits[SystemZ::FeatureTransactionalExecution]) HasTransactionalExecution = true;
  if (Bits[SystemZ::FeatureVector]) HasVector = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct SystemZGenSubtargetInfo : public TargetSubtargetInfo {
  explicit SystemZGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR
#include "llvm/CodeGen/TargetSchedule.h"
namespace llvm {
extern const llvm::SubtargetFeatureKV SystemZFeatureKV[];
extern const llvm::SubtargetFeatureKV SystemZSubTypeKV[];
extern const llvm::SubtargetInfoKV SystemZProcSchedKV[];
extern const llvm::MCWriteProcResEntry SystemZWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry SystemZWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry SystemZReadAdvanceTable[];
SystemZGenSubtargetInfo::SystemZGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(SystemZFeatureKV, 11), makeArrayRef(SystemZSubTypeKV, 5), 
                        SystemZProcSchedKV, SystemZWriteProcResTable, SystemZWriteLatencyTable, SystemZReadAdvanceTable, 
                        0, 0, 0) {}

unsigned SystemZGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // SystemZGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

