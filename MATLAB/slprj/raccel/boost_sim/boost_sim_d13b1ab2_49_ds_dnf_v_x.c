#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_dnf_v_x.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_dnf_v_x ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static boolean_T
_cg_const_1 [ 18 ] = { true , true , true , true , true , true , true , true
, true , true , true , true , false , false , true , false , true , false } ;
( void ) t1 ; out -> mDNF_V_X . mX [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mDNF_V_X . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mDNF_V_X . mX [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mDNF_V_X . mX [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mDNF_V_X . mX [ 4 ] = _cg_const_1 [ 4 ] ; out -> mDNF_V_X . mX [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mDNF_V_X . mX [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mDNF_V_X . mX [ 7 ] = _cg_const_1 [ 7 ] ; out -> mDNF_V_X . mX [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mDNF_V_X . mX [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mDNF_V_X . mX [ 10 ] = _cg_const_1 [ 10 ] ; out -> mDNF_V_X . mX [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mDNF_V_X . mX [ 12 ] = _cg_const_1 [ 12 ] ; out
-> mDNF_V_X . mX [ 13 ] = _cg_const_1 [ 13 ] ; out -> mDNF_V_X . mX [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mDNF_V_X . mX [ 15 ] = _cg_const_1 [ 15 ] ; out
-> mDNF_V_X . mX [ 16 ] = _cg_const_1 [ 16 ] ; out -> mDNF_V_X . mX [ 17 ] =
_cg_const_1 [ 17 ] ; ( void ) sys ; ( void ) out ; return 0 ; }
