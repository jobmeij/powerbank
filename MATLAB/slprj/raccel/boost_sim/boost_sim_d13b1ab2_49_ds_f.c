#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_f.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_f ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t5 , NeDsMethodOutput * out ) { real_T
Half_Bridge_Driver_iH ; real_T Half_Bridge_Driver_iL ; real_T
N_Channel_MOSFET1_capacitor_GS_v ; real_T N_Channel_MOSFET2_capacitor_GS_v ;
real_T intrm_sf_mf_16 ; real_T intrm_sf_mf_23 ; real_T t1 ; real_T t2 ;
real_T t3 ; t1 = ( ( ( - t5 -> mX . mX [ 3ULL ] + t5 -> mX . mX [ 10ULL ] *
0.001 ) + t5 -> mX . mX [ 11ULL ] * 0.001 ) + t5 -> mX . mX [ 12ULL ] * 0.002
) + t5 -> mX . mX [ 1ULL ] ; t2 = ( ( ( ( - t5 -> mX . mX [ 3ULL ] + t5 -> mX
. mX [ 10ULL ] * 0.001 ) + t5 -> mX . mX [ 11ULL ] * 0.001001 ) + t5 -> mX .
mX [ 12ULL ] * 0.001 ) + t5 -> mX . mX [ 1ULL ] ) + t5 -> mX . mX [ 4ULL ] ;
t3 = ( ( ( ( ( ( ( ( t5 -> mX . mX [ 0ULL ] * 1.0000000000000002E-12 + t5 ->
mX . mX [ 1ULL ] * - 1.0000000000000002E-12 ) + t5 -> mX . mX [ 2ULL ] * -
0.001 ) + t5 -> mX . mX [ 3ULL ] * 1.0000000000000002E-12 ) + t5 -> mX . mX [
14ULL ] * 0.001 ) + t5 -> mX . mX [ 15ULL ] * 0.001001 ) + t5 -> mX . mX [
10ULL ] * - 0.001000000000001 ) + t5 -> mX . mX [ 11ULL ] * -
0.001000000000001 ) + t5 -> mX . mX [ 12ULL ] * - 0.0010000000000020002 ) +
t5 -> mX . mX [ 5ULL ] ; Half_Bridge_Driver_iH = - t5 -> mX . mX [ 10ULL ] -
t5 -> mX . mX [ 11ULL ] ; Half_Bridge_Driver_iL = - t5 -> mX . mX [ 14ULL ] -
t5 -> mX . mX [ 15ULL ] ; N_Channel_MOSFET1_capacitor_GS_v = t5 -> mX . mX [
15ULL ] * 1.0E-6 + t5 -> mX . mX [ 5ULL ] ; N_Channel_MOSFET2_capacitor_GS_v
= t5 -> mX . mX [ 11ULL ] * 1.0E-6 + t5 -> mX . mX [ 4ULL ] ; intrm_sf_mf_16
= N_Channel_MOSFET1_capacitor_GS_v - t5 -> mX . mX [ 6ULL ] ; intrm_sf_mf_23
= N_Channel_MOSFET2_capacitor_GS_v - t5 -> mX . mX [ 3ULL ] ; if ( ( size_t )
t5 -> mQ . mX [ 0ULL ] == 1ULL ) { t2 = ( t2 - t1 ) - Half_Bridge_Driver_iH *
2.0 ; } else if ( ( size_t ) t5 -> mQ . mX [ 0ULL ] == 2ULL ) { t2 = ( t2 -
t1 ) - Half_Bridge_Driver_iH * 2.0 ; } else if ( ( size_t ) t5 -> mQ . mX [
0ULL ] == 3ULL ) { t2 = ( t2 - t1 ) - Half_Bridge_Driver_iH * 2.0 ; } else if
( ( size_t ) t5 -> mQ . mX [ 0ULL ] == 4ULL ) { t2 = ( t2 - t1 ) -
Half_Bridge_Driver_iH * 2.0 ; } else { t2 = ( t2 - t1 ) - ( Half_Bridge_Driver_iH * 2.0 + 12.0 ) ; } if ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 1ULL ) { t1 = t3 - Half_Bridge_Driver_iL * 2.0 ; } else if ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 2ULL ) { t1 = t3 - Half_Bridge_Driver_iL * 2.0 ; } else if ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 3ULL ) { t1 = t3 - Half_Bridge_Driver_iL * 2.0 ; } else if ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 4ULL ) { t1 = t3 - Half_Bridge_Driver_iL * 2.0 ; } else { t1 = t3 - ( Half_Bridge_Driver_iL * 2.0 + 12.0 ) ; } if ( t5 -> mM . mX [ 14ULL ] != 0 ) { if ( t5 -> mM . mX [ 15ULL ] != 0 ) { out -> mF . mX [ 14ULL ] = t5 -> mX . mX [ 16ULL ] - t5 -> mX . mX [ 6ULL ] * 1.0E-12 ; } else if ( t5 -> mM . mX [ 16ULL ] != 0 ) { out -> mF . mX [ 14ULL ] = t5 -> mX . mX [ 16ULL ] - ( ( ( N_Channel_MOSFET1_capacitor_GS_v - 3.0 ) - t5 -> mX . mX [ 6ULL ] * 0.5 ) * t5 -> mX . mX [ 6ULL ] * 5.2631578947368425 + t5 -> mX . mX [ 6ULL ] * 1.0E-12 ) ; } else { out -> mF . mX [ 14ULL ] = t5 -> mX . mX [ 16ULL ] - ( ( N_Channel_MOSFET1_capacitor_GS_v - 3.0 ) * ( N_Channel_MOSFET1_capacitor_GS_v - 3.0 ) * 5.2631578947368425 * 0.5 + t5 -> mX . mX [ 6ULL ] * 1.0E-12 ) ; } } else if ( t5 -> mM . mX [ 17ULL ] != 0 ) { out -> mF . mX [ 14ULL ] = t5 -> mX . mX [ 16ULL ] - t5 -> mX . mX [ 6ULL ] * 1.0E-12 ; } else if ( t5 -> mM . mX [ 18ULL ] != 0 ) { out -> mF . mX [ 14ULL ] = t5 -> mX . mX [ 16ULL ] - ( ( ( intrm_sf_mf_16 - 3.0 ) + t5 -> mX . mX [ 6ULL ] * 0.5 ) * t5 -> mX . mX [ 6ULL ] * 5.2631578947368425 + t5 -> mX . mX [ 6ULL ] * 1.0E-12 ) ; } else { out -> mF . mX [ 14ULL ] = t5 -> mX . mX [ 16ULL ] - ( ( intrm_sf_mf_16 - 3.0 ) * ( intrm_sf_mf_16 - 3.0 ) * 5.2631578947368425 * - 0.5 + t5 -> mX . mX [ 6ULL ] * 1.0E-12 ) ; } if ( t5 -> mM . mX [ 19ULL ] != 0 ) { if ( t5 -> mM . mX [ 20ULL ] != 0 ) { out -> mF . mX [ 16ULL ] = t5 -> mX . mX [ 17ULL ] - t5 -> mX . mX [ 3ULL ] * 1.0E-12 ; } else if ( t5 -> mM . mX [ 21ULL ] != 0 ) { out -> mF . mX [ 16ULL ] = t5 -> mX . mX [ 17ULL ] - ( ( ( N_Channel_MOSFET2_capacitor_GS_v - 3.0 ) - t5 -> mX . mX [ 3ULL ] * 0.5 ) * 5.2631578947368425 * t5 -> mX . mX [ 3ULL ] + t5 -> mX . mX [ 3ULL ] * 1.0E-12 ) ; } else { out -> mF . mX [ 16ULL ] = t5 -> mX . mX [ 17ULL ] - ( ( N_Channel_MOSFET2_capacitor_GS_v - 3.0 ) * ( N_Channel_MOSFET2_capacitor_GS_v - 3.0 ) * 5.2631578947368425 * 0.5 + t5 -> mX . mX [ 3ULL ] * 1.0E-12 ) ; } } else if ( t5 -> mM . mX [ 22ULL ] != 0 ) { out -> mF . mX [ 16ULL ] = t5 -> mX . mX [ 17ULL ] - t5 -> mX . mX [ 3ULL ] * 1.0E-12 ; } else if ( t5 -> mM . mX [ 23ULL ] != 0 ) { out -> mF . mX [ 16ULL ] = t5 -> mX . mX [ 17ULL ] - ( ( ( intrm_sf_mf_23 - 3.0 ) + t5 -> mX . mX [ 3ULL ] * 0.5 ) * 5.2631578947368425 * t5 -> mX . mX [ 3ULL ] + t5 -> mX . mX [ 3ULL ] * 1.0E-12 ) ; } else { out -> mF . mX [ 16ULL ] = t5 -> mX . mX [ 17ULL ] - ( ( intrm_sf_mf_23 - 3.0 ) * ( intrm_sf_mf_23 - 3.0 ) * 5.2631578947368425 * - 0.5 + t5 -> mX . mX [ 3ULL ] * 1.0E-12 ) ; } out -> mF . mX [ 0ULL ] = - 0.0 ; out -> mF . mX [ 1ULL ] = - 0.0 ; out -> mF . mX [ 2ULL ] = - 0.0 ; out -> mF . mX [ 3ULL ] = - 0.0 ; out -> mF . mX [ 4ULL ] = - 0.0 ; out -> mF . mX [ 5ULL ] = - 0.0 ; out -> mF . mX [ 6ULL ] = - 0.0 ; out -> mF . mX [ 7ULL ] = - 0.0 ; out -> mF . mX [ 8ULL ] = - 0.0 ; out -> mF . mX [ 9ULL ] = - 0.0 ; out -> mF . mX [ 10ULL ] = t2 / 2.0 ; out -> mF . mX [ 11ULL ] = t1 / 2.0 ; out -> mF . mX [ 12ULL ] = 0.0 ; out -> mF . mX [ 13ULL ] = 0.0 ; out -> mF . mX [ 15ULL ] = 0.0 ; out -> mF . mX [ 17ULL ] = - 3.7 ; ( void ) sys ; ( void ) out ; return 0 ; }
