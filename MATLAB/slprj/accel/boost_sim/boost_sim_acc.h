#ifndef boost_sim_acc_h_
#define boost_sim_acc_h_
#ifndef boost_sim_acc_COMMON_INCLUDES_
#define boost_sim_acc_COMMON_INCLUDES_
#include <stdlib.h>
#define S_FUNCTION_NAME simulink_only_sfcn
#define S_FUNCTION_LEVEL 2
#ifndef RTW_GENERATED_S_FUNCTION
#define RTW_GENERATED_S_FUNCTION
#endif
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rt_nonfinite.h"
#include "math.h"
#endif
#include "boost_sim_acc_types.h"
#include <float.h>
#include "mwmathutil.h"
#include "rtGetInf.h"
#include "rt_defines.h"
#include <stddef.h>
#include "simstruc_types.h"
typedef struct { real_T B_0_0_0 ; real_T B_0_1_8 ; real_T B_0_2_16 ; real_T
B_0_3_24 ; real_T B_0_4_32 ; real_T B_0_5_40 ; real_T B_0_6_48 ; real_T
B_0_7_56 ; real_T B_0_8_64 ; real_T B_0_9_72 ; real_T B_0_10_80 ; real_T
B_0_11_88 [ 4 ] ; real_T B_0_15_120 [ 49 ] ; real_T B_0_64_512 [ 7 ] ; real_T
B_0_71_568 ; real_T B_0_72_576 ; real_T B_0_73_584 ; real_T B_0_74_592 ;
real_T B_0_75_600 ; real_T B_0_76_608 ; real_T B_0_77_616 ; real_T B_0_78_624
; real_T B_0_79_632 ; } B_boost_sim_T ; typedef struct { real_T
INPUT_1_1_1_Discrete_3618734018 [ 2 ] ; real_T STATE_1_Discrete_2176707653 [
49 ] ; real_T startTimeOfNextCycle ; real_T timeWhenPeriodLastChanged ;
real_T previousPeriod ; real_T STATE_1_ZcValueStore [ 25 ] ; real_T
OUTPUT_1_0_Discrete ; real_T OUTPUT_1_0_ZcValueStore ; uint64_T
nCyclesWithSamePeriod ; real_T TransportDelay_RWORK ; void *
TransportDelay_PWORK [ 2 ] ; void * STATE_1_Simulator ; void *
STATE_1_SimData ; void * STATE_1_DiagMgr ; void * STATE_1_ZcLogger ; void *
STATE_1_TsInfo ; void * OUTPUT_1_0_Simulator ; void * OUTPUT_1_0_SimData ;
void * OUTPUT_1_0_DiagMgr ; void * OUTPUT_1_0_ZcLogger ; void *
OUTPUT_1_0_TsInfo ; void * Converterstates_PWORK [ 2 ] ; void * Scope1_PWORK
; void * Scope2_PWORK ; void * Scope3_PWORK ; void * Switching_PWORK ; void *
RTP_1_RtpManager ; int_T TransportDelay_IWORK [ 5 ] ; int_T STATE_1_Modes [
25 ] ; int_T OUTPUT_1_0_Modes ; int_T Integrator_MODE ; int_T Saturation_MODE
; int32_T STATE_1_MASS_MATRIX_PR ; uint8_T STATE_1_ZcSignalDir [ 25 ] ;
uint8_T STATE_1_ZcStateStore [ 25 ] ; uint8_T OUTPUT_1_0_ZcSignalDir ;
uint8_T OUTPUT_1_0_ZcStateStore ; boolean_T nextOutput ; boolean_T
isStartOfNextCycle ; boolean_T isFirstWarningDCGreaterThanOne ; boolean_T
isFirstWarningDCLessThanZero ; boolean_T STATE_1_FirstOutput ; boolean_T
OUTPUT_1_0_FirstOutput ; boolean_T RTP_1_SetParametersNeeded ; char_T
pad_RTP_1_SetParametersNeeded [ 5 ] ; } DW_boost_sim_T ; typedef struct {
real_T Integrator_CSTATE ; real_T Filter_CSTATE ; real_T boost_simCinvc [ 19
] ; } X_boost_sim_T ; typedef struct { real_T Integrator_CSTATE ; real_T
Filter_CSTATE ; real_T boost_simCinvc [ 19 ] ; } XDot_boost_sim_T ; typedef
struct { boolean_T Integrator_CSTATE ; boolean_T Filter_CSTATE ; boolean_T
boost_simCinvc [ 19 ] ; } XDis_boost_sim_T ; typedef struct { real_T
Integrator_CSTATE ; real_T Filter_CSTATE ; real_T boost_simCinvc [ 19 ] ; }
CStateAbsTol_boost_sim_T ; typedef struct { real_T Integrator_CSTATE ; real_T
Filter_CSTATE ; real_T boost_simCinvc [ 19 ] ; } CXPtMin_boost_sim_T ;
typedef struct { real_T Integrator_CSTATE ; real_T Filter_CSTATE ; real_T
boost_simCinvc [ 19 ] ; } CXPtMax_boost_sim_T ; typedef struct { real_T
Integrator_xUpperSaturation_ZC ; real_T Integrator_xLowerSaturation_ZC ;
real_T Integrator_InputPortSignal_ZC ; real_T Saturation_UprLim_ZC ; real_T
Saturation_LwrLim_ZC ; real_T STATE_1_DiodeprivateDiodezc_1_ZC ; real_T
STATE_1_Half_Bridge_Driverzc_1_ZC ; real_T STATE_1_Half_Bridge_Driverzc_2_ZC
; real_T STATE_1_Half_Bridge_Driverzc_3_ZC ; real_T
STATE_1_Half_Bridge_Driverzc_4_ZC ; real_T STATE_1_Half_Bridge_Driverzc_5_ZC
; real_T STATE_1_Half_Bridge_Driverzc_6_ZC ; real_T
STATE_1_Half_Bridge_Driverzc_7_ZC ; real_T STATE_1_Half_Bridge_Driverzc_8_ZC
; real_T STATE_1_Half_Bridge_Driverzc_9_ZC ; real_T
STATE_1_Half_Bridge_Driverzc_10_ZC ; real_T
STATE_1_Half_Bridge_Driverzc_11_ZC ; real_T
STATE_1_Half_Bridge_Driverzc_12_ZC ; real_T
STATE_1_Half_Bridge_Driverzc_13_ZC ; real_T
STATE_1_Half_Bridge_Driverzc_14_ZC ; real_T
STATE_1_N_Channel_MOSFET1privatemoszc_1_ZC ; real_T
STATE_1_N_Channel_MOSFET1privatemoszc_2_ZC ; real_T
STATE_1_N_Channel_MOSFET1privatemoszc_3_ZC ; real_T
STATE_1_N_Channel_MOSFET1privatemoszc_4_ZC ; real_T
STATE_1_N_Channel_MOSFET1privatemoszc_5_ZC ; real_T
STATE_1_N_Channel_MOSFET2privatemoszc_1_ZC ; real_T
STATE_1_N_Channel_MOSFET2privatemoszc_2_ZC ; real_T
STATE_1_N_Channel_MOSFET2privatemoszc_3_ZC ; real_T
STATE_1_N_Channel_MOSFET2privatemoszc_4_ZC ; real_T
STATE_1_N_Channel_MOSFET2privatemoszc_5_ZC ; } ZCV_boost_sim_T ; typedef
struct { ZCSigState Integrator_xUpperSaturation_ZCE ; ZCSigState
Integrator_xLowerSaturation_ZCE ; ZCSigState Integrator_InputPortSignal_ZCE ;
ZCSigState Saturation_UprLim_ZCE ; ZCSigState Saturation_LwrLim_ZCE ;
ZCSigState STATE_1_DiodeprivateDiodezc_1_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_1_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_2_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_3_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_4_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_5_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_6_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_7_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_8_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_9_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_10_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_11_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_12_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_13_ZCE ; ZCSigState
STATE_1_Half_Bridge_Driverzc_14_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET1privatemoszc_1_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET1privatemoszc_2_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET1privatemoszc_3_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET1privatemoszc_4_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET1privatemoszc_5_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET2privatemoszc_1_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET2privatemoszc_2_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET2privatemoszc_3_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET2privatemoszc_4_ZCE ; ZCSigState
STATE_1_N_Channel_MOSFET2privatemoszc_5_ZCE ; } PrevZCX_boost_sim_T ; typedef
struct { int_T ir [ 28 ] ; int_T jc [ 22 ] ; real_T pr [ 28 ] ; }
MassMatrix_boost_sim_T ; struct P_boost_sim_T_ { real_T P_0 ; real_T P_1 ;
real_T P_2 ; real_T P_3 ; real_T P_4 ; real_T P_5 ; real_T P_6 ; real_T P_7 ;
real_T P_8 ; real_T P_9 ; real_T P_10 ; real_T P_11 ; real_T P_12 ; real_T
P_13 ; real_T P_14 ; real_T P_15 ; real_T P_16 ; real_T P_17 ; real_T P_18 ;
} ; extern P_boost_sim_T boost_sim_rtDefaultP ;
#endif
