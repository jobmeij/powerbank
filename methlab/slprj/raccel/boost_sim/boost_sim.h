#ifndef boost_sim_h_
#define boost_sim_h_
#ifndef boost_sim_COMMON_INCLUDES_
#define boost_sim_COMMON_INCLUDES_
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
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "boost_sim_d13b1ab2_1_gateway.h"
#endif
#include "boost_sim_types.h"
#include <string.h>
#include "rt_zcfcnRefine.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "zero_crossing_types.h"
#define MODEL_NAME boost_sim
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (5) 
#define NUM_ZC_EVENTS (24) 
#ifndef NCSTATES
#define NCSTATES (14)   
#elif NCSTATES != 14
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
typedef struct { real_T gl1hy3h2ni ; real_T l02qv05jz5 ; real_T oufs0fzmal [
4 ] ; real_T lhzpma1vbc [ 43 ] ; real_T pjbtbwuivx [ 3 ] ; } B ; typedef
struct { real_T fjonorxfsi [ 2 ] ; real_T odx30hx1fa [ 49 ] ; real_T
fpfjq0uis2 ; real_T pnmtjvj1cw [ 24 ] ; real_T ew3nsy1gym ; real_T hyx5n3xmv1
; int64_T crygk2bq5y ; void * ceehah0rll ; void * kmhrrwh1ii ; void *
nmyl5rnrg2 ; void * gxzj4m40z0 ; void * los2xixe0b ; void * oik4vd0ylx ; void
* kzxtjce0pm ; void * oozsmksjqn ; void * c0ikqheflg ; void * okkpoder2l ;
struct { void * LoggedData ; } kg1pblqfto ; int32_T ppwengy2bb ; int32_T
hggliqjdni ; int_T jf5e4czqvc [ 24 ] ; int_T ahm3dqnjrx ; int32_T pfr3lvf2ec
; uint8_T b2m1reilqq [ 24 ] ; uint8_T iv2dauzecu [ 24 ] ; uint8_T bmsu0taqwz
; uint8_T olvdshfuvy ; boolean_T iopdfxcpno ; boolean_T nfsomcmu3y ; } DW ;
typedef struct { real_T a5kiib2loc [ 14 ] ; } X ; typedef struct { real_T
a5kiib2loc [ 14 ] ; } XDot ; typedef struct { boolean_T a5kiib2loc [ 14 ] ; }
XDis ; typedef struct { real_T a5kiib2loc [ 14 ] ; } CStateAbsTol ; typedef
struct { real_T a5kiib2loc [ 14 ] ; } CXPtMin ; typedef struct { real_T
a5kiib2loc [ 14 ] ; } CXPtMax ; typedef struct { real_T ck5z1ufwwy ; real_T
fv0qpsi31u ; real_T bco4cncmlp ; real_T ful4022e1f ; real_T flrxzfcqnk ;
real_T khmhhfivyl ; real_T nrjfdqcclp ; real_T dt3fvixqwf ; real_T gjccyxy50u
; real_T bxowhyz342 ; real_T eui3r4ppt5 ; real_T ex5gjqdtzh ; real_T
fpogxmdig1 ; real_T jke43trs33 ; real_T jsn0dl4dk1 ; real_T cj1qi5mvry ;
real_T poxqutjtuj ; real_T n14jjtqrbd ; real_T o2wxlulxnt ; real_T mabs0u5xa1
; real_T kbxovrrdvg ; real_T bcmv5mnt4e ; real_T le033kmors ; real_T
njim2sejkr ; } ZCV ; typedef struct { ZCSigState k5l1vouf1h ; ZCSigState
deflshn4zt ; ZCSigState gnjikhxdmc ; ZCSigState ii0rhbeo4e ; ZCSigState
fxuw110cei ; ZCSigState jcon0tk2ie ; ZCSigState ld4xneajfs ; ZCSigState
dddcyufs4a ; ZCSigState fxi2bcexqs ; ZCSigState jhin0zs10d ; ZCSigState
d3rxfteh1c ; ZCSigState lfgkk0e3i5 ; ZCSigState avlp2x4xri ; ZCSigState
g3uod3mmwq ; ZCSigState mfiost2qe1 ; ZCSigState ilcuy3to0r ; ZCSigState
k1kpiojnul ; ZCSigState b1ppzhotxd ; ZCSigState fopfhod1in ; ZCSigState
ipkob4fv3z ; ZCSigState p5j50hj0bc ; ZCSigState e0c3ufb1b2 ; ZCSigState
ecyp1ttctu ; ZCSigState ptxztcr0dc ; } PrevZCX ; typedef struct { int_T ir [
22 ] ; int_T jc [ 15 ] ; real_T pr [ 22 ] ; } MassMatrix ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T Duty ;
real_T Tsw ; real_T PulseGenerator_Amp ; real_T PulseGenerator_PhaseDelay ;
real_T Constant_Value ; } ; extern const char_T * RT_MEMORY_ALLOCATION_ERROR
; extern B rtB ; extern X rtX ; extern DW rtDW ; extern PrevZCX rtPrevZCX ;
extern MassMatrix rtMassMatrix ; extern P rtP ; extern mxArray *
mr_boost_sim_GetDWork ( ) ; extern void mr_boost_sim_SetDWork ( const mxArray
* ssDW ) ; extern mxArray * mr_boost_sim_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo * boost_sim_GetCAPIStaticMap ( void
) ; extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T
tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
