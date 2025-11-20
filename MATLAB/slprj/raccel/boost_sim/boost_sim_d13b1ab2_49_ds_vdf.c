#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_vdf.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_vdf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static boolean_T
_cg_const_1 [ 18 ] = { false , false , false , false , false , false , false
, false , false , false , true , true , false , false , true , false , true ,
false } ; ( void ) t1 ; out -> mVDF . mX [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mVDF . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mVDF . mX [ 2 ] = _cg_const_1 [
2 ] ; out -> mVDF . mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mVDF . mX [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mVDF . mX [ 5 ] = _cg_const_1 [ 5 ] ; out -> mVDF
. mX [ 6 ] = _cg_const_1 [ 6 ] ; out -> mVDF . mX [ 7 ] = _cg_const_1 [ 7 ] ;
out -> mVDF . mX [ 8 ] = _cg_const_1 [ 8 ] ; out -> mVDF . mX [ 9 ] =
_cg_const_1 [ 9 ] ; out -> mVDF . mX [ 10 ] = _cg_const_1 [ 10 ] ; out ->
mVDF . mX [ 11 ] = _cg_const_1 [ 11 ] ; out -> mVDF . mX [ 12 ] = _cg_const_1
[ 12 ] ; out -> mVDF . mX [ 13 ] = _cg_const_1 [ 13 ] ; out -> mVDF . mX [ 14
] = _cg_const_1 [ 14 ] ; out -> mVDF . mX [ 15 ] = _cg_const_1 [ 15 ] ; out
-> mVDF . mX [ 16 ] = _cg_const_1 [ 16 ] ; out -> mVDF . mX [ 17 ] =
_cg_const_1 [ 17 ] ; ( void ) sys ; ( void ) out ; return 0 ; }
