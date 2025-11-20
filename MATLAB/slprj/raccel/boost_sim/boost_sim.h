#ifndef boost_sim_h_
#define boost_sim_h_
#include <cmath>
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw_rtp.h"
#include "boost_sim_d13b1ab2_1_gateway.h"
#include "nesl_rtw.h"
#include "boost_sim_types.h"
#include <string.h>
#include <stddef.h>
#include "rt_zcfcnRefine.h"
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
extern "C" {
#include "rtGetInf.h"
}
#include "zero_crossing_types.h"
#define MODEL_NAME boost_sim
#define NSAMPLE_TIMES (5) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (9) 
#define NUM_ZC_EVENTS (24) 
#ifndef NCSTATES
#define NCSTATES (18)   
#elif NCSTATES != 18
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T miapqubthi ; real_T ml2me0wxms ; real_T oufs0fzmal [
4 ] ; real_T mzmsgqzgtk ; real_T lhzpma1vbc [ 47 ] ; real_T pjbtbwuivx [ 7 ]
; real_T g04bjy14tn ; real_T l02qv05jz5 ; uint16_T bpgqolhg4g ; } B ; typedef
struct { real_T fjonorxfsi [ 2 ] ; real_T odx30hx1fa [ 49 ] ; real_T
pnmtjvj1cw [ 24 ] ; real_T ew3nsy1gym ; real_T hyx5n3xmv1 ; struct { void *
LoggedData ; } fsrd42pt3v ; void * kmxbdtnnzr ; void * ceehah0rll ; void *
kmhrrwh1ii ; void * nmyl5rnrg2 ; void * gxzj4m40z0 ; void * los2xixe0b ; void
* oik4vd0ylx ; void * kzxtjce0pm ; void * oozsmksjqn ; void * c0ikqheflg ;
void * okkpoder2l ; struct { void * LoggedData [ 2 ] ; } lxn1mq3mto ; struct
{ void * LoggedData ; } hb0nifit40 ; int_T jf5e4czqvc [ 24 ] ; int_T
ahm3dqnjrx ; int32_T pfr3lvf2ec ; uint16_T hih1bjq1kd ; uint8_T b2m1reilqq [
24 ] ; uint8_T iv2dauzecu [ 24 ] ; uint8_T bmsu0taqwz ; uint8_T olvdshfuvy ;
boolean_T auyttpc2us ; boolean_T iopdfxcpno ; boolean_T nfsomcmu3y ; } DW ;
typedef struct { real_T a5kiib2loc [ 18 ] ; } X ; typedef struct { real_T
a5kiib2loc [ 18 ] ; } XDot ; typedef struct { boolean_T a5kiib2loc [ 18 ] ; }
XDis ; typedef struct { real_T a5kiib2loc [ 18 ] ; } CStateAbsTol ; typedef
struct { real_T a5kiib2loc [ 18 ] ; } CXPtMin ; typedef struct { real_T
a5kiib2loc [ 18 ] ; } CXPtMax ; typedef struct { real_T ck5z1ufwwy ; real_T
fv0qpsi31u ; real_T bco4cncmlp ; real_T ful4022e1f ; real_T flrxzfcqnk ;
real_T khmhhfivyl ; real_T nrjfdqcclp ; real_T dt3fvixqwf ; real_T gjccyxy50u
; real_T bxowhyz342 ; real_T eui3r4ppt5 ; real_T ex5gjqdtzh ; real_T
fpogxmdig1 ; real_T jke43trs33 ; real_T mabs0u5xa1 ; real_T kbxovrrdvg ;
real_T bcmv5mnt4e ; real_T le033kmors ; real_T njim2sejkr ; real_T bgx2uceqe0
; real_T i0aqbot2zh ; real_T mwe1u0kvls ; real_T a2sgszxmpp ; real_T
hwpo35surp ; } ZCV ; typedef struct { ZCSigState k5l1vouf1h ; ZCSigState
deflshn4zt ; ZCSigState gnjikhxdmc ; ZCSigState ii0rhbeo4e ; ZCSigState
fxuw110cei ; ZCSigState jcon0tk2ie ; ZCSigState ld4xneajfs ; ZCSigState
dddcyufs4a ; ZCSigState fxi2bcexqs ; ZCSigState jhin0zs10d ; ZCSigState
d3rxfteh1c ; ZCSigState lfgkk0e3i5 ; ZCSigState avlp2x4xri ; ZCSigState
g3uod3mmwq ; ZCSigState ipkob4fv3z ; ZCSigState p5j50hj0bc ; ZCSigState
e0c3ufb1b2 ; ZCSigState ecyp1ttctu ; ZCSigState ptxztcr0dc ; ZCSigState
lrgy23iutr ; ZCSigState ag4mvxcleh ; ZCSigState cntjetftqe ; ZCSigState
ogldi4sb4h ; ZCSigState cixkrd4kvb ; } PrevZCX ; typedef struct { int_T ir [
28 ] ; int_T jc [ 19 ] ; real_T pr [ 28 ] ; } MassMatrix ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T Iinit_L1 ;
real_T PWMenable ; real_T Vinit_Cin ; real_T Vinit_Cout ; uint16_T
WrapToZero_Threshold ; real_T Constant1_Value ; uint16_T
Output_InitialCondition ; uint16_T FixPtConstant_Value ; uint16_T
Constant_Value ; } ;
#ifdef __cplusplus
extern "C" {
#endif
extern const char_T * RT_MEMORY_ALLOCATION_ERROR ;
#ifdef __cplusplus
}
#endif
extern B rtB ; extern X rtX ; extern DW rtDW ; extern PrevZCX rtPrevZCX ;
extern MassMatrix rtMassMatrix ; extern P rtP ; extern mxArray *
mr_boost_sim_GetDWork ( ) ; extern void mr_boost_sim_SetDWork ( const mxArray
* ssDW ) ; extern mxArray * mr_boost_sim_GetSimStateDisallowedBlocks ( ) ;
#ifdef __cplusplus 
extern "C" {
#endif
#ifdef __cplusplus 
}
#endif
#ifdef __cplusplus 
extern "C" {
#endif
#ifdef __cplusplus 
}
#endif
extern const rtwCAPI_ModelMappingStaticInfo * boost_sim_GetCAPIStaticMap ( void
) ;
#ifdef __cplusplus
extern "C" {
#endif
extern SimStruct * const rtS ;
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#ifdef __cplusplus
}
#endif
#endif
