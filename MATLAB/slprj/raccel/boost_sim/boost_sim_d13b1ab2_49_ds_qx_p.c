#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_qx_p.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_qx_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 118 ] = { 0 , 1 , 2 , 3 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 0
, 1 , 2 , 3 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 0 , 1 , 2 , 3 , 10 , 11 , 12
, 13 , 14 , 15 , 16 , 0 , 1 , 2 , 3 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 0 ,
1 , 2 , 3 , 10 , 11 , 12 , 13 , 14 , 15 , 16 , 0 , 1 , 2 , 3 , 10 , 11 , 12 ,
13 , 14 , 15 , 16 , 17 , 0 , 1 , 2 , 3 , 10 , 11 , 12 , 13 , 14 , 15 , 16 ,
17 , 0 , 1 , 2 , 3 , 10 , 11 , 12 , 13 , 0 , 1 , 2 , 3 , 10 , 11 , 12 , 14 ,
15 , 16 , 0 , 1 , 2 , 3 , 10 , 11 , 12 , 14 , 15 , 0 , 1 , 2 , 3 , 10 , 11 ,
12 , 14 , 16 , 11 , 12 , 17 } ; static int32_T _cg_const_1 [ 19 ] = { 0 , 11
, 22 , 33 , 44 , 44 , 44 , 44 , 44 , 44 , 44 , 55 , 67 , 79 , 87 , 97 , 106 ,
115 , 118 } ; int32_T i1 ; ( void ) t1 ; out -> mQX_P . mNumCol = 18ULL ; out
-> mQX_P . mNumRow = 18ULL ; out -> mQX_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ;
out -> mQX_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mQX_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mQX_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mQX_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mQX_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mQX_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mQX_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mQX_P . mJc [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mQX_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mQX_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mQX_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mQX_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mQX_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mQX_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mQX_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out ->
mQX_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out -> mQX_P . mJc [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mQX_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; for ( i1
= 0 ; i1 < 118 ; i1 ++ ) { out -> mQX_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ; }
( void ) sys ; ( void ) out ; return 0 ; }
