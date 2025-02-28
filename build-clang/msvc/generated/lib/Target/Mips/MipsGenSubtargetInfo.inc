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
namespace Mips {
enum : uint64_t {
  FeatureCnMips = 0,
  FeatureDSP = 1,
  FeatureDSPR2 = 2,
  FeatureFP64Bit = 3,
  FeatureFPXX = 4,
  FeatureGP64Bit = 5,
  FeatureMSA = 6,
  FeatureMicroMips = 7,
  FeatureMips1 = 8,
  FeatureMips2 = 9,
  FeatureMips3 = 10,
  FeatureMips3_32 = 11,
  FeatureMips3_32r2 = 12,
  FeatureMips4 = 13,
  FeatureMips4_32 = 14,
  FeatureMips4_32r2 = 15,
  FeatureMips5 = 16,
  FeatureMips5_32r2 = 17,
  FeatureMips16 = 18,
  FeatureMips32 = 19,
  FeatureMips32r2 = 20,
  FeatureMips32r3 = 21,
  FeatureMips32r5 = 22,
  FeatureMips32r6 = 23,
  FeatureMips64 = 24,
  FeatureMips64r2 = 25,
  FeatureMips64r3 = 26,
  FeatureMips64r5 = 27,
  FeatureMips64r6 = 28,
  FeatureNaN2008 = 29,
  FeatureNoABICalls = 30,
  FeatureNoOddSPReg = 31,
  FeatureSingleFloat = 32,
  FeatureSoftFloat = 33,
  FeatureVFPU = 34
};
}
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC
namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV MipsFeatureKV[] = {
  { "cnmips", "Octeon cnMIPS Support", { Mips::FeatureCnMips }, { Mips::FeatureMips64r2 } },
  { "dsp", "Mips DSP ASE", { Mips::FeatureDSP }, { } },
  { "dspr2", "Mips DSP-R2 ASE", { Mips::FeatureDSPR2 }, { Mips::FeatureDSP } },
  { "fp64", "Support 64-bit FP registers", { Mips::FeatureFP64Bit }, { } },
  { "fpxx", "Support for FPXX", { Mips::FeatureFPXX }, { } },
  { "gp64", "General Purpose Registers are 64-bit wide", { Mips::FeatureGP64Bit }, { } },
  { "micromips", "microMips mode", { Mips::FeatureMicroMips }, { } },
  { "mips1", "Mips I ISA Support [highly experimental]", { Mips::FeatureMips1 }, { } },
  { "mips16", "Mips16 mode", { Mips::FeatureMips16 }, { } },
  { "mips2", "Mips II ISA Support [highly experimental]", { Mips::FeatureMips2 }, { Mips::FeatureMips1 } },
  { "mips3", "MIPS III ISA Support [highly experimental]", { Mips::FeatureMips3 }, { Mips::FeatureMips2, Mips::FeatureMips3_32, Mips::FeatureMips3_32r2, Mips::FeatureGP64Bit, Mips::FeatureFP64Bit } },
  { "mips32", "Mips32 ISA Support", { Mips::FeatureMips32 }, { Mips::FeatureMips2, Mips::FeatureMips3_32, Mips::FeatureMips4_32 } },
  { "mips32r2", "Mips32r2 ISA Support", { Mips::FeatureMips32r2 }, { Mips::FeatureMips3_32r2, Mips::FeatureMips4_32r2, Mips::FeatureMips5_32r2, Mips::FeatureMips32 } },
  { "mips32r3", "Mips32r3 ISA Support", { Mips::FeatureMips32r3 }, { Mips::FeatureMips32r2 } },
  { "mips32r5", "Mips32r5 ISA Support", { Mips::FeatureMips32r5 }, { Mips::FeatureMips32r3 } },
  { "mips32r6", "Mips32r6 ISA Support [experimental]", { Mips::FeatureMips32r6 }, { Mips::FeatureMips32r5, Mips::FeatureFP64Bit, Mips::FeatureNaN2008 } },
  { "mips3_32", "Subset of MIPS-III that is also in MIPS32 [highly experimental]", { Mips::FeatureMips3_32 }, { } },
  { "mips3_32r2", "Subset of MIPS-III that is also in MIPS32r2 [highly experimental]", { Mips::FeatureMips3_32r2 }, { } },
  { "mips4", "MIPS IV ISA Support", { Mips::FeatureMips4 }, { Mips::FeatureMips3, Mips::FeatureMips4_32, Mips::FeatureMips4_32r2 } },
  { "mips4_32", "Subset of MIPS-IV that is also in MIPS32 [highly experimental]", { Mips::FeatureMips4_32 }, { } },
  { "mips4_32r2", "Subset of MIPS-IV that is also in MIPS32r2 [highly experimental]", { Mips::FeatureMips4_32r2 }, { } },
  { "mips5", "MIPS V ISA Support [highly experimental]", { Mips::FeatureMips5 }, { Mips::FeatureMips4, Mips::FeatureMips5_32r2 } },
  { "mips5_32r2", "Subset of MIPS-V that is also in MIPS32r2 [highly experimental]", { Mips::FeatureMips5_32r2 }, { } },
  { "mips64", "Mips64 ISA Support", { Mips::FeatureMips64 }, { Mips::FeatureMips5, Mips::FeatureMips32 } },
  { "mips64r2", "Mips64r2 ISA Support", { Mips::FeatureMips64r2 }, { Mips::FeatureMips64, Mips::FeatureMips32r2 } },
  { "mips64r3", "Mips64r3 ISA Support", { Mips::FeatureMips64r3 }, { Mips::FeatureMips64r2, Mips::FeatureMips32r3 } },
  { "mips64r5", "Mips64r5 ISA Support", { Mips::FeatureMips64r5 }, { Mips::FeatureMips64r3, Mips::FeatureMips32r5 } },
  { "mips64r6", "Mips64r6 ISA Support [experimental]", { Mips::FeatureMips64r6 }, { Mips::FeatureMips32r6, Mips::FeatureMips64r5, Mips::FeatureNaN2008 } },
  { "msa", "Mips MSA ASE", { Mips::FeatureMSA }, { } },
  { "nan2008", "IEEE 754-2008 NaN encoding", { Mips::FeatureNaN2008 }, { } },
  { "noabicalls", "Disable SVR4-style position-independent code", { Mips::FeatureNoABICalls }, { } },
  { "nooddspreg", "Disable odd numbered single-precision registers", { Mips::FeatureNoOddSPReg }, { } },
  { "single-float", "Only supports single precision float", { Mips::FeatureSingleFloat }, { } },
  { "soft-float", "Does not support floating point instructions", { Mips::FeatureSoftFloat }, { } },
  { "vfpu", "Enable vector FPU instructions", { Mips::FeatureVFPU }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV MipsSubTypeKV[] = {
  { "mips1", "Select the mips1 processor", { Mips::FeatureMips1 }, { } },
  { "mips16", "Select the mips16 processor", { Mips::FeatureMips16 }, { } },
  { "mips2", "Select the mips2 processor", { Mips::FeatureMips2 }, { } },
  { "mips3", "Select the mips3 processor", { Mips::FeatureMips3 }, { } },
  { "mips32", "Select the mips32 processor", { Mips::FeatureMips32 }, { } },
  { "mips32r2", "Select the mips32r2 processor", { Mips::FeatureMips32r2 }, { } },
  { "mips32r3", "Select the mips32r3 processor", { Mips::FeatureMips32r3 }, { } },
  { "mips32r5", "Select the mips32r5 processor", { Mips::FeatureMips32r5 }, { } },
  { "mips32r6", "Select the mips32r6 processor", { Mips::FeatureMips32r6 }, { } },
  { "mips4", "Select the mips4 processor", { Mips::FeatureMips4 }, { } },
  { "mips5", "Select the mips5 processor", { Mips::FeatureMips5 }, { } },
  { "mips64", "Select the mips64 processor", { Mips::FeatureMips64 }, { } },
  { "mips64r2", "Select the mips64r2 processor", { Mips::FeatureMips64r2 }, { } },
  { "mips64r3", "Select the mips64r3 processor", { Mips::FeatureMips64r3 }, { } },
  { "mips64r5", "Select the mips64r5 processor", { Mips::FeatureMips64r5 }, { } },
  { "mips64r6", "Select the mips64r6 processor", { Mips::FeatureMips64r6 }, { } },
  { "octeon", "Select the octeon processor", { Mips::FeatureMips64r2, Mips::FeatureCnMips }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "MipsGenericItineraries"
namespace MipsGenericItinerariesFU {
  const unsigned ALU = 1 << 0;
  const unsigned IMULDIV = 1 << 1;
}

extern const llvm::InstrStage MipsStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 2, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 3, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 17, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 38, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 4, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 36, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 23, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 8, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 7, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 12, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 54, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned MipsOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned MipsForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary MipsGenericItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 II_ADDU
  { 1, 1, 2, 0, 0 }, // 2 II_ADDIU
  { 0, 0, 0, 0, 0 }, // 3 IIPseudo
  { 1, 1, 2, 0, 0 }, // 4 II_AND
  { 1, 1, 2, 0, 0 }, // 5 II_ANDI
  { 1, 1, 2, 0, 0 }, // 6 IIAlu
  { 1, 1, 2, 0, 0 }, // 7 IIBranch
  { 1, 1, 2, 0, 0 }, // 8 II_BADDU
  { 1, 1, 2, 0, 0 }, // 9 II_CEIL
  { 1, 2, 3, 0, 0 }, // 10 II_CFC1
  { 1, 1, 2, 0, 0 }, // 11 II_CLO
  { 1, 1, 2, 0, 0 }, // 12 II_CLZ
  { 1, 2, 3, 0, 0 }, // 13 II_CTC1
  { 1, 1, 2, 0, 0 }, // 14 II_CVT
  { 1, 3, 4, 0, 0 }, // 15 II_C_CC_D
  { 1, 3, 4, 0, 0 }, // 16 II_C_CC_S
  { 1, 1, 2, 0, 0 }, // 17 II_DADD
  { 1, 1, 2, 0, 0 }, // 18 II_DADDIU
  { 1, 1, 2, 0, 0 }, // 19 II_DADDU
  { 1, 1, 2, 0, 0 }, // 20 II_EXT
  { 1, 1, 2, 0, 0 }, // 21 II_INS
  { 1, 2, 3, 0, 0 }, // 22 II_DMFC1
  { 1, 2, 3, 0, 0 }, // 23 II_DMTC1
  { 1, 4, 5, 0, 0 }, // 24 II_DMUL
  { 1, 4, 5, 0, 0 }, // 25 II_DMULT
  { 1, 4, 5, 0, 0 }, // 26 II_DMULTU
  { 1, 1, 2, 0, 0 }, // 27 II_POP
  { 1, 1, 2, 0, 0 }, // 28 II_DROTR
  { 0, 0, 0, 0, 0 }, // 29 II_DROTR32
  { 1, 1, 2, 0, 0 }, // 30 II_DROTRV
  { 1, 5, 6, 0, 0 }, // 31 II_DDIV
  { 1, 1, 2, 0, 0 }, // 32 II_DSLL
  { 0, 0, 0, 0, 0 }, // 33 II_DSLL32
  { 1, 1, 2, 0, 0 }, // 34 II_DSLLV
  { 1, 1, 2, 0, 0 }, // 35 II_DSRA
  { 0, 0, 0, 0, 0 }, // 36 II_DSRA32
  { 1, 1, 2, 0, 0 }, // 37 II_DSRAV
  { 1, 1, 2, 0, 0 }, // 38 II_DSRL
  { 0, 0, 0, 0, 0 }, // 39 II_DSRL32
  { 1, 1, 2, 0, 0 }, // 40 II_DSRLV
  { 1, 1, 2, 0, 0 }, // 41 II_DSUB
  { 1, 1, 2, 0, 0 }, // 42 II_DSUBU
  { 1, 5, 6, 0, 0 }, // 43 II_DDIVU
  { 1, 1, 2, 0, 0 }, // 44 II_ABS
  { 1, 6, 7, 0, 0 }, // 45 II_ADD_D
  { 1, 6, 7, 0, 0 }, // 46 II_ADD_S
  { 1, 7, 8, 0, 0 }, // 47 II_DIV_D
  { 1, 8, 9, 0, 0 }, // 48 II_DIV_S
  { 1, 1, 2, 0, 0 }, // 49 II_FLOOR
  { 1, 2, 3, 0, 0 }, // 50 II_MOV_D
  { 1, 2, 3, 0, 0 }, // 51 II_MOV_S
  { 1, 9, 10, 0, 0 }, // 52 II_MUL_D
  { 1, 10, 11, 0, 0 }, // 53 II_MUL_S
  { 1, 1, 2, 0, 0 }, // 54 II_NEG
  { 1, 11, 12, 0, 0 }, // 55 II_SQRT_D
  { 1, 12, 13, 0, 0 }, // 56 II_SQRT_S
  { 1, 6, 7, 0, 0 }, // 57 II_SUB_D
  { 1, 6, 7, 0, 0 }, // 58 II_SUB_S
  { 1, 3, 4, 0, 0 }, // 59 II_LB
  { 1, 3, 4, 0, 0 }, // 60 II_LBU
  { 1, 3, 4, 0, 0 }, // 61 II_LD
  { 1, 3, 4, 0, 0 }, // 62 II_LDC1
  { 1, 3, 4, 0, 0 }, // 63 II_LDL
  { 1, 3, 4, 0, 0 }, // 64 II_LDR
  { 1, 3, 4, 0, 0 }, // 65 II_LDXC1
  { 1, 3, 4, 0, 0 }, // 66 II_LH
  { 1, 3, 4, 0, 0 }, // 67 II_LHU
  { 1, 3, 4, 0, 0 }, // 68 II_LUXC1
  { 1, 1, 2, 0, 0 }, // 69 II_LUI
  { 1, 3, 4, 0, 0 }, // 70 II_LW
  { 1, 3, 4, 0, 0 }, // 71 II_LWC1
  { 1, 3, 4, 0, 0 }, // 72 II_LWL
  { 1, 3, 4, 0, 0 }, // 73 II_LWR
  { 0, 0, 0, 0, 0 }, // 74 II_LWU
  { 1, 3, 4, 0, 0 }, // 75 II_LWXC1
  { 1, 4, 5, 0, 0 }, // 76 II_MADD
  { 1, 4, 5, 0, 0 }, // 77 II_MADDU
  { 1, 9, 10, 0, 0 }, // 78 II_MADD_D
  { 1, 10, 11, 0, 0 }, // 79 II_MADD_S
  { 1, 2, 3, 0, 0 }, // 80 II_MFC1
  { 1, 2, 3, 0, 0 }, // 81 II_MFHC1
  { 1, 13, 14, 0, 0 }, // 82 II_MFHI_MFLO
  { 1, 2, 3, 0, 0 }, // 83 II_MOVF_D
  { 1, 1, 2, 0, 0 }, // 84 II_MOVF
  { 1, 2, 3, 0, 0 }, // 85 II_MOVF_S
  { 1, 1, 2, 0, 0 }, // 86 II_MOVN_D
  { 1, 1, 2, 0, 0 }, // 87 II_MOVN
  { 1, 1, 2, 0, 0 }, // 88 II_MOVN_S
  { 1, 2, 3, 0, 0 }, // 89 II_MOVT_D
  { 1, 1, 2, 0, 0 }, // 90 II_MOVT
  { 1, 2, 3, 0, 0 }, // 91 II_MOVT_S
  { 1, 2, 3, 0, 0 }, // 92 II_MOVZ_D
  { 1, 1, 2, 0, 0 }, // 93 II_MOVZ
  { 1, 2, 3, 0, 0 }, // 94 II_MOVZ_S
  { 1, 4, 5, 0, 0 }, // 95 II_MSUB
  { 1, 4, 5, 0, 0 }, // 96 II_MSUBU
  { 1, 9, 10, 0, 0 }, // 97 II_MSUB_D
  { 1, 10, 11, 0, 0 }, // 98 II_MSUB_S
  { 1, 2, 3, 0, 0 }, // 99 II_MTC1
  { 1, 2, 3, 0, 0 }, // 100 II_MTHC1
  { 1, 13, 14, 0, 0 }, // 101 II_MTHI_MTLO
  { 1, 4, 5, 0, 0 }, // 102 II_MUL
  { 1, 4, 5, 0, 0 }, // 103 II_MULT
  { 1, 4, 5, 0, 0 }, // 104 II_MULTU
  { 1, 9, 10, 0, 0 }, // 105 II_NMADD_D
  { 1, 10, 11, 0, 0 }, // 106 II_NMADD_S
  { 1, 9, 10, 0, 0 }, // 107 II_NMSUB_D
  { 1, 10, 11, 0, 0 }, // 108 II_NMSUB_S
  { 1, 1, 2, 0, 0 }, // 109 II_NOR
  { 1, 1, 2, 0, 0 }, // 110 II_OR
  { 1, 1, 2, 0, 0 }, // 111 II_ORI
  { 1, 5, 6, 0, 0 }, // 112 II_DIV
  { 1, 5, 6, 0, 0 }, // 113 II_DIVU
  { 1, 1, 2, 0, 0 }, // 114 II_RDHWR
  { 1, 1, 2, 0, 0 }, // 115 II_ROTR
  { 1, 1, 2, 0, 0 }, // 116 II_ROTRV
  { 1, 1, 2, 0, 0 }, // 117 II_ROUND
  { 1, 3, 4, 0, 0 }, // 118 II_RESTORE
  { 1, 1, 2, 0, 0 }, // 119 II_SB
  { 1, 1, 2, 0, 0 }, // 120 II_SD
  { 1, 1, 2, 0, 0 }, // 121 II_SDC1
  { 1, 1, 2, 0, 0 }, // 122 II_SDL
  { 1, 1, 2, 0, 0 }, // 123 II_SDR
  { 1, 1, 2, 0, 0 }, // 124 II_SDXC1
  { 0, 0, 0, 0, 0 }, // 125 II_SEB
  { 0, 0, 0, 0, 0 }, // 126 II_SEH
  { 1, 1, 2, 0, 0 }, // 127 II_SEQ_SNE
  { 1, 1, 2, 0, 0 }, // 128 II_SEQI_SNEI
  { 1, 1, 2, 0, 0 }, // 129 II_SH
  { 1, 1, 2, 0, 0 }, // 130 II_SLL
  { 1, 1, 2, 0, 0 }, // 131 II_SLLV
  { 0, 0, 0, 0, 0 }, // 132 II_SLT_SLTU
  { 0, 0, 0, 0, 0 }, // 133 II_SLTI_SLTIU
  { 1, 1, 2, 0, 0 }, // 134 II_SRA
  { 1, 1, 2, 0, 0 }, // 135 II_SRAV
  { 1, 1, 2, 0, 0 }, // 136 II_SRL
  { 1, 1, 2, 0, 0 }, // 137 II_SRLV
  { 1, 1, 2, 0, 0 }, // 138 II_SUBU
  { 1, 1, 2, 0, 0 }, // 139 II_SUXC1
  { 1, 1, 2, 0, 0 }, // 140 II_SW
  { 1, 1, 2, 0, 0 }, // 141 II_SWC1
  { 1, 1, 2, 0, 0 }, // 142 II_SWL
  { 1, 1, 2, 0, 0 }, // 143 II_SWR
  { 1, 1, 2, 0, 0 }, // 144 II_SWXC1
  { 1, 1, 2, 0, 0 }, // 145 II_SAVE
  { 1, 1, 2, 0, 0 }, // 146 II_TRUNC
  { 1, 1, 2, 0, 0 }, // 147 II_XOR
  { 1, 1, 2, 0, 0 }, // 148 II_XORI
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry MipsWriteProcResTable[] = {
  { 0,  0}, // Invalid
}; // MipsWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry MipsWriteLatencyTable[] = {
  { 0,  0}, // Invalid
}; // MipsWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry MipsReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
}; // MipsReadAdvanceTable

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

static const llvm::MCSchedModel MipsGenericItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  0, // PostRAScheduler
  1, // CompleteModel
  1, // Processor ID
  0, 0, 0, 0, // No instruction-level machine model.
  MipsGenericItineraries};

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV MipsProcSchedKV[] = {
  { "mips1", (const void *)&MipsGenericItinerariesModel },
  { "mips16", (const void *)&MipsGenericItinerariesModel },
  { "mips2", (const void *)&MipsGenericItinerariesModel },
  { "mips3", (const void *)&MipsGenericItinerariesModel },
  { "mips32", (const void *)&MipsGenericItinerariesModel },
  { "mips32r2", (const void *)&MipsGenericItinerariesModel },
  { "mips32r3", (const void *)&MipsGenericItinerariesModel },
  { "mips32r5", (const void *)&MipsGenericItinerariesModel },
  { "mips32r6", (const void *)&MipsGenericItinerariesModel },
  { "mips4", (const void *)&MipsGenericItinerariesModel },
  { "mips5", (const void *)&MipsGenericItinerariesModel },
  { "mips64", (const void *)&MipsGenericItinerariesModel },
  { "mips64r2", (const void *)&MipsGenericItinerariesModel },
  { "mips64r3", (const void *)&MipsGenericItinerariesModel },
  { "mips64r5", (const void *)&MipsGenericItinerariesModel },
  { "mips64r6", (const void *)&MipsGenericItinerariesModel },
  { "octeon", (const void *)&MipsGenericItinerariesModel }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createMipsMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, MipsFeatureKV, MipsSubTypeKV, 
                      MipsProcSchedKV, MipsWriteProcResTable, MipsWriteLatencyTable, MipsReadAdvanceTable, 
                      MipsStages, MipsOperandCycles, MipsForwardingPaths);
}

} // End llvm namespace 
#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC
#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"
// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::MipsSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Mips::FeatureCnMips]) HasCnMips = true;
  if (Bits[Mips::FeatureDSP]) HasDSP = true;
  if (Bits[Mips::FeatureDSPR2]) HasDSPR2 = true;
  if (Bits[Mips::FeatureFP64Bit]) IsFP64bit = true;
  if (Bits[Mips::FeatureFPXX]) IsFPXX = true;
  if (Bits[Mips::FeatureGP64Bit]) IsGP64bit = true;
  if (Bits[Mips::FeatureMSA]) HasMSA = true;
  if (Bits[Mips::FeatureMicroMips]) InMicroMipsMode = true;
  if (Bits[Mips::FeatureMips1] && MipsArchVersion < Mips1) MipsArchVersion = Mips1;
  if (Bits[Mips::FeatureMips2] && MipsArchVersion < Mips2) MipsArchVersion = Mips2;
  if (Bits[Mips::FeatureMips3] && MipsArchVersion < Mips3) MipsArchVersion = Mips3;
  if (Bits[Mips::FeatureMips3_32]) HasMips3_32 = true;
  if (Bits[Mips::FeatureMips3_32r2]) HasMips3_32r2 = true;
  if (Bits[Mips::FeatureMips4] && MipsArchVersion < Mips4) MipsArchVersion = Mips4;
  if (Bits[Mips::FeatureMips4_32]) HasMips4_32 = true;
  if (Bits[Mips::FeatureMips4_32r2]) HasMips4_32r2 = true;
  if (Bits[Mips::FeatureMips5] && MipsArchVersion < Mips5) MipsArchVersion = Mips5;
  if (Bits[Mips::FeatureMips5_32r2]) HasMips5_32r2 = true;
  if (Bits[Mips::FeatureMips16]) InMips16Mode = true;
  if (Bits[Mips::FeatureMips32] && MipsArchVersion < Mips32) MipsArchVersion = Mips32;
  if (Bits[Mips::FeatureMips32r2] && MipsArchVersion < Mips32r2) MipsArchVersion = Mips32r2;
  if (Bits[Mips::FeatureMips32r3] && MipsArchVersion < Mips32r3) MipsArchVersion = Mips32r3;
  if (Bits[Mips::FeatureMips32r5] && MipsArchVersion < Mips32r5) MipsArchVersion = Mips32r5;
  if (Bits[Mips::FeatureMips32r6] && MipsArchVersion < Mips32r6) MipsArchVersion = Mips32r6;
  if (Bits[Mips::FeatureMips64] && MipsArchVersion < Mips64) MipsArchVersion = Mips64;
  if (Bits[Mips::FeatureMips64r2] && MipsArchVersion < Mips64r2) MipsArchVersion = Mips64r2;
  if (Bits[Mips::FeatureMips64r3] && MipsArchVersion < Mips64r3) MipsArchVersion = Mips64r3;
  if (Bits[Mips::FeatureMips64r5] && MipsArchVersion < Mips64r5) MipsArchVersion = Mips64r5;
  if (Bits[Mips::FeatureMips64r6] && MipsArchVersion < Mips64r6) MipsArchVersion = Mips64r6;
  if (Bits[Mips::FeatureNaN2008]) IsNaN2008bit = true;
  if (Bits[Mips::FeatureNoABICalls]) NoABICalls = true;
  if (Bits[Mips::FeatureNoOddSPReg]) UseOddSPReg = false;
  if (Bits[Mips::FeatureSingleFloat]) IsSingleFloat = true;
  if (Bits[Mips::FeatureSoftFloat]) IsSoftFloat = true;
  if (Bits[Mips::FeatureVFPU]) HasVFPU = true;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER
namespace llvm {
class DFAPacketizer;
struct MipsGenSubtargetInfo : public TargetSubtargetInfo {
  explicit MipsGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
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
extern const llvm::SubtargetFeatureKV MipsFeatureKV[];
extern const llvm::SubtargetFeatureKV MipsSubTypeKV[];
extern const llvm::SubtargetInfoKV MipsProcSchedKV[];
extern const llvm::MCWriteProcResEntry MipsWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry MipsWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry MipsReadAdvanceTable[];
extern const llvm::InstrStage MipsStages[];
extern const unsigned MipsOperandCycles[];
extern const unsigned MipsForwardingPaths[];
MipsGenSubtargetInfo::MipsGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(MipsFeatureKV, 35), makeArrayRef(MipsSubTypeKV, 17), 
                        MipsProcSchedKV, MipsWriteProcResTable, MipsWriteLatencyTable, MipsReadAdvanceTable, 
                        MipsStages, MipsOperandCycles, MipsForwardingPaths) {}

unsigned MipsGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  report_fatal_error("Expected a variant SchedClass");
} // MipsGenSubtargetInfo::resolveSchedClass
} // End llvm namespace 
#endif // GET_SUBTARGETINFO_CTOR

