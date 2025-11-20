#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_dxy.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_dxy ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t33 , NeDsMethodOutput * out ) { real_T t2 [ 6 ] ;
real_T t1 [ 4 ] ; real_T t4 [ 4 ] ; real_T t5 [ 4 ] ; real_T t6 [ 4 ] ;
real_T t7 [ 4 ] ; size_t t12 ; ( void ) t33 ; t7 [ 0ULL ] =
2.0000000000000004E-12 ; t2 [ 1ULL ] = 1.0E-9 ; t2 [ 0ULL ] = - 0.0025 ; t7 [
2ULL ] = - 0.0010000000000020002 ; t2 [ 3ULL ] = - 1.0000000000000002E-12 ;
t4 [ 1ULL ] = - 1.0 ; t6 [ 1ULL ] = 0.001001 ; t2 [ 5ULL ] = 1.0 ; t1 [ 2ULL
] = 1.0 ; t7 [ 3ULL ] = 0.002 ; t1 [ 3ULL ] = - 1.0 ; t4 [ 3ULL ] = - 1.0 ;
t2 [ 4ULL ] = 1.0 ; t1 [ 0ULL ] = - 1.0E-9 ; t1 [ 1ULL ] =
1.0000000000000002E-12 ; t2 [ 2ULL ] = 1.0 ; t4 [ 0ULL ] = - 1.0E-9 ; t4 [
2ULL ] = 1.0000000000000002E-12 ; t5 [ 0ULL ] = 1.0000000000000002E-12 ; t5 [
1ULL ] = 0.001 ; t5 [ 2ULL ] = - 0.001000000000001 ; t5 [ 3ULL ] = 0.001 ; t6
[ 0ULL ] = 1.0000000000000002E-12 ; t6 [ 2ULL ] = - 0.001000000000001 ; t6 [
3ULL ] = 0.001 ; t7 [ 1ULL ] = 0.001 ; for ( t12 = 0ULL ; t12 < 4ULL ; t12 ++
) { out -> mDXY . mX [ t12 ] = t1 [ t12 ] ; } for ( t12 = 0ULL ; t12 < 6ULL ;
t12 ++ ) { out -> mDXY . mX [ t12 + 4ULL ] = t2 [ t12 ] ; } out -> mDXY . mX
[ 10ULL ] = 1.0 ; out -> mDXY . mX [ 11ULL ] = - 0.001 ; for ( t12 = 0ULL ;
t12 < 4ULL ; t12 ++ ) { out -> mDXY . mX [ t12 + 12ULL ] = t4 [ t12 ] ; } out
-> mDXY . mX [ 16ULL ] = 1.0 ; out -> mDXY . mX [ 17ULL ] = 1.0 ; for ( t12 =
0ULL ; t12 < 4ULL ; t12 ++ ) { out -> mDXY . mX [ t12 + 18ULL ] = t5 [ t12 ]
; } for ( t12 = 0ULL ; t12 < 4ULL ; t12 ++ ) { out -> mDXY . mX [ t12 + 22ULL
] = t6 [ t12 ] ; } for ( t12 = 0ULL ; t12 < 4ULL ; t12 ++ ) { out -> mDXY .
mX [ t12 + 26ULL ] = t7 [ t12 ] ; } out -> mDXY . mX [ 30ULL ] = 0.001 ; out
-> mDXY . mX [ 31ULL ] = 0.001001 ; ( void ) sys ; ( void ) out ; return 0 ;
}
