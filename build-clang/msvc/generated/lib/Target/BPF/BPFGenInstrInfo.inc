/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace BPF {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    STATEPOINT	= 20,
    LOCAL_ESCAPE	= 21,
    FAULTING_LOAD_OP	= 22,
    ADD_ri	= 23,
    ADD_rr	= 24,
    ADJCALLSTACKDOWN	= 25,
    ADJCALLSTACKUP	= 26,
    AND_ri	= 27,
    AND_rr	= 28,
    BSWAP16	= 29,
    BSWAP32	= 30,
    BSWAP64	= 31,
    DIV_ri	= 32,
    DIV_rr	= 33,
    JAL	= 34,
    JEQ_ri	= 35,
    JEQ_rr	= 36,
    JMP	= 37,
    JNE_ri	= 38,
    JNE_rr	= 39,
    JSGE_ri	= 40,
    JSGE_rr	= 41,
    JSGT_ri	= 42,
    JSGT_rr	= 43,
    JUGE_ri	= 44,
    JUGE_rr	= 45,
    JUGT_ri	= 46,
    JUGT_rr	= 47,
    LDB	= 48,
    LDD	= 49,
    LDH	= 50,
    LDW	= 51,
    LD_ABS_B	= 52,
    LD_ABS_H	= 53,
    LD_ABS_W	= 54,
    LD_IND_B	= 55,
    LD_IND_H	= 56,
    LD_IND_W	= 57,
    LD_imm64	= 58,
    LD_pseudo	= 59,
    MOV_ri	= 60,
    MOV_rr	= 61,
    MUL_ri	= 62,
    MUL_rr	= 63,
    NOP	= 64,
    OR_ri	= 65,
    OR_rr	= 66,
    RET	= 67,
    SLL_ri	= 68,
    SLL_rr	= 69,
    SRA_ri	= 70,
    SRA_rr	= 71,
    SRL_ri	= 72,
    SRL_rr	= 73,
    STB	= 74,
    STD	= 75,
    STH	= 76,
    STW	= 77,
    SUB_ri	= 78,
    SUB_rr	= 79,
    Select	= 80,
    XADD32	= 81,
    XADD64	= 82,
    XOR_ri	= 83,
    XOR_rr	= 84,
    INSTRUCTION_LIST_END = 85
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    SCHED_LIST_END = 1
  };
} // End Sched namespace
} // End BPF namespace
} // End llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Descriptors                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const uint16_t ImplicitList1[] = { BPF::R11, 0 };
static const uint16_t ImplicitList2[] = { BPF::R0, BPF::R1, BPF::R2, BPF::R3, BPF::R4, BPF::R5, 0 };
static const uint16_t ImplicitList3[] = { BPF::R6, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo15[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { BPF::GPRRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };

extern const MCInstrDesc BPFInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #21 = LOCAL_ESCAPE
  { 22,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #22 = FAULTING_LOAD_OP
  { 23,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #23 = ADD_ri
  { 24,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #24 = ADD_rr
  { 25,	1,	0,	8,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo2, -1 ,nullptr },  // Inst #25 = ADJCALLSTACKDOWN
  { 26,	2,	0,	8,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, ImplicitList1, ImplicitList1, OperandInfo8, -1 ,nullptr },  // Inst #26 = ADJCALLSTACKUP
  { 27,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #27 = AND_ri
  { 28,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #28 = AND_rr
  { 29,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #29 = BSWAP16
  { 30,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #30 = BSWAP32
  { 31,	2,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #31 = BSWAP64
  { 32,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #32 = DIV_ri
  { 33,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #33 = DIV_rr
  { 34,	1,	0,	8,	0,	0|(1ULL<<MCID::Call), 0x0ULL, ImplicitList1, ImplicitList2, OperandInfo5, -1 ,nullptr },  // Inst #34 = JAL
  { 35,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #35 = JEQ_ri
  { 36,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #36 = JEQ_rr
  { 37,	1,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #37 = JMP
  { 38,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #38 = JNE_ri
  { 39,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #39 = JNE_rr
  { 40,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #40 = JSGE_ri
  { 41,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #41 = JSGE_rr
  { 42,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #42 = JSGT_ri
  { 43,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #43 = JSGT_rr
  { 44,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #44 = JUGE_ri
  { 45,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #45 = JUGE_rr
  { 46,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #46 = JUGT_ri
  { 47,	3,	0,	8,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #47 = JUGT_rr
  { 48,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #48 = LDB
  { 49,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #49 = LDD
  { 50,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #50 = LDH
  { 51,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #51 = LDW
  { 52,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo18, -1 ,nullptr },  // Inst #52 = LD_ABS_B
  { 53,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo18, -1 ,nullptr },  // Inst #53 = LD_ABS_H
  { 54,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo18, -1 ,nullptr },  // Inst #54 = LD_ABS_W
  { 55,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo19, -1 ,nullptr },  // Inst #55 = LD_IND_B
  { 56,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo19, -1 ,nullptr },  // Inst #56 = LD_IND_H
  { 57,	2,	0,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq)|(1ULL<<MCID::ExtraDefRegAllocReq), 0x0ULL, ImplicitList3, ImplicitList2, OperandInfo19, -1 ,nullptr },  // Inst #57 = LD_IND_W
  { 58,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #58 = LD_imm64
  { 59,	3,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #59 = LD_pseudo
  { 60,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #60 = MOV_ri
  { 61,	2,	1,	8,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #61 = MOV_rr
  { 62,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #62 = MUL_ri
  { 63,	3,	1,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #63 = MUL_rr
  { 64,	1,	0,	8,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #64 = NOP
  { 65,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #65 = OR_ri
  { 66,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #66 = OR_rr
  { 67,	0,	0,	8,	0,	0|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #67 = RET
  { 68,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #68 = SLL_ri
  { 69,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #69 = SLL_rr
  { 70,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #70 = SRA_ri
  { 71,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #71 = SRA_rr
  { 72,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #72 = SRL_ri
  { 73,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #73 = SRL_rr
  { 74,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #74 = STB
  { 75,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #75 = STD
  { 76,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #76 = STH
  { 77,	3,	0,	8,	0,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #77 = STW
  { 78,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #78 = SUB_ri
  { 79,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #79 = SUB_rr
  { 80,	6,	1,	8,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #80 = Select
  { 81,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #81 = XADD32
  { 82,	4,	1,	8,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #82 = XADD64
  { 83,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #83 = XOR_ri
  { 84,	3,	1,	8,	0,	0|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #84 = XOR_rr
};

extern const char BPFInstrNameData[] = {
  /* 0 */ 'X', 'A', 'D', 'D', '3', '2', 0,
  /* 7 */ 'B', 'S', 'W', 'A', 'P', '3', '2', 0,
  /* 15 */ 'X', 'A', 'D', 'D', '6', '4', 0,
  /* 22 */ 'B', 'S', 'W', 'A', 'P', '6', '4', 0,
  /* 30 */ 'L', 'D', '_', 'i', 'm', 'm', '6', '4', 0,
  /* 39 */ 'B', 'S', 'W', 'A', 'P', '1', '6', 0,
  /* 47 */ 'L', 'D', 'B', 0,
  /* 51 */ 'S', 'T', 'B', 0,
  /* 55 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'B', 0,
  /* 64 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'B', 0,
  /* 73 */ 'L', 'D', 'D', 0,
  /* 77 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 90 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 107 */ 'S', 'T', 'D', 0,
  /* 111 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 124 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 131 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 144 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 154 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 167 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 182 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 196 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 210 */ 'L', 'D', 'H', 0,
  /* 214 */ 'S', 'T', 'H', 0,
  /* 218 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'H', 0,
  /* 227 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'H', 0,
  /* 236 */ 'P', 'H', 'I', 0,
  /* 240 */ 'J', 'A', 'L', 0,
  /* 244 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 253 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 262 */ 'K', 'I', 'L', 'L', 0,
  /* 267 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 277 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 293 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 310 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 319 */ 'J', 'M', 'P', 0,
  /* 323 */ 'N', 'O', 'P', 0,
  /* 327 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 344 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 359 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 376 */ 'R', 'E', 'T', 0,
  /* 380 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 391 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 402 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 417 */ 'L', 'D', 'W', 0,
  /* 421 */ 'S', 'T', 'W', 0,
  /* 425 */ 'L', 'D', '_', 'I', 'N', 'D', '_', 'W', 0,
  /* 434 */ 'L', 'D', '_', 'A', 'B', 'S', '_', 'W', 0,
  /* 443 */ 'C', 'O', 'P', 'Y', 0,
  /* 448 */ 'S', 'R', 'A', '_', 'r', 'i', 0,
  /* 455 */ 'S', 'U', 'B', '_', 'r', 'i', 0,
  /* 462 */ 'A', 'D', 'D', '_', 'r', 'i', 0,
  /* 469 */ 'A', 'N', 'D', '_', 'r', 'i', 0,
  /* 476 */ 'J', 'S', 'G', 'E', '_', 'r', 'i', 0,
  /* 484 */ 'J', 'U', 'G', 'E', '_', 'r', 'i', 0,
  /* 492 */ 'J', 'N', 'E', '_', 'r', 'i', 0,
  /* 499 */ 'S', 'L', 'L', '_', 'r', 'i', 0,
  /* 506 */ 'S', 'R', 'L', '_', 'r', 'i', 0,
  /* 513 */ 'M', 'U', 'L', '_', 'r', 'i', 0,
  /* 520 */ 'J', 'E', 'Q', '_', 'r', 'i', 0,
  /* 527 */ 'X', 'O', 'R', '_', 'r', 'i', 0,
  /* 534 */ 'J', 'S', 'G', 'T', '_', 'r', 'i', 0,
  /* 542 */ 'J', 'U', 'G', 'T', '_', 'r', 'i', 0,
  /* 550 */ 'D', 'I', 'V', '_', 'r', 'i', 0,
  /* 557 */ 'M', 'O', 'V', '_', 'r', 'i', 0,
  /* 564 */ 'L', 'D', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 574 */ 'S', 'R', 'A', '_', 'r', 'r', 0,
  /* 581 */ 'S', 'U', 'B', '_', 'r', 'r', 0,
  /* 588 */ 'A', 'D', 'D', '_', 'r', 'r', 0,
  /* 595 */ 'A', 'N', 'D', '_', 'r', 'r', 0,
  /* 602 */ 'J', 'S', 'G', 'E', '_', 'r', 'r', 0,
  /* 610 */ 'J', 'U', 'G', 'E', '_', 'r', 'r', 0,
  /* 618 */ 'J', 'N', 'E', '_', 'r', 'r', 0,
  /* 625 */ 'S', 'L', 'L', '_', 'r', 'r', 0,
  /* 632 */ 'S', 'R', 'L', '_', 'r', 'r', 0,
  /* 639 */ 'M', 'U', 'L', '_', 'r', 'r', 0,
  /* 646 */ 'J', 'E', 'Q', '_', 'r', 'r', 0,
  /* 653 */ 'X', 'O', 'R', '_', 'r', 'r', 0,
  /* 660 */ 'J', 'S', 'G', 'T', '_', 'r', 'r', 0,
  /* 668 */ 'J', 'U', 'G', 'T', '_', 'r', 'r', 0,
  /* 676 */ 'D', 'I', 'V', '_', 'r', 'r', 0,
  /* 683 */ 'M', 'O', 'V', '_', 'r', 'r', 0,
  /* 690 */ 'S', 'e', 'l', 'e', 'c', 't', 0,
};

extern const unsigned BPFInstrNameIndices[] = {
    236U, 267U, 277U, 253U, 244U, 262U, 167U, 182U, 
    154U, 196U, 359U, 144U, 111U, 443U, 124U, 402U, 
    77U, 310U, 391U, 90U, 380U, 131U, 327U, 462U, 
    588U, 293U, 344U, 469U, 595U, 39U, 7U, 22U, 
    550U, 676U, 240U, 520U, 646U, 319U, 492U, 618U, 
    476U, 602U, 534U, 660U, 484U, 610U, 542U, 668U, 
    47U, 73U, 210U, 417U, 64U, 227U, 434U, 55U, 
    218U, 425U, 30U, 564U, 557U, 683U, 513U, 639U, 
    323U, 528U, 654U, 376U, 499U, 625U, 448U, 574U, 
    506U, 632U, 51U, 107U, 214U, 421U, 455U, 581U, 
    690U, 0U, 15U, 527U, 653U, 
};

static inline void InitBPFMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, 85);
}

} // End llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct BPFGenInstrInfo : public TargetInstrInfo {
  explicit BPFGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1);
  virtual ~BPFGenInstrInfo();
};
} // End llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc BPFInsts[];
extern const unsigned BPFInstrNameIndices[];
extern const char BPFInstrNameData[];
BPFGenInstrInfo::BPFGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode) {
  InitMCInstrInfo(BPFInsts, BPFInstrNameIndices, BPFInstrNameData, 85);
}
BPFGenInstrInfo::~BPFGenInstrInfo() {}
} // End llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace BPF {
namespace OpName { 
enum {
OPERAND_LAST
};
} // End namespace OpName
} // End namespace BPF
} // End namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace BPF {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // End namespace BPF
} // End namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace BPF {
namespace OpTypes { 
enum OperandType {
  MEMri = 0,
  brtarget = 1,
  calltarget = 2,
  f32imm = 3,
  f64imm = 4,
  i16imm = 5,
  i1imm = 6,
  i32imm = 7,
  i64imm = 8,
  i8imm = 9,
  u64imm = 10,
  OPERAND_TYPE_LIST_END
};
} // End namespace OpTypes
} // End namespace BPF
} // End namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
