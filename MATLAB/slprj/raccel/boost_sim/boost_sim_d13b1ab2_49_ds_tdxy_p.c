#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_tdxy_p.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_tdxy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 32 ] = { 1 , 3 , 4 , 5 , 0 , 1 , 2 , 3 , 5 , 6 , 1 , 3 , 1 , 2
, 3 , 5 , 2 , 3 , 1 , 2 , 3 , 5 , 1 , 2 , 3 , 5 , 1 , 2 , 3 , 5 , 3 , 3 } ;
static int32_T _cg_const_1 [ 19 ] = { 0 , 4 , 10 , 12 , 16 , 17 , 18 , 18 ,
18 , 18 , 18 , 22 , 26 , 30 , 30 , 31 , 32 , 32 , 32 } ; ( void ) t1 ; out ->
mTDXY_P . mNumCol = 18ULL ; out -> mTDXY_P . mNumRow = 7ULL ; out -> mTDXY_P
. mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mTDXY_P . mJc [ 1 ] = _cg_const_1 [
1 ] ; out -> mTDXY_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mTDXY_P . mJc [
3 ] = _cg_const_1 [ 3 ] ; out -> mTDXY_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ;
out -> mTDXY_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mTDXY_P . mJc [ 6 ] =
_cg_const_1 [ 6 ] ; out -> mTDXY_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out ->
mTDXY_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out -> mTDXY_P . mJc [ 9 ] =
_cg_const_1 [ 9 ] ; out -> mTDXY_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out ->
mTDXY_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out -> mTDXY_P . mJc [ 12 ] =
_cg_const_1 [ 12 ] ; out -> mTDXY_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out
-> mTDXY_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out -> mTDXY_P . mJc [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mTDXY_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out
-> mTDXY_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out -> mTDXY_P . mJc [ 18 ] =
_cg_const_1 [ 18 ] ; out -> mTDXY_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out ->
mTDXY_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out -> mTDXY_P . mIr [ 2 ] =
_cg_const_2 [ 2 ] ; out -> mTDXY_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out ->
mTDXY_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out -> mTDXY_P . mIr [ 5 ] =
_cg_const_2 [ 5 ] ; out -> mTDXY_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; out ->
mTDXY_P . mIr [ 7 ] = _cg_const_2 [ 7 ] ; out -> mTDXY_P . mIr [ 8 ] =
_cg_const_2 [ 8 ] ; out -> mTDXY_P . mIr [ 9 ] = _cg_const_2 [ 9 ] ; out ->
mTDXY_P . mIr [ 10 ] = _cg_const_2 [ 10 ] ; out -> mTDXY_P . mIr [ 11 ] =
_cg_const_2 [ 11 ] ; out -> mTDXY_P . mIr [ 12 ] = _cg_const_2 [ 12 ] ; out
-> mTDXY_P . mIr [ 13 ] = _cg_const_2 [ 13 ] ; out -> mTDXY_P . mIr [ 14 ] =
_cg_const_2 [ 14 ] ; out -> mTDXY_P . mIr [ 15 ] = _cg_const_2 [ 15 ] ; out
-> mTDXY_P . mIr [ 16 ] = _cg_const_2 [ 16 ] ; out -> mTDXY_P . mIr [ 17 ] =
_cg_const_2 [ 17 ] ; out -> mTDXY_P . mIr [ 18 ] = _cg_const_2 [ 18 ] ; out
-> mTDXY_P . mIr [ 19 ] = _cg_const_2 [ 19 ] ; out -> mTDXY_P . mIr [ 20 ] =
_cg_const_2 [ 20 ] ; out -> mTDXY_P . mIr [ 21 ] = _cg_const_2 [ 21 ] ; out
-> mTDXY_P . mIr [ 22 ] = _cg_const_2 [ 22 ] ; out -> mTDXY_P . mIr [ 23 ] =
_cg_const_2 [ 23 ] ; out -> mTDXY_P . mIr [ 24 ] = _cg_const_2 [ 24 ] ; out
-> mTDXY_P . mIr [ 25 ] = _cg_const_2 [ 25 ] ; out -> mTDXY_P . mIr [ 26 ] =
_cg_const_2 [ 26 ] ; out -> mTDXY_P . mIr [ 27 ] = _cg_const_2 [ 27 ] ; out
-> mTDXY_P . mIr [ 28 ] = _cg_const_2 [ 28 ] ; out -> mTDXY_P . mIr [ 29 ] =
_cg_const_2 [ 29 ] ; out -> mTDXY_P . mIr [ 30 ] = _cg_const_2 [ 30 ] ; out
-> mTDXY_P . mIr [ 31 ] = _cg_const_2 [ 31 ] ; ( void ) sys ; ( void ) out ;
return 0 ; }
