#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_acon.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_acon ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t36 , NeDsMethodOutput * out ) { real_T t9 [ 6 ] ;
real_T t1 [ 5 ] ; real_T t10 [ 5 ] ; real_T t2 [ 5 ] ; real_T t4 [ 5 ] ;
real_T t5 [ 5 ] ; real_T t8 [ 5 ] ; real_T t3 [ 4 ] ; size_t t18 ; ( void )
t36 ; t10 [ 4ULL ] = - 0.000100000000001 ; t8 [ 4ULL ] = -
0.00010100000000101 ; t3 [ 3ULL ] = 0.01 ; t9 [ 5ULL ] = - 0.0200000000001 ;
t1 [ 0ULL ] = 1.0E-9 ; t1 [ 1ULL ] = 0.10526315789473684 ; t1 [ 2ULL ] =
1.0E-9 ; t1 [ 3ULL ] = - 1.0000000000000001E-11 ; t1 [ 4ULL ] = 1.0 ; t2 [
0ULL ] = - 1.0E-9 ; t2 [ 1ULL ] = 0.25 ; t2 [ 2ULL ] = - 0.10526315789473684
; t2 [ 3ULL ] = - 1.0E-9 ; t2 [ 4ULL ] = 1.00000000001 ; t3 [ 0ULL ] = - 1.0
; t3 [ 1ULL ] = 1.0 ; t3 [ 2ULL ] = - 1.0 ; t4 [ 0ULL ] = - 1.0E-9 ; t4 [
1ULL ] = - 0.10526315789473684 ; t4 [ 2ULL ] = - 0.0 ; t4 [ 3ULL ] = - 1.0E-9
; t4 [ 4ULL ] = 1.00000000001 ; t5 [ 0ULL ] = 1.0E-9 ; t5 [ 1ULL ] =
0.10526315789473684 ; t5 [ 2ULL ] = - 0.0 ; t5 [ 3ULL ] = 1.0E-9 ; t5 [ 4ULL
] = - 1.00000000001 ; t8 [ 0ULL ] = 1.0100000000000001E-13 ; t8 [ 1ULL ] =
1.0631578947368421E-5 ; t8 [ 2ULL ] = - 1.0 ; t8 [ 3ULL ] =
1.0100000000000001E-13 ; t9 [ 0ULL ] = 1.0000000000000001E-11 ; t9 [ 1ULL ] =
1.0 ; t9 [ 2ULL ] = 0.0010526315789473684 ; t9 [ 3ULL ] = 1.0 ; t9 [ 4ULL ] =
1.00000000001 ; t10 [ 0ULL ] = 1.0000000000000002E-13 ; t10 [ 1ULL ] =
1.0526315789473684E-5 ; t10 [ 2ULL ] = - 1.0 ; t10 [ 3ULL ] =
1.0000000000000002E-13 ; for ( t18 = 0ULL ; t18 < 5ULL ; t18 ++ ) { out ->
mACON . mX [ t18 ] = t1 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 5ULL ; t18 ++ )
{ out -> mACON . mX [ t18 + 5ULL ] = t2 [ t18 ] ; } for ( t18 = 0ULL ; t18 <
4ULL ; t18 ++ ) { out -> mACON . mX [ t18 + 10ULL ] = t3 [ t18 ] ; } for ( t18
= 0ULL ; t18 < 5ULL ; t18 ++ ) { out -> mACON . mX [ t18 + 14ULL ] = t4 [ t18
] ; } for ( t18 = 0ULL ; t18 < 5ULL ; t18 ++ ) { out -> mACON . mX [ t18 +
19ULL ] = t5 [ t18 ] ; } out -> mACON . mX [ 24ULL ] = - 0.0 ; out -> mACON .
mX [ 25ULL ] = 1.0 ; out -> mACON . mX [ 26ULL ] = - 0.0 ; out -> mACON . mX
[ 27ULL ] = - 1.0 ; for ( t18 = 0ULL ; t18 < 5ULL ; t18 ++ ) { out -> mACON .
mX [ t18 + 28ULL ] = t8 [ t18 ] ; } for ( t18 = 0ULL ; t18 < 6ULL ; t18 ++ )
{ out -> mACON . mX [ t18 + 33ULL ] = t9 [ t18 ] ; } for ( t18 = 0ULL ; t18 <
5ULL ; t18 ++ ) { out -> mACON . mX [ t18 + 39ULL ] = t10 [ t18 ] ; } out ->
mACON . mX [ 44ULL ] = 1.0 ; out -> mACON . mX [ 45ULL ] = 1.0 ; out -> mACON
. mX [ 46ULL ] = - 0.03 ; out -> mACON . mX [ 47ULL ] = - 1.0 ; out -> mACON
. mX [ 48ULL ] = - 0.000101 ; out -> mACON . mX [ 49ULL ] = - 1.0 ; out ->
mACON . mX [ 50ULL ] = - 0.0001 ; ( void ) sys ; ( void ) out ; return 0 ; }
