
#ifndef _ORC_LIMITS_H_
#define _ORC_LIMITS_H_

#include <orc/orcutils.h>

ORC_BEGIN_DECLS

#define ORC_N_REGS (32*4)
#define ORC_N_INSNS 100
#define ORC_N_VARIABLES 64
#define ORC_N_ARRAYS 12
#define ORC_N_REGISTERS 20
#define ORC_N_FIXUPS 100
#define ORC_N_CONSTANTS 20
#define ORC_N_LABELS 40
#define ORC_N_COMPILER_VARIABLES (ORC_N_VARIABLES+32)

#define ORC_GP_REG_BASE 32
#define ORC_VEC_REG_BASE 64
#define ORC_REG_INVALID 0

#define ORC_STATIC_OPCODE_N_SRC 4
#define ORC_STATIC_OPCODE_N_DEST 2

#define ORC_OPCODE_N_ARGS 4
#define ORC_N_TARGETS 10
#define ORC_N_RULE_SETS 10

#define ORC_MAX_VAR_SIZE 8

#define ORC_MAX_DEST_VARS 4
#define ORC_MAX_SRC_VARS 8
#define ORC_MAX_TEMP_VARS 16
#define ORC_MAX_CONST_VARS 8
#define ORC_MAX_PARAM_VARS 8
#define ORC_MAX_ACCUM_VARS 4

enum {
  /* Destination variables */
  ORC_VAR_D1,
  ORC_VAR_D2,
  ORC_VAR_D3,
  ORC_VAR_D4,
  /* Source variables */
  ORC_VAR_S1,
  ORC_VAR_S2,
  ORC_VAR_S3,
  ORC_VAR_S4,
  ORC_VAR_S5,
  ORC_VAR_S6,
  ORC_VAR_S7,
  ORC_VAR_S8,
  /* accumulators */
  // exec pointer (arrays) or m (params)
  ORC_VAR_A1,
  // OrcCode pointer (arrays) or m_index (params)
  ORC_VAR_A2,
  // elapsed time (params)
  ORC_VAR_A3,
  ORC_VAR_A4,
  /* constant variables */
  // row pointers (arrays [i+X]).
  // the stride for the array above is in params[i+X]
  ORC_VAR_C1,
  ORC_VAR_C2,
  ORC_VAR_C3,
  ORC_VAR_C4,
  ORC_VAR_C5,
  ORC_VAR_C6,
  ORC_VAR_C7,
  ORC_VAR_C8,
  /* parameter table index */
  ORC_VAR_P1,
  ORC_VAR_P2,
  ORC_VAR_P3,
  ORC_VAR_P4,
  ORC_VAR_P5,
  ORC_VAR_P6,
  ORC_VAR_P7,
  ORC_VAR_P8,
  /* temporary variables */
  // high half of params (params)
  ORC_VAR_T1,
  ORC_VAR_T2,
  ORC_VAR_T3,
  ORC_VAR_T4,
  ORC_VAR_T5,
  ORC_VAR_T6,
  ORC_VAR_T7,
  ORC_VAR_T8,
  ORC_VAR_T9,
  ORC_VAR_T10,
  ORC_VAR_T11,
  ORC_VAR_T12,
  ORC_VAR_T13,
  ORC_VAR_T14,
  ORC_VAR_T15,
  ORC_VAR_T16
};

#define ORC_N_PARAMS ORC_VAR_T1-ORC_VAR_P1

ORC_END_DECLS

#endif

