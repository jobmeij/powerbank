#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_dxicr_p.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_dxicr_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 15 ] = { 0 , 0 , 0 , 0 , 1 , 3 , 4 , 6 , 6 , 8 , 8 , 8 , 8 , 10
, 10 } ; static int32_T _cg_const_2 [ 10 ] = { 1 , 1 , 2 , 4 , 4 , 5 , 1 , 2
, 4 , 5 } ; ( void ) t1 ; out -> mDXICR_P . mNumCol = 14ULL ; out -> mDXICR_P
. mNumRow = 8ULL ; out -> mDXICR_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mDXICR_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mDXICR_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mDXICR_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mDXICR_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mDXICR_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mDXICR_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mDXICR_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mDXICR_P . mJc [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mDXICR_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mDXICR_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mDXICR_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mDXICR_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out
-> mDXICR_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mDXICR_P . mJc [ 14 ]
= _cg_const_1 [ 14 ] ; out -> mDXICR_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out
-> mDXICR_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out -> mDXICR_P . mIr [ 2 ] =
_cg_const_2 [ 2 ] ; out -> mDXICR_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out ->
mDXICR_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out -> mDXICR_P . mIr [ 5 ] =
_cg_const_2 [ 5 ] ; out -> mDXICR_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out ->
mDXICR_P . mIr [ 7 ] = _cg_const_2 [ 7 ] ; out -> mDXICR_P . mIr [ 8 ] =
_cg_const_2 [ 8 ] ; out -> mDXICR_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; ( void
) sys ; ( void ) out ; return 0 ; }
