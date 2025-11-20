#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_mode.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_mode ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { real_T
N_Channel_MOSFET1_capacitor_GS_v ; real_T N_Channel_MOSFET2_capacitor_GS_v ;
real_T intrm_sf_mf_16 ; real_T intrm_sf_mf_23 ;
N_Channel_MOSFET1_capacitor_GS_v = t1 -> mX . mX [ 15ULL ] * 1.0E-6 + t1 ->
mX . mX [ 5ULL ] ; N_Channel_MOSFET2_capacitor_GS_v = t1 -> mX . mX [ 11ULL ]
* 1.0E-6 + t1 -> mX . mX [ 4ULL ] ; intrm_sf_mf_16 =
N_Channel_MOSFET1_capacitor_GS_v - t1 -> mX . mX [ 6ULL ] ; intrm_sf_mf_23 =
N_Channel_MOSFET2_capacitor_GS_v - t1 -> mX . mX [ 3ULL ] ; out -> mMODE . mX
[ 0ULL ] = ( int32_T ) ( t1 -> mU . mX [ 0ULL ] > 0.7 ) ; out -> mMODE . mX [
1ULL ] = ( int32_T ) ( t1 -> mU . mX [ 0ULL ] < 0.3 ) ; out -> mMODE . mX [
2ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t ) t1
-> mQ . mX [ 0ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 3ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] < 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 4ULL ] = ( int32_T ) ( ( t1 -> mT . mX [ 0ULL ] - t1 -> mD . mX [ 1ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 6ULL ) ) ; out -> mMODE . mX [ 5ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 5ULL ) ) ; out -> mMODE . mX [ 6ULL ] = ( int32_T ) ( ( t1 -> mT . mX [ 0ULL ] - t1 -> mD . mX [ 0ULL ] > 1.5000000000000002E-7 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mMODE . mX [ 7ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 2ULL ) ) ; out -> mMODE . mX [ 8ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] < 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 9ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 10ULL ] = ( int32_T ) ( ( t1 -> mT . mX [ 0ULL ] - t1 -> mD . mX [ 0ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 6ULL ) ) ; out -> mMODE . mX [ 11ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 5ULL ) ) ; out -> mMODE . mX [ 12ULL ] = ( int32_T ) ( ( t1 -> mT . mX [ 0ULL ] - t1 -> mD . mX [ 1ULL ] > 1.5000000000000002E-7 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 3ULL ) ) ; out -> mMODE . mX [ 13ULL ] = ( int32_T ) ( ( t1 -> mU . mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 2ULL ) ) ; out -> mMODE . mX [ 14ULL ] = ( int32_T ) ( t1 -> mX . mX [ 6ULL ] >= 0.0 ) ; out -> mMODE . mX [ 15ULL ] = ( int32_T ) ( N_Channel_MOSFET1_capacitor_GS_v - 3.0 <= 0.0 ) ; out -> mMODE . mX [ 16ULL ] = ( int32_T ) ( N_Channel_MOSFET1_capacitor_GS_v - 3.0 > t1 -> mX . mX [ 6ULL ] ) ; out -> mMODE . mX [ 17ULL ] = ( int32_T ) ( intrm_sf_mf_16 - 3.0 <= 0.0 ) ; out -> mMODE . mX [ 18ULL ] = ( int32_T ) ( intrm_sf_mf_16 - 3.0 > - t1 -> mX . mX [ 6ULL ] ) ; out -> mMODE . mX [ 19ULL ] = ( int32_T ) ( t1 -> mX . mX [ 3ULL ] >= 0.0 ) ; out -> mMODE . mX [ 20ULL ] = ( int32_T ) ( N_Channel_MOSFET2_capacitor_GS_v - 3.0 <= 0.0 ) ; out -> mMODE . mX [ 21ULL ] = ( int32_T ) ( N_Channel_MOSFET2_capacitor_GS_v - 3.0 > t1 -> mX . mX [ 3ULL ] ) ; out -> mMODE . mX [ 22ULL ] = ( int32_T ) ( intrm_sf_mf_23 - 3.0 <= 0.0 ) ; out -> mMODE . mX [ 23ULL ] = ( int32_T ) ( intrm_sf_mf_23 - 3.0 > - t1 -> mX . mX [ 3ULL ] ) ; ( void ) sys ; ( void ) out ; return 0 ; }
