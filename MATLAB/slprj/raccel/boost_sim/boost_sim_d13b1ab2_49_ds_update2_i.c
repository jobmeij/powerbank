#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_update2_i.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_update2_i ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t7 , NeDsMethodOutput * out ) { size_t t0 ;
size_t t3 ; boolean_T t4 ; if ( ( t7 -> mCI . mX [ 27ULL ] == 0 ) && ( t7 ->
mU . mX [ 0ULL ] < 0.0 ) && ( ( size_t ) t7 -> mQ . mX [ 0ULL ] == 1ULL ) ) {
t0 = 2ULL ; } else if ( ( t7 -> mCI . mX [ 26ULL ] == 0 ) && ( t7 -> mU . mX
[ 0ULL ] > 0.0 ) && ( ( size_t ) t7 -> mQ . mX [ 0ULL ] == 1ULL ) ) { t0 =
5ULL ; } else if ( ( t7 -> mCI . mX [ 25ULL ] == 0 ) && ( t7 -> mU . mX [
0ULL ] > 0.0 ) && ( ( size_t ) t7 -> mQ . mX [ 0ULL ] == 2ULL ) ) { t0 = 3ULL
; } else { if ( ( ! ( fabs ( - t7 -> mD . mX [ 1ULL ] ) == pmf_get_inf ( ) )
) && ( ! ( - t7 -> mD . mX [ 1ULL ] != - t7 -> mD . mX [ 1ULL ] ) ) ) { t4 =
( t7 -> mT . mX [ 0ULL ] > 0.0 ) ; } else { t4 = false ; } if ( ( t7 -> mCI .
mX [ 24ULL ] == 0 ) && ( ( size_t ) t7 -> mQ . mX [ 0ULL ] == 3ULL ) && t4 )
{ t0 = 5ULL ; } else if ( ( t7 -> mCI . mX [ 22ULL ] == 0 ) && ( t7 -> mU .
mX [ 0ULL ] < 0.0 ) && ( ( size_t ) t7 -> mQ . mX [ 0ULL ] == 5ULL ) ) { t0 =
6ULL ; } else { if ( ( ! ( fabs ( - t7 -> mD . mX [ 0ULL ] ) == pmf_get_inf ( )
) ) && ( ! ( - t7 -> mD . mX [ 0ULL ] != - t7 -> mD . mX [ 0ULL ] ) ) ) { t4
= ( t7 -> mT . mX [ 0ULL ] > 0.0 ) ; } else { t4 = false ; } if ( ( t7 -> mCI
. mX [ 21ULL ] == 0 ) && ( ( size_t ) t7 -> mQ . mX [ 0ULL ] == 6ULL ) && t4
) { t0 = 2ULL ; } else { t0 = ( size_t ) t7 -> mQ . mX [ 0ULL ] ; } } } if ( ( t7 -> mCI . mX [ 38ULL ] == 0 ) && ( t7 -> mU . mX [ 0ULL ] > 0.0 ) && ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 1ULL ) ) { t3 = 2ULL ; } else if ( ( t7 -> mCI . mX [ 37ULL ] == 0 ) && ( t7 -> mU . mX [ 0ULL ] < 0.0 ) && ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 1ULL ) ) { t3 = 5ULL ; } else if ( ( t7 -> mCI . mX [ 36ULL ] == 0 ) && ( t7 -> mU . mX [ 0ULL ] < 0.0 ) && ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 2ULL ) ) { t3 = 3ULL ; } else { if ( ( ! ( fabs ( - t7 -> mD . mX [ 0ULL ] ) == pmf_get_inf ( ) ) ) && ( ! ( - t7 -> mD . mX [ 0ULL ] != - t7 -> mD . mX [ 0ULL ] ) ) ) { t4 = ( t7 -> mT . mX [ 0ULL ] > 0.0 ) ; } else { t4 = false ; } if ( ( t7 -> mCI . mX [ 35ULL ] == 0 ) && ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 3ULL ) && t4 ) { t3 = 5ULL ; } else if ( ( t7 -> mCI . mX [ 33ULL ] == 0 ) && ( t7 -> mU . mX [ 0ULL ] > 0.0 ) && ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 5ULL ) ) { t3 = 6ULL ; } else { if ( ( ! ( fabs ( - t7 -> mD . mX [ 1ULL ] ) == pmf_get_inf ( ) ) ) && ( ! ( - t7 -> mD . mX [ 1ULL ] != - t7 -> mD . mX [ 1ULL ] ) ) ) { t4 = ( t7 -> mT . mX [ 0ULL ] > 0.0 ) ; } else { t4 = false ; } if ( ( t7 -> mCI . mX [ 32ULL ] == 0 ) && ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 6ULL ) && t4 ) { t3 = 2ULL ; } else { t3 = ( size_t ) t7 -> mQ . mX [ 1ULL ] ; } } } out -> mUPDATE2_I . mX [ 0ULL ] = ( int32_T ) t0 ; out -> mUPDATE2_I . mX [ 1ULL ] = ( int32_T ) t3 ; out -> mUPDATE2_I . mX [ 2ULL ] = ( int32_T ) ( t7 -> mQ . mX [ 2ULL ] != 0 ) ; ( void ) sys ; ( void ) out ; return 0 ; }
