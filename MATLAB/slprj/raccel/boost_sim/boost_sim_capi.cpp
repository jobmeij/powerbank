#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "boost_sim_capi_host.h"
#define sizeof(...) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "boost_sim.h"
#include "boost_sim_capi.h"
#include "boost_sim_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING ( "boost_sim/Constant1" ) , TARGET_STRING ( "pwm in" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING ( "boost_sim/Cast To Double" ) , TARGET_STRING ( "output" ) , 0 , 0 , 0 , 0 , 1 } , { 2 , 0 , TARGET_STRING ( "boost_sim/Cast To Double1" ) , TARGET_STRING ( "counter" ) , 0 , 0 , 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING ( "boost_sim/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "boost_sim/Solver Configuration/RTP_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING ( "boost_sim/Counter Free-Running/Wrap To Zero/FixPt Switch" ) , TARGET_STRING ( "" ) , 0 , 1 , 0 , 0 , 1 } , { 6 , 0 , TARGET_STRING ( "boost_sim/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 7 , 0 , TARGET_STRING ( "boost_sim/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 3 } , { 8 , 0 , TARGET_STRING ( "boost_sim/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 3 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 9 , TARGET_STRING ( "boost_sim/Constant1" ) , TARGET_STRING ( "Value" ) , 0 , 0 , 0 } , { 10 , TARGET_STRING ( "boost_sim/Counter Free-Running/Wrap To Zero" ) , TARGET_STRING ( "Threshold" ) , 1 , 0 , 0 } , { 11 , TARGET_STRING ( "boost_sim/Counter Free-Running/Output" ) , TARGET_STRING ( "InitialCondition" ) , 1 , 0 , 0 } , { 12 , TARGET_STRING ( "boost_sim/Counter Free-Running/Increment Real World/FixPt Constant" ) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 13 , TARGET_STRING ( "boost_sim/Counter Free-Running/Wrap To Zero/Constant" ) , TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 14 , TARGET_STRING ( "Iinit_L1" ) , 0 , 0 , 0 } , { 15 , TARGET_STRING ( "PWMenable" ) , 0 , 0 , 0 } , { 16 , TARGET_STRING ( "Vinit_Cin" ) , 0 , 0 , 0 } , { 17 , TARGET_STRING ( "Vinit_Cout" ) , 0 , 0 , 0 } , { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . g04bjy14tn , & rtB . ml2me0wxms ,
& rtB . miapqubthi , & rtB . l02qv05jz5 , & rtB . mzmsgqzgtk , & rtB .
bpgqolhg4g , & rtB . oufs0fzmal [ 0 ] , & rtB . pjbtbwuivx [ 0 ] , & rtB .
lhzpma1vbc [ 0 ] , & rtP . Constant1_Value , & rtP . WrapToZero_Threshold , &
rtP . Output_InitialCondition , & rtP . FixPtConstant_Value , & rtP .
Constant_Value , & rtP . Iinit_L1 , & rtP . PWMenable , & rtP . Vinit_Cin , &
rtP . Vinit_Cout , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned short" , "uint16_T" , 0 , 0 , sizeof ( uint16_T ) , ( uint8_T )
SS_UINT16 , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 1 , 1 , 4 , 1 , 7 , 1 , 47 , 1 } ;
static const real_T rtcapiStoredFloats [ ] = { 1.31072 , 0.0 , 1.0 } ; static
const rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( NULL ) , ( NULL ) , 4 , 0 }
, { static_cast < const void * > ( & rtcapiStoredFloats [ 0 ] ) , static_cast
< const void * > ( & rtcapiStoredFloats [ 1 ] ) , static_cast < int8_T > ( 2
) , static_cast < uint8_T > ( 0 ) } , { static_cast < const void * > ( &
rtcapiStoredFloats [ 1 ] ) , static_cast < const void * > ( &
rtcapiStoredFloats [ 2 ] ) , static_cast < int8_T > ( 1 ) , static_cast <
uint8_T > ( 0 ) } , { static_cast < const void * > ( & rtcapiStoredFloats [ 1
] ) , static_cast < const void * > ( & rtcapiStoredFloats [ 1 ] ) ,
static_cast < int8_T > ( 0 ) , static_cast < uint8_T > ( 0 ) } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 9 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 5 ,
rtModelParameters , 4 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3996239696U , 392787239U , 4153754355U , 2459488013U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ; const rtwCAPI_ModelMappingStaticInfo * boost_sim_GetCAPIStaticMap ( void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void boost_sim_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void boost_sim_host_InitializeDataMapInfo ( boost_sim_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
