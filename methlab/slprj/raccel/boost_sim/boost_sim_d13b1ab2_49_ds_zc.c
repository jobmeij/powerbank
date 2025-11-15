#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_zc.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_zc ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t9 , NeDsMethodOutput * out ) { real_T
N_Channel_MOSFET1_capacitor_GS_v ; real_T N_Channel_MOSFET1_mos_vds ; real_T
N_Channel_MOSFET_mos_vds ; real_T intrm_sf_mf_23 ; real_T t2 ; real_T t4 ; t2
= t9 -> mX . mX [ 8ULL ] * 9.999999999999972E-7 + t9 -> mX . mX [ 4ULL ] ;
N_Channel_MOSFET_mos_vds = ( - t9 -> mX . mX [ 3ULL ] + t9 -> mX . mX [ 8ULL
] * 9.999999999999972E-7 ) + t9 -> mX . mX [ 4ULL ] ;
N_Channel_MOSFET1_capacitor_GS_v = t9 -> mX . mX [ 12ULL ] * 1.0E-6 + t9 ->
mX . mX [ 6ULL ] ; N_Channel_MOSFET1_mos_vds = ( - t9 -> mX . mX [ 5ULL ] +
t9 -> mX . mX [ 12ULL ] * 1.0E-6 ) + t9 -> mX . mX [ 6ULL ] ; t4 = t2 -
N_Channel_MOSFET_mos_vds ; intrm_sf_mf_23 = N_Channel_MOSFET1_capacitor_GS_v
- N_Channel_MOSFET1_mos_vds ; if ( t9 -> mM . mX [ 14ULL ] != 0 ) { out ->
mZC . mX [ 15ULL ] = - ( t2 - 1.7 ) ; } else { out -> mZC . mX [ 15ULL ] =
0.0 ; } if ( ( t9 -> mM . mX [ 15ULL ] == 0 ) && ( t9 -> mM . mX [ 14ULL ] !=
0 ) ) { out -> mZC . mX [ 16ULL ] = ( t2 - 1.7 ) - N_Channel_MOSFET_mos_vds ;
} else { out -> mZC . mX [ 16ULL ] = 0.0 ; } if ( t9 -> mM . mX [ 14ULL ] ==
0 ) { out -> mZC . mX [ 17ULL ] = - ( t4 - 1.7 ) ; } else { out -> mZC . mX [
17ULL ] = 0.0 ; } if ( ( t9 -> mM . mX [ 14ULL ] == 0 ) && ( t9 -> mM . mX [
17ULL ] == 0 ) ) { out -> mZC . mX [ 18ULL ] = ( t4 - 1.7 ) - ( -
N_Channel_MOSFET_mos_vds ) ; } else { out -> mZC . mX [ 18ULL ] = 0.0 ; } if
( t9 -> mM . mX [ 19ULL ] != 0 ) { out -> mZC . mX [ 20ULL ] = - ( N_Channel_MOSFET1_capacitor_GS_v - 1.7 ) ; } else { out -> mZC . mX [ 20ULL ] = 0.0 ; } if ( ( t9 -> mM . mX [ 20ULL ] == 0 ) && ( t9 -> mM . mX [ 19ULL ] != 0 ) ) { out -> mZC . mX [ 21ULL ] = ( N_Channel_MOSFET1_capacitor_GS_v - 1.7 ) - N_Channel_MOSFET1_mos_vds ; } else { out -> mZC . mX [ 21ULL ] = 0.0 ; } if ( t9 -> mM . mX [ 19ULL ] == 0 ) { out -> mZC . mX [ 22ULL ] = - ( intrm_sf_mf_23 - 1.7 ) ; } else { out -> mZC . mX [ 22ULL ] = 0.0 ; } if ( ( t9 -> mM . mX [ 19ULL ] == 0 ) && ( t9 -> mM . mX [ 22ULL ] == 0 ) ) { out -> mZC . mX [ 23ULL ] = ( intrm_sf_mf_23 - 1.7 ) - ( - N_Channel_MOSFET1_mos_vds ) ; } else { out -> mZC . mX [ 23ULL ] = 0.0 ; } out -> mZC . mX [ 0ULL ] = ( real_T ) ( ( t9 -> mU . mX [ 0ULL ] < 0.5 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 1ULL ) ) ; out -> mZC . mX [ 1ULL ] = ( real_T ) ( ( t9 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 1ULL ) ) ; out -> mZC . mX [ 2ULL ] = ( real_T ) ( ( t9 -> mU . mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 2ULL ) ) ; out -> mZC . mX [ 3ULL ] = ( real_T ) ( ( t9 -> mT . mX [ 0ULL ] - t9 -> mD . mX [ 1ULL ] > 1.5000000000000002E-7 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 3ULL ) ) ; out -> mZC . mX [ 4ULL ] = ( real_T ) ( ( t9 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 5ULL ) ) ; out -> mZC . mX [ 5ULL ] = ( real_T ) ( ( t9 -> mT . mX [ 0ULL ] - t9 -> mD . mX [ 0ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 6ULL ) ) ; out -> mZC . mX [ 6ULL ] = ( real_T ) ( ( t9 -> mU . mX [ 0ULL ] >= 0.5 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 1ULL ) ) ; out -> mZC . mX [ 7ULL ] = ( real_T ) ( ( t9 -> mU . mX [ 0ULL ] < 0.5 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 1ULL ) ) ; out -> mZC . mX [ 8ULL ] = ( real_T ) ( ( t9 -> mU . mX [ 0ULL ] < 0.3 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 2ULL ) ) ; out -> mZC . mX [ 9ULL ] = ( real_T ) ( ( t9 -> mT . mX [ 0ULL ] - t9 -> mD . mX [ 0ULL ] > 1.5000000000000002E-7 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mZC . mX [ 10ULL ] = ( real_T ) ( ( t9 -> mU . mX [ 0ULL ] > 0.7 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 5ULL ) ) ; out -> mZC . mX [ 11ULL ] = ( real_T ) ( ( t9 -> mT . mX [ 0ULL ] - t9 -> mD . mX [ 1ULL ] > 5.0000000000000004E-8 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 6ULL ) ) ; out -> mZC . mX [ 12ULL ] = t9 -> mU . mX [ 0ULL ] - 0.7 ; out -> mZC . mX [ 13ULL ] = 0.3 - t9 -> mU . mX [ 0ULL ] ; out -> mZC . mX [ 14ULL ] = N_Channel_MOSFET_mos_vds ; out -> mZC . mX [ 19ULL ] = N_Channel_MOSFET1_mos_vds ; ( void ) sys ; ( void ) out ; return 0 ; }
