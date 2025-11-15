#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_lock2_i.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_lock2_i ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t5 , NeDsMethodOutput * out ) { boolean_T t0 ;
if ( ( t5 -> mCI . mX [ 27ULL ] == 0 ) && ( t5 -> mU . mX [ 0ULL ] < 0.0 ) &&
( ( size_t ) t5 -> mQ . mX [ 0ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [ 0ULL
] = true ; } else if ( ( t5 -> mCI . mX [ 26ULL ] == 0 ) && ( t5 -> mU . mX [
0ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 0ULL ] == 1ULL ) ) { out ->
mLOCK2_I . mX [ 0ULL ] = true ; } else if ( ( t5 -> mCI . mX [ 25ULL ] == 0 )
&& ( t5 -> mU . mX [ 0ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 0ULL ] ==
2ULL ) ) { out -> mLOCK2_I . mX [ 0ULL ] = true ; } else { if ( ( ! ( fabs ( -
t5 -> mD . mX [ 1ULL ] ) == pmf_get_inf ( ) ) ) && ( ! ( - t5 -> mD . mX [
1ULL ] != - t5 -> mD . mX [ 1ULL ] ) ) ) { t0 = ( t5 -> mT . mX [ 0ULL ] >
0.0 ) ; } else { t0 = false ; } if ( ( t5 -> mCI . mX [ 24ULL ] == 0 ) && ( ( size_t ) t5 -> mQ . mX [ 0ULL ] == 3ULL ) && t0 ) { out -> mLOCK2_I . mX [ 0ULL ] = true ; } else if ( ( t5 -> mCI . mX [ 22ULL ] == 0 ) && ( t5 -> mU . mX [ 0ULL ] < 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 0ULL ] == 5ULL ) ) { out -> mLOCK2_I . mX [ 0ULL ] = true ; } else { if ( ( ! ( fabs ( - t5 -> mD . mX [ 0ULL ] ) == pmf_get_inf ( ) ) ) && ( ! ( - t5 -> mD . mX [ 0ULL ] != - t5 -> mD . mX [ 0ULL ] ) ) ) { t0 = ( t5 -> mT . mX [ 0ULL ] > 0.0 ) ; } else { t0 = false ; } out -> mLOCK2_I . mX [ 0ULL ] = ( ( t5 -> mCI . mX [ 21ULL ] == 0 ) && ( ( size_t ) t5 -> mQ . mX [ 0ULL ] == 6ULL ) && t0 ) ; } } if ( ( t5 -> mCI . mX [ 38ULL ] == 0 ) && ( t5 -> mU . mX [ 0ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [ 1ULL ] = true ; } else if ( ( t5 -> mCI . mX [ 37ULL ] == 0 ) && ( t5 -> mU . mX [ 0ULL ] < 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [ 1ULL ] = true ; } else if ( ( t5 -> mCI . mX [ 36ULL ] == 0 ) && ( t5 -> mU . mX [ 0ULL ] < 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 2ULL ) ) { out -> mLOCK2_I . mX [ 1ULL ] = true ; } else { if ( ( ! ( fabs ( - t5 -> mD . mX [ 0ULL ] ) == pmf_get_inf ( ) ) ) && ( ! ( - t5 -> mD . mX [ 0ULL ] != - t5 -> mD . mX [ 0ULL ] ) ) ) { t0 = ( t5 -> mT . mX [ 0ULL ] > 0.0 ) ; } else { t0 = false ; } if ( ( t5 -> mCI . mX [ 35ULL ] == 0 ) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 3ULL ) && t0 ) { out -> mLOCK2_I . mX [ 1ULL ] = true ; } else if ( ( t5 -> mCI . mX [ 33ULL ] == 0 ) && ( t5 -> mU . mX [ 0ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 5ULL ) ) { out -> mLOCK2_I . mX [ 1ULL ] = true ; } else { if ( ( ! ( fabs ( - t5 -> mD . mX [ 1ULL ] ) == pmf_get_inf ( ) ) ) && ( ! ( - t5 -> mD . mX [ 1ULL ] != - t5 -> mD . mX [ 1ULL ] ) ) ) { t0 = ( t5 -> mT . mX [ 0ULL ] > 0.0 ) ; } else { t0 = false ; } out -> mLOCK2_I . mX [ 1ULL ] = ( ( t5 -> mCI . mX [ 32ULL ] == 0 ) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 6ULL ) && t0 ) ; } } out -> mLOCK2_I . mX [ 2ULL ] = false ; ( void ) sys ; ( void ) out ; return 0 ; }
