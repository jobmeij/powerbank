#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_acon.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_acon ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t47 , NeDsMethodOutput * out ) { real_T t11 [ 9 ] ;
real_T t10 [ 8 ] ; real_T t12 [ 8 ] ; real_T t2 [ 7 ] ; real_T t4 [ 7 ] ;
real_T t1 [ 6 ] ; real_T t3 [ 5 ] ; real_T t14 [ 4 ] ; size_t t27 ; ( void )
t47 ; t1 [ 0ULL ] = 1.0E-9 ; t1 [ 1ULL ] = 1.0 ; t1 [ 2ULL ] = - 1.0E-9 ; t1
[ 3ULL ] = - 0.0 ; t1 [ 4ULL ] = 2.0000000000000004E-12 ; t1 [ 5ULL ] = 1.0 ;
t2 [ 0ULL ] = - 1.0E-9 ; t2 [ 1ULL ] = 0.0025 ; t2 [ 2ULL ] = - 1.0 ; t2 [
3ULL ] = 1.0E-9 ; t2 [ 4ULL ] = - 0.0 ; t2 [ 5ULL ] = - 1.0000000000020002 ;
t2 [ 6ULL ] = - 0.0 ; t3 [ 0ULL ] = - 1.0 ; t3 [ 1ULL ] = 0.5 ; t3 [ 2ULL ] =
1.0 ; t3 [ 3ULL ] = - 0.0 ; t3 [ 4ULL ] = - 0.002 ; t4 [ 0ULL ] = 1.0E-9 ; t4
[ 1ULL ] = 1.0 ; t4 [ 2ULL ] = - 1.0E-9 ; t4 [ 3ULL ] = - 0.0 ; t4 [ 4ULL ] =
- 0.0 ; t4 [ 5ULL ] = 1.0000000000020002 ; t4 [ 6ULL ] = 1.0 ; t10 [ 0ULL ] =
- 1.0000000000000002E-12 ; t10 [ 1ULL ] = - 1.0 ; t10 [ 2ULL ] = - 0.001 ;
t10 [ 3ULL ] = 1.000000000001 ; t10 [ 4ULL ] = - 1.0 ; t10 [ 5ULL ] = - 0.0 ;
t10 [ 6ULL ] = - 0.003000000000002 ; t10 [ 7ULL ] = - 0.0 ; t11 [ 0ULL ] = -
1.0000000000000002E-12 ; t11 [ 1ULL ] = - 1.0 ; t11 [ 2ULL ] = - 0.001 ; t11
[ 3ULL ] = 1.000000000001 ; t11 [ 4ULL ] = 1.0 ; t11 [ 5ULL ] = - 1.0 ; t11 [
6ULL ] = - 0.0 ; t11 [ 7ULL ] = - 0.003000000000002 ; t11 [ 8ULL ] = -
9.9999999999991589E-7 ; t12 [ 0ULL ] = - 2.0000000000000004E-12 ; t12 [ 1ULL
] = - 1.0 ; t12 [ 2ULL ] = - 0.002 ; t12 [ 3ULL ] = 1.0000000000020002 ; t12
[ 4ULL ] = 1.0 ; t12 [ 5ULL ] = - 0.0 ; t12 [ 6ULL ] = - 0.004000000000004 ;
t12 [ 7ULL ] = - 0.0 ; t14 [ 0ULL ] = - 1.0 ; t14 [ 1ULL ] = - 1.0 ; t14 [
2ULL ] = - 0.0 ; t14 [ 3ULL ] = 0.001 ; for ( t27 = 0ULL ; t27 < 6ULL ; t27
++ ) { out -> mACON . mX [ t27 ] = t1 [ t27 ] ; } for ( t27 = 0ULL ; t27 <
7ULL ; t27 ++ ) { out -> mACON . mX [ t27 + 6ULL ] = t2 [ t27 ] ; } for ( t27
= 0ULL ; t27 < 5ULL ; t27 ++ ) { out -> mACON . mX [ t27 + 13ULL ] = t3 [ t27
] ; } for ( t27 = 0ULL ; t27 < 7ULL ; t27 ++ ) { out -> mACON . mX [ t27 +
18ULL ] = t4 [ t27 ] ; } out -> mACON . mX [ 25ULL ] = - 0.0 ; out -> mACON .
mX [ 26ULL ] = - 1.0 ; out -> mACON . mX [ 27ULL ] = - 0.0 ; out -> mACON .
mX [ 28ULL ] = - 1.0 ; out -> mACON . mX [ 29ULL ] = - 0.0 ; out -> mACON .
mX [ 30ULL ] = 1.0 ; out -> mACON . mX [ 31ULL ] = 1.0 ; out -> mACON . mX [
32ULL ] = - 0.0 ; out -> mACON . mX [ 33ULL ] = 1.0 ; out -> mACON . mX [
34ULL ] = - 0.0 ; out -> mACON . mX [ 35ULL ] = 1.0 ; for ( t27 = 0ULL ; t27
< 8ULL ; t27 ++ ) { out -> mACON . mX [ t27 + 36ULL ] = t10 [ t27 ] ; } for ( t27 = 0ULL ; t27 < 9ULL ; t27 ++ ) { out -> mACON . mX [ t27 + 44ULL ] = t11 [ t27 ] ; } for ( t27 = 0ULL ; t27 < 8ULL ; t27 ++ ) { out -> mACON . mX [ t27 + 53ULL ] = t12 [ t27 ] ; } out -> mACON . mX [ 61ULL ] = 1.0 ; out -> mACON . mX [ 62ULL ] = 1.0 ; out -> mACON . mX [ 63ULL ] = - 0.03 ; for ( t27 = 0ULL ; t27 < 4ULL ; t27 ++ ) { out -> mACON . mX [ t27 + 64ULL ] = t14 [ t27 ] ; } out -> mACON . mX [ 68ULL ] = - 1.0 ; out -> mACON . mX [ 69ULL ] = - 9.9999999999991589E-7 ; out -> mACON . mX [ 70ULL ] = 0.001 ; out -> mACON . mX [ 71ULL ] = 1.0 ; out -> mACON . mX [ 72ULL ] = 1.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
