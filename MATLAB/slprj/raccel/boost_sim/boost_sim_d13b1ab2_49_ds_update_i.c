#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_update_i.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_update_i ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t3 , NeDsMethodOutput * out ) { size_t t0 ;
size_t t1 ; if ( ( ( t3 -> mCI . mX [ 3ULL ] == 0 ) && ( t3 -> mU . mX [ 0ULL
] < 0.5 ) && ( ( size_t ) t3 -> mQ . mX [ 0ULL ] == 1ULL ) ) || ( ( t3 -> mU
. mX [ 0ULL ] < 0.5 ) && ( ( size_t ) t3 -> mQ . mX [ 0ULL ] == 1ULL ) && ( t3
-> mQ . mX [ 2ULL ] != 0 ) ) ) { t0 = 2ULL ; } else if ( ( ( t3 -> mCI . mX [
2ULL ] == 0 ) && ( t3 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t ) t3 -> mQ .
mX [ 0ULL ] == 1ULL ) ) || ( ( t3 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t
) t3 -> mQ . mX [ 0ULL ] == 1ULL ) && ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) {
t0 = 5ULL ; } else if ( ( ( t3 -> mCI . mX [ 43ULL ] == 0 ) && ( t3 -> mU .
mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t3 -> mQ . mX [ 0ULL ] == 2ULL ) ) || ( ( t3
-> mU . mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t3 -> mQ . mX [ 0ULL ] == 2ULL )
&& ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) { t0 = 3ULL ; } else if ( ( ( t3 ->
mCI . mX [ 42ULL ] == 0 ) && ( t3 -> mT . mX [ 0ULL ] - t3 -> mD . mX [ 1ULL
] > 1.5000000000000002E-7 ) && ( ( size_t ) t3 -> mQ . mX [ 0ULL ] == 3ULL )
) || ( ( t3 -> mT . mX [ 0ULL ] - t3 -> mD . mX [ 1ULL ] >
1.5000000000000002E-7 ) && ( ( size_t ) t3 -> mQ . mX [ 0ULL ] == 3ULL ) && ( t3
-> mQ . mX [ 2ULL ] != 0 ) ) ) { t0 = 5ULL ; } else if ( ( ( t3 -> mCI . mX [
41ULL ] == 0 ) && ( t3 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t ) t3 -> mQ .
mX [ 0ULL ] == 5ULL ) ) || ( ( t3 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t )
t3 -> mQ . mX [ 0ULL ] == 5ULL ) && ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) { t0
= 6ULL ; } else if ( ( ( t3 -> mCI . mX [ 40ULL ] == 0 ) && ( t3 -> mT . mX [
0ULL ] - t3 -> mD . mX [ 0ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t3
-> mQ . mX [ 0ULL ] == 6ULL ) ) || ( ( t3 -> mT . mX [ 0ULL ] - t3 -> mD . mX
[ 0ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t3 -> mQ . mX [ 0ULL ] ==
6ULL ) && ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) { t0 = 2ULL ; } else { t0 = ( size_t ) t3 -> mQ . mX [ 0ULL ] ; } if ( ( ( t3 -> mCI . mX [ 14ULL ] == 0 ) && ( t3 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 1ULL ) ) || ( ( t3 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 1ULL ) && ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) { t1 = 2ULL ; } else if ( ( ( t3 -> mCI . mX [ 13ULL ] == 0 ) && ( t3 -> mU . mX [ 0ULL ] < 0.5 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 1ULL ) ) || ( ( t3 -> mU . mX [ 0ULL ] < 0.5 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 1ULL ) && ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) { t1 = 5ULL ; } else if ( ( ( t3 -> mCI . mX [ 11ULL ] == 0 ) && ( t3 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 2ULL ) ) || ( ( t3 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 2ULL ) && ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) { t1 = 3ULL ; } else if ( ( ( t3 -> mCI . mX [ 10ULL ] == 0 ) && ( t3 -> mT . mX [ 0ULL ] - t3 -> mD . mX [ 0ULL ] > 1.5000000000000002E-7 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 3ULL ) ) || ( ( t3 -> mT . mX [ 0ULL ] - t3 -> mD . mX [ 0ULL ] > 1.5000000000000002E-7 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 3ULL ) && ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) { t1 = 5ULL ; } else if ( ( ( t3 -> mCI . mX [ 9ULL ] == 0 ) && ( t3 -> mU . mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 5ULL ) ) || ( ( t3 -> mU . mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 5ULL ) && ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) { t1 = 6ULL ; } else if ( ( ( t3 -> mCI . mX [ 8ULL ] == 0 ) && ( t3 -> mT . mX [ 0ULL ] - t3 -> mD . mX [ 1ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 6ULL ) ) || ( ( t3 -> mT . mX [ 0ULL ] - t3 -> mD . mX [ 1ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t3 -> mQ . mX [ 1ULL ] == 6ULL ) && ( t3 -> mQ . mX [ 2ULL ] != 0 ) ) ) { t1 = 2ULL ; } else { t1 = ( size_t ) t3 -> mQ . mX [ 1ULL ] ; } out -> mUPDATE_I . mX [ 0ULL ] = ( int32_T ) t0 ; out -> mUPDATE_I . mX [ 1ULL ] = ( int32_T ) t1 ; out -> mUPDATE_I . mX [ 2ULL ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
