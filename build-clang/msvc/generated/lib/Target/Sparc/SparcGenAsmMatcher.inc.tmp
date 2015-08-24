/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) override;
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint8_t {
  Feature_HasV9 = (1ULL << 0),
  Feature_HasVIS = (1ULL << 1),
  Feature_HasVIS2 = (1ULL << 2),
  Feature_HasVIS3 = (1ULL << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasV9: return "";
  case Feature_HasVIS: return "";
  case Feature_HasVIS2: return "";
  case Feature_HasVIS3: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

static void applyMnemonicAliases(StringRef &Mnemonic, uint64_t Features, unsigned VariantID) {
  switch (VariantID) {
    case 0:
      switch (Mnemonic.size()) {
      default: break;
      case 4:	 // 3 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddc", 3))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addc"
            Mnemonic = "addx";
          return;
        case 'l':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "duw", 3))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "lduw"
            Mnemonic = "ld";
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ubc", 3))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subc"
            Mnemonic = "subx";
          return;
        }
        break;
      case 5:	 // 1 string to match.
        if (memcmp(Mnemonic.data()+0, "lduwa", 5))
          break;
        if ((Features & Feature_HasV9) == Feature_HasV9)	 // "lduwa"
          Mnemonic = "lda";
        return;
      case 6:	 // 3 strings to match.
        switch (Mnemonic[0]) {
        default: break;
        case 'a':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ddccc", 5))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addccc"
            Mnemonic = "addxcc";
          return;
        case 'r':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "eturn", 5))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "return"
            Mnemonic = "rett";
          return;
        case 's':	 // 1 string to match.
          if (memcmp(Mnemonic.data()+1, "ubccc", 5))
            break;
          if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subccc"
            Mnemonic = "subxcc";
          return;
        }
        break;
      }
    break;
  }
  switch (Mnemonic.size()) {
  default: break;
  case 4:	 // 3 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddc", 3))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addc"
        Mnemonic = "addx";
      return;
    case 'l':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "duw", 3))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "lduw"
        Mnemonic = "ld";
      return;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ubc", 3))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subc"
        Mnemonic = "subx";
      return;
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Mnemonic.data()+0, "lduwa", 5))
      break;
    if ((Features & Feature_HasV9) == Feature_HasV9)	 // "lduwa"
      Mnemonic = "lda";
    return;
  case 6:	 // 3 strings to match.
    switch (Mnemonic[0]) {
    default: break;
    case 'a':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ddccc", 5))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "addccc"
        Mnemonic = "addxcc";
      return;
    case 'r':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "eturn", 5))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "return"
        Mnemonic = "rett";
      return;
    case 's':	 // 1 string to match.
      if (memcmp(Mnemonic.data()+1, "ubccc", 5))
        break;
      if ((Features & Feature_HasV9) == Feature_HasV9)	 // "subccc"
        Mnemonic = "subxcc";
      return;
    }
    break;
  }
}

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_Reg,
  CVT_95_addImmOperands,
  CVT_imm_95_8,
  CVT_imm_95_13,
  CVT_imm_95_5,
  CVT_imm_95_1,
  CVT_imm_95_10,
  CVT_imm_95_11,
  CVT_imm_95_12,
  CVT_imm_95_3,
  CVT_imm_95_2,
  CVT_imm_95_4,
  CVT_imm_95_0,
  CVT_imm_95_9,
  CVT_imm_95_6,
  CVT_imm_95_14,
  CVT_regG0,
  CVT_imm_95_15,
  CVT_imm_95_7,
  CVT_regO7,
  CVT_95_addMEMriOperands,
  CVT_95_addMEMrrOperands,
  CVT_regFCC0,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__Reg1_2__Reg1_0__Reg1_1,
  Convert__Reg1_2__Reg1_0__Imm1_1,
  Convert__Imm1_0__imm_95_8,
  Convert__Imm1_1__imm_95_8,
  Convert__Imm1_1__Imm1_0,
  Convert__Imm1_2__imm_95_8,
  Convert__Imm1_2__Imm1_0,
  Convert__Imm1_3__imm_95_8,
  Convert__Imm1_3__Imm1_0,
  Convert__Imm1_4__Imm1_0,
  Convert__Imm1_0,
  Convert__Imm1_0__imm_95_13,
  Convert__Imm1_1__imm_95_13,
  Convert__Imm1_2__imm_95_13,
  Convert__Imm1_3__imm_95_13,
  Convert__Reg1_1__Reg1_1__Reg1_0,
  Convert__Reg1_1__Reg1_1__Imm1_0,
  Convert__Imm1_0__imm_95_5,
  Convert__Imm1_1__imm_95_5,
  Convert__Imm1_2__imm_95_5,
  Convert__Imm1_3__imm_95_5,
  Convert__Imm1_0__imm_95_1,
  Convert__Imm1_1__imm_95_1,
  Convert__Imm1_2__imm_95_1,
  Convert__Imm1_3__imm_95_1,
  Convert__Imm1_0__imm_95_10,
  Convert__Imm1_1__imm_95_10,
  Convert__Imm1_2__imm_95_10,
  Convert__Imm1_3__imm_95_10,
  Convert__Imm1_0__imm_95_11,
  Convert__Imm1_1__imm_95_11,
  Convert__Imm1_2__imm_95_11,
  Convert__Imm1_3__imm_95_11,
  Convert__Imm1_0__imm_95_12,
  Convert__Imm1_1__imm_95_12,
  Convert__Imm1_2__imm_95_12,
  Convert__Imm1_3__imm_95_12,
  Convert__Imm1_0__imm_95_3,
  Convert__Imm1_1__imm_95_3,
  Convert__Imm1_2__imm_95_3,
  Convert__Imm1_3__imm_95_3,
  Convert__Imm1_0__imm_95_2,
  Convert__Imm1_1__imm_95_2,
  Convert__Imm1_2__imm_95_2,
  Convert__Imm1_3__imm_95_2,
  Convert__Imm1_0__imm_95_4,
  Convert__Imm1_1__imm_95_4,
  Convert__Imm1_2__imm_95_4,
  Convert__Imm1_3__imm_95_4,
  Convert__Imm1_0__imm_95_0,
  Convert__Imm1_1__imm_95_0,
  Convert__Imm1_2__imm_95_0,
  Convert__Imm1_3__imm_95_0,
  Convert__Imm1_0__imm_95_9,
  Convert__Imm1_1__imm_95_9,
  Convert__Imm1_2__imm_95_9,
  Convert__Imm1_3__imm_95_9,
  Convert__Imm1_0__imm_95_6,
  Convert__Imm1_1__imm_95_6,
  Convert__Imm1_2__imm_95_6,
  Convert__Imm1_3__imm_95_6,
  Convert__Imm1_0__imm_95_14,
  Convert__Imm1_1__imm_95_14,
  Convert__Imm1_2__imm_95_14,
  Convert__Imm1_3__imm_95_14,
  Convert__Reg1_0__Imm1_1,
  Convert__Reg1_1__Imm1_2,
  Convert__Reg1_2__Imm1_3,
  Convert__regG0__Reg1_1__Reg1_0,
  Convert__regG0__Reg1_1__Imm1_0,
  Convert__Imm1_0__imm_95_15,
  Convert__Imm1_1__imm_95_15,
  Convert__Imm1_2__imm_95_15,
  Convert__Imm1_3__imm_95_15,
  Convert__Imm1_0__imm_95_7,
  Convert__Imm1_1__imm_95_7,
  Convert__Imm1_2__imm_95_7,
  Convert__Imm1_3__imm_95_7,
  Convert__regO7__MEMri2_0,
  Convert__regO7__MEMrr2_0,
  Convert__Reg1_4__Reg1_1__Reg1_3__Tie0,
  Convert__Reg1_0__regG0__regG0,
  Convert__MEMri2_1__regG0,
  Convert__MEMrr2_1__regG0,
  Convert__Reg1_0,
  Convert__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_0__imm_95_1,
  Convert__Reg1_1__Reg1_0,
  Convert__Imm1_1__imm_95_0__Reg1_0,
  Convert__Imm1_2__imm_95_0__Reg1_1,
  Convert__Imm1_2__Imm1_0__Reg1_1,
  Convert__Imm1_3__imm_95_0__Reg1_2,
  Convert__Imm1_3__Imm1_0__Reg1_2,
  Convert__Imm1_4__Imm1_0__Reg1_3,
  Convert__Imm1_1__imm_95_9__Reg1_0,
  Convert__Imm1_2__imm_95_9__Reg1_1,
  Convert__Imm1_3__imm_95_9__Reg1_2,
  Convert__Imm1_1__imm_95_6__Reg1_0,
  Convert__Imm1_2__imm_95_6__Reg1_1,
  Convert__Imm1_3__imm_95_6__Reg1_2,
  Convert__Imm1_1__imm_95_11__Reg1_0,
  Convert__Imm1_2__imm_95_11__Reg1_1,
  Convert__Imm1_3__imm_95_11__Reg1_2,
  Convert__Imm1_1__imm_95_4__Reg1_0,
  Convert__Imm1_2__imm_95_4__Reg1_1,
  Convert__Imm1_3__imm_95_4__Reg1_2,
  Convert__Imm1_1__imm_95_13__Reg1_0,
  Convert__Imm1_2__imm_95_13__Reg1_1,
  Convert__Imm1_3__imm_95_13__Reg1_2,
  Convert__Imm1_1__imm_95_2__Reg1_0,
  Convert__Imm1_2__imm_95_2__Reg1_1,
  Convert__Imm1_3__imm_95_2__Reg1_2,
  Convert__Imm1_1__imm_95_8__Reg1_0,
  Convert__Imm1_2__imm_95_8__Reg1_1,
  Convert__Imm1_3__imm_95_8__Reg1_2,
  Convert__Imm1_1__imm_95_1__Reg1_0,
  Convert__Imm1_2__imm_95_1__Reg1_1,
  Convert__Imm1_3__imm_95_1__Reg1_2,
  Convert__Imm1_1__imm_95_15__Reg1_0,
  Convert__Imm1_2__imm_95_15__Reg1_1,
  Convert__Imm1_3__imm_95_15__Reg1_2,
  Convert__Imm1_1__imm_95_7__Reg1_0,
  Convert__Imm1_2__imm_95_7__Reg1_1,
  Convert__Imm1_3__imm_95_7__Reg1_2,
  Convert__Imm1_1__imm_95_10__Reg1_0,
  Convert__Imm1_2__imm_95_10__Reg1_1,
  Convert__Imm1_3__imm_95_10__Reg1_2,
  Convert__Imm1_1__imm_95_5__Reg1_0,
  Convert__Imm1_2__imm_95_5__Reg1_1,
  Convert__Imm1_3__imm_95_5__Reg1_2,
  Convert__Imm1_1__imm_95_12__Reg1_0,
  Convert__Imm1_2__imm_95_12__Reg1_1,
  Convert__Imm1_3__imm_95_12__Reg1_2,
  Convert__Imm1_1__imm_95_3__Reg1_0,
  Convert__Imm1_2__imm_95_3__Reg1_1,
  Convert__Imm1_3__imm_95_3__Reg1_2,
  Convert__Imm1_1__imm_95_14__Reg1_0,
  Convert__Imm1_2__imm_95_14__Reg1_1,
  Convert__Imm1_3__imm_95_14__Reg1_2,
  Convert__regFCC0__Reg1_0__Reg1_1,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert_NoOperands,
  Convert__MEMri2_0,
  Convert__MEMrr2_0,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0,
  Convert__Reg1_3__Reg1_2__Tie0__Imm1_0,
  Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Reg1_1__Tie0__imm_95_7,
  Convert__Reg1_0__Tie0,
  Convert__regG0__MEMri2_0,
  Convert__regG0__MEMrr2_0,
  Convert__Reg1_1__MEMri2_0,
  Convert__Reg1_1__MEMrr2_0,
  Convert__MEMri2_1,
  Convert__Reg1_3__MEMri2_1,
  Convert__MEMrr2_1,
  Convert__Reg1_3__MEMrr2_1,
  Convert__Reg1_4__MEMrr2_1__Imm1_3,
  Convert__Reg1_1,
  Convert__regG0__Reg1_0,
  Convert__Reg1_1__regG0__Reg1_0,
  Convert__regG0__Imm1_0,
  Convert__Reg1_1__regG0__Imm1_0,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0,
  Convert__Reg1_3__Imm1_2__Tie0__Imm1_0,
  Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_11,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_13,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_4,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_2,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_0,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_9,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_6,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_7,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_10,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_5,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_12,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_3,
  Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_14,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_15,
  Convert__Reg1_2__Imm1_1__Tie0__imm_95_7,
  Convert__Reg1_0__regG0__Reg1_0,
  Convert__Reg1_0__Reg1_0__regG0,
  Convert__Reg1_1__Reg1_0__regG0,
  Convert__regG0__regG0__regG0,
  Convert__imm_95_8,
  Convert__Reg1_1__Imm1_0,
  Convert__MEMri2_2__Reg1_0,
  Convert__MEMrr2_2__Reg1_0,
  Convert__MEMrr2_2__Reg1_0__Imm1_4,
  Convert__Reg1_3__MEMri2_1__Tie0,
  Convert__Reg1_3__MEMrr2_1__Tie0,
  Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0,
  Convert__regG0__Reg1_0__imm_95_8,
  Convert__regG0__Imm1_0__imm_95_8,
  Convert__regG0__Reg1_1__imm_95_8,
  Convert__regG0__Imm1_1__imm_95_8,
  Convert__Reg1_0__Reg1_2__imm_95_8,
  Convert__Reg1_0__Imm1_2__imm_95_8,
  Convert__Reg1_1__Reg1_3__imm_95_8,
  Convert__Reg1_1__Imm1_3__imm_95_8,
  Convert__Reg1_2__Reg1_4__Imm1_0,
  Convert__Reg1_2__Imm1_4__Imm1_0,
  Convert__regG0__Reg1_0__imm_95_13,
  Convert__regG0__Imm1_0__imm_95_13,
  Convert__regG0__Reg1_1__imm_95_13,
  Convert__regG0__Imm1_1__imm_95_13,
  Convert__Reg1_0__Reg1_2__imm_95_13,
  Convert__Reg1_0__Imm1_2__imm_95_13,
  Convert__Reg1_1__Reg1_3__imm_95_13,
  Convert__Reg1_1__Imm1_3__imm_95_13,
  Convert__regG0__Reg1_0__imm_95_5,
  Convert__regG0__Imm1_0__imm_95_5,
  Convert__regG0__Reg1_1__imm_95_5,
  Convert__regG0__Imm1_1__imm_95_5,
  Convert__Reg1_0__Reg1_2__imm_95_5,
  Convert__Reg1_0__Imm1_2__imm_95_5,
  Convert__Reg1_1__Reg1_3__imm_95_5,
  Convert__Reg1_1__Imm1_3__imm_95_5,
  Convert__regG0__Reg1_0__imm_95_1,
  Convert__regG0__Imm1_0__imm_95_1,
  Convert__regG0__Reg1_1__imm_95_1,
  Convert__regG0__Imm1_1__imm_95_1,
  Convert__Reg1_0__Reg1_2__imm_95_1,
  Convert__Reg1_0__Imm1_2__imm_95_1,
  Convert__Reg1_1__Reg1_3__imm_95_1,
  Convert__Reg1_1__Imm1_3__imm_95_1,
  Convert__regG0__Reg1_0__imm_95_10,
  Convert__regG0__Imm1_0__imm_95_10,
  Convert__regG0__Reg1_1__imm_95_10,
  Convert__regG0__Imm1_1__imm_95_10,
  Convert__Reg1_0__Reg1_2__imm_95_10,
  Convert__Reg1_0__Imm1_2__imm_95_10,
  Convert__Reg1_1__Reg1_3__imm_95_10,
  Convert__Reg1_1__Imm1_3__imm_95_10,
  Convert__regG0__Reg1_0__imm_95_11,
  Convert__regG0__Imm1_0__imm_95_11,
  Convert__regG0__Reg1_1__imm_95_11,
  Convert__regG0__Imm1_1__imm_95_11,
  Convert__Reg1_0__Reg1_2__imm_95_11,
  Convert__Reg1_0__Imm1_2__imm_95_11,
  Convert__Reg1_1__Reg1_3__imm_95_11,
  Convert__Reg1_1__Imm1_3__imm_95_11,
  Convert__regG0__Reg1_0__imm_95_12,
  Convert__regG0__Imm1_0__imm_95_12,
  Convert__regG0__Reg1_1__imm_95_12,
  Convert__regG0__Imm1_1__imm_95_12,
  Convert__Reg1_0__Reg1_2__imm_95_12,
  Convert__Reg1_0__Imm1_2__imm_95_12,
  Convert__Reg1_1__Reg1_3__imm_95_12,
  Convert__Reg1_1__Imm1_3__imm_95_12,
  Convert__regG0__Reg1_0__imm_95_3,
  Convert__regG0__Imm1_0__imm_95_3,
  Convert__regG0__Reg1_1__imm_95_3,
  Convert__regG0__Imm1_1__imm_95_3,
  Convert__Reg1_0__Reg1_2__imm_95_3,
  Convert__Reg1_0__Imm1_2__imm_95_3,
  Convert__Reg1_1__Reg1_3__imm_95_3,
  Convert__Reg1_1__Imm1_3__imm_95_3,
  Convert__regG0__Reg1_0__imm_95_2,
  Convert__regG0__Imm1_0__imm_95_2,
  Convert__regG0__Reg1_1__imm_95_2,
  Convert__regG0__Imm1_1__imm_95_2,
  Convert__Reg1_0__Reg1_2__imm_95_2,
  Convert__Reg1_0__Imm1_2__imm_95_2,
  Convert__Reg1_1__Reg1_3__imm_95_2,
  Convert__Reg1_1__Imm1_3__imm_95_2,
  Convert__regG0__Reg1_0__imm_95_4,
  Convert__regG0__Imm1_0__imm_95_4,
  Convert__regG0__Reg1_1__imm_95_4,
  Convert__regG0__Imm1_1__imm_95_4,
  Convert__Reg1_0__Reg1_2__imm_95_4,
  Convert__Reg1_0__Imm1_2__imm_95_4,
  Convert__Reg1_1__Reg1_3__imm_95_4,
  Convert__Reg1_1__Imm1_3__imm_95_4,
  Convert__regG0__Reg1_0__imm_95_0,
  Convert__regG0__Imm1_0__imm_95_0,
  Convert__regG0__Reg1_1__imm_95_0,
  Convert__regG0__Imm1_1__imm_95_0,
  Convert__Reg1_0__Reg1_2__imm_95_0,
  Convert__Reg1_0__Imm1_2__imm_95_0,
  Convert__Reg1_1__Reg1_3__imm_95_0,
  Convert__Reg1_1__Imm1_3__imm_95_0,
  Convert__regG0__Reg1_0__imm_95_9,
  Convert__regG0__Imm1_0__imm_95_9,
  Convert__regG0__Reg1_1__imm_95_9,
  Convert__regG0__Imm1_1__imm_95_9,
  Convert__Reg1_0__Reg1_2__imm_95_9,
  Convert__Reg1_0__Imm1_2__imm_95_9,
  Convert__Reg1_1__Reg1_3__imm_95_9,
  Convert__Reg1_1__Imm1_3__imm_95_9,
  Convert__regG0__Reg1_0__imm_95_6,
  Convert__regG0__Imm1_0__imm_95_6,
  Convert__regG0__Reg1_1__imm_95_6,
  Convert__regG0__Imm1_1__imm_95_6,
  Convert__Reg1_0__Reg1_2__imm_95_6,
  Convert__Reg1_0__Imm1_2__imm_95_6,
  Convert__Reg1_1__Reg1_3__imm_95_6,
  Convert__Reg1_1__Imm1_3__imm_95_6,
  Convert__regG0__Reg1_0__imm_95_14,
  Convert__regG0__Imm1_0__imm_95_14,
  Convert__regG0__Reg1_1__imm_95_14,
  Convert__regG0__Imm1_1__imm_95_14,
  Convert__Reg1_0__Reg1_2__imm_95_14,
  Convert__Reg1_0__Imm1_2__imm_95_14,
  Convert__Reg1_1__Reg1_3__imm_95_14,
  Convert__Reg1_1__Imm1_3__imm_95_14,
  Convert__regG0__Reg1_0__regG0,
  Convert__regG0__Reg1_0__imm_95_15,
  Convert__regG0__Imm1_0__imm_95_15,
  Convert__regG0__Reg1_1__imm_95_15,
  Convert__regG0__Imm1_1__imm_95_15,
  Convert__Reg1_0__Reg1_2__imm_95_15,
  Convert__Reg1_0__Imm1_2__imm_95_15,
  Convert__Reg1_1__Reg1_3__imm_95_15,
  Convert__Reg1_1__Imm1_3__imm_95_15,
  Convert__regG0__Reg1_0__imm_95_7,
  Convert__regG0__Imm1_0__imm_95_7,
  Convert__regG0__Reg1_1__imm_95_7,
  Convert__regG0__Imm1_1__imm_95_7,
  Convert__Reg1_0__Reg1_2__imm_95_7,
  Convert__Reg1_0__Imm1_2__imm_95_7,
  Convert__Reg1_1__Reg1_3__imm_95_7,
  Convert__Reg1_1__Imm1_3__imm_95_7,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__Reg1_2__Reg1_0__Reg1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_0__imm_95_8
  { CVT_95_addImmOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_8
  { CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_1__Imm1_0
  { CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_8
  { CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_2__Imm1_0
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_3__imm_95_8
  { CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Imm1_3__Imm1_0
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_4__Imm1_0
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_13
  { CVT_95_addImmOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_13
  { CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_13
  { CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_13
  { CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__Reg1_1__Imm1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_5
  { CVT_95_addImmOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_5
  { CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_5
  { CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_5
  { CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_1
  { CVT_95_addImmOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_1
  { CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_1
  { CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_10
  { CVT_95_addImmOperands, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_10
  { CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_10
  { CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_10
  { CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_11
  { CVT_95_addImmOperands, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_11
  { CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_11
  { CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_11
  { CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_12
  { CVT_95_addImmOperands, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_12
  { CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_12
  { CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_12
  { CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_3
  { CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_3
  { CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_3
  { CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_3
  { CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_2
  { CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_2
  { CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_2
  { CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_4
  { CVT_95_addImmOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_4
  { CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_4
  { CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_4
  { CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_0
  { CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_0
  { CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_0
  { CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_9
  { CVT_95_addImmOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_9
  { CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_9
  { CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_9
  { CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_6
  { CVT_95_addImmOperands, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_6
  { CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_6
  { CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_6
  { CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_14
  { CVT_95_addImmOperands, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_14
  { CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_14
  { CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_14
  { CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_1__Imm1_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_2__Imm1_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__regG0__Reg1_1__Reg1_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__regG0__Reg1_1__Imm1_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Imm1_0__imm_95_15
  { CVT_95_addImmOperands, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_15
  { CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_15
  { CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_15
  { CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Imm1_0__imm_95_7
  { CVT_95_addImmOperands, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_1__imm_95_7
  { CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_2__imm_95_7
  { CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Imm1_3__imm_95_7
  { CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regO7__MEMri2_0
  { CVT_regO7, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regO7__MEMrr2_0
  { CVT_regO7, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_4__Reg1_1__Reg1_3__Tie0
  { CVT_95_Reg, 5, CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_0__regG0__regG0
  { CVT_95_Reg, 1, CVT_regG0, 0, CVT_regG0, 0, CVT_Done },
  // Convert__MEMri2_1__regG0
  { CVT_95_addMEMriOperands, 2, CVT_regG0, 0, CVT_Done },
  // Convert__MEMrr2_1__regG0
  { CVT_95_addMEMrrOperands, 2, CVT_regG0, 0, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_0__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_1__imm_95_0__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_2__Imm1_0__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_95_addImmOperands, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_3__Imm1_0__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_95_addImmOperands, 1, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_4__Imm1_0__Reg1_3
  { CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_95_Reg, 4, CVT_Done },
  // Convert__Imm1_1__imm_95_9__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_9__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_9__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_6__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_6__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_6__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_11__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_11__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_11__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_4__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_4__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_4__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_13__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_13__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_13__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_2__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_2__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_2__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_8__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_8__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_8__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_1__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_1__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_1__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_15__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_15__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_15__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_7__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_7__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_7__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_10__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_10__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_10__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_5__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_5__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_5__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_12__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_12__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_12__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_3__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_3__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_3__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__Imm1_1__imm_95_14__Reg1_0
  { CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Imm1_2__imm_95_14__Reg1_1
  { CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__Imm1_3__imm_95_14__Reg1_2
  { CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_95_Reg, 3, CVT_Done },
  // Convert__regFCC0__Reg1_0__Reg1_1
  { CVT_regFCC0, 0, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__MEMri2_0
  { CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__MEMrr2_0
  { CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_3__Reg1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__regG0__MEMri2_0
  { CVT_regG0, 0, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__regG0__MEMrr2_0
  { CVT_regG0, 0, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMri2_0
  { CVT_95_Reg, 2, CVT_95_addMEMriOperands, 1, CVT_Done },
  // Convert__Reg1_1__MEMrr2_0
  { CVT_95_Reg, 2, CVT_95_addMEMrrOperands, 1, CVT_Done },
  // Convert__MEMri2_1
  { CVT_95_addMEMriOperands, 2, CVT_Done },
  // Convert__Reg1_3__MEMri2_1
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Done },
  // Convert__MEMrr2_1
  { CVT_95_addMEMrrOperands, 2, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Done },
  // Convert__Reg1_4__MEMrr2_1__Imm1_3
  { CVT_95_Reg, 5, CVT_95_addMEMrrOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__Reg1_1
  { CVT_95_Reg, 2, CVT_Done },
  // Convert__regG0__Reg1_0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_1__regG0__Reg1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__regG0__Imm1_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_1__regG0__Imm1_0
  { CVT_95_Reg, 2, CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_3__Imm1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0
  { CVT_95_Reg, 4, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Tied, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_11
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_13
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_4
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_2
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_9
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_6
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_10
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_5
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_12
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_3
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_14
  { CVT_95_Reg, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_15
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_2__Imm1_1__Tie0__imm_95_7
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__regG0__Reg1_0
  { CVT_95_Reg, 1, CVT_regG0, 0, CVT_95_Reg, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_0__regG0
  { CVT_95_Reg, 1, CVT_95_Reg, 1, CVT_regG0, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_0__regG0
  { CVT_95_Reg, 2, CVT_95_Reg, 1, CVT_regG0, 0, CVT_Done },
  // Convert__regG0__regG0__regG0
  { CVT_regG0, 0, CVT_regG0, 0, CVT_regG0, 0, CVT_Done },
  // Convert__imm_95_8
  { CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__MEMri2_2__Reg1_0
  { CVT_95_addMEMriOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__MEMrr2_2__Reg1_0
  { CVT_95_addMEMrrOperands, 3, CVT_95_Reg, 1, CVT_Done },
  // Convert__MEMrr2_2__Reg1_0__Imm1_4
  { CVT_95_addMEMrrOperands, 3, CVT_95_Reg, 1, CVT_95_addImmOperands, 5, CVT_Done },
  // Convert__Reg1_3__MEMri2_1__Tie0
  { CVT_95_Reg, 4, CVT_95_addMEMriOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_3__MEMrr2_1__Tie0
  { CVT_95_Reg, 4, CVT_95_addMEMrrOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0
  { CVT_95_Reg, 5, CVT_95_addMEMrrOperands, 2, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_8
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_8
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_8
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_8
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_8
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_8
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_8
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_8, 0, CVT_Done },
  // Convert__Reg1_2__Reg1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_Reg, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_2__Imm1_4__Imm1_0
  { CVT_95_Reg, 3, CVT_95_addImmOperands, 5, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_13
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_13
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_13
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_13
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_13
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_13
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_13
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_13, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_5
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_5
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_5
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_5
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_5
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_5
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_5
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_5, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_1
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_1
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_1
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_1
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_1
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_1
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_1, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_10
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_10
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_10
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_10
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_10
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_10
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_10
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_10, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_11
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_11
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_11
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_11
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_11
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_11
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_11
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_11, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_12
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_12
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_12
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_12
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_12
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_12
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_12
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_12, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_3
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_3
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_3
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_3
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_3
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_3
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_3
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_3, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_2
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_2
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_2
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_2
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_2
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_2
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_2, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_4
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_4
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_4
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_4
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_4
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_4
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_4
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_4, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_0
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_0
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_0
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_0
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_9
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_9
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_9
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_9
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_9
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_9
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_9
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_9, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_6
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_6
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_6
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_6
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_6
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_6
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_6
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_6, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_14
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_14
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_14
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_14
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_14
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_14
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_14
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_14, 0, CVT_Done },
  // Convert__regG0__Reg1_0__regG0
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_regG0, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_15
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_15
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_15
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_15
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_15
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_15
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_15
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_15, 0, CVT_Done },
  // Convert__regG0__Reg1_0__imm_95_7
  { CVT_regG0, 0, CVT_95_Reg, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Imm1_0__imm_95_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 1, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Reg1_1__imm_95_7
  { CVT_regG0, 0, CVT_95_Reg, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__regG0__Imm1_1__imm_95_7
  { CVT_regG0, 0, CVT_95_addImmOperands, 2, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Reg1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_Reg, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_0__Imm1_2__imm_95_7
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_3__imm_95_7
  { CVT_95_Reg, 2, CVT_95_Reg, 4, CVT_imm_95_7, 0, CVT_Done },
  // Convert__Reg1_1__Imm1_3__imm_95_7
  { CVT_95_Reg, 2, CVT_95_addImmOperands, 4, CVT_imm_95_7, 0, CVT_Done },
};

void SparcAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_Reg:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_imm_95_8:
      Inst.addOperand(MCOperand::createImm(8));
      break;
    case CVT_imm_95_13:
      Inst.addOperand(MCOperand::createImm(13));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    case CVT_imm_95_1:
      Inst.addOperand(MCOperand::createImm(1));
      break;
    case CVT_imm_95_10:
      Inst.addOperand(MCOperand::createImm(10));
      break;
    case CVT_imm_95_11:
      Inst.addOperand(MCOperand::createImm(11));
      break;
    case CVT_imm_95_12:
      Inst.addOperand(MCOperand::createImm(12));
      break;
    case CVT_imm_95_3:
      Inst.addOperand(MCOperand::createImm(3));
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_imm_95_9:
      Inst.addOperand(MCOperand::createImm(9));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_14:
      Inst.addOperand(MCOperand::createImm(14));
      break;
    case CVT_regG0:
      Inst.addOperand(MCOperand::createReg(SP::G0));
      break;
    case CVT_imm_95_15:
      Inst.addOperand(MCOperand::createImm(15));
      break;
    case CVT_imm_95_7:
      Inst.addOperand(MCOperand::createImm(7));
      break;
    case CVT_regO7:
      Inst.addOperand(MCOperand::createReg(SP::O7));
      break;
    case CVT_95_addMEMriOperands:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addMEMriOperands(Inst, 2);
      break;
    case CVT_95_addMEMrrOperands:
      static_cast<SparcOperand&>(*Operands[*(p + 1)]).addMEMrrOperands(Inst, 2);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::createReg(SP::FCC0));
      break;
    }
  }
}

void SparcAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_8:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_13:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_1:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_10:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_11:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_12:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_3:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_9:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_14:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regG0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_imm_95_15:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_regO7:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMEMriOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMEMrrOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__PCT_fcc0, // '%fcc0'
  MCK__PCT_fsr, // '%fsr'
  MCK__PCT_g0, // '%g0'
  MCK__PCT_icc, // '%icc'
  MCK__PCT_psr, // '%psr'
  MCK__PCT_tbr, // '%tbr'
  MCK__PCT_wim, // '%wim'
  MCK__PCT_xcc, // '%xcc'
  MCK__43_, // '+'
  MCK_3, // '3'
  MCK_5, // '5'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_a, // 'a'
  MCK_pn, // 'pn'
  MCK_pt, // 'pt'
  MCK_FCCRegs, // register class 'FCCRegs'
  MCK_ASRRegs, // register class 'ASRRegs'
  MCK_IntRegs, // register class 'IntRegs,I64Regs'
  MCK_FPRegs, // register class 'FPRegs'
  MCK_Reg4, // derived register class
  MCK_DFPRegs, // register class 'DFPRegs'
  MCK_Reg6, // derived register class
  MCK_QFPRegs, // register class 'QFPRegs'
  MCK_IntPair, // register class 'IntPair'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_MEMri, // user defined class 'SparcMEMriAsmOperand'
  MCK_MEMrr, // user defined class 'SparcMEMrrAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '+':	 // 1 string to match.
      return MCK__43_;	 // "+"
    case '3':	 // 1 string to match.
      return MCK_3;	 // "3"
    case '5':	 // 1 string to match.
      return MCK_5;	 // "5"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    case 'a':	 // 1 string to match.
      return MCK_a;	 // "a"
    }
    break;
  case 2:	 // 2 strings to match.
    if (Name[0] != 'p')
      break;
    switch (Name[1]) {
    default: break;
    case 'n':	 // 1 string to match.
      return MCK_pn;	 // "pn"
    case 't':	 // 1 string to match.
      return MCK_pt;	 // "pt"
    }
    break;
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "%g0", 3))
      break;
    return MCK__PCT_g0;	 // "%g0"
  case 4:	 // 6 strings to match.
    if (Name[0] != '%')
      break;
    switch (Name[1]) {
    default: break;
    case 'f':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2))
        break;
      return MCK__PCT_fsr;	 // "%fsr"
    case 'i':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2))
        break;
      return MCK__PCT_icc;	 // "%icc"
    case 'p':	 // 1 string to match.
      if (memcmp(Name.data()+2, "sr", 2))
        break;
      return MCK__PCT_psr;	 // "%psr"
    case 't':	 // 1 string to match.
      if (memcmp(Name.data()+2, "br", 2))
        break;
      return MCK__PCT_tbr;	 // "%tbr"
    case 'w':	 // 1 string to match.
      if (memcmp(Name.data()+2, "im", 2))
        break;
      return MCK__PCT_wim;	 // "%wim"
    case 'x':	 // 1 string to match.
      if (memcmp(Name.data()+2, "cc", 2))
        break;
      return MCK__PCT_xcc;	 // "%xcc"
    }
    break;
  case 5:	 // 1 string to match.
    if (memcmp(Name.data()+0, "%fcc0", 5))
      break;
    return MCK__PCT_fcc0;	 // "%fcc0"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_Reg4:
    return B == MCK_DFPRegs;

  case MCK_Reg6:
    return B == MCK_QFPRegs;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  SparcOperand &Operand = (SparcOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MEMri' class
  if (Kind == MCK_MEMri) {
    if (Operand.isMEMri())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MEMrr' class
  if (Kind == MCK_MEMrr) {
    if (Operand.isMEMrr())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Sparc::FCC0: OpKind = MCK_FCCRegs; break;
    case Sparc::FCC1: OpKind = MCK_FCCRegs; break;
    case Sparc::FCC2: OpKind = MCK_FCCRegs; break;
    case Sparc::FCC3: OpKind = MCK_FCCRegs; break;
    case Sparc::Y: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR1: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR2: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR3: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR4: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR5: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR6: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR7: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR8: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR9: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR10: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR11: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR12: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR13: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR14: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR15: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR16: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR17: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR18: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR19: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR20: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR21: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR22: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR23: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR24: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR25: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR26: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR27: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR28: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR29: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR30: OpKind = MCK_ASRRegs; break;
    case Sparc::ASR31: OpKind = MCK_ASRRegs; break;
    case Sparc::G0: OpKind = MCK_IntRegs; break;
    case Sparc::G1: OpKind = MCK_IntRegs; break;
    case Sparc::G2: OpKind = MCK_IntRegs; break;
    case Sparc::G3: OpKind = MCK_IntRegs; break;
    case Sparc::G4: OpKind = MCK_IntRegs; break;
    case Sparc::G5: OpKind = MCK_IntRegs; break;
    case Sparc::G6: OpKind = MCK_IntRegs; break;
    case Sparc::G7: OpKind = MCK_IntRegs; break;
    case Sparc::O0: OpKind = MCK_IntRegs; break;
    case Sparc::O1: OpKind = MCK_IntRegs; break;
    case Sparc::O2: OpKind = MCK_IntRegs; break;
    case Sparc::O3: OpKind = MCK_IntRegs; break;
    case Sparc::O4: OpKind = MCK_IntRegs; break;
    case Sparc::O5: OpKind = MCK_IntRegs; break;
    case Sparc::O6: OpKind = MCK_IntRegs; break;
    case Sparc::O7: OpKind = MCK_IntRegs; break;
    case Sparc::L0: OpKind = MCK_IntRegs; break;
    case Sparc::L1: OpKind = MCK_IntRegs; break;
    case Sparc::L2: OpKind = MCK_IntRegs; break;
    case Sparc::L3: OpKind = MCK_IntRegs; break;
    case Sparc::L4: OpKind = MCK_IntRegs; break;
    case Sparc::L5: OpKind = MCK_IntRegs; break;
    case Sparc::L6: OpKind = MCK_IntRegs; break;
    case Sparc::L7: OpKind = MCK_IntRegs; break;
    case Sparc::I0: OpKind = MCK_IntRegs; break;
    case Sparc::I1: OpKind = MCK_IntRegs; break;
    case Sparc::I2: OpKind = MCK_IntRegs; break;
    case Sparc::I3: OpKind = MCK_IntRegs; break;
    case Sparc::I4: OpKind = MCK_IntRegs; break;
    case Sparc::I5: OpKind = MCK_IntRegs; break;
    case Sparc::I6: OpKind = MCK_IntRegs; break;
    case Sparc::I7: OpKind = MCK_IntRegs; break;
    case Sparc::F0: OpKind = MCK_FPRegs; break;
    case Sparc::F1: OpKind = MCK_FPRegs; break;
    case Sparc::F2: OpKind = MCK_FPRegs; break;
    case Sparc::F3: OpKind = MCK_FPRegs; break;
    case Sparc::F4: OpKind = MCK_FPRegs; break;
    case Sparc::F5: OpKind = MCK_FPRegs; break;
    case Sparc::F6: OpKind = MCK_FPRegs; break;
    case Sparc::F7: OpKind = MCK_FPRegs; break;
    case Sparc::F8: OpKind = MCK_FPRegs; break;
    case Sparc::F9: OpKind = MCK_FPRegs; break;
    case Sparc::F10: OpKind = MCK_FPRegs; break;
    case Sparc::F11: OpKind = MCK_FPRegs; break;
    case Sparc::F12: OpKind = MCK_FPRegs; break;
    case Sparc::F13: OpKind = MCK_FPRegs; break;
    case Sparc::F14: OpKind = MCK_FPRegs; break;
    case Sparc::F15: OpKind = MCK_FPRegs; break;
    case Sparc::F16: OpKind = MCK_FPRegs; break;
    case Sparc::F17: OpKind = MCK_FPRegs; break;
    case Sparc::F18: OpKind = MCK_FPRegs; break;
    case Sparc::F19: OpKind = MCK_FPRegs; break;
    case Sparc::F20: OpKind = MCK_FPRegs; break;
    case Sparc::F21: OpKind = MCK_FPRegs; break;
    case Sparc::F22: OpKind = MCK_FPRegs; break;
    case Sparc::F23: OpKind = MCK_FPRegs; break;
    case Sparc::F24: OpKind = MCK_FPRegs; break;
    case Sparc::F25: OpKind = MCK_FPRegs; break;
    case Sparc::F26: OpKind = MCK_FPRegs; break;
    case Sparc::F27: OpKind = MCK_FPRegs; break;
    case Sparc::F28: OpKind = MCK_FPRegs; break;
    case Sparc::F29: OpKind = MCK_FPRegs; break;
    case Sparc::F30: OpKind = MCK_FPRegs; break;
    case Sparc::F31: OpKind = MCK_FPRegs; break;
    case Sparc::D0: OpKind = MCK_Reg4; break;
    case Sparc::D1: OpKind = MCK_Reg4; break;
    case Sparc::D2: OpKind = MCK_Reg4; break;
    case Sparc::D3: OpKind = MCK_Reg4; break;
    case Sparc::D4: OpKind = MCK_Reg4; break;
    case Sparc::D5: OpKind = MCK_Reg4; break;
    case Sparc::D6: OpKind = MCK_Reg4; break;
    case Sparc::D7: OpKind = MCK_Reg4; break;
    case Sparc::D8: OpKind = MCK_Reg4; break;
    case Sparc::D9: OpKind = MCK_Reg4; break;
    case Sparc::D10: OpKind = MCK_Reg4; break;
    case Sparc::D11: OpKind = MCK_Reg4; break;
    case Sparc::D12: OpKind = MCK_Reg4; break;
    case Sparc::D13: OpKind = MCK_Reg4; break;
    case Sparc::D14: OpKind = MCK_Reg4; break;
    case Sparc::D15: OpKind = MCK_Reg4; break;
    case Sparc::D16: OpKind = MCK_DFPRegs; break;
    case Sparc::D17: OpKind = MCK_DFPRegs; break;
    case Sparc::D18: OpKind = MCK_DFPRegs; break;
    case Sparc::D19: OpKind = MCK_DFPRegs; break;
    case Sparc::D20: OpKind = MCK_DFPRegs; break;
    case Sparc::D21: OpKind = MCK_DFPRegs; break;
    case Sparc::D22: OpKind = MCK_DFPRegs; break;
    case Sparc::D23: OpKind = MCK_DFPRegs; break;
    case Sparc::D24: OpKind = MCK_DFPRegs; break;
    case Sparc::D25: OpKind = MCK_DFPRegs; break;
    case Sparc::D26: OpKind = MCK_DFPRegs; break;
    case Sparc::D27: OpKind = MCK_DFPRegs; break;
    case Sparc::D28: OpKind = MCK_DFPRegs; break;
    case Sparc::D29: OpKind = MCK_DFPRegs; break;
    case Sparc::D30: OpKind = MCK_DFPRegs; break;
    case Sparc::D31: OpKind = MCK_DFPRegs; break;
    case Sparc::Q0: OpKind = MCK_Reg6; break;
    case Sparc::Q1: OpKind = MCK_Reg6; break;
    case Sparc::Q2: OpKind = MCK_Reg6; break;
    case Sparc::Q3: OpKind = MCK_Reg6; break;
    case Sparc::Q4: OpKind = MCK_Reg6; break;
    case Sparc::Q5: OpKind = MCK_Reg6; break;
    case Sparc::Q6: OpKind = MCK_Reg6; break;
    case Sparc::Q7: OpKind = MCK_Reg6; break;
    case Sparc::Q8: OpKind = MCK_QFPRegs; break;
    case Sparc::Q9: OpKind = MCK_QFPRegs; break;
    case Sparc::Q10: OpKind = MCK_QFPRegs; break;
    case Sparc::Q11: OpKind = MCK_QFPRegs; break;
    case Sparc::Q12: OpKind = MCK_QFPRegs; break;
    case Sparc::Q13: OpKind = MCK_QFPRegs; break;
    case Sparc::Q14: OpKind = MCK_QFPRegs; break;
    case Sparc::Q15: OpKind = MCK_QFPRegs; break;
    case Sparc::G0_G1: OpKind = MCK_IntPair; break;
    case Sparc::G2_G3: OpKind = MCK_IntPair; break;
    case Sparc::G4_G5: OpKind = MCK_IntPair; break;
    case Sparc::G6_G7: OpKind = MCK_IntPair; break;
    case Sparc::O0_O1: OpKind = MCK_IntPair; break;
    case Sparc::O2_O3: OpKind = MCK_IntPair; break;
    case Sparc::O4_O5: OpKind = MCK_IntPair; break;
    case Sparc::O6_O7: OpKind = MCK_IntPair; break;
    case Sparc::L0_L1: OpKind = MCK_IntPair; break;
    case Sparc::L2_L3: OpKind = MCK_IntPair; break;
    case Sparc::L4_L5: OpKind = MCK_IntPair; break;
    case Sparc::L6_L7: OpKind = MCK_IntPair; break;
    case Sparc::I0_I1: OpKind = MCK_IntPair; break;
    case Sparc::I2_I3: OpKind = MCK_IntPair; break;
    case Sparc::I4_I5: OpKind = MCK_IntPair; break;
    case Sparc::I6_I7: OpKind = MCK_IntPair; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t SparcAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[Sparc::FeatureV9]))
    Features |= Feature_HasV9;
  if ((FB[Sparc::FeatureVIS]))
    Features |= Feature_HasVIS;
  if ((FB[Sparc::FeatureVIS2]))
    Features |= Feature_HasVIS2;
  if ((FB[Sparc::FeatureVIS3]))
    Features |= Feature_HasVIS3;
  return Features;
}

static const char *const MnemonicTable =
    "\003add\005addcc\004addx\005addxc\006addxcc\007addxccc\talignaddr\nalig"
    "naddrl\003and\005andcc\004andn\006andncc\007array16\007array32\006array"
    "8\001b\002ba\003bcc\004bclr\003bcs\002be\002bg\003bge\004bgeu\003bgu\002"
    "bl\003ble\004bleu\003blu\005bmask\002bn\003bne\004bneg\003bnz\004bpos\005"
    "brgez\004brgz\005brlez\004brlz\004brnz\003brz\004bset\010bshuffle\004bt"
    "og\004btst\003bvc\003bvs\002bz\004call\003cas\004casx\003clr\004clrb\004"
    "clrh\007cmask16\007cmask32\006cmask8\003cmp\003dec\005deccc\006edge16\007"
    "edge16l\010edge16ln\007edge16n\006edge32\007edge32l\010edge32ln\007edge"
    "32n\005edge8\006edge8l\007edge8ln\006edge8n\005fabsd\005fabsq\005fabss\005"
    "faddd\005faddq\005fadds\nfaligndata\004fand\010fandnot1\tfandnot1s\010f"
    "andnot2\tfandnot2s\005fands\002fb\003fba\003fbe\003fbg\004fbge\003fbl\004"
    "fble\004fblg\003fbn\004fbne\004fbnz\003fbo\003fbu\004fbue\004fbug\005fb"
    "uge\004fbul\005fbule\003fbz\010fchksm16\005fcmpd\006fcmped\006fcmpeq\010"
    "fcmpeq16\010fcmpeq32\006fcmpes\010fcmpgt16\010fcmpgt32\010fcmple16\010f"
    "cmple32\010fcmpne16\010fcmpne32\005fcmpq\005fcmps\005fdivd\005fdivq\005"
    "fdivs\006fdmulq\005fdtoi\005fdtoq\005fdtos\005fdtox\007fexpand\006fhadd"
    "d\006fhadds\006fhsubd\006fhsubs\005fitod\005fitoq\005fitos\006flcmpd\006"
    "flcmps\005flush\006flushw\007fmean16\005fmovd\006fmovda\007fmovdcc\007f"
    "movdcs\006fmovde\006fmovdg\007fmovdge\010fmovdgeu\007fmovdgu\006fmovdl\007"
    "fmovdle\010fmovdleu\007fmovdlg\007fmovdlu\006fmovdn\007fmovdne\010fmovd"
    "neg\007fmovdnz\006fmovdo\010fmovdpos\006fmovdu\007fmovdue\007fmovdug\010"
    "fmovduge\007fmovdul\010fmovdule\007fmovdvc\007fmovdvs\006fmovdz\005fmov"
    "q\006fmovqa\007fmovqcc\007fmovqcs\006fmovqe\006fmovqg\007fmovqge\010fmo"
    "vqgeu\007fmovqgu\006fmovql\007fmovqle\010fmovqleu\007fmovqlg\007fmovqlu"
    "\006fmovqn\007fmovqne\010fmovqneg\007fmovqnz\006fmovqo\010fmovqpos\006f"
    "movqu\007fmovque\007fmovqug\010fmovquge\007fmovqul\010fmovqule\007fmovq"
    "vc\007fmovqvs\006fmovqz\tfmovrdgez\010fmovrdgz\tfmovrdlez\010fmovrdlz\010"
    "fmovrdnz\007fmovrdz\tfmovrqgez\010fmovrqgz\tfmovrqlez\010fmovrqlz\010fm"
    "ovrqnz\007fmovrqz\tfmovrsgez\010fmovrsgz\tfmovrslez\010fmovrslz\010fmov"
    "rsnz\007fmovrsz\005fmovs\006fmovsa\007fmovscc\007fmovscs\006fmovse\006f"
    "movsg\007fmovsge\010fmovsgeu\007fmovsgu\006fmovsl\007fmovsle\010fmovsle"
    "u\007fmovslg\007fmovslu\006fmovsn\007fmovsne\010fmovsneg\007fmovsnz\006"
    "fmovso\010fmovspos\006fmovsu\007fmovsue\007fmovsug\010fmovsuge\007fmovs"
    "ul\010fmovsule\007fmovsvc\007fmovsvs\006fmovsz\nfmul8sux16\nfmul8ulx16\010"
    "fmul8x16\nfmul8x16al\nfmul8x16au\005fmuld\013fmuld8sux16\013fmuld8ulx16"
    "\005fmulq\005fmuls\006fnaddd\006fnadds\005fnand\006fnands\005fnegd\005f"
    "negq\005fnegs\007fnhaddd\007fnhadds\004fnor\005fnors\005fnot1\006fnot1s"
    "\005fnot2\006fnot2s\004fone\005fones\003for\007fornot1\010fornot1s\007f"
    "ornot2\010fornot2s\004fors\007fpack16\007fpack32\010fpackfix\007fpadd16"
    "\010fpadd16s\007fpadd32\010fpadd32s\007fpadd64\007fpmerge\007fpsub16\010"
    "fpsub16S\007fpsub32\010fpsub32S\005fqtod\005fqtoi\005fqtos\005fqtox\007"
    "fslas16\007fslas32\006fsll16\006fsll32\006fsmuld\006fsqrtd\006fsqrtq\006"
    "fsqrts\006fsra16\006fsra32\005fsrc1\006fsrc1s\005fsrc2\006fsrc2s\006fsr"
    "l16\006fsrl32\005fstod\005fstoi\005fstoq\005fstox\005fsubd\005fsubq\005"
    "fsubs\005fxnor\006fxnors\004fxor\005fxors\005fxtod\005fxtoq\005fxtos\005"
    "fzero\006fzeros\003inc\005inccc\003jmp\004jmpl\002ld\003lda\003ldd\004l"
    "dda\003ldq\004ldqa\004ldsb\005ldsba\004ldsh\005ldsha\006ldstub\007ldstu"
    "ba\004ldsw\004ldub\005lduba\004lduh\005lduha\003ldx\005lzcnt\006membar\003"
    "mov\004mova\005movcc\005movcs\007movdtox\004move\004movg\005movge\006mo"
    "vgeu\005movgu\004movl\005movle\006movleu\005movlg\005movlu\004movn\005m"
    "ovne\006movneg\005movnz\004movo\006movpos\007movrgez\006movrgz\007movrl"
    "ez\006movrlz\006movrnz\005movrz\010movstosw\010movstouw\004movu\005movu"
    "e\005movug\006movuge\005movul\006movule\005movvc\005movvs\004movz\004mu"
    "lx\003neg\003nop\003not\002or\004orcc\003orn\005orncc\005pdist\006pdist"
    "n\004popc\002rd\007restore\003ret\004retl\004rett\004save\004sdiv\006sd"
    "ivcc\005sdivx\003set\005sethi\010shutdown\004siam\005signx\003sll\004sl"
    "lx\004smul\006smulcc\003sra\004srax\003srl\004srlx\002st\003sta\003stb\004"
    "stba\005stbar\003std\004stda\003sth\004stha\003stq\004stqa\003stx\003su"
    "b\005subcc\004subx\006subxcc\004swap\005swapa\001t\002ta\006taddcc\010t"
    "addcctv\003tcc\003tcs\002te\002tg\003tge\004tgeu\003tgu\002tl\003tle\004"
    "tleu\003tlu\002tn\003tne\004tneg\003tnz\004tpos\003tst\006tsubcc\010tsu"
    "bcctv\003tvc\003tvs\002tz\004udiv\006udivcc\005udivx\004umul\006umulcc\007"
    "umulxhi\005unimp\002wr\005xmulx\007xmulxhi\004xnor\006xnorcc\003xor\005"
    "xorcc";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint8_t RequiredFeatures;
    uint8_t Classes[5];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* add */, Sparc::ADDrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 0 /* add */, Sparc::ADDri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 4 /* addcc */, Sparc::ADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 4 /* addcc */, Sparc::ADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 10 /* addx */, Sparc::ADDCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 10 /* addx */, Sparc::ADDCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 15 /* addxc */, Sparc::ADDXC, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, Sparc::ADDErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 21 /* addxcc */, Sparc::ADDEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 28 /* addxccc */, Sparc::ADDXCCC, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 36 /* alignaddr */, Sparc::ALIGNADDR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 46 /* alignaddrl */, Sparc::ALIGNADDRL, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, Sparc::ANDrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 57 /* and */, Sparc::ANDri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 61 /* andcc */, Sparc::ANDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 61 /* andcc */, Sparc::ANDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 67 /* andn */, Sparc::ANDNrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 67 /* andn */, Sparc::ANDNri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 72 /* andncc */, Sparc::ANDNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 72 /* andncc */, Sparc::ANDNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 79 /* array16 */, Sparc::ARRAY16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 87 /* array32 */, Sparc::ARRAY32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 95 /* array8 */, Sparc::ARRAY8, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 102 /* b */, Sparc::BCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 102 /* b */, Sparc::BPICC, Convert__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCC, Convert__Imm1_1__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 102 /* b */, Sparc::BCOND, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCA, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_8, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_8, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICC, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCC, Convert__Imm1_2__imm_95_8, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICC, Convert__Imm1_2__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCC, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BCONDA, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCA, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCA, Convert__Imm1_3__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCA, Convert__Imm1_3__Imm1_0, 0, { MCK_Imm, MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCNT, Convert__Imm1_3__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCNT, Convert__Imm1_3__Imm1_0, 0, { MCK_Imm, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPICCANT, Convert__Imm1_4__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 102 /* b */, Sparc::BPXCCANT, Convert__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BA, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 104 /* ba */, Sparc::BCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICC, Convert__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCC, Convert__Imm1_1__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCA, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_8, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_8, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICC, Convert__Imm1_2__imm_95_8, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCC, Convert__Imm1_2__imm_95_8, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPICCA, Convert__Imm1_3__imm_95_8, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 104 /* ba */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_8, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICC, Convert__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCC, Convert__Imm1_1__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCA, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_13, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_13, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICC, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCC, Convert__Imm1_2__imm_95_13, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPICCA, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 107 /* bcc */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 111 /* bclr */, Sparc::ANDNrr, Convert__Reg1_1__Reg1_1__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 111 /* bclr */, Sparc::ANDNri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 116 /* bcs */, Sparc::BCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPICC, Convert__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPXCC, Convert__Imm1_1__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPICCA, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_5, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_5, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPICC, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPXCC, Convert__Imm1_2__imm_95_5, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPICCA, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 116 /* bcs */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, Sparc::BCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 120 /* be */, Sparc::BPICC, Convert__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPXCC, Convert__Imm1_1__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, Sparc::BCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 120 /* be */, Sparc::BPICCA, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_1, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_1, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPICC, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPXCC, Convert__Imm1_2__imm_95_1, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPICCA, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 120 /* be */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BCOND, Convert__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 123 /* bg */, Sparc::BPICC, Convert__Imm1_1__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPXCC, Convert__Imm1_1__imm_95_10, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BCONDA, Convert__Imm1_1__imm_95_10, 0, { MCK_a, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPICCA, Convert__Imm1_2__imm_95_10, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_10, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_10, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_10, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPICC, Convert__Imm1_2__imm_95_10, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPXCC, Convert__Imm1_2__imm_95_10, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_10, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_10, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPICCA, Convert__Imm1_3__imm_95_10, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 123 /* bg */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_10, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BCOND, Convert__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 126 /* bge */, Sparc::BPICC, Convert__Imm1_1__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPXCC, Convert__Imm1_1__imm_95_11, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BCONDA, Convert__Imm1_1__imm_95_11, 0, { MCK_a, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPICCA, Convert__Imm1_2__imm_95_11, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_11, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_11, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_11, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPICC, Convert__Imm1_2__imm_95_11, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPXCC, Convert__Imm1_2__imm_95_11, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_11, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_11, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPICCA, Convert__Imm1_3__imm_95_11, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 126 /* bge */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_11, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPICC, Convert__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPXCC, Convert__Imm1_1__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPICCA, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_13, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_13, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPICC, Convert__Imm1_2__imm_95_13, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPXCC, Convert__Imm1_2__imm_95_13, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPICCA, Convert__Imm1_3__imm_95_13, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 130 /* bgeu */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_13, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BCOND, Convert__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPICC, Convert__Imm1_1__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPXCC, Convert__Imm1_1__imm_95_12, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BCONDA, Convert__Imm1_1__imm_95_12, 0, { MCK_a, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPICCA, Convert__Imm1_2__imm_95_12, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_12, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_12, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_12, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPICC, Convert__Imm1_2__imm_95_12, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPXCC, Convert__Imm1_2__imm_95_12, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_12, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_12, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPICCA, Convert__Imm1_3__imm_95_12, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 135 /* bgu */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_12, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BCOND, Convert__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 139 /* bl */, Sparc::BPICC, Convert__Imm1_1__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPXCC, Convert__Imm1_1__imm_95_3, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BCONDA, Convert__Imm1_1__imm_95_3, 0, { MCK_a, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPICCA, Convert__Imm1_2__imm_95_3, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_3, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_3, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_3, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPICC, Convert__Imm1_2__imm_95_3, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPXCC, Convert__Imm1_2__imm_95_3, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_3, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_3, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPICCA, Convert__Imm1_3__imm_95_3, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 139 /* bl */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_3, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BCOND, Convert__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 142 /* ble */, Sparc::BPICC, Convert__Imm1_1__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPXCC, Convert__Imm1_1__imm_95_2, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BCONDA, Convert__Imm1_1__imm_95_2, 0, { MCK_a, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPICCA, Convert__Imm1_2__imm_95_2, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_2, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_2, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_2, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPICC, Convert__Imm1_2__imm_95_2, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPXCC, Convert__Imm1_2__imm_95_2, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_2, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_2, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPICCA, Convert__Imm1_3__imm_95_2, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 142 /* ble */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_2, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BCOND, Convert__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPICC, Convert__Imm1_1__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPXCC, Convert__Imm1_1__imm_95_4, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BCONDA, Convert__Imm1_1__imm_95_4, 0, { MCK_a, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPICCA, Convert__Imm1_2__imm_95_4, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_4, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_4, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_4, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPICC, Convert__Imm1_2__imm_95_4, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPXCC, Convert__Imm1_2__imm_95_4, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_4, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_4, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPICCA, Convert__Imm1_3__imm_95_4, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 146 /* bleu */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_4, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 151 /* blu */, Sparc::BPICC, Convert__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPXCC, Convert__Imm1_1__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPICCA, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_5, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_5, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPICC, Convert__Imm1_2__imm_95_5, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPXCC, Convert__Imm1_2__imm_95_5, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPICCA, Convert__Imm1_3__imm_95_5, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 151 /* blu */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_5, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 155 /* bmask */, Sparc::BMASK, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 161 /* bn */, Sparc::BCOND, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 161 /* bn */, Sparc::BPICC, Convert__Imm1_1__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPXCC, Convert__Imm1_1__imm_95_0, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BCONDA, Convert__Imm1_1__imm_95_0, 0, { MCK_a, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPICCA, Convert__Imm1_2__imm_95_0, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_0, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_0, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_0, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPICC, Convert__Imm1_2__imm_95_0, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPXCC, Convert__Imm1_2__imm_95_0, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_0, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_0, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPICCA, Convert__Imm1_3__imm_95_0, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 161 /* bn */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_0, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 164 /* bne */, Sparc::BPICC, Convert__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPXCC, Convert__Imm1_1__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPICCA, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_9, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_9, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPICC, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPXCC, Convert__Imm1_2__imm_95_9, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPICCA, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 164 /* bne */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BCOND, Convert__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPICC, Convert__Imm1_1__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPXCC, Convert__Imm1_1__imm_95_6, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BCONDA, Convert__Imm1_1__imm_95_6, 0, { MCK_a, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPICCA, Convert__Imm1_2__imm_95_6, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_6, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_6, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_6, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPICC, Convert__Imm1_2__imm_95_6, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPXCC, Convert__Imm1_2__imm_95_6, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_6, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_6, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPICCA, Convert__Imm1_3__imm_95_6, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 168 /* bneg */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_6, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPICC, Convert__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPXCC, Convert__Imm1_1__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPICCA, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_9, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_9, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPICC, Convert__Imm1_2__imm_95_9, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPXCC, Convert__Imm1_2__imm_95_9, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPICCA, Convert__Imm1_3__imm_95_9, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 173 /* bnz */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_9, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BCOND, Convert__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPICC, Convert__Imm1_1__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPXCC, Convert__Imm1_1__imm_95_14, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BCONDA, Convert__Imm1_1__imm_95_14, 0, { MCK_a, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPICCA, Convert__Imm1_2__imm_95_14, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_14, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_14, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_14, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPICC, Convert__Imm1_2__imm_95_14, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPXCC, Convert__Imm1_2__imm_95_14, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_14, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_14, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPICCA, Convert__Imm1_3__imm_95_14, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 177 /* bpos */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_14, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 182 /* brgez */, Sparc::BPGEZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 182 /* brgez */, Sparc::BPGEZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 182 /* brgez */, Sparc::BPGEZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 182 /* brgez */, Sparc::BPGEZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 182 /* brgez */, Sparc::BPGEZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 182 /* brgez */, Sparc::BPGEZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brgz */, Sparc::BPGZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 188 /* brgz */, Sparc::BPGZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brgz */, Sparc::BPGZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brgz */, Sparc::BPGZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brgz */, Sparc::BPGZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 188 /* brgz */, Sparc::BPGZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 193 /* brlez */, Sparc::BPLEZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 193 /* brlez */, Sparc::BPLEZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 193 /* brlez */, Sparc::BPLEZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 193 /* brlez */, Sparc::BPLEZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 193 /* brlez */, Sparc::BPLEZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 193 /* brlez */, Sparc::BPLEZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brlz */, Sparc::BPLZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 199 /* brlz */, Sparc::BPLZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brlz */, Sparc::BPLZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brlz */, Sparc::BPLZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brlz */, Sparc::BPLZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 199 /* brlz */, Sparc::BPLZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brnz */, Sparc::BPNZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 204 /* brnz */, Sparc::BPNZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brnz */, Sparc::BPNZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brnz */, Sparc::BPNZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brnz */, Sparc::BPNZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 204 /* brnz */, Sparc::BPNZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 209 /* brz */, Sparc::BPZnapt, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 209 /* brz */, Sparc::BPZapt, Convert__Reg1_1__Imm1_2, 0, { MCK_a, MCK_IntRegs, MCK_Imm }, },
  { 209 /* brz */, Sparc::BPZnapn, Convert__Reg1_1__Imm1_2, 0, { MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 209 /* brz */, Sparc::BPZnapt, Convert__Reg1_1__Imm1_2, 0, { MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 209 /* brz */, Sparc::BPZapn, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pn, MCK_IntRegs, MCK_Imm }, },
  { 209 /* brz */, Sparc::BPZapt, Convert__Reg1_2__Imm1_3, 0, { MCK_a, MCK_pt, MCK_IntRegs, MCK_Imm }, },
  { 213 /* bset */, Sparc::ORrr, Convert__Reg1_1__Reg1_1__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 213 /* bset */, Sparc::ORri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 218 /* bshuffle */, Sparc::BSHUFFLE, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 227 /* btog */, Sparc::XORrr, Convert__Reg1_1__Reg1_1__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 227 /* btog */, Sparc::XORri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 232 /* btst */, Sparc::ANDCCrr, Convert__regG0__Reg1_1__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 232 /* btst */, Sparc::ANDCCri, Convert__regG0__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 237 /* bvc */, Sparc::BCOND, Convert__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPICC, Convert__Imm1_1__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPXCC, Convert__Imm1_1__imm_95_15, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BCONDA, Convert__Imm1_1__imm_95_15, 0, { MCK_a, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPICCA, Convert__Imm1_2__imm_95_15, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_15, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_15, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_15, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPICC, Convert__Imm1_2__imm_95_15, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPXCC, Convert__Imm1_2__imm_95_15, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_15, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_15, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPICCA, Convert__Imm1_3__imm_95_15, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 237 /* bvc */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_15, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BCOND, Convert__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPICC, Convert__Imm1_1__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPXCC, Convert__Imm1_1__imm_95_7, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BCONDA, Convert__Imm1_1__imm_95_7, 0, { MCK_a, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPICCA, Convert__Imm1_2__imm_95_7, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_7, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_7, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_7, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPICC, Convert__Imm1_2__imm_95_7, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPXCC, Convert__Imm1_2__imm_95_7, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_7, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_7, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPICCA, Convert__Imm1_3__imm_95_7, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 241 /* bvs */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_7, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 245 /* bz */, Sparc::BPICC, Convert__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPXCC, Convert__Imm1_1__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPICCA, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_a, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPXCCA, Convert__Imm1_2__imm_95_1, 0, { MCK_a, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPICCNT, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPXCCNT, Convert__Imm1_2__imm_95_1, 0, { MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPICC, Convert__Imm1_2__imm_95_1, Feature_HasV9, { MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPXCC, Convert__Imm1_2__imm_95_1, 0, { MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPICCANT, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pn, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPXCCANT, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pn, MCK__PCT_xcc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPICCA, Convert__Imm1_3__imm_95_1, Feature_HasV9, { MCK_a, MCK_pt, MCK__PCT_icc, MCK_Imm }, },
  { 245 /* bz */, Sparc::BPXCCA, Convert__Imm1_3__imm_95_1, 0, { MCK_a, MCK_pt, MCK__PCT_xcc, MCK_Imm }, },
  { 248 /* call */, Sparc::CALL, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 248 /* call */, Sparc::JMPLri, Convert__regO7__MEMri2_0, 0, { MCK_MEMri }, },
  { 248 /* call */, Sparc::JMPLrr, Convert__regO7__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 253 /* cas */, Sparc::CASrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0, Feature_HasV9, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 257 /* casx */, Sparc::CASXrr, Convert__Reg1_4__Reg1_1__Reg1_3__Tie0, 0, { MCK__91_, MCK_IntRegs, MCK__93_, MCK_IntRegs, MCK_IntRegs }, },
  { 262 /* clr */, Sparc::ORrr, Convert__Reg1_0__regG0__regG0, 0, { MCK_IntRegs }, },
  { 262 /* clr */, Sparc::STri, Convert__MEMri2_1__regG0, 0, { MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 262 /* clr */, Sparc::STrr, Convert__MEMrr2_1__regG0, 0, { MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 266 /* clrb */, Sparc::STBri, Convert__MEMri2_1__regG0, 0, { MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 266 /* clrb */, Sparc::STBrr, Convert__MEMrr2_1__regG0, 0, { MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 271 /* clrh */, Sparc::STHri, Convert__MEMri2_1__regG0, 0, { MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 271 /* clrh */, Sparc::STHrr, Convert__MEMrr2_1__regG0, 0, { MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 276 /* cmask16 */, Sparc::CMASK16, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 284 /* cmask32 */, Sparc::CMASK32, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 292 /* cmask8 */, Sparc::CMASK8, Convert__Reg1_0, Feature_HasVIS3, { MCK_IntRegs }, },
  { 299 /* cmp */, Sparc::CMPrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 299 /* cmp */, Sparc::CMPri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm }, },
  { 303 /* dec */, Sparc::SUBri, Convert__Reg1_0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 303 /* dec */, Sparc::SUBri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 307 /* deccc */, Sparc::SUBCCri, Convert__Reg1_0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 307 /* deccc */, Sparc::SUBCCri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 313 /* edge16 */, Sparc::EDGE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 320 /* edge16l */, Sparc::EDGE16L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 328 /* edge16ln */, Sparc::EDGE16LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 337 /* edge16n */, Sparc::EDGE16N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 345 /* edge32 */, Sparc::EDGE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 352 /* edge32l */, Sparc::EDGE32L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 360 /* edge32ln */, Sparc::EDGE32LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 369 /* edge32n */, Sparc::EDGE32N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 377 /* edge8 */, Sparc::EDGE8, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 383 /* edge8l */, Sparc::EDGE8L, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 390 /* edge8ln */, Sparc::EDGE8LN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 398 /* edge8n */, Sparc::EDGE8N, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS2, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 405 /* fabsd */, Sparc::FABSD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 411 /* fabsq */, Sparc::FABSQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 417 /* fabss */, Sparc::FABSS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 423 /* faddd */, Sparc::FADDD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 429 /* faddq */, Sparc::FADDQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 435 /* fadds */, Sparc::FADDS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 441 /* faligndata */, Sparc::FALIGNADATA, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 452 /* fand */, Sparc::FAND, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 457 /* fandnot1 */, Sparc::FANDNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 466 /* fandnot1s */, Sparc::FANDNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 476 /* fandnot2 */, Sparc::FANDNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 485 /* fandnot2s */, Sparc::FANDNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 495 /* fands */, Sparc::FANDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 501 /* fb */, Sparc::FBCOND, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 501 /* fb */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_0, 0, { MCK_a, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCC, Convert__Imm1_1__imm_95_0__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 501 /* fb */, Sparc::FBCOND, Convert__Imm1_1__Imm1_0, 0, { MCK_Imm, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCC, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 501 /* fb */, Sparc::FBCONDA, Convert__Imm1_2__Imm1_0, 0, { MCK_Imm, MCK_a, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCC, Convert__Imm1_2__Imm1_0__Reg1_1, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCCA, Convert__Imm1_3__Imm1_0__Reg1_2, Feature_HasV9, { MCK_Imm, MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCCNT, Convert__Imm1_3__Imm1_0__Reg1_2, Feature_HasV9, { MCK_Imm, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 501 /* fb */, Sparc::BPFCCANT, Convert__Imm1_4__Imm1_0__Reg1_3, Feature_HasV9, { MCK_Imm, MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 504 /* fba */, Sparc::FBCOND, Convert__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 504 /* fba */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_0, 0, { MCK_a, MCK_Imm }, },
  { 504 /* fba */, Sparc::BPFCC, Convert__Imm1_1__imm_95_0__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 504 /* fba */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 504 /* fba */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 504 /* fba */, Sparc::BPFCC, Convert__Imm1_2__imm_95_0__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 504 /* fba */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 504 /* fba */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_0__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbe */, Sparc::FBCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 508 /* fbe */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 508 /* fbe */, Sparc::BPFCC, Convert__Imm1_1__imm_95_9__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbe */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbe */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbe */, Sparc::BPFCC, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbe */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 508 /* fbe */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 512 /* fbg */, Sparc::FBCOND, Convert__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 512 /* fbg */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_6, 0, { MCK_a, MCK_Imm }, },
  { 512 /* fbg */, Sparc::BPFCC, Convert__Imm1_1__imm_95_6__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 512 /* fbg */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_6__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 512 /* fbg */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_6__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 512 /* fbg */, Sparc::BPFCC, Convert__Imm1_2__imm_95_6__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 512 /* fbg */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_6__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 512 /* fbg */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_6__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 516 /* fbge */, Sparc::FBCOND, Convert__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 516 /* fbge */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_11, 0, { MCK_a, MCK_Imm }, },
  { 516 /* fbge */, Sparc::BPFCC, Convert__Imm1_1__imm_95_11__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 516 /* fbge */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_11__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 516 /* fbge */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_11__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 516 /* fbge */, Sparc::BPFCC, Convert__Imm1_2__imm_95_11__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 516 /* fbge */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_11__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 516 /* fbge */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_11__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 521 /* fbl */, Sparc::FBCOND, Convert__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 521 /* fbl */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_4, 0, { MCK_a, MCK_Imm }, },
  { 521 /* fbl */, Sparc::BPFCC, Convert__Imm1_1__imm_95_4__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 521 /* fbl */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_4__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 521 /* fbl */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_4__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 521 /* fbl */, Sparc::BPFCC, Convert__Imm1_2__imm_95_4__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 521 /* fbl */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_4__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 521 /* fbl */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_4__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 525 /* fble */, Sparc::FBCOND, Convert__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 525 /* fble */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_13, 0, { MCK_a, MCK_Imm }, },
  { 525 /* fble */, Sparc::BPFCC, Convert__Imm1_1__imm_95_13__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 525 /* fble */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_13__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 525 /* fble */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_13__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 525 /* fble */, Sparc::BPFCC, Convert__Imm1_2__imm_95_13__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 525 /* fble */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_13__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 525 /* fble */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_13__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 530 /* fblg */, Sparc::FBCOND, Convert__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 530 /* fblg */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_2, 0, { MCK_a, MCK_Imm }, },
  { 530 /* fblg */, Sparc::BPFCC, Convert__Imm1_1__imm_95_2__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 530 /* fblg */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_2__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 530 /* fblg */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_2__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 530 /* fblg */, Sparc::BPFCC, Convert__Imm1_2__imm_95_2__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 530 /* fblg */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_2__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 530 /* fblg */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_2__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 535 /* fbn */, Sparc::FBCOND, Convert__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 535 /* fbn */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_8, 0, { MCK_a, MCK_Imm }, },
  { 535 /* fbn */, Sparc::BPFCC, Convert__Imm1_1__imm_95_8__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 535 /* fbn */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 535 /* fbn */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 535 /* fbn */, Sparc::BPFCC, Convert__Imm1_2__imm_95_8__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 535 /* fbn */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 535 /* fbn */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_8__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 539 /* fbne */, Sparc::FBCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 539 /* fbne */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 539 /* fbne */, Sparc::BPFCC, Convert__Imm1_1__imm_95_1__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 539 /* fbne */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 539 /* fbne */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 539 /* fbne */, Sparc::BPFCC, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 539 /* fbne */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 539 /* fbne */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 544 /* fbnz */, Sparc::FBCOND, Convert__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 544 /* fbnz */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_1, 0, { MCK_a, MCK_Imm }, },
  { 544 /* fbnz */, Sparc::BPFCC, Convert__Imm1_1__imm_95_1__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 544 /* fbnz */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 544 /* fbnz */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 544 /* fbnz */, Sparc::BPFCC, Convert__Imm1_2__imm_95_1__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 544 /* fbnz */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 544 /* fbnz */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_1__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 549 /* fbo */, Sparc::FBCOND, Convert__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 549 /* fbo */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_15, 0, { MCK_a, MCK_Imm }, },
  { 549 /* fbo */, Sparc::BPFCC, Convert__Imm1_1__imm_95_15__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 549 /* fbo */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_15__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 549 /* fbo */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_15__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 549 /* fbo */, Sparc::BPFCC, Convert__Imm1_2__imm_95_15__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 549 /* fbo */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_15__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 549 /* fbo */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_15__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 553 /* fbu */, Sparc::FBCOND, Convert__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 553 /* fbu */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_7, 0, { MCK_a, MCK_Imm }, },
  { 553 /* fbu */, Sparc::BPFCC, Convert__Imm1_1__imm_95_7__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 553 /* fbu */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_7__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 553 /* fbu */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_7__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 553 /* fbu */, Sparc::BPFCC, Convert__Imm1_2__imm_95_7__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 553 /* fbu */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_7__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 553 /* fbu */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_7__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 557 /* fbue */, Sparc::FBCOND, Convert__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 557 /* fbue */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_10, 0, { MCK_a, MCK_Imm }, },
  { 557 /* fbue */, Sparc::BPFCC, Convert__Imm1_1__imm_95_10__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 557 /* fbue */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_10__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 557 /* fbue */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_10__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 557 /* fbue */, Sparc::BPFCC, Convert__Imm1_2__imm_95_10__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 557 /* fbue */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_10__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 557 /* fbue */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_10__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 562 /* fbug */, Sparc::FBCOND, Convert__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 562 /* fbug */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_5, 0, { MCK_a, MCK_Imm }, },
  { 562 /* fbug */, Sparc::BPFCC, Convert__Imm1_1__imm_95_5__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 562 /* fbug */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_5__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 562 /* fbug */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_5__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 562 /* fbug */, Sparc::BPFCC, Convert__Imm1_2__imm_95_5__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 562 /* fbug */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_5__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 562 /* fbug */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_5__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 567 /* fbuge */, Sparc::FBCOND, Convert__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 567 /* fbuge */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_12, 0, { MCK_a, MCK_Imm }, },
  { 567 /* fbuge */, Sparc::BPFCC, Convert__Imm1_1__imm_95_12__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 567 /* fbuge */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_12__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 567 /* fbuge */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_12__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 567 /* fbuge */, Sparc::BPFCC, Convert__Imm1_2__imm_95_12__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 567 /* fbuge */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_12__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 567 /* fbuge */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_12__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 573 /* fbul */, Sparc::FBCOND, Convert__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 573 /* fbul */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_3, 0, { MCK_a, MCK_Imm }, },
  { 573 /* fbul */, Sparc::BPFCC, Convert__Imm1_1__imm_95_3__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 573 /* fbul */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_3__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 573 /* fbul */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_3__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 573 /* fbul */, Sparc::BPFCC, Convert__Imm1_2__imm_95_3__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 573 /* fbul */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_3__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 573 /* fbul */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_3__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 578 /* fbule */, Sparc::FBCOND, Convert__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 578 /* fbule */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_14, 0, { MCK_a, MCK_Imm }, },
  { 578 /* fbule */, Sparc::BPFCC, Convert__Imm1_1__imm_95_14__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 578 /* fbule */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_14__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 578 /* fbule */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_14__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 578 /* fbule */, Sparc::BPFCC, Convert__Imm1_2__imm_95_14__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 578 /* fbule */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_14__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 578 /* fbule */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_14__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 584 /* fbz */, Sparc::FBCOND, Convert__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 584 /* fbz */, Sparc::FBCONDA, Convert__Imm1_1__imm_95_9, 0, { MCK_a, MCK_Imm }, },
  { 584 /* fbz */, Sparc::BPFCC, Convert__Imm1_1__imm_95_9__Reg1_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm }, },
  { 584 /* fbz */, Sparc::BPFCCA, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_a, MCK_FCCRegs, MCK_Imm }, },
  { 584 /* fbz */, Sparc::BPFCCNT, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 584 /* fbz */, Sparc::BPFCC, Convert__Imm1_2__imm_95_9__Reg1_1, Feature_HasV9, { MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 584 /* fbz */, Sparc::BPFCCANT, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pn, MCK_FCCRegs, MCK_Imm }, },
  { 584 /* fbz */, Sparc::BPFCCA, Convert__Imm1_3__imm_95_9__Reg1_2, Feature_HasV9, { MCK_a, MCK_pt, MCK_FCCRegs, MCK_Imm }, },
  { 588 /* fchksm16 */, Sparc::FCHKSM16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 597 /* fcmpd */, Sparc::V9FCMPD, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 597 /* fcmpd */, Sparc::V9FCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 603 /* fcmped */, Sparc::V9FCMPED, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 603 /* fcmped */, Sparc::V9FCMPED, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 610 /* fcmpeq */, Sparc::V9FCMPEQ, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 610 /* fcmpeq */, Sparc::V9FCMPEQ, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 617 /* fcmpeq16 */, Sparc::FCMPEQ16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 626 /* fcmpeq32 */, Sparc::FCMPEQ32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 635 /* fcmpes */, Sparc::V9FCMPES, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 635 /* fcmpes */, Sparc::V9FCMPES, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 642 /* fcmpgt16 */, Sparc::FCMPGT16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 651 /* fcmpgt32 */, Sparc::FCMPGT32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 660 /* fcmple16 */, Sparc::FCMPLE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 669 /* fcmple32 */, Sparc::FCMPLE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 678 /* fcmpne16 */, Sparc::FCMPNE16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 687 /* fcmpne32 */, Sparc::FCMPNE32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_IntRegs }, },
  { 696 /* fcmpq */, Sparc::V9FCMPQ, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 696 /* fcmpq */, Sparc::V9FCMPQ, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 702 /* fcmps */, Sparc::V9FCMPS, Convert__regFCC0__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 702 /* fcmps */, Sparc::V9FCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, 0, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 708 /* fdivd */, Sparc::FDIVD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 714 /* fdivq */, Sparc::FDIVQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 720 /* fdivs */, Sparc::FDIVS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 726 /* fdmulq */, Sparc::FDMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_QFPRegs }, },
  { 733 /* fdtoi */, Sparc::FDTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 739 /* fdtoq */, Sparc::FDTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 745 /* fdtos */, Sparc::FDTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 751 /* fdtox */, Sparc::FDTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 757 /* fexpand */, Sparc::FEXPAND, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 765 /* fhaddd */, Sparc::FHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 772 /* fhadds */, Sparc::FHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 779 /* fhsubd */, Sparc::FHSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 786 /* fhsubs */, Sparc::FHSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 793 /* fitod */, Sparc::FITOD, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 799 /* fitoq */, Sparc::FITOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_QFPRegs }, },
  { 805 /* fitos */, Sparc::FITOS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 811 /* flcmpd */, Sparc::FLCMPD, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 818 /* flcmps */, Sparc::FLCMPS, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_HasVIS3, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 825 /* flush */, Sparc::FLUSH, Convert_NoOperands, 0, {  }, },
  { 825 /* flush */, Sparc::FLUSH, Convert_NoOperands, 0, { MCK__PCT_g0 }, },
  { 825 /* flush */, Sparc::FLUSHri, Convert__MEMri2_0, 0, { MCK_MEMri }, },
  { 825 /* flush */, Sparc::FLUSHrr, Convert__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 831 /* flushw */, Sparc::FLUSHW, Convert_NoOperands, Feature_HasV9, {  }, },
  { 838 /* fmean16 */, Sparc::FMEAN16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 846 /* fmovd */, Sparc::FMOVD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 846 /* fmovd */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 846 /* fmovd */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 846 /* fmovd */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 846 /* fmovd */, Sparc::FMOVD_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_DFPRegs, MCK_DFPRegs }, },
  { 846 /* fmovd */, Sparc::FMOVD_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 846 /* fmovd */, Sparc::FMOVD_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 846 /* fmovd */, Sparc::V9FMOVD_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 852 /* fmovda */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 852 /* fmovda */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 852 /* fmovda */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 859 /* fmovdcc */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 859 /* fmovdcc */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 867 /* fmovdcs */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 867 /* fmovdcs */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 875 /* fmovde */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 875 /* fmovde */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 875 /* fmovde */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 882 /* fmovdg */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 882 /* fmovdg */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 882 /* fmovdg */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 889 /* fmovdge */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 889 /* fmovdge */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 889 /* fmovdge */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 897 /* fmovdgeu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 897 /* fmovdgeu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 906 /* fmovdgu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 906 /* fmovdgu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 914 /* fmovdl */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 914 /* fmovdl */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 914 /* fmovdl */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 921 /* fmovdle */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 921 /* fmovdle */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 921 /* fmovdle */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 929 /* fmovdleu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 929 /* fmovdleu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 938 /* fmovdlg */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 946 /* fmovdlu */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 946 /* fmovdlu */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 954 /* fmovdn */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 954 /* fmovdn */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 954 /* fmovdn */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 961 /* fmovdne */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 961 /* fmovdne */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 961 /* fmovdne */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 969 /* fmovdneg */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 969 /* fmovdneg */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 978 /* fmovdnz */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 978 /* fmovdnz */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 978 /* fmovdnz */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 986 /* fmovdo */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 993 /* fmovdpos */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 993 /* fmovdpos */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1002 /* fmovdu */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1009 /* fmovdue */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1017 /* fmovdug */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1025 /* fmovduge */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1034 /* fmovdul */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1042 /* fmovdule */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1051 /* fmovdvc */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1051 /* fmovdvc */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1059 /* fmovdvs */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1059 /* fmovdvs */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1067 /* fmovdz */, Sparc::FMOVD_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1067 /* fmovdz */, Sparc::FMOVD_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1067 /* fmovdz */, Sparc::V9FMOVD_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1074 /* fmovq */, Sparc::FMOVQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1074 /* fmovq */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1074 /* fmovq */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1074 /* fmovq */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1074 /* fmovq */, Sparc::FMOVQ_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1074 /* fmovq */, Sparc::FMOVQ_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1074 /* fmovq */, Sparc::FMOVQ_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1074 /* fmovq */, Sparc::V9FMOVQ_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1080 /* fmovqa */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1080 /* fmovqa */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1080 /* fmovqa */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1087 /* fmovqcc */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1087 /* fmovqcc */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1095 /* fmovqcs */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1095 /* fmovqcs */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1103 /* fmovqe */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1103 /* fmovqe */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1103 /* fmovqe */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1110 /* fmovqg */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1110 /* fmovqg */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1110 /* fmovqg */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1117 /* fmovqge */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1117 /* fmovqge */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1117 /* fmovqge */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1125 /* fmovqgeu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1125 /* fmovqgeu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1134 /* fmovqgu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1134 /* fmovqgu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1142 /* fmovql */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1142 /* fmovql */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1142 /* fmovql */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1149 /* fmovqle */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1149 /* fmovqle */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1149 /* fmovqle */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1157 /* fmovqleu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1157 /* fmovqleu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1166 /* fmovqlg */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1174 /* fmovqlu */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1174 /* fmovqlu */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1182 /* fmovqn */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1182 /* fmovqn */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1182 /* fmovqn */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1189 /* fmovqne */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1189 /* fmovqne */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1189 /* fmovqne */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1197 /* fmovqneg */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1197 /* fmovqneg */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1206 /* fmovqnz */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1206 /* fmovqnz */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1206 /* fmovqnz */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1214 /* fmovqo */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1221 /* fmovqpos */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1221 /* fmovqpos */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1230 /* fmovqu */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1237 /* fmovque */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1245 /* fmovqug */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1253 /* fmovquge */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1262 /* fmovqul */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1270 /* fmovqule */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1279 /* fmovqvc */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1279 /* fmovqvc */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1287 /* fmovqvs */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1287 /* fmovqvs */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1295 /* fmovqz */, Sparc::FMOVQ_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1295 /* fmovqz */, Sparc::FMOVQ_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1295 /* fmovqz */, Sparc::V9FMOVQ_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1302 /* fmovrdgez */, Sparc::FMOVRGEZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1312 /* fmovrdgz */, Sparc::FMOVRGZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1321 /* fmovrdlez */, Sparc::FMOVRLEZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1331 /* fmovrdlz */, Sparc::FMOVRLZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1340 /* fmovrdnz */, Sparc::FMOVRNZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1349 /* fmovrdz */, Sparc::FMOVRZD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1357 /* fmovrqgez */, Sparc::FMOVRGEZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1367 /* fmovrqgz */, Sparc::FMOVRGZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1376 /* fmovrqlez */, Sparc::FMOVRLEZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1386 /* fmovrqlz */, Sparc::FMOVRLZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1395 /* fmovrqnz */, Sparc::FMOVRNZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1404 /* fmovrqz */, Sparc::FMOVRZQ, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1412 /* fmovrsgez */, Sparc::FMOVRGEZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1422 /* fmovrsgz */, Sparc::FMOVRGZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1431 /* fmovrslez */, Sparc::FMOVRLEZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1441 /* fmovrslz */, Sparc::FMOVRLZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1450 /* fmovrsnz */, Sparc::FMOVRNZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1459 /* fmovrsz */, Sparc::FMOVRZS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasV9, { MCK_IntRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1467 /* fmovs */, Sparc::FMOVS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 1467 /* fmovs */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1467 /* fmovs */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1467 /* fmovs */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1467 /* fmovs */, Sparc::FMOVS_FCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_FPRegs, MCK_FPRegs }, },
  { 1467 /* fmovs */, Sparc::FMOVS_ICC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1467 /* fmovs */, Sparc::FMOVS_XCC, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1467 /* fmovs */, Sparc::V9FMOVS_FCC, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1473 /* fmovsa */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1473 /* fmovsa */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1473 /* fmovsa */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1480 /* fmovscc */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1480 /* fmovscc */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1488 /* fmovscs */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1488 /* fmovscs */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1496 /* fmovse */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1496 /* fmovse */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1496 /* fmovse */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1503 /* fmovsg */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1503 /* fmovsg */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1503 /* fmovsg */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1510 /* fmovsge */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1510 /* fmovsge */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1510 /* fmovsge */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1518 /* fmovsgeu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1518 /* fmovsgeu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1527 /* fmovsgu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1527 /* fmovsgu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1535 /* fmovsl */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1535 /* fmovsl */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1535 /* fmovsl */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1542 /* fmovsle */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1542 /* fmovsle */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1542 /* fmovsle */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1550 /* fmovsleu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1550 /* fmovsleu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1559 /* fmovslg */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1567 /* fmovslu */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1567 /* fmovslu */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1575 /* fmovsn */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1575 /* fmovsn */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1575 /* fmovsn */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1582 /* fmovsne */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1582 /* fmovsne */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1582 /* fmovsne */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1590 /* fmovsneg */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1590 /* fmovsneg */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1599 /* fmovsnz */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1599 /* fmovsnz */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1599 /* fmovsnz */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1607 /* fmovso */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1614 /* fmovspos */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1614 /* fmovspos */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1623 /* fmovsu */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1630 /* fmovsue */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1638 /* fmovsug */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1646 /* fmovsuge */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1655 /* fmovsul */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1663 /* fmovsule */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1672 /* fmovsvc */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1672 /* fmovsvc */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1680 /* fmovsvs */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1680 /* fmovsvs */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1688 /* fmovsz */, Sparc::FMOVS_ICC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_FPRegs, MCK_FPRegs }, },
  { 1688 /* fmovsz */, Sparc::FMOVS_XCC, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_FPRegs, MCK_FPRegs }, },
  { 1688 /* fmovsz */, Sparc::V9FMOVS_FCC, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1695 /* fmul8sux16 */, Sparc::FMUL8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1706 /* fmul8ulx16 */, Sparc::FMUL8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1717 /* fmul8x16 */, Sparc::FMUL8X16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1726 /* fmul8x16al */, Sparc::FMUL8X16AL, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1737 /* fmul8x16au */, Sparc::FMUL8X16AU, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1748 /* fmuld */, Sparc::FMULD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1754 /* fmuld8sux16 */, Sparc::FMULD8SUX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1766 /* fmuld8ulx16 */, Sparc::FMULD8ULX16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1778 /* fmulq */, Sparc::FMULQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 1784 /* fmuls */, Sparc::FMULS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1790 /* fnaddd */, Sparc::FNADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1797 /* fnadds */, Sparc::FNADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1804 /* fnand */, Sparc::FNAND, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1810 /* fnands */, Sparc::FNANDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1817 /* fnegd */, Sparc::FNEGD, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1823 /* fnegq */, Sparc::FNEGQ, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 1829 /* fnegs */, Sparc::FNEGS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 1835 /* fnhaddd */, Sparc::FNHADDD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1835 /* fnhaddd */, Sparc::FNMULD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1843 /* fnhadds */, Sparc::FNHADDS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1843 /* fnhadds */, Sparc::FNMULS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1843 /* fnhadds */, Sparc::FNSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1851 /* fnor */, Sparc::FNOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1856 /* fnors */, Sparc::FNORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1862 /* fnot1 */, Sparc::FNOT1, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1868 /* fnot1s */, Sparc::FNOT1S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 1875 /* fnot2 */, Sparc::FNOT2, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1881 /* fnot2s */, Sparc::FNOT2S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 1888 /* fone */, Sparc::FONE, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_DFPRegs }, },
  { 1893 /* fones */, Sparc::FONES, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_FPRegs }, },
  { 1899 /* for */, Sparc::FOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1903 /* fornot1 */, Sparc::FORNOT1, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1911 /* fornot1s */, Sparc::FORNOT1S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1920 /* fornot2 */, Sparc::FORNOT2, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1928 /* fornot2s */, Sparc::FORNOT2S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1937 /* fors */, Sparc::FORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 1942 /* fpack16 */, Sparc::FPACK16, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1950 /* fpack32 */, Sparc::FPACK32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1958 /* fpackfix */, Sparc::FPACKFIX, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 1967 /* fpadd16 */, Sparc::FPADD16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1975 /* fpadd16s */, Sparc::FPADD16S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1984 /* fpadd32 */, Sparc::FPADD32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 1992 /* fpadd32s */, Sparc::FPADD32S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2001 /* fpadd64 */, Sparc::FPADD64, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2009 /* fpmerge */, Sparc::FPMERGE, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2017 /* fpsub16 */, Sparc::FPSUB16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2025 /* fpsub16S */, Sparc::FPSUB16S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2034 /* fpsub32 */, Sparc::FPSUB32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2042 /* fpsub32S */, Sparc::FPSUB32S, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2051 /* fqtod */, Sparc::FQTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 2057 /* fqtoi */, Sparc::FQTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_FPRegs }, },
  { 2063 /* fqtos */, Sparc::FQTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_FPRegs }, },
  { 2069 /* fqtox */, Sparc::FQTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_DFPRegs }, },
  { 2075 /* fslas16 */, Sparc::FSLAS16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2083 /* fslas32 */, Sparc::FSLAS32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2091 /* fsll16 */, Sparc::FSLL16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2098 /* fsll32 */, Sparc::FSLL32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2105 /* fsmuld */, Sparc::FSMULD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_DFPRegs }, },
  { 2112 /* fsqrtd */, Sparc::FSQRTD, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2119 /* fsqrtq */, Sparc::FSQRTQ, Convert__Reg1_1__Reg1_0, 0, { MCK_QFPRegs, MCK_QFPRegs }, },
  { 2126 /* fsqrts */, Sparc::FSQRTS, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 2133 /* fsra16 */, Sparc::FSRA16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2140 /* fsra32 */, Sparc::FSRA32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2147 /* fsrc1 */, Sparc::FSRC1, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2153 /* fsrc1s */, Sparc::FSRC1S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2160 /* fsrc2 */, Sparc::FSRC2, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2166 /* fsrc2s */, Sparc::FSRC2S, Convert__Reg1_1__Reg1_0, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs }, },
  { 2173 /* fsrl16 */, Sparc::FSRL16, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2180 /* fsrl32 */, Sparc::FSRL32, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2187 /* fstod */, Sparc::FSTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2193 /* fstoi */, Sparc::FSTOI, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_FPRegs }, },
  { 2199 /* fstoq */, Sparc::FSTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_QFPRegs }, },
  { 2205 /* fstox */, Sparc::FSTOX, Convert__Reg1_1__Reg1_0, 0, { MCK_FPRegs, MCK_DFPRegs }, },
  { 2211 /* fsubd */, Sparc::FSUBD, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2217 /* fsubq */, Sparc::FSUBQ, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_QFPRegs, MCK_QFPRegs, MCK_QFPRegs }, },
  { 2223 /* fsubs */, Sparc::FSUBS, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2229 /* fxnor */, Sparc::FXNOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2235 /* fxnors */, Sparc::FXNORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2242 /* fxor */, Sparc::FXOR, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2247 /* fxors */, Sparc::FXORS, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_FPRegs, MCK_FPRegs, MCK_FPRegs }, },
  { 2253 /* fxtod */, Sparc::FXTOD, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_DFPRegs }, },
  { 2259 /* fxtoq */, Sparc::FXTOQ, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_QFPRegs }, },
  { 2265 /* fxtos */, Sparc::FXTOS, Convert__Reg1_1__Reg1_0, 0, { MCK_DFPRegs, MCK_FPRegs }, },
  { 2271 /* fzero */, Sparc::FZERO, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_DFPRegs }, },
  { 2277 /* fzeros */, Sparc::FZEROS, Convert__Reg1_0__Tie0, Feature_HasVIS, { MCK_FPRegs }, },
  { 2284 /* inc */, Sparc::ADDri, Convert__Reg1_0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 2284 /* inc */, Sparc::ADDri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2288 /* inccc */, Sparc::ADDCCri, Convert__Reg1_0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 2288 /* inccc */, Sparc::ADDCCri, Convert__Reg1_1__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2294 /* jmp */, Sparc::JMPLri, Convert__regG0__MEMri2_0, 0, { MCK_MEMri }, },
  { 2294 /* jmp */, Sparc::JMPLrr, Convert__regG0__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 2298 /* jmpl */, Sparc::JMPLri, Convert__Reg1_1__MEMri2_0, 0, { MCK_MEMri, MCK_IntRegs }, },
  { 2298 /* jmpl */, Sparc::JMPLrr, Convert__Reg1_1__MEMrr2_0, 0, { MCK_MEMrr, MCK_IntRegs }, },
  { 2303 /* ld */, Sparc::LDFSRri, Convert__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK__PCT_fsr }, },
  { 2303 /* ld */, Sparc::LDri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2303 /* ld */, Sparc::LDFri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_FPRegs }, },
  { 2303 /* ld */, Sparc::LDFSRrr, Convert__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK__PCT_fsr }, },
  { 2303 /* ld */, Sparc::LDrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2303 /* ld */, Sparc::LDFrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_FPRegs }, },
  { 2306 /* lda */, Sparc::LDArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2306 /* lda */, Sparc::LDFArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_FPRegs }, },
  { 2310 /* ldd */, Sparc::LDDFri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_DFPRegs }, },
  { 2310 /* ldd */, Sparc::LDDri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntPair }, },
  { 2310 /* ldd */, Sparc::LDDFrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_DFPRegs }, },
  { 2310 /* ldd */, Sparc::LDDrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntPair }, },
  { 2314 /* ldda */, Sparc::LDDFArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_DFPRegs }, },
  { 2314 /* ldda */, Sparc::LDDArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntPair }, },
  { 2319 /* ldq */, Sparc::LDQFri, Convert__Reg1_3__MEMri2_1, Feature_HasV9, { MCK__91_, MCK_MEMri, MCK__93_, MCK_QFPRegs }, },
  { 2319 /* ldq */, Sparc::LDQFrr, Convert__Reg1_3__MEMrr2_1, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_QFPRegs }, },
  { 2323 /* ldqa */, Sparc::LDQFArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_QFPRegs }, },
  { 2328 /* ldsb */, Sparc::LDSBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2328 /* ldsb */, Sparc::LDSBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2333 /* ldsba */, Sparc::LDSBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2339 /* ldsh */, Sparc::LDSHri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2339 /* ldsh */, Sparc::LDSHrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2344 /* ldsha */, Sparc::LDSHArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2350 /* ldstub */, Sparc::LDSTUBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2350 /* ldstub */, Sparc::LDSTUBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2357 /* ldstuba */, Sparc::LDSTUBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2365 /* ldsw */, Sparc::LDSWri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2365 /* ldsw */, Sparc::LDSWrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2370 /* ldub */, Sparc::LDUBri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2370 /* ldub */, Sparc::LDUBrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2375 /* lduba */, Sparc::LDUBArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2381 /* lduh */, Sparc::LDUHri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2381 /* lduh */, Sparc::LDUHrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2386 /* lduha */, Sparc::LDUHArr, Convert__Reg1_4__MEMrr2_1__Imm1_3, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2392 /* ldx */, Sparc::LDXFSRri, Convert__MEMri2_1, Feature_HasV9, { MCK__91_, MCK_MEMri, MCK__93_, MCK__PCT_fsr }, },
  { 2392 /* ldx */, Sparc::LDXri, Convert__Reg1_3__MEMri2_1, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2392 /* ldx */, Sparc::LDXFSRrr, Convert__MEMrr2_1, Feature_HasV9, { MCK__91_, MCK_MEMrr, MCK__93_, MCK__PCT_fsr }, },
  { 2392 /* ldx */, Sparc::LDXrr, Convert__Reg1_3__MEMrr2_1, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2396 /* lzcnt */, Sparc::LZCNT, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs }, },
  { 2402 /* membar */, Sparc::MEMBARi, Convert__Imm1_0, Feature_HasV9, { MCK_Imm }, },
  { 2409 /* mov */, Sparc::RDPSR, Convert__Reg1_1, 0, { MCK__PCT_psr, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::RDTBR, Convert__Reg1_1, 0, { MCK__PCT_tbr, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::RDWIM, Convert__Reg1_1, 0, { MCK__PCT_wim, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::RDASR, Convert__Reg1_1__Reg1_0, 0, { MCK_ASRRegs, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::WRPSRrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_psr }, },
  { 2409 /* mov */, Sparc::WRTBRrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_tbr }, },
  { 2409 /* mov */, Sparc::WRWIMrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_wim }, },
  { 2409 /* mov */, Sparc::WRASRrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_ASRRegs }, },
  { 2409 /* mov */, Sparc::ORrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::WRPSRri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_psr }, },
  { 2409 /* mov */, Sparc::WRTBRri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_tbr }, },
  { 2409 /* mov */, Sparc::WRWIMri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_wim }, },
  { 2409 /* mov */, Sparc::WRASRri, Convert__Reg1_1__regG0__Imm1_0, 0, { MCK_Imm, MCK_ASRRegs }, },
  { 2409 /* mov */, Sparc::ORri, Convert__Reg1_1__regG0__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVFCCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_IntRegs, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVFCCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_fcc0, MCK_Imm, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVICCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVICCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVXCCrr, Convert__Reg1_3__Reg1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::MOVXCCri, Convert__Reg1_3__Imm1_2__Tie0__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::V9MOVFCCrr, Convert__Reg1_3__Reg1_1__Reg1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2409 /* mov */, Sparc::V9MOVFCCri, Convert__Reg1_3__Reg1_1__Imm1_2__Tie0__Imm1_0, Feature_HasV9, { MCK_Imm, MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2413 /* mova */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2413 /* mova */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2413 /* mova */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2413 /* mova */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_8, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2413 /* mova */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2413 /* mova */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_0, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2418 /* movcc */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2418 /* movcc */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2418 /* movcc */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2418 /* movcc */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2424 /* movcs */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2424 /* movcs */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2424 /* movcs */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2424 /* movcs */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2430 /* movdtox */, Sparc::MOVWTOS, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2430 /* movdtox */, Sparc::MOVXTOD, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_IntRegs, MCK_DFPRegs }, },
  { 2430 /* movdtox */, Sparc::MOVDTOX, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2438 /* move */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2438 /* move */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2438 /* move */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2438 /* move */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2438 /* move */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2438 /* move */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2443 /* movg */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2443 /* movg */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2443 /* movg */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2443 /* movg */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_10, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2443 /* movg */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2443 /* movg */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_6, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2448 /* movge */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2448 /* movge */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2448 /* movge */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2448 /* movge */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_11, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2448 /* movge */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2448 /* movge */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_11, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2454 /* movgeu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2454 /* movgeu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2454 /* movgeu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2454 /* movgeu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_13, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2461 /* movgu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2461 /* movgu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2461 /* movgu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2461 /* movgu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_12, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2467 /* movl */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2467 /* movl */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2467 /* movl */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2467 /* movl */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_3, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2467 /* movl */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2467 /* movl */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_4, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2472 /* movle */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2472 /* movle */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2472 /* movle */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2472 /* movle */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_2, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2472 /* movle */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2472 /* movle */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_13, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2478 /* movleu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2478 /* movleu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2478 /* movleu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2478 /* movleu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_4, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2485 /* movlg */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2485 /* movlg */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_2, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2491 /* movlu */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2491 /* movlu */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2491 /* movlu */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2491 /* movlu */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_5, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2497 /* movn */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2497 /* movn */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2497 /* movn */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2497 /* movn */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_0, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2497 /* movn */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2497 /* movn */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_8, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2502 /* movne */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2502 /* movne */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2502 /* movne */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2502 /* movne */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2502 /* movne */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2502 /* movne */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2508 /* movneg */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2508 /* movneg */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2508 /* movneg */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2508 /* movneg */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_6, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2515 /* movnz */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2515 /* movnz */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2515 /* movnz */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2515 /* movnz */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_9, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2515 /* movnz */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2515 /* movnz */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2521 /* movo */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2521 /* movo */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_15, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2526 /* movpos */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2526 /* movpos */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2526 /* movpos */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2526 /* movpos */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_14, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2533 /* movrgez */, Sparc::MOVRGEZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2533 /* movrgez */, Sparc::MOVRGEZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2541 /* movrgz */, Sparc::MOVRGZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2541 /* movrgz */, Sparc::MOVRGZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2548 /* movrlez */, Sparc::MOVRLEZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2548 /* movrlez */, Sparc::MOVRLEZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2556 /* movrlz */, Sparc::MOVRLZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2556 /* movrlz */, Sparc::MOVRLZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2563 /* movrnz */, Sparc::MOVRNZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2563 /* movrnz */, Sparc::MOVRNZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2570 /* movrz */, Sparc::MOVRRZrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2570 /* movrz */, Sparc::MOVRRZri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2576 /* movstosw */, Sparc::MOVSTOSW, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2585 /* movstouw */, Sparc::MOVSTOUW, Convert__Reg1_1__Reg1_0, Feature_HasVIS3, { MCK_DFPRegs, MCK_IntRegs }, },
  { 2594 /* movu */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2594 /* movu */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_7, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2599 /* movue */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2599 /* movue */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_10, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2605 /* movug */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2605 /* movug */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_5, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2611 /* movuge */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2611 /* movuge */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_12, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2618 /* movul */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2618 /* movul */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_3, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2624 /* movule */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2624 /* movule */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_14, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2631 /* movvc */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2631 /* movvc */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2631 /* movvc */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2631 /* movvc */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_15, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2637 /* movvs */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2637 /* movvs */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2637 /* movvs */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2637 /* movvs */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_7, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2643 /* movz */, Sparc::MOVICCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK_IntRegs }, },
  { 2643 /* movz */, Sparc::MOVICCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm, MCK_IntRegs }, },
  { 2643 /* movz */, Sparc::MOVXCCrr, Convert__Reg1_2__Reg1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_IntRegs, MCK_IntRegs }, },
  { 2643 /* movz */, Sparc::MOVXCCri, Convert__Reg1_2__Imm1_1__Tie0__imm_95_1, 0, { MCK__PCT_xcc, MCK_Imm, MCK_IntRegs }, },
  { 2643 /* movz */, Sparc::V9MOVFCCrr, Convert__Reg1_2__Reg1_0__Reg1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2643 /* movz */, Sparc::V9MOVFCCri, Convert__Reg1_2__Reg1_0__Imm1_1__Tie0__imm_95_9, Feature_HasV9, { MCK_FCCRegs, MCK_Imm, MCK_IntRegs }, },
  { 2648 /* mulx */, Sparc::MULXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2648 /* mulx */, Sparc::MULXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2653 /* neg */, Sparc::SUBrr, Convert__Reg1_0__regG0__Reg1_0, 0, { MCK_IntRegs }, },
  { 2653 /* neg */, Sparc::SUBrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 2657 /* nop */, Sparc::NOP, Convert_NoOperands, 0, {  }, },
  { 2661 /* not */, Sparc::XNORrr, Convert__Reg1_0__Reg1_0__regG0, 0, { MCK_IntRegs }, },
  { 2661 /* not */, Sparc::XNORrr, Convert__Reg1_1__Reg1_0__regG0, 0, { MCK_IntRegs, MCK_IntRegs }, },
  { 2665 /* or */, Sparc::ORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2665 /* or */, Sparc::ORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2668 /* orcc */, Sparc::ORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2668 /* orcc */, Sparc::ORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2673 /* orn */, Sparc::ORNrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2673 /* orn */, Sparc::ORNri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2677 /* orncc */, Sparc::ORNCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2677 /* orncc */, Sparc::ORNCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2683 /* pdist */, Sparc::PDIST, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2689 /* pdistn */, Sparc::PDISTN, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_DFPRegs, MCK_DFPRegs, MCK_DFPRegs }, },
  { 2696 /* popc */, Sparc::POPCrr, Convert__Reg1_1__Reg1_0, Feature_HasV9, { MCK_IntRegs, MCK_IntRegs }, },
  { 2701 /* rd */, Sparc::RDPSR, Convert__Reg1_1, 0, { MCK__PCT_psr, MCK_IntRegs }, },
  { 2701 /* rd */, Sparc::RDTBR, Convert__Reg1_1, 0, { MCK__PCT_tbr, MCK_IntRegs }, },
  { 2701 /* rd */, Sparc::RDWIM, Convert__Reg1_1, 0, { MCK__PCT_wim, MCK_IntRegs }, },
  { 2701 /* rd */, Sparc::RDASR, Convert__Reg1_1__Reg1_0, 0, { MCK_ASRRegs, MCK_IntRegs }, },
  { 2704 /* restore */, Sparc::RESTORErr, Convert__regG0__regG0__regG0, 0, {  }, },
  { 2704 /* restore */, Sparc::RESTORErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2704 /* restore */, Sparc::RESTOREri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2712 /* ret */, Sparc::RET, Convert__imm_95_8, 0, {  }, },
  { 2716 /* retl */, Sparc::RETL, Convert__imm_95_8, 0, {  }, },
  { 2721 /* rett */, Sparc::RETTri, Convert__MEMri2_0, 0, { MCK_MEMri }, },
  { 2721 /* rett */, Sparc::RETTrr, Convert__MEMrr2_0, 0, { MCK_MEMrr }, },
  { 2726 /* save */, Sparc::SAVErr, Convert__regG0__regG0__regG0, 0, {  }, },
  { 2726 /* save */, Sparc::SAVErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2726 /* save */, Sparc::SAVEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2731 /* sdiv */, Sparc::SDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2731 /* sdiv */, Sparc::SDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2736 /* sdivcc */, Sparc::SDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2736 /* sdivcc */, Sparc::SDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2743 /* sdivx */, Sparc::SDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2743 /* sdivx */, Sparc::SDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2749 /* set */, Sparc::SET, Convert__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2753 /* sethi */, Sparc::SETHIi, Convert__Reg1_1__Imm1_0, 0, { MCK_Imm, MCK_IntRegs }, },
  { 2759 /* shutdown */, Sparc::SHUTDOWN, Convert_NoOperands, Feature_HasVIS, {  }, },
  { 2768 /* siam */, Sparc::SIAM, Convert_NoOperands, Feature_HasVIS2, {  }, },
  { 2773 /* signx */, Sparc::SRArr, Convert__Reg1_0__Reg1_0__regG0, Feature_HasV9, { MCK_IntRegs }, },
  { 2773 /* signx */, Sparc::SRArr, Convert__Reg1_1__Reg1_0__regG0, Feature_HasV9, { MCK_IntRegs, MCK_IntRegs }, },
  { 2779 /* sll */, Sparc::SLLrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2779 /* sll */, Sparc::SLLri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2783 /* sllx */, Sparc::SLLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2783 /* sllx */, Sparc::SLLXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2788 /* smul */, Sparc::SMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2788 /* smul */, Sparc::SMULri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2793 /* smulcc */, Sparc::SMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2793 /* smulcc */, Sparc::SMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2800 /* sra */, Sparc::SRArr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2800 /* sra */, Sparc::SRAri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2804 /* srax */, Sparc::SRAXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2804 /* srax */, Sparc::SRAXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2809 /* srl */, Sparc::SRLrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2809 /* srl */, Sparc::SRLri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2813 /* srlx */, Sparc::SRLXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2813 /* srlx */, Sparc::SRLXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2818 /* st */, Sparc::STri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2818 /* st */, Sparc::STrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2818 /* st */, Sparc::STFri, Convert__MEMri2_2__Reg1_0, 0, { MCK_FPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2818 /* st */, Sparc::STFrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_FPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2821 /* sta */, Sparc::STArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2821 /* sta */, Sparc::STFArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, Feature_HasV9, { MCK_FPRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2825 /* stb */, Sparc::STBri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2825 /* stb */, Sparc::STBrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2829 /* stba */, Sparc::STBArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2834 /* stbar */, Sparc::STBAR, Convert_NoOperands, 0, {  }, },
  { 2840 /* std */, Sparc::STDFri, Convert__MEMri2_2__Reg1_0, 0, { MCK_DFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2840 /* std */, Sparc::STDFrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_DFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2840 /* std */, Sparc::STDri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntPair, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2840 /* std */, Sparc::STDrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntPair, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2844 /* stda */, Sparc::STDFArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, Feature_HasV9, { MCK_DFPRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2844 /* stda */, Sparc::STDArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntPair, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2849 /* sth */, Sparc::STHri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2849 /* sth */, Sparc::STHrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2853 /* stha */, Sparc::STHArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2858 /* stq */, Sparc::STQFri, Convert__MEMri2_2__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2858 /* stq */, Sparc::STQFrr, Convert__MEMrr2_2__Reg1_0, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2862 /* stqa */, Sparc::STQFArr, Convert__MEMrr2_2__Reg1_0__Imm1_4, Feature_HasV9, { MCK_QFPRegs, MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm }, },
  { 2867 /* stx */, Sparc::STXri, Convert__MEMri2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMri, MCK__93_ }, },
  { 2867 /* stx */, Sparc::STXrr, Convert__MEMrr2_2__Reg1_0, 0, { MCK_IntRegs, MCK__91_, MCK_MEMrr, MCK__93_ }, },
  { 2871 /* sub */, Sparc::SUBrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2871 /* sub */, Sparc::SUBri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2875 /* subcc */, Sparc::SUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2875 /* subcc */, Sparc::SUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2881 /* subx */, Sparc::SUBCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2881 /* subx */, Sparc::SUBCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2886 /* subxcc */, Sparc::SUBErr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2886 /* subxcc */, Sparc::SUBEri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2893 /* swap */, Sparc::SWAPri, Convert__Reg1_3__MEMri2_1__Tie0, 0, { MCK__91_, MCK_MEMri, MCK__93_, MCK_IntRegs }, },
  { 2893 /* swap */, Sparc::SWAPrr, Convert__Reg1_3__MEMrr2_1__Tie0, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_IntRegs }, },
  { 2898 /* swapa */, Sparc::SWAPArr, Convert__Reg1_4__MEMrr2_1__Imm1_3__Tie0, 0, { MCK__91_, MCK_MEMrr, MCK__93_, MCK_Imm, MCK_IntRegs }, },
  { 2904 /* t */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_8, 0, { MCK_IntRegs }, },
  { 2904 /* t */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 2904 /* t */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2904 /* t */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2904 /* t */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2904 /* t */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2904 /* t */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2904 /* t */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2904 /* t */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2904 /* t */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2904 /* t */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2904 /* t */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2904 /* t */, Sparc::TICCrr, Convert__Reg1_2__Reg1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2904 /* t */, Sparc::TICCri, Convert__Reg1_2__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2904 /* t */, Sparc::TXCCrr, Convert__Reg1_2__Reg1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2904 /* t */, Sparc::TXCCri, Convert__Reg1_2__Imm1_4__Imm1_0, 0, { MCK_Imm, MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2906 /* ta */, Sparc::TA3, Convert_NoOperands, 0, { MCK_3 }, },
  { 2906 /* ta */, Sparc::TA5, Convert_NoOperands, 0, { MCK_5 }, },
  { 2906 /* ta */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_8, 0, { MCK_IntRegs }, },
  { 2906 /* ta */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_8, 0, { MCK_Imm }, },
  { 2906 /* ta */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2906 /* ta */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2906 /* ta */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2906 /* ta */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2906 /* ta */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2906 /* ta */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_8, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2906 /* ta */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2906 /* ta */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2906 /* ta */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2906 /* ta */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_8, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2909 /* taddcc */, Sparc::TADDCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2909 /* taddcc */, Sparc::TADDCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2916 /* taddcctv */, Sparc::TADDCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2916 /* taddcctv */, Sparc::TADDCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 2925 /* tcc */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_13, 0, { MCK_IntRegs }, },
  { 2925 /* tcc */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 2925 /* tcc */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2925 /* tcc */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2925 /* tcc */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2925 /* tcc */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2925 /* tcc */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2925 /* tcc */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2925 /* tcc */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2925 /* tcc */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2925 /* tcc */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2925 /* tcc */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2929 /* tcs */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_5, 0, { MCK_IntRegs }, },
  { 2929 /* tcs */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 2929 /* tcs */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2929 /* tcs */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2929 /* tcs */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2929 /* tcs */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2929 /* tcs */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2929 /* tcs */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2929 /* tcs */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2929 /* tcs */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2929 /* tcs */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2929 /* tcs */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2933 /* te */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 2933 /* te */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 2933 /* te */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2933 /* te */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2933 /* te */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2933 /* te */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2933 /* te */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2933 /* te */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2933 /* te */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2933 /* te */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2933 /* te */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2933 /* te */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2936 /* tg */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_10, 0, { MCK_IntRegs }, },
  { 2936 /* tg */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_10, 0, { MCK_Imm }, },
  { 2936 /* tg */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2936 /* tg */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2936 /* tg */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2936 /* tg */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2936 /* tg */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_10, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2936 /* tg */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_10, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2936 /* tg */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2936 /* tg */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_10, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2936 /* tg */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2936 /* tg */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_10, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2939 /* tge */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_11, 0, { MCK_IntRegs }, },
  { 2939 /* tge */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_11, 0, { MCK_Imm }, },
  { 2939 /* tge */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2939 /* tge */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2939 /* tge */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2939 /* tge */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2939 /* tge */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_11, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2939 /* tge */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_11, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2939 /* tge */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2939 /* tge */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_11, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2939 /* tge */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2939 /* tge */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_11, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2943 /* tgeu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_13, 0, { MCK_IntRegs }, },
  { 2943 /* tgeu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_13, 0, { MCK_Imm }, },
  { 2943 /* tgeu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2943 /* tgeu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2943 /* tgeu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2943 /* tgeu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2943 /* tgeu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2943 /* tgeu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_13, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2943 /* tgeu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2943 /* tgeu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2943 /* tgeu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2943 /* tgeu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_13, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2948 /* tgu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_12, 0, { MCK_IntRegs }, },
  { 2948 /* tgu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_12, 0, { MCK_Imm }, },
  { 2948 /* tgu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2948 /* tgu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2948 /* tgu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2948 /* tgu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2948 /* tgu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_12, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2948 /* tgu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_12, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2948 /* tgu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2948 /* tgu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_12, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2948 /* tgu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2948 /* tgu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_12, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2952 /* tl */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_3, 0, { MCK_IntRegs }, },
  { 2952 /* tl */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_3, 0, { MCK_Imm }, },
  { 2952 /* tl */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2952 /* tl */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2952 /* tl */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2952 /* tl */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2952 /* tl */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_3, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2952 /* tl */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_3, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2952 /* tl */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2952 /* tl */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_3, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2952 /* tl */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2952 /* tl */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_3, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2955 /* tle */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_2, 0, { MCK_IntRegs }, },
  { 2955 /* tle */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_2, 0, { MCK_Imm }, },
  { 2955 /* tle */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2955 /* tle */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2955 /* tle */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2955 /* tle */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2955 /* tle */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_2, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2955 /* tle */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_2, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2955 /* tle */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2955 /* tle */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_2, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2955 /* tle */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2955 /* tle */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_2, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2959 /* tleu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_4, 0, { MCK_IntRegs }, },
  { 2959 /* tleu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_4, 0, { MCK_Imm }, },
  { 2959 /* tleu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2959 /* tleu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2959 /* tleu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2959 /* tleu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2959 /* tleu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_4, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2959 /* tleu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_4, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2959 /* tleu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2959 /* tleu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_4, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2959 /* tleu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2959 /* tleu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_4, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2964 /* tlu */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_5, 0, { MCK_IntRegs }, },
  { 2964 /* tlu */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_5, 0, { MCK_Imm }, },
  { 2964 /* tlu */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2964 /* tlu */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2964 /* tlu */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2964 /* tlu */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2964 /* tlu */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2964 /* tlu */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_5, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2964 /* tlu */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2964 /* tlu */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2964 /* tlu */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2964 /* tlu */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_5, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2968 /* tn */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_0, 0, { MCK_IntRegs }, },
  { 2968 /* tn */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_0, 0, { MCK_Imm }, },
  { 2968 /* tn */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2968 /* tn */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2968 /* tn */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2968 /* tn */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2968 /* tn */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_0, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2968 /* tn */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_0, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2968 /* tn */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2968 /* tn */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_0, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2968 /* tn */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2968 /* tn */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_0, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2971 /* tne */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_9, 0, { MCK_IntRegs }, },
  { 2971 /* tne */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 2971 /* tne */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2971 /* tne */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2971 /* tne */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2971 /* tne */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2971 /* tne */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2971 /* tne */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2971 /* tne */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2971 /* tne */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2971 /* tne */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2971 /* tne */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2975 /* tneg */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_6, 0, { MCK_IntRegs }, },
  { 2975 /* tneg */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_6, 0, { MCK_Imm }, },
  { 2975 /* tneg */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2975 /* tneg */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2975 /* tneg */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2975 /* tneg */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2975 /* tneg */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_6, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2975 /* tneg */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_6, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2975 /* tneg */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2975 /* tneg */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_6, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2975 /* tneg */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2975 /* tneg */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_6, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2980 /* tnz */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_9, 0, { MCK_IntRegs }, },
  { 2980 /* tnz */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_9, 0, { MCK_Imm }, },
  { 2980 /* tnz */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2980 /* tnz */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2980 /* tnz */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2980 /* tnz */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2980 /* tnz */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2980 /* tnz */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_9, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2980 /* tnz */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2980 /* tnz */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2980 /* tnz */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2980 /* tnz */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_9, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2984 /* tpos */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_14, 0, { MCK_IntRegs }, },
  { 2984 /* tpos */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_14, 0, { MCK_Imm }, },
  { 2984 /* tpos */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 2984 /* tpos */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 2984 /* tpos */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 2984 /* tpos */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 2984 /* tpos */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_14, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2984 /* tpos */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_14, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2984 /* tpos */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2984 /* tpos */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_14, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2984 /* tpos */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 2984 /* tpos */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_14, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 2989 /* tst */, Sparc::ORCCrr, Convert__regG0__Reg1_0__regG0, 0, { MCK_IntRegs }, },
  { 2993 /* tsubcc */, Sparc::TSUBCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 2993 /* tsubcc */, Sparc::TSUBCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3000 /* tsubcctv */, Sparc::TSUBCCTVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3000 /* tsubcctv */, Sparc::TSUBCCTVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3009 /* tvc */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_15, 0, { MCK_IntRegs }, },
  { 3009 /* tvc */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_15, 0, { MCK_Imm }, },
  { 3009 /* tvc */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3009 /* tvc */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3009 /* tvc */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3009 /* tvc */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3009 /* tvc */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_15, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3009 /* tvc */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_15, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3009 /* tvc */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3009 /* tvc */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_15, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3009 /* tvc */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3009 /* tvc */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_15, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3013 /* tvs */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_7, 0, { MCK_IntRegs }, },
  { 3013 /* tvs */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_7, 0, { MCK_Imm }, },
  { 3013 /* tvs */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3013 /* tvs */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3013 /* tvs */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3013 /* tvs */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3013 /* tvs */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_7, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3013 /* tvs */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_7, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3013 /* tvs */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3013 /* tvs */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_7, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3013 /* tvs */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3013 /* tvs */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_7, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3017 /* tz */, Sparc::TICCrr, Convert__regG0__Reg1_0__imm_95_1, 0, { MCK_IntRegs }, },
  { 3017 /* tz */, Sparc::TICCri, Convert__regG0__Imm1_0__imm_95_1, 0, { MCK_Imm }, },
  { 3017 /* tz */, Sparc::TICCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs }, },
  { 3017 /* tz */, Sparc::TICCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_Imm }, },
  { 3017 /* tz */, Sparc::TXCCrr, Convert__regG0__Reg1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs }, },
  { 3017 /* tz */, Sparc::TXCCri, Convert__regG0__Imm1_1__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_Imm }, },
  { 3017 /* tz */, Sparc::TICCrr, Convert__Reg1_0__Reg1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3017 /* tz */, Sparc::TICCri, Convert__Reg1_0__Imm1_2__imm_95_1, 0, { MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3017 /* tz */, Sparc::TICCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3017 /* tz */, Sparc::TICCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_icc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3017 /* tz */, Sparc::TXCCrr, Convert__Reg1_1__Reg1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_IntRegs }, },
  { 3017 /* tz */, Sparc::TXCCri, Convert__Reg1_1__Imm1_3__imm_95_1, Feature_HasV9, { MCK__PCT_xcc, MCK_IntRegs, MCK__43_, MCK_Imm }, },
  { 3020 /* udiv */, Sparc::UDIVrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3020 /* udiv */, Sparc::UDIVri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3025 /* udivcc */, Sparc::UDIVCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3025 /* udivcc */, Sparc::UDIVCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3032 /* udivx */, Sparc::UDIVXrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3032 /* udivx */, Sparc::UDIVXri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3038 /* umul */, Sparc::UMULrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3038 /* umul */, Sparc::UMULri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3043 /* umulcc */, Sparc::UMULCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3043 /* umulcc */, Sparc::UMULCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3050 /* umulxhi */, Sparc::UMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3058 /* unimp */, Sparc::UNIMP, Convert__Imm1_0, 0, { MCK_Imm }, },
  { 3064 /* wr */, Sparc::WRPSRrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_psr }, },
  { 3064 /* wr */, Sparc::WRTBRrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_tbr }, },
  { 3064 /* wr */, Sparc::WRWIMrr, Convert__regG0__Reg1_0, 0, { MCK_IntRegs, MCK__PCT_wim }, },
  { 3064 /* wr */, Sparc::WRASRrr, Convert__Reg1_1__regG0__Reg1_0, 0, { MCK_IntRegs, MCK_ASRRegs }, },
  { 3064 /* wr */, Sparc::WRPSRri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_psr }, },
  { 3064 /* wr */, Sparc::WRTBRri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_tbr }, },
  { 3064 /* wr */, Sparc::WRWIMri, Convert__regG0__Imm1_0, 0, { MCK_Imm, MCK__PCT_wim }, },
  { 3064 /* wr */, Sparc::WRASRri, Convert__Reg1_1__regG0__Imm1_0, 0, { MCK_Imm, MCK_ASRRegs }, },
  { 3064 /* wr */, Sparc::WRPSRrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_psr }, },
  { 3064 /* wr */, Sparc::WRTBRrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_tbr }, },
  { 3064 /* wr */, Sparc::WRWIMrr, Convert__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK__PCT_wim }, },
  { 3064 /* wr */, Sparc::WRASRrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_ASRRegs }, },
  { 3064 /* wr */, Sparc::WRPSRri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_psr }, },
  { 3064 /* wr */, Sparc::WRTBRri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_tbr }, },
  { 3064 /* wr */, Sparc::WRWIMri, Convert__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK__PCT_wim }, },
  { 3064 /* wr */, Sparc::WRASRri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_ASRRegs }, },
  { 3067 /* xmulx */, Sparc::XMULX, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3073 /* xmulxhi */, Sparc::XMULXHI, Convert__Reg1_2__Reg1_0__Reg1_1, Feature_HasVIS3, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3081 /* xnor */, Sparc::XNORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3081 /* xnor */, Sparc::XNORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3086 /* xnorcc */, Sparc::XNORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3086 /* xnorcc */, Sparc::XNORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3093 /* xor */, Sparc::XORrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3093 /* xor */, Sparc::XORri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
  { 3097 /* xorcc */, Sparc::XORCCrr, Convert__Reg1_2__Reg1_0__Reg1_1, 0, { MCK_IntRegs, MCK_IntRegs, MCK_IntRegs }, },
  { 3097 /* xorcc */, Sparc::XORCCri, Convert__Reg1_2__Reg1_0__Imm1_1, 0, { MCK_IntRegs, MCK_Imm, MCK_IntRegs }, },
};

bool SparcAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned SparcAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 6) {
    ErrorInfo = 6;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((SparcOperand&)*Operands[0]).getToken();

  // Process all MnemonicAliases to remap the mnemonic.
  applyMnemonicAliases(Mnemonic, AvailableFeatures, VariantID);

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  std::pair<const MatchEntry*, const MatchEntry*> MnemonicRange =
    std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned i = 0; i != 5; ++i) {
      if (i + 1 >= Operands.size()) {
        OperandsValid = (it->Classes[i] == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i + 1;
        break;
      }
      unsigned Diag = validateOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(*Operands[i+1],
                                           (MatchClassKind)it->Classes[i]);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (countPopulation(NewMissingFeatures) <=
          countPopulation(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint8_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[80] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { 0, 248 /* call */, MCK_MEMri, 1 /* 0 */ },
  { 0, 248 /* call */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 262 /* clr */, MCK_MEMri, 2 /* 1 */ },
  { 0, 262 /* clr */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 266 /* clrb */, MCK_MEMri, 2 /* 1 */ },
  { 0, 266 /* clrb */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 271 /* clrh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 271 /* clrh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 825 /* flush */, MCK_MEMri, 1 /* 0 */ },
  { 0, 825 /* flush */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2294 /* jmp */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2294 /* jmp */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2298 /* jmpl */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2298 /* jmpl */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2303 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2303 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2303 /* ld */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2303 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2303 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2303 /* ld */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2306 /* lda */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2306 /* lda */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2310 /* ldd */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2310 /* ldd */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2310 /* ldd */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2310 /* ldd */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2314 /* ldda */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2314 /* ldda */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2319 /* ldq */, MCK_MEMri, 2 /* 1 */ },
  { Feature_HasV9, 2319 /* ldq */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2323 /* ldqa */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2328 /* ldsb */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2328 /* ldsb */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2333 /* ldsba */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2339 /* ldsh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2339 /* ldsh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2344 /* ldsha */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2350 /* ldstub */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2350 /* ldstub */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2357 /* ldstuba */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2365 /* ldsw */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2365 /* ldsw */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2370 /* ldub */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2370 /* ldub */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2375 /* lduba */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2381 /* lduh */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2381 /* lduh */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2386 /* lduha */, MCK_MEMrr, 2 /* 1 */ },
  { Feature_HasV9, 2392 /* ldx */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2392 /* ldx */, MCK_MEMri, 2 /* 1 */ },
  { Feature_HasV9, 2392 /* ldx */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2392 /* ldx */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2721 /* rett */, MCK_MEMri, 1 /* 0 */ },
  { 0, 2721 /* rett */, MCK_MEMrr, 1 /* 0 */ },
  { 0, 2818 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2818 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2818 /* st */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2818 /* st */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2821 /* sta */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2821 /* sta */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2825 /* stb */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2825 /* stb */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2829 /* stba */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2840 /* std */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2840 /* std */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2840 /* std */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2840 /* std */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2844 /* stda */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2844 /* stda */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2849 /* sth */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2849 /* sth */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2853 /* stha */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2858 /* stq */, MCK_MEMri, 4 /* 2 */ },
  { Feature_HasV9, 2858 /* stq */, MCK_MEMrr, 4 /* 2 */ },
  { Feature_HasV9, 2862 /* stqa */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2867 /* stx */, MCK_MEMri, 4 /* 2 */ },
  { 0, 2867 /* stx */, MCK_MEMrr, 4 /* 2 */ },
  { 0, 2893 /* swap */, MCK_MEMri, 2 /* 1 */ },
  { 0, 2893 /* swap */, MCK_MEMrr, 2 /* 1 */ },
  { 0, 2898 /* swapa */, MCK_MEMrr, 2 /* 1 */ },
};

SparcAsmParser::OperandMatchResultTy SparcAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_MEMri:
    return parseMEMOperand(Operands);
  case MCK_MEMrr:
    return parseMEMOperand(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

SparcAsmParser::OperandMatchResultTy SparcAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size()-1;
  // Search the table.
  std::pair<const OperandMatchEntry*, const OperandMatchEntry*> MnemonicRange =
    std::equal_range(OperandMatchTable, OperandMatchTable+80, Mnemonic,
                     LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

