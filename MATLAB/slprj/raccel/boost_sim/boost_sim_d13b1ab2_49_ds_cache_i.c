#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_cache_i.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_cache_i ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { out -> mCACHE_I
. mX [ 0ULL ] = ( int32_T ) ( t1 -> mM . mX [ 0ULL ] != 0 ) ; out -> mCACHE_I
. mX [ 1ULL ] = ( int32_T ) ( t1 -> mM . mX [ 1ULL ] != 0 ) ; out -> mCACHE_I
. mX [ 2ULL ] = ( int32_T ) ( t1 -> mM . mX [ 2ULL ] != 0 ) ; out -> mCACHE_I
. mX [ 3ULL ] = ( int32_T ) ( t1 -> mM . mX [ 3ULL ] != 0 ) ; out -> mCACHE_I
. mX [ 4ULL ] = 0 ; out -> mCACHE_I . mX [ 5ULL ] = 0 ; out -> mCACHE_I . mX
[ 6ULL ] = 0 ; out -> mCACHE_I . mX [ 7ULL ] = 0 ; out -> mCACHE_I . mX [
8ULL ] = ( int32_T ) ( t1 -> mM . mX [ 4ULL ] != 0 ) ; out -> mCACHE_I . mX [
9ULL ] = ( int32_T ) ( t1 -> mM . mX [ 5ULL ] != 0 ) ; out -> mCACHE_I . mX [
10ULL ] = ( int32_T ) ( t1 -> mM . mX [ 6ULL ] != 0 ) ; out -> mCACHE_I . mX
[ 11ULL ] = ( int32_T ) ( t1 -> mM . mX [ 7ULL ] != 0 ) ; out -> mCACHE_I .
mX [ 12ULL ] = 0 ; out -> mCACHE_I . mX [ 13ULL ] = ( int32_T ) ( t1 -> mM .
mX [ 8ULL ] != 0 ) ; out -> mCACHE_I . mX [ 14ULL ] = ( int32_T ) ( t1 -> mM
. mX [ 9ULL ] != 0 ) ; out -> mCACHE_I . mX [ 15ULL ] = ( int32_T ) ( t1 ->
mU . mX [ 0ULL ] > 0.7 ) ; out -> mCACHE_I . mX [ 16ULL ] = ( int32_T ) ( t1
-> mU . mX [ 0ULL ] < 0.3 ) ; out -> mCACHE_I . mX [ 17ULL ] = 0 ; out ->
mCACHE_I . mX [ 18ULL ] = 0 ; out -> mCACHE_I . mX [ 19ULL ] = 0 ; out ->
mCACHE_I . mX [ 20ULL ] = 0 ; out -> mCACHE_I . mX [ 21ULL ] = ( int32_T ) ( ( t1 -> mT . mX [ 0ULL ] - t1 -> mD . mX [ 0ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 6ULL ) ) ; out -> mCACHE_I . mX [ 22ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 5ULL ) ) ; out -> mCACHE_I . mX [ 23ULL ] = 0 ; out -> mCACHE_I . mX [ 24ULL ] = ( int32_T ) ( ( t1 -> mT . mX [ 0ULL ] - t1 -> mD . mX [ 1ULL ] > 1.5000000000000002E-7 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 3ULL ) ) ; out -> mCACHE_I . mX [ 25ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 2ULL ) ) ; out -> mCACHE_I . mX [ 26ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 1ULL ) ) ; out -> mCACHE_I . mX [ 27ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] < 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 1ULL ) ) ; out -> mCACHE_I . mX [ 28ULL ] = 0 ; out -> mCACHE_I . mX [ 29ULL ] = 0 ; out -> mCACHE_I . mX [ 30ULL ] = 0 ; out -> mCACHE_I . mX [ 31ULL ] = 0 ; out -> mCACHE_I . mX [ 32ULL ] = ( int32_T ) ( ( t1 -> mT . mX [ 0ULL ] - t1 -> mD . mX [ 1ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 6ULL ) ) ; out -> mCACHE_I . mX [ 33ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 5ULL ) ) ; out -> mCACHE_I . mX [ 34ULL ] = 0 ; out -> mCACHE_I . mX [ 35ULL ] = ( int32_T ) ( ( t1 -> mT . mX [ 0ULL ] - t1 -> mD . mX [ 0ULL ] > 1.5000000000000002E-7 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mCACHE_I . mX [ 36ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 2ULL ) ) ; out -> mCACHE_I . mX [ 37ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] < 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 1ULL ) ) ; out -> mCACHE_I . mX [ 38ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 1ULL ) ) ; out -> mCACHE_I . mX [ 39ULL ] = 0 ; out -> mCACHE_I . mX [ 40ULL ] = ( int32_T ) ( t1 -> mM . mX [ 10ULL ] != 0 ) ; out -> mCACHE_I . mX [ 41ULL ] = ( int32_T ) ( t1 -> mM . mX [ 11ULL ] != 0 ) ; out -> mCACHE_I . mX [ 42ULL ] = ( int32_T ) ( t1 -> mM . mX [ 12ULL ] != 0 ) ; out -> mCACHE_I . mX [ 43ULL ] = ( int32_T ) ( t1 -> mM . mX [ 13ULL ] != 0 ) ; ( void ) sys ; ( void ) out ; return 0 ; }
