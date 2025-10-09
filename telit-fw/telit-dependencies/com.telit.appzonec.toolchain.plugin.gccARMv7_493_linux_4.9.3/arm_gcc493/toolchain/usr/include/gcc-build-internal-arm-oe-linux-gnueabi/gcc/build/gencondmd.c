/* Generated automatically by the program `genconditions' from the target
   machine description file.  */

#include "bconfig.h"
#include "system.h"

/* It is necessary, but not entirely safe, to include the headers below
   in a generator program.  As a defensive measure, don't do so when the
   table isn't going to have anything in it.  */
#if GCC_VERSION >= 3001

/* Do not allow checking to confuse the issue.  */
#undef ENABLE_CHECKING
#undef ENABLE_TREE_CHECKING
#undef ENABLE_RTL_CHECKING
#undef ENABLE_RTL_FLAG_CHECKING
#undef ENABLE_GC_CHECKING
#undef ENABLE_GC_ALWAYS_COLLECT

#include "coretypes.h"
#include "tm.h"
#include "insn-constants.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"

/* Fake - insn-config.h doesn't exist yet.  */
#define MAX_RECOG_OPERANDS 10
#define MAX_DUP_OPERANDS 10
#define MAX_INSNS_PER_SPLIT 5

#include "regs.h"
#include "recog.h"
#include "output.h"
#include "flags.h"
#include "hard-reg-set.h"
#include "resource.h"
#include "diagnostic-core.h"
#include "reload.h"
#include "tm-constrs.h"

#define HAVE_eh_return 1
#include "except.h"

/* Dummy external declarations.  */
extern rtx insn;
extern rtx ins1;
extern rtx operands[];

#endif /* gcc >= 3.0.1 */

/* Structure definition duplicated from gensupport.h rather than
   drag in that file and its dependencies.  */
struct c_test
{
  const char *expr;
  int value;
};

/* This table lists each condition found in the machine description.
   Each condition is mapped to its truth value (0 or 1), or -1 if that
   cannot be calculated at compile time.
   If we don't have __builtin_constant_p, or it's not acceptable in array
   initializers, fall back to assuming that all conditions potentially
   vary at run time.  It works in 3.0.1 and later; 3.0 only when not
   optimizing.  */

#if GCC_VERSION >= 3001
static const struct c_test insn_conditions[] = {

#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))",
    __builtin_constant_p 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    ? (int) 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    : -1 },
#line 9675 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT || optimize_size || flag_pic",
    __builtin_constant_p 
#line 9675 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT || optimize_size || flag_pic)
    ? (int) 
#line 9675 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT || optimize_size || flag_pic)
    : -1 },
#line 12715 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], 0, false, true))",
    __builtin_constant_p 
#line 12715 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true)))
    ? (int) 
#line 12715 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true)))
    : -1 },
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode))",
    __builtin_constant_p 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    ? (int) 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SImode)))
    : -1 },
#line 980 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16",
    __builtin_constant_p 
#line 980 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)
    ? (int) 
#line 980 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1114 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1114 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS))
    : -1 },
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 7130 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 7130 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode))))
    : -1 },
#line 5411 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 5411 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN)
    ? (int) 
#line 5411 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && ! BYTES_BIG_ENDIAN)
    : -1 },
#line 1092 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 1092 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 1092 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 4207 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 || arm_arch_thumb2",
    __builtin_constant_p 
#line 4207 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    ? (int) 
#line 4207 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 || arm_arch_thumb2)
    : -1 },
#line 1106 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 1106 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 1106 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3)
    : -1 },
#line 139 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 139 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 139 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT )",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5144 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT ))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5144 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT ))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_IDIV)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4528 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_IDIV))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4528 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_IDIV))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch5)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12379 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12379 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5))
    : -1 },
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SFmode)\n\
       || register_operand (operands[1], V2SFmode))",
    __builtin_constant_p 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    ? (int) 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SFmode)
       || register_operand (operands[1], V2SFmode)))
    : -1 },
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && SMAX != SMIN\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)",
    __builtin_constant_p 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    ? (int) 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    : -1 },
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && SMIN != SMIN\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)",
    __builtin_constant_p 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    ? (int) 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    : -1 },
#line 717 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !arm_restrict_it",
    __builtin_constant_p 
#line 717 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it)
    ? (int) 
#line 717 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it)
    : -1 },
#line 309 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT",
    __builtin_constant_p 
#line 309 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    ? (int) 
#line 309 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT)
    : -1 },
#line 1605 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!true || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 1605 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations))
    ? (int) 
#line 1605 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations))
    : -1 },
#line 2353 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32\n\
      && INTVAL (operands[1]) > 0 \n\
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8\n\
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)",
    __builtin_constant_p 
#line 2353 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    ? (int) 
#line 2353 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))
    : -1 },
#line 278 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 278 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 278 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 5806 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (XEXP (operands[4], 0)) == PLUS\n\
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))\n\
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))\n\
   && (peep2_reg_dead_p (3, operands[0])\n\
       || rtx_equal_p (operands[0], operands[3]))\n\
   && (peep2_reg_dead_p (3, operands[2])\n\
       || rtx_equal_p (operands[2], operands[3]))",
    __builtin_constant_p 
#line 5806 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (XEXP (operands[4], 0)) == PLUS
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))
   && (peep2_reg_dead_p (3, operands[0])
       || rtx_equal_p (operands[0], operands[3]))
   && (peep2_reg_dead_p (3, operands[2])
       || rtx_equal_p (operands[2], operands[3])))
    ? (int) 
#line 5806 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (XEXP (operands[4], 0)) == PLUS
   && rtx_equal_p (operands[0], XEXP (XEXP (operands[4], 0), 0))
   && rtx_equal_p (operands[2], XEXP (XEXP (operands[4], 0), 1))
   && (peep2_reg_dead_p (3, operands[0])
       || rtx_equal_p (operands[0], operands[3]))
   && (peep2_reg_dead_p (3, operands[2])
       || rtx_equal_p (operands[2], operands[3])))
    : -1 },
#line 146 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 146 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 146 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 627 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_FPU_ARMV8",
    __builtin_constant_p 
#line 627 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FPU_ARMV8)
    ? (int) 
#line 627 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FPU_ARMV8)
    : -1 },
#line 4298 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "arm_arch_thumb2",
    __builtin_constant_p 
#line 4298 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch_thumb2)
    ? (int) 
#line 4298 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch_thumb2)
    : -1 },
#line 1377 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && (false || !BYTES_BIG_ENDIAN)",
    __builtin_constant_p 
#line 1377 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (false || !BYTES_BIG_ENDIAN))
    ? (int) 
#line 1377 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (false || !BYTES_BIG_ENDIAN))
    : -1 },
#line 365 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6",
    __builtin_constant_p 
#line 365 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6)
    ? (int) 
#line 365 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && TARGET_DSP_MULTIPLY && arm_arch6)
    : -1 },
#line 9434 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 9434 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 9434 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE))
    : -1 },
#line 6324 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && satisfies_constraint_J (operands[1])",
    __builtin_constant_p 
#line 6324 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    ? (int) 
#line 6324 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_J (operands[1]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P (operands[2])))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1129 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2]))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1129 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2]))))
    : -1 },
#line 1311 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !const_ok_for_arm (INTVAL (operands[1]))\n\
   && const_ok_for_arm (~INTVAL (operands[1]))",
    __builtin_constant_p 
#line 1311 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    ? (int) 
#line 1311 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !const_ok_for_arm (INTVAL (operands[1]))
   && const_ok_for_arm (~INTVAL (operands[1])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 414 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 414 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6))
    : -1 },
#line 1112 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed",
    __builtin_constant_p 
#line 1112 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    ? (int) 
#line 1112 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed)
    : -1 },
  { "(TARGET_ARM) && ( reload_completed\n\
   && REGNO (operands [0]) != REGNO (operands[3]))",
    __builtin_constant_p (
#line 10020 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 10024 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed
   && REGNO (operands [0]) != REGNO (operands[3])))
    ? (int) (
#line 10020 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 10024 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed
   && REGNO (operands [0]) != REGNO (operands[3])))
    : -1 },
#line 9416 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "(TARGET_ARM || (TARGET_THUMB2\n\
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL\n\
                   && !IS_STACKALIGN (arm_current_func_type ())))\n\
     && USE_RETURN_INSN (FALSE)",
    __builtin_constant_p 
#line 9416 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && USE_RETURN_INSN (FALSE))
    ? (int) 
#line 9416 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && USE_RETURN_INSN (FALSE))
    : -1 },
#line 5753 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && reload_completed",
    __builtin_constant_p 
#line 5753 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && reload_completed)
    ? (int) 
#line 5753 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && reload_completed)
    : -1 },
#line 2384 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)",
    __builtin_constant_p 
#line 2384 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    ? (int) 
#line 2384 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32))
    : -1 },
#line 1207 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && satisfies_constraint_Px (operands[2])",
    __builtin_constant_p 
#line 1207 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && satisfies_constraint_Px (operands[2]))
    ? (int) 
#line 1207 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && satisfies_constraint_Px (operands[2]))
    : -1 },
#line 69 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 69 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 69 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
#line 6521 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && peep2_reg_dead_p (2, operands[0])",
    __builtin_constant_p 
#line 6521 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    ? (int) 
#line 6521 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && peep2_reg_dead_p (2, operands[0]))
    : -1 },
#line 9477 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM  && USE_RETURN_INSN (TRUE)",
    __builtin_constant_p 
#line 9477 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM  && USE_RETURN_INSN (TRUE))
    ? (int) 
#line 9477 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM  && USE_RETURN_INSN (TRUE))
    : -1 },
#line 3157 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_IWMMXT",
    __builtin_constant_p 
#line 3157 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT)
    ? (int) 
#line 3157 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT)
    : -1 },
#line 10166 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)",
    __builtin_constant_p 
#line 10166 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    ? (int) 
#line 10166 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    : -1 },
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6 && SMAX != SMAX\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    : -1 },
#line 287 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 287 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 287 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5)
    : -1 },
  { "(TARGET_THUMB2 && arm_restrict_it) && ( reload_completed)",
    __builtin_constant_p (
#line 755 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it) && 
#line 757 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 755 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it) && 
#line 757 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT && !TARGET_NEON) && ( reload_completed)",
    __builtin_constant_p (
#line 1077 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON) && 
#line 1079 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 1077 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON) && 
#line 1079 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 567 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT &&\n\
   !(const_ok_for_arm (INTVAL (operands[2]))\n\
     || const_ok_for_arm (-INTVAL (operands[2])))\n\
    && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 567 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 567 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT &&
   !(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2])))
    && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
#line 27 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 27 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    ? (int) 
#line 27 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode)))
    : -1 },
#line 6290 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF\n\
   && !flag_pic && !target_word_relocations\n\
   && !arm_tls_referenced_p (operands[1])",
    __builtin_constant_p 
#line 6290 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF
   && !flag_pic && !target_word_relocations
   && !arm_tls_referenced_p (operands[1]))
    ? (int) 
#line 6290 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_USE_MOVT && GET_CODE (operands[1]) == SYMBOL_REF
   && !flag_pic && !target_word_relocations
   && !arm_tls_referenced_p (operands[1]))
    : -1 },
#line 12730 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], -4, false, true))",
    __builtin_constant_p 
#line 12730 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true)))
    ? (int) 
#line 12730 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true)))
    : -1 },
#line 6337 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && satisfies_constraint_K (operands[1])",
    __builtin_constant_p 
#line 6337 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1]))
    ? (int) 
#line 6337 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_K (operands[1]))
    : -1 },
#line 115 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed",
    __builtin_constant_p 
#line 115 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    ? (int) 
#line 115 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed)
    : -1 },
#line 8561 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT || TARGET_THUMB1",
    __builtin_constant_p 
#line 8561 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    ? (int) 
#line 8561 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT || TARGET_THUMB1)
    : -1 },
#line 349 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4",
    __builtin_constant_p 
#line 349 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4)
    ? (int) 
#line 349 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && INTVAL (operands[5]) == INTVAL (operands[2]) + 4)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 278 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 278 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 8105 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[4]) == EQ\n\
       || GET_CODE (operands[4]) == NE\n\
       || GET_CODE (operands[4]) == GE\n\
       || GET_CODE (operands[4]) == LT)",
    __builtin_constant_p 
#line 8105 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    ? (int) 
#line 8105 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[4]) == EQ
       || GET_CODE (operands[4]) == NE
       || GET_CODE (operands[4]) == GE
       || GET_CODE (operands[4]) == LT))
    : -1 },
#line 3434 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && GET_CODE (operands[1]) == GET_CODE (operands[9])\n\
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6])",
    __builtin_constant_p 
#line 3434 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    ? (int) 
#line 3434 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && GET_CODE (operands[1]) == GET_CODE (operands[9])
   && INTVAL (operands[3]) == 32 - INTVAL (operands[6]))
    : -1 },
#line 3088 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_FP16",
    __builtin_constant_p 
#line 3088 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FP16)
    ? (int) 
#line 3088 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FP16)
    : -1 },
#line 4949 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && arm_general_register_operand (operands[0], DImode)",
    __builtin_constant_p 
#line 4949 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && arm_general_register_operand (operands[0], DImode))
    ? (int) 
#line 4949 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && arm_general_register_operand (operands[0], DImode))
    : -1 },
#line 6971 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && arm_arch4\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 6971 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 6971 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 1078 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && flag_pic",
    __builtin_constant_p 
#line 1078 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    ? (int) 
#line 1078 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && flag_pic)
    : -1 },
#line 12379 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5",
    __builtin_constant_p 
#line 12379 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5)
    ? (int) 
#line 12379 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5)
    : -1 },
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))",
    __builtin_constant_p 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    ? (int) 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    : -1 },
#line 1439 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32)",
    __builtin_constant_p 
#line 1439 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32))
    ? (int) 
#line 1439 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) > 0 && INTVAL (operands[2]) < 32))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HAVE_LDACQ)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 469 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 469 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ))
    : -1 },
#line 1588 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6 && optimize_size",
    __builtin_constant_p 
#line 1588 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    ? (int) 
#line 1588 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6 && optimize_size)
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 ) && (TARGET_VFP)",
    __builtin_constant_p (
#line 1317 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 ) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP))
    ? (int) (
#line 1317 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 ) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP))
    : -1 },
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2DImode)\n\
       || register_operand (operands[1], V2DImode))",
    __builtin_constant_p 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    ? (int) 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2DImode)
       || register_operand (operands[1], V2DImode)))
    : -1 },
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], TImode)\n\
       || register_operand (operands[1], TImode))",
    __builtin_constant_p 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    ? (int) 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], TImode)
       || register_operand (operands[1], TImode)))
    : -1 },
#line 772 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && peep2_reg_dead_p (3, operands[2])",
    __builtin_constant_p 
#line 772 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    ? (int) 
#line 772 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_reg_dead_p (3, operands[2]))
    : -1 },
#line 464 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))",
    __builtin_constant_p 
#line 464 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0]))))
    ? (int) 
#line 464 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0]))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && !arm_arch6)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5376 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5376 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6))
    : -1 },
#line 345 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
  { "TARGET_DSP_MULTIPLY",
    __builtin_constant_p 
#line 345 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY)
    ? (int) 
#line 345 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY)
    : -1 },
#line 1156 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 1156 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 1156 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
#line 7153 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 7153 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 7153 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
#line 579 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 579 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 579 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 12685 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "arm_arch6",
    __builtin_constant_p 
#line 12685 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch6)
    ? (int) 
#line 12685 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch6)
    : -1 },
  { "(flag_pic) && ( reload_completed)",
    __builtin_constant_p (
#line 6418 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(flag_pic) && 
#line 6420 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 6418 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(flag_pic) && 
#line 6420 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 1261 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math",
    __builtin_constant_p 
#line 1261 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)
    ? (int) 
#line 1261 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch3m && !arm_arch6)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1819 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1819 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6))
    : -1 },
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], CImode)\n\
       || register_operand (operands[1], CImode))",
    __builtin_constant_p 
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    ? (int) 
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], CImode)
       || register_operand (operands[1], CImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1211 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1211 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE))
    : -1 },
#line 7294 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_EITHER\n\
   && reload_completed\n\
   && CONST_DOUBLE_P (operands[1])",
    __builtin_constant_p 
#line 7294 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && CONST_DOUBLE_P (operands[1]))
    ? (int) 
#line 7294 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_EITHER
   && reload_completed
   && CONST_DOUBLE_P (operands[1]))
    : -1 },
#line 12698 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))\n\
     && (operands_ok_ldrd_strd (operands[0], operands[3],\n\
                                  operands[1], INTVAL (operands[2]),\n\
                                  false, true))",
    __builtin_constant_p 
#line 12698 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true)))
    ? (int) 
#line 12698 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true)))
    : -1 },
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))",
    __builtin_constant_p 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    ? (int) 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    : -1 },
#line 12502 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_SOFT_TP",
    __builtin_constant_p 
#line 12502 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_SOFT_TP)
    ? (int) 
#line 12502 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_SOFT_TP)
    : -1 },
#line 12627 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_EITHER && (arm_arch6 || !optimize_size)",
    __builtin_constant_p 
#line 12627 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    ? (int) 
#line 12627 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_EITHER && (arm_arch6 || !optimize_size))
    : -1 },
#line 326 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 326 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    ? (int) 
#line 326 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode)))
    : -1 },
#line 6020 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_EITHER && reload_completed",
    __builtin_constant_p 
#line 6020 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    ? (int) 
#line 6020 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_EITHER && reload_completed)
    : -1 },
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], EImode)\n\
       || register_operand (operands[1], EImode))",
    __builtin_constant_p 
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode)))
    ? (int) 
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], EImode)
       || register_operand (operands[1], EImode)))
    : -1 },
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V2SImode)\n\
       || register_operand (operands[1], V2SImode))",
    __builtin_constant_p 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    ? (int) 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V2SImode)
       || register_operand (operands[1], V2SImode)))
    : -1 },
  { "(TARGET_32BIT) && ((TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP_DOUBLE))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && (
#line 937 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && (
#line 937 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    : -1 },
  { "(TARGET_THUMB2 && !arm_restrict_it) && ( reload_completed\n\
    && REGNO (operands [0]) != REGNO (operands[3]))",
    __builtin_constant_p (
#line 619 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 624 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
( reload_completed
    && REGNO (operands [0]) != REGNO (operands[3])))
    ? (int) (
#line 619 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !arm_restrict_it) && 
#line 624 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
( reload_completed
    && REGNO (operands [0]) != REGNO (operands[3])))
    : -1 },
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode))",
    __builtin_constant_p 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    ? (int) 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8HImode)))
    : -1 },
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && SMIN != SMAX\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)",
    __builtin_constant_p 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    ? (int) 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))
    : -1 },
#line 6230 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
  && (!(const_ok_for_arm (INTVAL (operands[1]))\n\
        || const_ok_for_arm (~INTVAL (operands[1]))))",
    __builtin_constant_p 
#line 6230 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    ? (int) 
#line 6230 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (!(const_ok_for_arm (INTVAL (operands[1]))
        || const_ok_for_arm (~INTVAL (operands[1])))))
    : -1 },
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8QImode)\n\
       || register_operand (operands[1], V8QImode))",
    __builtin_constant_p 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    ? (int) 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8QImode)
       || register_operand (operands[1], V8QImode)))
    : -1 },
#line 10781 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       == CCmode)",
    __builtin_constant_p 
#line 10781 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    ? (int) 
#line 10781 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       == CCmode))
    : -1 },
#line 10073 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "arm_arch5 && TARGET_32BIT",
    __builtin_constant_p 
#line 10073 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT)
    ? (int) 
#line 10073 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 401 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 401 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HAVE_LDREX)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 384 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 384 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX))
    : -1 },
#line 9259 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && !arm_arch5",
    __builtin_constant_p 
#line 9259 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch5)
    ? (int) 
#line 9259 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch5)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HARD_TP)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12490 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12490 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_HARD_TP))
    : -1 },
#line 1422 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!true || flag_unsafe_math_optimizations)\n\
   && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1422 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1422 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (!true || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && arm_arch4 && !arm_arch6)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5718 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5718 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 5)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 287 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 287 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 5))
    : -1 },
  { "(TARGET_32BIT) && (unaligned_access && TARGET_32BIT)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4468 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 4468 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT))
    : -1 },
#line 440 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2",
    __builtin_constant_p 
#line 440 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    ? (int) 
#line 440 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2)
    : -1 },
#line 1077 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_NEON",
    __builtin_constant_p 
#line 1077 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON)
    ? (int) 
#line 1077 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_NEON)
    : -1 },
#line 384 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREX",
    __builtin_constant_p 
#line 384 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX)
    ? (int) 
#line 384 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX)
    : -1 },
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], OImode)\n\
       || register_operand (operands[1], OImode))",
    __builtin_constant_p 
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    ? (int) 
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], OImode)
       || register_operand (operands[1], OImode)))
    : -1 },
#line 2485 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3])",
    __builtin_constant_p 
#line 2485 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    ? (int) 
#line 2485 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !reg_overlap_mentioned_p (operands[0], operands[3]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], -4, false, false)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12778 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12778 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && USE_RETURN_INSN (FALSE))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 9434 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 9434 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && USE_RETURN_INSN (FALSE)))
    : -1 },
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SFmode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 6070 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 6070 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 6070 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)",
    __builtin_constant_p (
#line 347 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 349 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) (
#line 347 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER) && 
#line 349 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math\n\
  && !TARGET_VFP_SINGLE)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1243 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1243 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE))
    : -1 },
#line 2878 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed",
    __builtin_constant_p 
#line 2878 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    ? (int) 
#line 2878 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed)
    : -1 },
#line 1411 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32)",
    __builtin_constant_p 
#line 1411 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32))
    ? (int) 
#line 1411 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32))
    : -1 },
#line 58 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))",
    __builtin_constant_p 
#line 58 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    ? (int) 
#line 58 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2DImode != V2SFmode && V2DImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    : -1 },
#line 5365 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && arm_arch6",
    __builtin_constant_p 
#line 5365 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch6)
    ? (int) 
#line 5365 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch6)
    : -1 },
#line 544 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 544 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT)
    ? (int) 
#line 544 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && TARGET_SOFT_FLOAT)
    : -1 },
#line 10226 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)",
    __builtin_constant_p 
#line 10226 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    ? (int) 
#line 10226 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM))
    : -1 },
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V2SImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 12412 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch5e",
    __builtin_constant_p 
#line 12412 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5e)
    ? (int) 
#line 12412 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch5e)
    : -1 },
#line 950 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 950 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 950 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 3)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))\n\
     && (operands_ok_ldrd_strd (operands[2], operands[4],\n\
                                  operands[0], INTVAL (operands[1]),\n\
                                  false, false)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12746 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12746 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false))))
    : -1 },
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], XImode)\n\
       || register_operand (operands[1], XImode))",
    __builtin_constant_p 
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    ? (int) 
#line 143 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], XImode)
       || register_operand (operands[1], XImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6 && SMIN != SMIN\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMIN
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 2)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1038 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1038 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6210 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6210 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode))))
    : -1 },
#line 5184 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed && !IS_VFP_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 5184 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed && !IS_VFP_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 5184 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed && !IS_VFP_REGNUM (REGNO (operands[0])))
    : -1 },
#line 6303 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SImode) \n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 6303 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode) 
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 6303 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SImode) 
       || register_operand (operands[1], SImode)))
    : -1 },
#line 448 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 448 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 448 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 1094 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed\n\
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 64",
    __builtin_constant_p 
#line 1094 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 64)
    ? (int) 
#line 1094 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed
   && INTVAL (operands[2]) > 0 && INTVAL (operands[2]) <= 64)
    : -1 },
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V16QImode)\n\
       || register_operand (operands[1], V16QImode))",
    __builtin_constant_p 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    ? (int) 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V16QImode)
       || register_operand (operands[1], V16QImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))\n\
     && (operands_ok_ldrd_strd (operands[0], operands[3],\n\
                                  operands[1], INTVAL (operands[2]),\n\
                                  false, true)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12698 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12698 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[2]) + 4) == INTVAL (operands[4]))
     && (operands_ok_ldrd_strd (operands[0], operands[3],
                                  operands[1], INTVAL (operands[2]),
                                  false, true))))
    : -1 },
#line 6682 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch4",
    __builtin_constant_p 
#line 6682 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    ? (int) 
#line 6682 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch4)
    : -1 },
#line 469 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDACQ",
    __builtin_constant_p 
#line 469 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ)
    ? (int) 
#line 469 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 27 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 27 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
#line 12441 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_EITHER",
    __builtin_constant_p 
#line 12441 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_EITHER)
    ? (int) 
#line 12441 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_EITHER)
    : -1 },
#line 607 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_FMA && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 607 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA && flag_unsafe_math_optimizations)
    ? (int) 
#line 607 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA && flag_unsafe_math_optimizations)
    : -1 },
#line 40 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 40 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 40 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
#line 4468 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "unaligned_access && TARGET_32BIT",
    __builtin_constant_p 
#line 4468 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT)
    ? (int) 
#line 4468 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT)
    : -1 },
#line 9399 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 9399 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && SIBLING_CALL_P (insn))
    ? (int) 
#line 9399 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && SIBLING_CALL_P (insn))
    : -1 },
#line 9216 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch5 && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 9216 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && !SIBLING_CALL_P (insn))
    ? (int) 
#line 9216 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && !SIBLING_CALL_P (insn))
    : -1 },
#line 1212 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "((((REGNO (operands[6]) == REGNO (operands[0]))\n\
         && (REGNO (operands[7]) == REGNO (operands[1])))\n\
      || ((REGNO (operands[7]) == REGNO (operands[0]))\n\
         && (REGNO (operands[6]) == REGNO (operands[1]))))\n\
    && (peep2_regno_dead_p (3, REGNO (operands[0]))\n\
      || (REGNO (operands[0]) == REGNO (operands[4])))\n\
    && (peep2_regno_dead_p (3, REGNO (operands[1]))\n\
      || (REGNO (operands[1]) == REGNO (operands[4]))))",
    __builtin_constant_p 
#line 1212 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(((((REGNO (operands[6]) == REGNO (operands[0]))
         && (REGNO (operands[7]) == REGNO (operands[1])))
      || ((REGNO (operands[7]) == REGNO (operands[0]))
         && (REGNO (operands[6]) == REGNO (operands[1]))))
    && (peep2_regno_dead_p (3, REGNO (operands[0]))
      || (REGNO (operands[0]) == REGNO (operands[4])))
    && (peep2_regno_dead_p (3, REGNO (operands[1]))
      || (REGNO (operands[1]) == REGNO (operands[4])))))
    ? (int) 
#line 1212 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(((((REGNO (operands[6]) == REGNO (operands[0]))
         && (REGNO (operands[7]) == REGNO (operands[1])))
      || ((REGNO (operands[7]) == REGNO (operands[0]))
         && (REGNO (operands[6]) == REGNO (operands[1]))))
    && (peep2_regno_dead_p (3, REGNO (operands[0]))
      || (REGNO (operands[0]) == REGNO (operands[4])))
    && (peep2_regno_dead_p (3, REGNO (operands[1]))
      || (REGNO (operands[1]) == REGNO (operands[4])))))
    : -1 },
#line 997 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed\n\
   && (!CONST_INT_P (operands[2])\n\
       || (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 64))",
    __builtin_constant_p 
#line 997 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed
   && (!CONST_INT_P (operands[2])
       || (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 64)))
    ? (int) 
#line 997 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed
   && (!CONST_INT_P (operands[2])
       || (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 64)))
    : -1 },
#line 1038 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 1038 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 1038 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 5421 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 5421 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN)
    ? (int) 
#line 5421 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && (!MEM_P (operands[1])) && BYTES_BIG_ENDIAN)
    : -1 },
#line 11729 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))\n\
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24)",
    __builtin_constant_p 
#line 11729 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24))
    ? (int) 
#line 11729 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))
       == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24))
    : -1 },
#line 5144 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT ",
    __builtin_constant_p 
#line 5144 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT )
    ? (int) 
#line 5144 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT )
    : -1 },
#line 545 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE",
    __builtin_constant_p 
#line 545 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    ? (int) 
#line 545 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE)
    : -1 },
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SImode)\n\
       || register_operand (operands[1], V4SImode))",
    __builtin_constant_p 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    ? (int) 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SImode)
       || register_operand (operands[1], V4SImode)))
    : -1 },
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && arm_arch6)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1037 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1037 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6))
    : -1 },
  { "(TARGET_32BIT) && ( (CONST_INT_P (operands[1])\n\
       && !const_ok_for_arm (INTVAL (operands[1]))))",
    __builtin_constant_p (
#line 1280 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1291 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( (CONST_INT_P (operands[1])
       && !const_ok_for_arm (INTVAL (operands[1])))))
    ? (int) (
#line 1280 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1291 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( (CONST_INT_P (operands[1])
       && !const_ok_for_arm (INTVAL (operands[1])))))
    : -1 },
  { "(TARGET_32BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 3330 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3332 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 3330 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3332 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V16QImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 5718 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4 && !arm_arch6",
    __builtin_constant_p 
#line 5718 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    ? (int) 
#line 5718 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4 && !arm_arch6)
    : -1 },
#line 5708 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "!arm_arch6",
    __builtin_constant_p 
#line 5708 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(!arm_arch6)
    ? (int) 
#line 5708 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(!arm_arch6)
    : -1 },
#line 12793 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_CRC32",
    __builtin_constant_p 
#line 12793 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_CRC32)
    ? (int) 
#line 12793 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_CRC32)
    : -1 },
#line 7309 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && TARGET_SOFT_FLOAT\n\
   && (!MEM_P (operands[0])\n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 7309 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 7309 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode)))
    : -1 },
#line 3711 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1])\n\
   && !(arm_restrict_it && CONST_INT_P (operands[3]))",
    __builtin_constant_p 
#line 3711 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1])
   && !(arm_restrict_it && CONST_INT_P (operands[3])))
    ? (int) 
#line 3711 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1])
   && !(arm_restrict_it && CONST_INT_P (operands[3])))
    : -1 },
#line 11934 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed",
    __builtin_constant_p 
#line 11934 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    ? (int) 
#line 11934 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed)
    : -1 },
#line 5376 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch6",
    __builtin_constant_p 
#line 5376 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    ? (int) 
#line 5376 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch6)
    : -1 },
#line 9135 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && arm_arch5 && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 9135 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch5 && !SIBLING_CALL_P (insn))
    ? (int) 
#line 9135 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch5 && !SIBLING_CALL_P (insn))
    : -1 },
#line 8707 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE",
    __builtin_constant_p 
#line 8707 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    ? (int) 
#line 8707 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && !TARGET_VFP_SINGLE)
    : -1 },
#line 10715 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 10715 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 10715 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 2)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1092 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1092 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 2))
    : -1 },
#line 8184 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (GET_CODE (operands[3]) == EQ\n\
       || GET_CODE (operands[3]) == NE\n\
       || GET_CODE (operands[3]) == GE\n\
       || GET_CODE (operands[3]) == LT)",
    __builtin_constant_p 
#line 8184 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    ? (int) 
#line 8184 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (GET_CODE (operands[3]) == EQ
       || GET_CODE (operands[3]) == NE
       || GET_CODE (operands[3]) == GE
       || GET_CODE (operands[3]) == LT))
    : -1 },
#line 12778 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], -4, false, false))",
    __builtin_constant_p 
#line 12778 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false)))
    ? (int) 
#line 12778 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], -4, false, false)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && (reload_in_progress || reload_completed))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12153 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12153 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed)))
    : -1 },
#line 139 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 139 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 139 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
#line 6542 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "flag_pic",
    __builtin_constant_p 
#line 6542 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(flag_pic)
    ? (int) 
#line 6542 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(flag_pic)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && !arm_arch6)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1511 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1511 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_INT_SIMD)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 424 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 424 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD))
    : -1 },
#line 2823 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))\n\
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 2823 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 2823 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && ! (TARGET_NEON && IS_VFP_REGNUM (REGNO (operands[0])))
   && ! IS_IWMMXT_REGNUM (REGNO (operands[0])))
    : -1 },
#line 7193 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16) && !arm_restrict_it\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 7193 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16) && !arm_restrict_it
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 7193 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16) && !arm_restrict_it
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
  { "(TARGET_NEON) && ( reload_completed)",
    __builtin_constant_p (
#line 4421 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON) && 
#line 4423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
( reload_completed))
    ? (int) (
#line 4421 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON) && 
#line 4423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
( reload_completed))
    : -1 },
#line 12395 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch_thumb2",
    __builtin_constant_p 
#line 12395 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    ? (int) 
#line 12395 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 5)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5))
    : -1 },
#line 5681 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch4",
    __builtin_constant_p 
#line 5681 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    ? (int) 
#line 5681 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4)
    : -1 },
#line 9329 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (operands[1]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 9329 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 9329 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (operands[1]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
#line 1243 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math\n\
  && !TARGET_VFP_SINGLE",
    __builtin_constant_p 
#line 1243 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE)
    ? (int) 
#line 1243 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math
  && !TARGET_VFP_SINGLE)
    : -1 },
#line 765 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 765 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 765 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4)
    : -1 },
  { "(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP)",
    __builtin_constant_p (
#line 937 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP))
    ? (int) (
#line 937 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP))
    : -1 },
#line 246 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access",
    __builtin_constant_p 
#line 246 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access)
    ? (int) 
#line 246 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN && unaligned_access)
    : -1 },
#line 12517 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_GNU2_TLS",
    __builtin_constant_p 
#line 12517 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_GNU2_TLS)
    ? (int) 
#line 12517 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_GNU2_TLS)
    : -1 },
#line 1272 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size && reload_completed",
    __builtin_constant_p 
#line 1272 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    ? (int) 
#line 1272 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed)
    : -1 },
#line 6535 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic",
    __builtin_constant_p 
#line 6535 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    ? (int) 
#line 6535 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_VXWORKS_RTP && TARGET_ARM && flag_pic)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2\n\
  && (register_operand (operands[0], HImode)\n\
     || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 322 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 322 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode))))
    : -1 },
#line 112 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 112 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 112 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed)",
    __builtin_constant_p (
#line 12472 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 12474 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 12472 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 12474 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 1059 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && !flag_pic",
    __builtin_constant_p 
#line 1059 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    ? (int) 
#line 1059 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && !flag_pic)
    : -1 },
  { "(TARGET_THUMB1) && ( reload_completed && CONST_INT_P (operands[2])\n\
   && ((operands[1] != stack_pointer_rtx\n\
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))\n\
       || (operands[1] == stack_pointer_rtx\n\
 	   && INTVAL (operands[2]) > 1020)))",
    __builtin_constant_p (
#line 625 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 646 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed && CONST_INT_P (operands[2])
   && ((operands[1] != stack_pointer_rtx
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))
       || (operands[1] == stack_pointer_rtx
 	   && INTVAL (operands[2]) > 1020))))
    ? (int) (
#line 625 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1) && 
#line 646 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed && CONST_INT_P (operands[2])
   && ((operands[1] != stack_pointer_rtx
        && (INTVAL (operands[2]) > 255 || INTVAL (operands[2]) < -255))
       || (operands[1] == stack_pointer_rtx
 	   && INTVAL (operands[2]) > 1020))))
    : -1 },
#line 6210 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && ! TARGET_IWMMXT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 6210 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 6210 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && ! TARGET_IWMMXT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))",
    __builtin_constant_p 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    ? (int) 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V16QImode != V2SFmode && V16QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    : -1 },
#line 522 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP && !arm_restrict_it",
    __builtin_constant_p 
#line 522 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP && !arm_restrict_it)
    ? (int) 
#line 522 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP && !arm_restrict_it)
    : -1 },
#line 6364 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && satisfies_constraint_Pe (operands[1])",
    __builtin_constant_p 
#line 6364 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_Pe (operands[1]))
    ? (int) 
#line 6364 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && satisfies_constraint_Pe (operands[1]))
    : -1 },
  { "(TARGET_32BIT) && ((TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && (
#line 1288 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 && TARGET_VFP_DOUBLE) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && (
#line 1288 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 && TARGET_VFP_DOUBLE) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE)))
    : -1 },
#line 1298 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && optimize_size",
    __builtin_constant_p 
#line 1298 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    ? (int) 
#line 1298 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size)
    : -1 },
#line 1511 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_arch6",
    __builtin_constant_p 
#line 1511 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6)
    ? (int) 
#line 1511 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_arch6)
    : -1 },
#line 66 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD\n\
     && current_tune->prefer_ldrd_strd\n\
     && !optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 66 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD
     && current_tune->prefer_ldrd_strd
     && !optimize_function_for_size_p (cfun))
    ? (int) 
#line 66 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD
     && current_tune->prefer_ldrd_strd
     && !optimize_function_for_size_p (cfun))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && arm_arch6)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5731 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5731 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6))
    : -1 },
#line 6882 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 6882 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    ? (int) 
#line 6882 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode)))
    : -1 },
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT",
    __builtin_constant_p 
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT)
    ? (int) 
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT\n\
   && TARGET_SOFT_FLOAT\n\
   && (!MEM_P (operands[0])\n\
       || register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 7309 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 7309 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && TARGET_SOFT_FLOAT
   && (!MEM_P (operands[0])
       || register_operand (operands[1], SFmode))))
    : -1 },
#line 414 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT && arm_arch6",
    __builtin_constant_p 
#line 414 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6)
    ? (int) 
#line 414 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch6)
    : -1 },
#line 6259 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB2\n\
   && arm_disable_literal_pool\n\
   && reload_completed\n\
   && GET_CODE (operands[1]) == SYMBOL_REF",
    __builtin_constant_p 
#line 6259 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB2
   && arm_disable_literal_pool
   && reload_completed
   && GET_CODE (operands[1]) == SYMBOL_REF)
    ? (int) 
#line 6259 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB2
   && arm_disable_literal_pool
   && reload_completed
   && GET_CODE (operands[1]) == SYMBOL_REF)
    : -1 },
#line 700 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 4",
    __builtin_constant_p 
#line 700 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4)
    ? (int) 
#line 700 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4)
    : -1 },
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4SFmode)\n\
       || register_operand (operands[1], V4SFmode))",
    __builtin_constant_p 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    ? (int) 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4SFmode)
       || register_operand (operands[1], V4SFmode)))
    : -1 },
  { "(TARGET_32BIT) && ((TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 ) && (TARGET_VFP))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && (
#line 1288 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 ) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && (
#line 1288 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 ) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP)))
    : -1 },
#line 9205 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch5 && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 9205 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5 && !SIBLING_CALL_P (insn))
    ? (int) 
#line 9205 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch5 && !SIBLING_CALL_P (insn))
    : -1 },
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode))",
    __builtin_constant_p 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    ? (int) 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V16QImode)))
    : -1 },
#line 3714 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed",
    __builtin_constant_p 
#line 3714 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed)
    ? (int) 
#line 3714 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && reload_completed)
    : -1 },
#line 115 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune != cortexa8\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))\n\
   && !(TARGET_NEON && CONST_INT_P (operands[1])\n\
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL))",
    __builtin_constant_p 
#line 115 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune != cortexa8
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !(TARGET_NEON && CONST_INT_P (operands[1])
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))
    ? (int) 
#line 115 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune != cortexa8
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode))
   && !(TARGET_NEON && CONST_INT_P (operands[1])
        && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))
    : -1 },
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V4HImode)\n\
       || register_operand (operands[1], V4HImode))",
    __builtin_constant_p 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    ? (int) 
#line 31 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V4HImode)
       || register_operand (operands[1], V4HImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11592 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 11592 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])))
    : -1 },
#line 5437 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])\n\
       == (GET_MODE_MASK (GET_MODE (operands[5]))\n\
           & (GET_MODE_MASK (GET_MODE (operands[5]))\n\
	      << (INTVAL (operands[2])))))",
    __builtin_constant_p 
#line 5437 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    ? (int) 
#line 5437 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && ((unsigned HOST_WIDE_INT) INTVAL (operands[3])
       == (GET_MODE_MASK (GET_MODE (operands[5]))
           & (GET_MODE_MASK (GET_MODE (operands[5]))
	      << (INTVAL (operands[2]))))))
    : -1 },
#line 150 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD\n\
  && current_tune->prefer_ldrd_strd\n\
  && !optimize_function_for_size_p (cfun)",
    __builtin_constant_p 
#line 150 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD
  && current_tune->prefer_ldrd_strd
  && !optimize_function_for_size_p (cfun))
    ? (int) 
#line 150 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD
  && current_tune->prefer_ldrd_strd
  && !optimize_function_for_size_p (cfun))
    : -1 },
#line 385 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
  { "TARGET_INT_SIMD",
    __builtin_constant_p 
#line 385 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD)
    ? (int) 
#line 385 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_INT_SIMD)
    : -1 },
#line 1193 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
   && peep2_reg_dead_p (1, operands[1])\n\
   && satisfies_constraint_Pw (operands[2])",
    __builtin_constant_p 
#line 1193 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_reg_dead_p (1, operands[1])
   && satisfies_constraint_Pw (operands[2]))
    ? (int) 
#line 1193 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
   && peep2_reg_dead_p (1, operands[1])
   && satisfies_constraint_Pw (operands[2]))
    : -1 },
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))",
    __builtin_constant_p 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    ? (int) 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    : -1 },
#line 329 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
  { "TARGET_DSP_MULTIPLY && arm_arch_thumb2",
    __builtin_constant_p 
#line 329 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY && arm_arch_thumb2)
    ? (int) 
#line 329 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_DSP_MULTIPLY && arm_arch_thumb2)
    : -1 },
#line 1377 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && (true || !BYTES_BIG_ENDIAN)",
    __builtin_constant_p 
#line 1377 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (true || !BYTES_BIG_ENDIAN))
    ? (int) 
#line 1377 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (true || !BYTES_BIG_ENDIAN))
    : -1 },
#line 2853 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && reload_completed\n\
   && operands[0] != operands[1]",
    __builtin_constant_p 
#line 2853 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && operands[0] != operands[1])
    ? (int) 
#line 2853 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && operands[0] != operands[1])
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HAVE_LDREXD)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 404 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 404 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD))
    : -1 },
#line 12746 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))\n\
     && (operands_ok_ldrd_strd (operands[2], operands[4],\n\
                                  operands[0], INTVAL (operands[1]),\n\
                                  false, false))",
    __builtin_constant_p 
#line 12746 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false)))
    ? (int) 
#line 12746 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && ((INTVAL (operands[1]) + 4) == INTVAL (operands[3]))
     && (operands_ok_ldrd_strd (operands[2], operands[4],
                                  operands[0], INTVAL (operands[1]),
                                  false, false)))
    : -1 },
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))",
    __builtin_constant_p 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    ? (int) 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SFmode != V2SFmode && V2SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    : -1 },
  { "(TARGET_THUMB2) && ( reload_completed)",
    __builtin_constant_p (
#line 216 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 221 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
( reload_completed))
    ? (int) (
#line 216 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2) && 
#line 221 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
( reload_completed))
    : -1 },
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8QImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
  { "(unaligned_access && TARGET_32BIT) && ( reload_completed)",
    __builtin_constant_p (
#line 4468 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT) && 
#line 4470 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 4468 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(unaligned_access && TARGET_32BIT) && 
#line 4470 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SImode != V2SFmode && V4SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4SImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 6455 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && flag_pic",
    __builtin_constant_p 
#line 6455 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    ? (int) 
#line 6455 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && flag_pic)
    : -1 },
#line 83 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/crypto.md"
  { "TARGET_CRYPTO",
    __builtin_constant_p 
#line 83 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/crypto.md"
(TARGET_CRYPTO)
    ? (int) 
#line 83 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/crypto.md"
(TARGET_CRYPTO)
    : -1 },
  { "(TARGET_ARM) && ( reload_completed)",
    __builtin_constant_p (
#line 4848 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 4850 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    ? (int) (
#line 4848 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM) && 
#line 4850 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
( reload_completed))
    : -1 },
#line 187 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
  { "TARGET_32BIT && arm_arch3m",
    __builtin_constant_p 
#line 187 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch3m)
    ? (int) 
#line 187 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm-fixed.md"
(TARGET_32BIT && arm_arch3m)
    : -1 },
#line 884 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2",
    __builtin_constant_p 
#line 884 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2)
    ? (int) 
#line 884 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_THUMB1 && XVECLEN (operands[0], 0) == 2)
    : -1 },
#line 1273 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && flag_unsafe_math_optimizations",
    __builtin_constant_p 
#line 1273 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations)
    ? (int) 
#line 1273 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && flag_unsafe_math_optimizations)
    : -1 },
  { "(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)",
    __builtin_constant_p (
#line 347 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 349 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) (
#line 347 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER) && 
#line 349 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 1997 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && TARGET_FMA",
    __builtin_constant_p 
#line 1997 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA)
    ? (int) 
#line 1997 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && TARGET_FMA)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HAVE_LDACQ && ARM_DOUBLEWORD_ALIGN)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 451 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ && ARM_DOUBLEWORD_ALIGN))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 451 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ && ARM_DOUBLEWORD_ALIGN))
    : -1 },
#line 6050 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_LDRD\n\
  && reg_overlap_mentioned_p (operands[0], operands[1])\n\
  && reg_overlap_mentioned_p (operands[0], operands[2])",
    __builtin_constant_p 
#line 6050 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    ? (int) 
#line 6050 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD
  && reg_overlap_mentioned_p (operands[0], operands[1])
  && reg_overlap_mentioned_p (operands[0], operands[2]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 4)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 765 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 765 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 4))
    : -1 },
#line 1605 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!false || flag_unsafe_math_optimizations)",
    __builtin_constant_p 
#line 1605 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations))
    ? (int) 
#line 1605 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations))
    : -1 },
#line 9455 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM   && use_simple_return_p ()",
    __builtin_constant_p 
#line 9455 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM   && use_simple_return_p ())
    ? (int) 
#line 9455 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM   && use_simple_return_p ())
    : -1 },
#line 2097 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && operands[0] != operands[1] && reload_completed",
    __builtin_constant_p 
#line 2097 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && operands[0] != operands[1] && reload_completed)
    ? (int) 
#line 2097 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && operands[0] != operands[1] && reload_completed)
    : -1 },
#line 272 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 272 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 272 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16 && !TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 233 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD && TARGET_ARM\n\
   && current_tune->prefer_ldrd_strd\n\
   && !optimize_function_for_size_p (cfun)\n\
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))\n\
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))\n\
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))\n\
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p 
#line 233 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && current_tune->prefer_ldrd_strd
   && !optimize_function_for_size_p (cfun)
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    ? (int) 
#line 233 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && current_tune->prefer_ldrd_strd
   && !optimize_function_for_size_p (cfun)
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
       ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 8987 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && TARGET_SOFT_FLOAT",
    __builtin_constant_p 
#line 8987 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    ? (int) 
#line 8987 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && TARGET_SOFT_FLOAT)
    : -1 },
#line 627 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed\n\
   && arm_general_register_operand (operands[0], DFmode)",
    __builtin_constant_p 
#line 627 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    ? (int) 
#line 627 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && reload_completed
   && arm_general_register_operand (operands[0], DFmode))
    : -1 },
  { "(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 && TARGET_VFP_DOUBLE) && (TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 1317 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 && TARGET_VFP_DOUBLE) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    ? (int) (
#line 1317 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_HARD_FLOAT && TARGET_FPU_ARMV8 && TARGET_VFP_DOUBLE) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HAVE_LDREXBH)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 363 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 363 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH))
    : -1 },
#line 3080 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2]))))",
    __builtin_constant_p 
#line 3080 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2])))))
    ? (int) 
#line 3080 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
        || (TARGET_THUMB2 && const_ok_for_arm (~INTVAL (operands[2])))))
    : -1 },
#line 3171 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !TARGET_IWMMXT && reload_completed\n\
   && !(IS_VFP_REGNUM (REGNO (operands[0])))",
    __builtin_constant_p 
#line 3171 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT && reload_completed
   && !(IS_VFP_REGNUM (REGNO (operands[0]))))
    ? (int) 
#line 3171 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !TARGET_IWMMXT && reload_completed
   && !(IS_VFP_REGNUM (REGNO (operands[0]))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6 && SMIN != SMAX\n\
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMIN != SMAX
   && arm_sat_operator_match (operands[1], operands[2], NULL, NULL)))
    : -1 },
#line 11711 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM",
    __builtin_constant_p 
#line 11711 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM)
    ? (int) 
#line 11711 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM)
    : -1 },
#line 11592 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && adjacent_mem_locations (operands[2], operands[3])",
    __builtin_constant_p 
#line 11592 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    ? (int) 
#line 11592 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && adjacent_mem_locations (operands[2], operands[3]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 326 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 326 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], 0, false, false)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12763 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12763 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false))))
    : -1 },
#line 10655 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 10655 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    ? (int) 
#line 10655 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_OR_Y)
       != CCmode))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 426 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 426 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH && TARGET_HAVE_MEMORY_BARRIER))
    : -1 },
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode))",
    __builtin_constant_p 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    ? (int) 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4HImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && optimize_size && reload_completed)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1272 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1272 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && optimize_size && reload_completed))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 426 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 426 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1261 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1261 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP3 && !flag_rounding_math))
    : -1 },
#line 744 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3])",
    __builtin_constant_p 
#line 744 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3]))
    ? (int) 
#line 744 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && INTVAL (operands[2]) == -INTVAL (operands[3]))
    : -1 },
#line 7130 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && (   register_operand (operands[0], QImode)\n\
       || register_operand (operands[1], QImode))",
    __builtin_constant_p 
#line 7130 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    ? (int) 
#line 7130 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && (   register_operand (operands[0], QImode)
       || register_operand (operands[1], QImode)))
    : -1 },
#line 693 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "reload_completed && \n\
   (TARGET_NEON && !(IS_VFP_REGNUM (REGNO (operands[0]))))",
    __builtin_constant_p 
#line 693 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(reload_completed && 
   (TARGET_NEON && !(IS_VFP_REGNUM (REGNO (operands[0])))))
    ? (int) 
#line 693 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(reload_completed && 
   (TARGET_NEON && !(IS_VFP_REGNUM (REGNO (operands[0])))))
    : -1 },
#line 12490 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_HARD_TP",
    __builtin_constant_p 
#line 12490 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    ? (int) 
#line 12490 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_HARD_TP)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune == cortexa8\n\
    && (   register_operand (operands[0], DImode)\n\
        || register_operand (operands[1], DImode))\n\
    && !(TARGET_NEON && CONST_INT_P (operands[1])\n\
	 && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 166 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune == cortexa8
    && (   register_operand (operands[0], DImode)
        || register_operand (operands[1], DImode))
    && !(TARGET_NEON && CONST_INT_P (operands[1])
	 && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 166 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune == cortexa8
    && (   register_operand (operands[0], DImode)
        || register_operand (operands[1], DImode))
    && !(TARGET_NEON && CONST_INT_P (operands[1])
	 && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL))))
    : -1 },
#line 9455 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM   && USE_RETURN_INSN (TRUE)",
    __builtin_constant_p 
#line 9455 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM   && USE_RETURN_INSN (TRUE))
    ? (int) 
#line 9455 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM   && USE_RETURN_INSN (TRUE))
    : -1 },
#line 7237 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (	  s_register_operand (operands[0], HFmode) \n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 7237 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode) 
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 7237 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (	  s_register_operand (operands[0], HFmode) 
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch6 && SMAX != SMAX\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)",
    __builtin_constant_p 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    ? (int) 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMAX
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))
    : -1 },
#line 2451 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32\n\
       && INTVAL (operands[2]) > 0 \n\
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8\n\
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)\n\
   && !reg_overlap_mentioned_p (operands[0], operands[4])",
    __builtin_constant_p 
#line 2451 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    ? (int) 
#line 2451 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && (INTVAL (operands[3]) >= 0 && INTVAL (operands[3]) < 32
       && INTVAL (operands[2]) > 0 
       && INTVAL (operands[2]) + (INTVAL (operands[3]) & 1) <= 8
       && INTVAL (operands[2]) + INTVAL (operands[3]) <= 32)
   && !reg_overlap_mentioned_p (operands[0], operands[4]))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1185 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1185 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP))
    : -1 },
#line 499 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP",
    __builtin_constant_p 
#line 499 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP)
    ? (int) 
#line 499 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP)
    : -1 },
#line 8841 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT",
    __builtin_constant_p 
#line 8841 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    ? (int) 
#line 8841 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_HARD_FLOAT)
    : -1 },
#line 12763 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && (operands_ok_ldrd_strd (operands[1], operands[2],\n\
                                  operands[0], 0, false, false))",
    __builtin_constant_p 
#line 12763 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false)))
    ? (int) 
#line 12763 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[1], operands[2],
                                  operands[0], 0, false, false)))
    : -1 },
#line 217 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt.md"
  { "TARGET_REALLY_IWMMXT\n\
   && (   register_operand (operands[0], SImode)\n\
       || register_operand (operands[1], SImode))",
    __builtin_constant_p 
#line 217 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    ? (int) 
#line 217 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt.md"
(TARGET_REALLY_IWMMXT
   && (   register_operand (operands[0], SImode)
       || register_operand (operands[1], SImode)))
    : -1 },
  { "(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP_DOUBLE)",
    __builtin_constant_p (
#line 937 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    ? (int) (
#line 937 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP_DOUBLE))
    : -1 },
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode))",
    __builtin_constant_p 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    ? (int) 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V2SImode != V2SFmode && V2SImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SImode)))
    : -1 },
#line 6004 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && reload_completed\n\
   && arm_const_double_by_parts (operands[1])",
    __builtin_constant_p 
#line 6004 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    ? (int) 
#line 6004 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && reload_completed
   && arm_const_double_by_parts (operands[1]))
    : -1 },
#line 7444 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 7444 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 7444 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT\n\
   && (   s_register_operand (operands[0], SImode)\n\
       || s_register_operand (operands[1], SImode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 69 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 69 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_VFP && TARGET_HARD_FLOAT
   && (   s_register_operand (operands[0], SImode)
       || s_register_operand (operands[1], SImode))))
    : -1 },
#line 600 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)\n\
   && (reload_completed || !arm_eliminable_register (operands[1]))",
    __builtin_constant_p 
#line 600 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)
   && (reload_completed || !arm_eliminable_register (operands[1])))
    ? (int) 
#line 600 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_op (INTVAL (operands[2]), PLUS)
   && (reload_completed || !arm_eliminable_register (operands[1])))
    : -1 },
#line 10719 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && reload_completed\n\
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)\n\
       != CCmode)",
    __builtin_constant_p 
#line 10719 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    ? (int) 
#line 10719 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && reload_completed
   && (arm_select_dominance_cc_mode (operands[3], operands[6], DOM_CC_X_AND_Y)
       != CCmode))
    : -1 },
  { "(TARGET_32BIT) && ((TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && (TARGET_VFP))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && (
#line 937 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && (
#line 937 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FMA) && 
#line 46 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iterators.md"
(TARGET_VFP)))
    : -1 },
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))",
    __builtin_constant_p 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    ? (int) 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4SFmode != V2SFmode && V4SFmode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    : -1 },
#line 5713 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 5713 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 5713 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && !BYTES_BIG_ENDIAN)
    : -1 },
#line 9146 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && !arm_arch5 && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 9146 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch5 && !SIBLING_CALL_P (insn))
    ? (int) 
#line 9146 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch5 && !SIBLING_CALL_P (insn))
    : -1 },
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8HImode != V2SFmode && V8HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V8HImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },
#line 1037 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_arch6",
    __builtin_constant_p 
#line 1037 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    ? (int) 
#line 1037 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_arch6)
    : -1 },
#line 451 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDACQ && ARM_DOUBLEWORD_ALIGN",
    __builtin_constant_p 
#line 451 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ && ARM_DOUBLEWORD_ALIGN)
    ? (int) 
#line 451 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDACQ && ARM_DOUBLEWORD_ALIGN)
    : -1 },
  { "(TARGET_32BIT) && (arm_arch_thumb2)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12547 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch_thumb2))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12547 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch_thumb2))
    : -1 },
#line 12153 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && (reload_in_progress || reload_completed)",
    __builtin_constant_p 
#line 12153 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed))
    ? (int) 
#line 12153 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && (reload_in_progress || reload_completed))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 4)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 700 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 700 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 4))
    : -1 },
#line 5975 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && reload_completed\n\
   && (arm_const_double_inline_cost (operands[1])\n\
       <= arm_max_const_double_inline_cost ())",
    __builtin_constant_p 
#line 5975 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_const_double_inline_cost (operands[1])
       <= arm_max_const_double_inline_cost ()))
    ? (int) 
#line 5975 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && reload_completed
   && (arm_const_double_inline_cost (operands[1])
       <= arm_max_const_double_inline_cost ()))
    : -1 },
#line 166 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune == cortexa8\n\
    && (   register_operand (operands[0], DImode)\n\
        || register_operand (operands[1], DImode))\n\
    && !(TARGET_NEON && CONST_INT_P (operands[1])\n\
	 && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL))",
    __builtin_constant_p 
#line 166 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune == cortexa8
    && (   register_operand (operands[0], DImode)
        || register_operand (operands[1], DImode))
    && !(TARGET_NEON && CONST_INT_P (operands[1])
	 && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))
    ? (int) 
#line 166 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP && arm_tune == cortexa8
    && (   register_operand (operands[0], DImode)
        || register_operand (operands[1], DImode))
    && !(TARGET_NEON && CONST_INT_P (operands[1])
	 && neon_immediate_valid_for_move (operands[1], DImode, NULL, NULL)))
    : -1 },
#line 568 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && !arm_restrict_it",
    __builtin_constant_p 
#line 568 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && !arm_restrict_it)
    ? (int) 
#line 568 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP_DOUBLE && !arm_restrict_it)
    : -1 },
#line 9282 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !SIBLING_CALL_P (insn)\n\
   && (GET_CODE (operands[0]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 9282 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 9282 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[0]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
#line 9416 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "(TARGET_ARM || (TARGET_THUMB2\n\
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL\n\
                   && !IS_STACKALIGN (arm_current_func_type ())))\n\
     && use_simple_return_p ()",
    __builtin_constant_p 
#line 9416 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && use_simple_return_p ())
    ? (int) 
#line 9416 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
((TARGET_ARM || (TARGET_THUMB2
                   && ARM_FUNC_TYPE (arm_current_func_type ()) == ARM_FT_NORMAL
                   && !IS_STACKALIGN (arm_current_func_type ())))
     && use_simple_return_p ())
    : -1 },
#line 5948 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !(TARGET_HARD_FLOAT && TARGET_VFP)\n\
   && !TARGET_IWMMXT\n\
   && (   register_operand (operands[0], DImode)\n\
       || register_operand (operands[1], DImode))",
    __builtin_constant_p 
#line 5948 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    ? (int) 
#line 5948 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !(TARGET_HARD_FLOAT && TARGET_VFP)
   && !TARGET_IWMMXT
   && (   register_operand (operands[0], DImode)
       || register_operand (operands[1], DImode)))
    : -1 },
#line 5230 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "!TARGET_THUMB2 && !arm_arch6",
    __builtin_constant_p 
#line 5230 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(!TARGET_THUMB2 && !arm_arch6)
    ? (int) 
#line 5230 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(!TARGET_THUMB2 && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM\n\
   && arm_arch4\n\
   && (register_operand (operands[0], HImode)\n\
       || register_operand (operands[1], HImode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6971 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 6971 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && arm_arch4
   && (register_operand (operands[0], HImode)
       || register_operand (operands[1], HImode))))
    : -1 },
#line 6439 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && flag_pic",
    __builtin_constant_p 
#line 6439 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    ? (int) 
#line 6439 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && flag_pic)
    : -1 },
#line 3112 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM\n\
   && !const_ok_for_arm (INTVAL (operands[2]))\n\
   && const_ok_for_arm (~INTVAL (operands[2]))",
    __builtin_constant_p 
#line 3112 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    ? (int) 
#line 3112 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM
   && !const_ok_for_arm (INTVAL (operands[2]))
   && const_ok_for_arm (~INTVAL (operands[2])))
    : -1 },
#line 10205 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)\n\
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ())",
    __builtin_constant_p 
#line 10205 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ()))
    ? (int) 
#line 10205 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(arm_arch5 && TARGET_32BIT && peep2_regno_dead_p (3, CC_REGNUM)
  && !(TARGET_THUMB2 && optimize_insn_for_size_p ()))
    : -1 },
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode))",
    __builtin_constant_p 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    ? (int) 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2DImode)))
    : -1 },
#line 401 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 401 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 401 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_ARM && TARGET_HARD_FLOAT && TARGET_VFP
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 3034 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && !flag_rounding_math",
    __builtin_constant_p 
#line 3034 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && !flag_rounding_math)
    ? (int) 
#line 3034 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && !flag_rounding_math)
    : -1 },
#line 9315 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && GET_CODE (operands[0]) == SYMBOL_REF\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0]))",
    __builtin_constant_p 
#line 9315 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    ? (int) 
#line 9315 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && GET_CODE (operands[0]) == SYMBOL_REF
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[0])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], -4, false, true)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12730 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12730 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], -4, false, true))))
    : -1 },
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON\n\
   && (register_operand (operands[0], V8HImode)\n\
       || register_operand (operands[1], V8HImode))",
    __builtin_constant_p 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    ? (int) 
#line 76 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON
   && (register_operand (operands[0], V8HImode)
       || register_operand (operands[1], V8HImode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 125 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 125 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN))
    : -1 },
#line 9299 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && !SIBLING_CALL_P (insn)\n\
   && (GET_CODE (operands[1]) == SYMBOL_REF)\n\
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1]))",
    __builtin_constant_p 
#line 9299 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    ? (int) 
#line 9299 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && !SIBLING_CALL_P (insn)
   && (GET_CODE (operands[1]) == SYMBOL_REF)
   && !arm_is_long_call_p (SYMBOL_REF_DECL (operands[1])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && reload_completed)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1366 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1366 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed))
    : -1 },
#line 1819 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && arm_arch3m && !arm_arch6",
    __builtin_constant_p 
#line 1819 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6)
    ? (int) 
#line 1819 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch3m && !arm_arch6)
    : -1 },
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))",
    __builtin_constant_p 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    ? (int) 
#line 97 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V8QImode != V2SFmode && V8QImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    : -1 },
#line 363 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXBH",
    __builtin_constant_p 
#line 363 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH)
    ? (int) 
#line 363 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXBH)
    : -1 },
#line 755 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && arm_restrict_it",
    __builtin_constant_p 
#line 755 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it)
    ? (int) 
#line 755 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && arm_restrict_it)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch_thumb2)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12387 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12387 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch_thumb2))
    : -1 },
#line 322 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2\n\
  && (register_operand (operands[0], HImode)\n\
     || register_operand (operands[1], HImode))",
    __builtin_constant_p 
#line 322 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode)))
    ? (int) 
#line 322 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2
  && (register_operand (operands[0], HImode)
     || register_operand (operands[1], HImode)))
    : -1 },
#line 4528 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_IDIV",
    __builtin_constant_p 
#line 4528 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_IDIV)
    ? (int) 
#line 4528 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_IDIV)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 980 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 980 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_FP16))
    : -1 },
#line 404 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXD",
    __builtin_constant_p 
#line 404 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD)
    ? (int) 
#line 404 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && XVECLEN (operands[0], 0) == 3)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1106 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1106 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 3))
    : -1 },
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode))",
    __builtin_constant_p 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    ? (int) 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V2SFmode)))
    : -1 },
#line 1129 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)\n\
       || REG_P (operands[2]))",
    __builtin_constant_p 
#line 1129 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2])))
    ? (int) 
#line 1129 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && ((GET_CODE(operands[3]) != ROTATE && GET_CODE(operands[3]) != ROTATERT)
       || REG_P (operands[2])))
    : -1 },
#line 111 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN",
    __builtin_constant_p 
#line 111 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN)
    ? (int) 
#line 111 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN)
    : -1 },
#line 9477 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM  && use_simple_return_p ()",
    __builtin_constant_p 
#line 9477 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM  && use_simple_return_p ())
    ? (int) 
#line 9477 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM  && use_simple_return_p ())
    : -1 },
  { "(TARGET_32BIT) && (TARGET_DSP_MULTIPLY)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1985 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1985 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_DSP_MULTIPLY))
    : -1 },
#line 217 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16\n\
   && (   s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode))",
    __builtin_constant_p 
#line 217 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    ? (int) 
#line 217 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_NEON_FP16
   && (   s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode)))
    : -1 },
#line 5353 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && !arm_arch6",
    __builtin_constant_p 
#line 5353 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch6)
    ? (int) 
#line 5353 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && !arm_arch6)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && XVECLEN (operands[0], 0) == 3)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1051 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1051 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1390 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 1390 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2))
    : -1 },
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_32BIT && XVECLEN (operands[0], 0) == 5",
    __builtin_constant_p 
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    ? (int) 
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_32BIT && XVECLEN (operands[0], 0) == 5)
    : -1 },
#line 5673 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON",
    __builtin_constant_p 
#line 5673 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON)
    ? (int) 
#line 5673 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON)
    : -1 },
#line 679 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024\n\
   && (INTVAL (operands[1]) & 3) == 0",
    __builtin_constant_p 
#line 679 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024
   && (INTVAL (operands[1]) & 3) == 0)
    ? (int) 
#line 679 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (unsigned HOST_WIDE_INT) (INTVAL (operands[1])) < 1024
   && (INTVAL (operands[1]) & 3) == 0)
    : -1 },
#line 12350 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1",
    __builtin_constant_p 
#line 12350 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1)
    ? (int) 
#line 12350 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1)
    : -1 },
#line 1126 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
  { "TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP",
    __builtin_constant_p 
#line 1126 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)
    ? (int) 
#line 1126 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_32BIT && TARGET_HARD_FLOAT && TARGET_VFP)
    : -1 },
#line 199 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
  { "TARGET_LDRD && TARGET_ARM\n\
   && current_tune->prefer_ldrd_strd\n\
   && !optimize_function_for_size_p (cfun)\n\
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))\n\
        ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))\n\
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))\n\
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4]))",
    __builtin_constant_p 
#line 199 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && current_tune->prefer_ldrd_strd
   && !optimize_function_for_size_p (cfun)
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
        ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    ? (int) 
#line 199 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldrdstrd.md"
(TARGET_LDRD && TARGET_ARM
   && current_tune->prefer_ldrd_strd
   && !optimize_function_for_size_p (cfun)
   && (  ((rtx_equal_p(operands[0], operands[6])) && (rtx_equal_p(operands[1], operands[7])))
        ||((rtx_equal_p(operands[0], operands[7])) && (rtx_equal_p(operands[1], operands[6]))))
   && (peep2_reg_dead_p (3, operands[0]) || rtx_equal_p (operands[0], operands[4]))
   && (peep2_reg_dead_p (3, operands[1]) || rtx_equal_p (operands[1], operands[4])))
    : -1 },
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode))",
    __builtin_constant_p 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    ? (int) 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V4SFmode)))
    : -1 },
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "TARGET_NEON\n\
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode))",
    __builtin_constant_p 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    ? (int) 
#line 117 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
(TARGET_NEON
   || (TARGET_REALLY_IWMMXT && VALID_IWMMXT_REG_MODE (V8QImode)))
    : -1 },
#line 7330 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1\n\
   && (   register_operand (operands[0], SFmode) \n\
       || register_operand (operands[1], SFmode))",
    __builtin_constant_p 
#line 7330 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode) 
       || register_operand (operands[1], SFmode)))
    ? (int) 
#line 7330 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1
   && (   register_operand (operands[0], SFmode) 
       || register_operand (operands[1], SFmode)))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM && arm_arch4)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5681 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 5681 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch4))
    : -1 },
#line 5803 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && reload_completed && IS_VFP_REGNUM (REGNO (operands[0]))",
    __builtin_constant_p 
#line 5803 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed && IS_VFP_REGNUM (REGNO (operands[0])))
    ? (int) 
#line 5803 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && reload_completed && IS_VFP_REGNUM (REGNO (operands[0])))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT\n\
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32\n\
      && INTVAL (operands[1]) > 0 \n\
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8\n\
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2353 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 2353 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
  && (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
      && INTVAL (operands[1]) > 0 
      && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
      && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)))
    : -1 },
#line 3258 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !const_ok_for_arm (INTVAL (operands[2]))",
    __builtin_constant_p 
#line 3258 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_arm (INTVAL (operands[2])))
    ? (int) 
#line 3258 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !const_ok_for_arm (INTVAL (operands[2])))
    : -1 },
#line 3666 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it",
    __builtin_constant_p 
#line 3666 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it)
    ? (int) 
#line 3666 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !arm_eliminable_register (operands[1]) && !arm_restrict_it)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_LDRD && TARGET_THUMB2 && reload_completed\n\
     && current_tune->prefer_ldrd_strd\n\
     && (operands_ok_ldrd_strd (operands[0], operands[2],\n\
                                  operands[1], 0, false, true)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12715 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 12715 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_LDRD && TARGET_THUMB2 && reload_completed
     && current_tune->prefer_ldrd_strd
     && (operands_ok_ldrd_strd (operands[0], operands[2],
                                  operands[1], 0, false, true))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 426 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 426 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER))
    : -1 },
#line 2287 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT\n\
   && CONST_INT_P (operands[2])\n\
   && !(const_ok_for_arm (INTVAL (operands[2]))\n\
	|| const_ok_for_arm (~INTVAL (operands[2])))",
    __builtin_constant_p 
#line 2287 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    ? (int) 
#line 2287 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT
   && CONST_INT_P (operands[2])
   && !(const_ok_for_arm (INTVAL (operands[2]))
	|| const_ok_for_arm (~INTVAL (operands[2]))))
    : -1 },
#line 3637 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && optimize_function_for_size_p (cfun) && !arm_restrict_it",
    __builtin_constant_p 
#line 3637 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && optimize_function_for_size_p (cfun) && !arm_restrict_it)
    ? (int) 
#line 3637 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && optimize_function_for_size_p (cfun) && !arm_restrict_it)
    : -1 },
#line 5731 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && arm_arch6",
    __builtin_constant_p 
#line 5731 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    ? (int) 
#line 5731 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && arm_arch6)
    : -1 },
#line 1114 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
  { "TARGET_THUMB2 && reload_completed\n\
   && GET_CODE(operands[3]) != PLUS\n\
   && GET_CODE(operands[3]) != MINUS",
    __builtin_constant_p 
#line 1114 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    ? (int) 
#line 1114 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/thumb2.md"
(TARGET_THUMB2 && reload_completed
   && GET_CODE(operands[3]) != PLUS
   && GET_CODE(operands[3]) != MINUS)
    : -1 },
#line 1051 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
  { "TARGET_ARM && XVECLEN (operands[0], 0) == 3",
    __builtin_constant_p 
#line 1051 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3)
    ? (int) 
#line 1051 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/ldmstm.md"
(TARGET_ARM && XVECLEN (operands[0], 0) == 3)
    : -1 },
#line 9247 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB1 && arm_arch5",
    __builtin_constant_p 
#line 9247 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch5)
    ? (int) 
#line 9247 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB1 && arm_arch5)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_ARM)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 9792 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 9792 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP\n\
   && (   s_register_operand (operands[0], SFmode)\n\
       || s_register_operand (operands[1], SFmode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 362 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vfp.md"
(TARGET_THUMB2 && TARGET_HARD_FLOAT && TARGET_VFP
   && (   s_register_operand (operands[0], SFmode)
       || s_register_operand (operands[1], SFmode))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16) && !arm_restrict_it\n\
   && (	  s_register_operand (operands[0], HFmode)\n\
       || s_register_operand (operands[1], HFmode)))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 7193 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16) && !arm_restrict_it
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 7193 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && !(TARGET_HARD_FLOAT && TARGET_FP16) && !arm_restrict_it
   && (	  s_register_operand (operands[0], HFmode)
       || s_register_operand (operands[1], HFmode))))
    : -1 },
  { "(TARGET_32BIT) && (TARGET_REALLY_IWMMXT)",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 899 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt2.md"
(TARGET_REALLY_IWMMXT))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 899 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/iwmmxt2.md"
(TARGET_REALLY_IWMMXT))
    : -1 },
#line 12620 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_THUMB",
    __builtin_constant_p 
#line 12620 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB)
    ? (int) 
#line 12620 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_THUMB)
    : -1 },
  { "(TARGET_32BIT) && (TARGET_32BIT && arm_arch6 && SMAX != SMIN\n\
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL))",
    __builtin_constant_p (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    ? (int) (
#line 12423 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT) && 
#line 3787 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && arm_arch6 && SMAX != SMIN
   && arm_sat_operator_match (operands[2], operands[1], NULL, NULL)))
    : -1 },
#line 9232 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))\n\
   && !SIBLING_CALL_P (insn)",
    __builtin_constant_p 
#line 9232 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))
   && !SIBLING_CALL_P (insn))
    ? (int) 
#line 9232 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM && !arm_arch5 && (!CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))
   && !SIBLING_CALL_P (insn))
    : -1 },
#line 2593 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_ARM || arm_arch_thumb2",
    __builtin_constant_p 
#line 2593 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    ? (int) 
#line 2593 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_ARM || arm_arch_thumb2)
    : -1 },
#line 7415 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
  { "TARGET_32BIT && TARGET_SOFT_FLOAT\n\
   && (   register_operand (operands[0], DFmode)\n\
       || register_operand (operands[1], DFmode))",
    __builtin_constant_p 
#line 7415 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    ? (int) 
#line 7415 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/arm.md"
(TARGET_32BIT && TARGET_SOFT_FLOAT
   && (   register_operand (operands[0], DFmode)
       || register_operand (operands[1], DFmode)))
    : -1 },
#line 1422 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
  { "TARGET_NEON && (!false || flag_unsafe_math_optimizations)\n\
   && !BYTES_BIG_ENDIAN",
    __builtin_constant_p 
#line 1422 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN)
    ? (int) 
#line 1422 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/neon.md"
(TARGET_NEON && (!false || flag_unsafe_math_optimizations)
   && !BYTES_BIG_ENDIAN)
    : -1 },
  { "(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN\n\
	&& TARGET_HAVE_MEMORY_BARRIER) && ( reload_completed)",
    __builtin_constant_p (
#line 347 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 349 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
( reload_completed))
    ? (int) (
#line 347 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREXD && ARM_DOUBLEWORD_ALIGN
	&& TARGET_HAVE_MEMORY_BARRIER) && 
#line 349 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
( reload_completed))
    : -1 },
#line 139 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
  { "TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER",
    __builtin_constant_p 
#line 139 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
    ? (int) 
#line 139 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/sync.md"
(TARGET_HAVE_LDREX && TARGET_HAVE_MEMORY_BARRIER)
    : -1 },
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
  { "(TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)\n\
		    || flag_unsafe_math_optimizations))\n\
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT)",
    __builtin_constant_p 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT))
    ? (int) 
#line 68 "/jenhome/jenkins/jobs/LE910Cx_Multi_DAILY/workspace/build/apps_proc/poky/build/tmp-glibc/work-shared/gcc-4.9.3-r0/gcc-4.9.3/gcc/config/arm/vec-common.md"
((TARGET_NEON && ((V4HImode != V2SFmode && V4HImode != V4SFmode)
		    || flag_unsafe_math_optimizations))
   || (V4HImode == V4HImode && TARGET_REALLY_IWMMXT))
    : -1 },

};
#endif /* gcc >= 3.0.1 */

int
main(void)
{
  unsigned int i;
  const char *p;
  puts ("(define_conditions [");
#if GCC_VERSION >= 3001
  for (i = 0; i < ARRAY_SIZE (insn_conditions); i++)
    {
      printf ("  (%d \"", insn_conditions[i].value);
      for (p = insn_conditions[i].expr; *p; p++)
        {
          switch (*p)
	     {
	     case '\\':
	     case '\"': putchar ('\\'); break;
	     default: break;
	     }
          putchar (*p);
        }
      puts ("\")");
    }
#endif /* gcc >= 3.0.1 */
  puts ("])");
  fflush (stdout);
return ferror (stdout) != 0 ? FATAL_EXIT_CODE : SUCCESS_EXIT_CODE;
}
