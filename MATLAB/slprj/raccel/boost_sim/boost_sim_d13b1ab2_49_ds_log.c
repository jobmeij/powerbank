#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_log.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_log ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t15 , NeDsMethodOutput * out ) { real_T
Current_Sensor1_I ; real_T Current_Sensor_I ; real_T Current_Sensor_n_v ;
real_T Half_Bridge_Driver_HO_v ; real_T Half_Bridge_Driver_LO_v ; real_T
Half_Bridge_Driver_iH ; real_T Half_Bridge_Driver_iL ; real_T
Half_Bridge_Driver_power_dissipated_high_side ; real_T
Half_Bridge_Driver_power_dissipated_low_side ; real_T L1_v ; real_T
N_Channel_MOSFET1_capacitor_DS_n_v ; real_T N_Channel_MOSFET1_capacitor_GS_v
; real_T N_Channel_MOSFET1_drainLeadRL_i ; real_T
N_Channel_MOSFET1_sourceLeadRL_i ; real_T N_Channel_MOSFET2_capacitor_DS_n_v
; real_T N_Channel_MOSFET2_capacitor_GS_v ; real_T
N_Channel_MOSFET2_drainLeadRL_i ; real_T Rload_Resistor_power_dissipated ;
real_T t13 ; real_T t4 ; real_T t6 ; out -> mLOG . mX [ 0ULL ] = ( ( ( ( ( ( t15
-> mX . mX [ 0ULL ] * - 1.0E-9 + t15 -> mX . mX [ 1ULL ] * 1.0E-9 ) + t15 ->
mX . mX [ 3ULL ] * - 1.0E-9 ) + t15 -> mX . mX [ 10ULL ] *
1.0000000000000002E-12 ) + t15 -> mX . mX [ 11ULL ] * 1.0000000000000002E-12
) + t15 -> mX . mX [ 12ULL ] * 2.0000000000000004E-12 ) - t15 -> mX . mX [
13ULL ] ) + t15 -> mX . mX [ 2ULL ] ; out -> mLOG . mX [ 5ULL ] = ( ( t15 ->
mX . mX [ 1ULL ] * - 0.0025 + t15 -> mX . mX [ 10ULL ] ) + t15 -> mX . mX [
11ULL ] ) + t15 -> mX . mX [ 12ULL ] ; Current_Sensor_I = ( ( ( ( ( t15 -> mX
. mX [ 0ULL ] * - 1.0E-9 + t15 -> mX . mX [ 1ULL ] * 1.0E-9 ) + t15 -> mX .
mX [ 3ULL ] * - 1.0E-9 ) + t15 -> mX . mX [ 10ULL ] * 1.0000000000000002E-12
) + t15 -> mX . mX [ 11ULL ] * 1.0000000000000002E-12 ) + t15 -> mX . mX [
12ULL ] * 2.0000000000000004E-12 ) + t15 -> mX . mX [ 2ULL ] ;
Current_Sensor_n_v = ( ( ( - t15 -> mX . mX [ 3ULL ] + t15 -> mX . mX [ 10ULL
] * 0.001 ) + t15 -> mX . mX [ 11ULL ] * 0.001 ) + t15 -> mX . mX [ 12ULL ] *
0.002 ) + t15 -> mX . mX [ 1ULL ] ; Current_Sensor1_I = t15 -> mX . mX [ 1ULL
] * - 0.0025 ; Half_Bridge_Driver_HO_v = ( ( ( ( - t15 -> mX . mX [ 3ULL ] +
t15 -> mX . mX [ 10ULL ] * 0.001 ) + t15 -> mX . mX [ 11ULL ] * 0.001001 ) +
t15 -> mX . mX [ 12ULL ] * 0.001 ) + t15 -> mX . mX [ 1ULL ] ) + t15 -> mX .
mX [ 4ULL ] ; Half_Bridge_Driver_LO_v = ( ( ( ( ( ( ( ( t15 -> mX . mX [ 0ULL
] * 1.0000000000000002E-12 + t15 -> mX . mX [ 1ULL ] * -
1.0000000000000002E-12 ) + t15 -> mX . mX [ 2ULL ] * - 0.001 ) + t15 -> mX .
mX [ 3ULL ] * 1.0000000000000002E-12 ) + t15 -> mX . mX [ 14ULL ] * 0.001 ) +
t15 -> mX . mX [ 15ULL ] * 0.001001 ) + t15 -> mX . mX [ 10ULL ] * -
0.001000000000001 ) + t15 -> mX . mX [ 11ULL ] * - 0.001000000000001 ) + t15
-> mX . mX [ 12ULL ] * - 0.0010000000000020002 ) + t15 -> mX . mX [ 5ULL ] ;
Half_Bridge_Driver_iH = - t15 -> mX . mX [ 10ULL ] - t15 -> mX . mX [ 11ULL ]
; Half_Bridge_Driver_iL = - t15 -> mX . mX [ 14ULL ] - t15 -> mX . mX [ 15ULL
] ; Half_Bridge_Driver_power_dissipated_high_side = Half_Bridge_Driver_iH *
Half_Bridge_Driver_iH * 0.002 ; Half_Bridge_Driver_power_dissipated_low_side
= Half_Bridge_Driver_iL * Half_Bridge_Driver_iL * 0.002 ; L1_v = ( ( ( ( -
t15 -> mX . mX [ 0ULL ] - t15 -> mX . mX [ 3ULL ] ) + t15 -> mX . mX [ 10ULL
] * 0.001 ) + t15 -> mX . mX [ 11ULL ] * 0.001 ) + t15 -> mX . mX [ 12ULL ] *
0.002 ) + t15 -> mX . mX [ 1ULL ] ; t4 = ( ( ( ( ( ( ( ( t15 -> mX . mX [
0ULL ] * 1.0000000000000002E-12 + t15 -> mX . mX [ 1ULL ] * -
1.0000000000000002E-12 ) + t15 -> mX . mX [ 2ULL ] * - 0.001 ) + t15 -> mX .
mX [ 3ULL ] * 1.0000000000000002E-12 ) + t15 -> mX . mX [ 14ULL ] * 0.001 ) +
t15 -> mX . mX [ 15ULL ] * 0.001 ) + t15 -> mX . mX [ 10ULL ] * -
0.001000000000001 ) + t15 -> mX . mX [ 11ULL ] * - 0.001000000000001 ) + t15
-> mX . mX [ 12ULL ] * - 0.0010000000000020002 ) + t15 -> mX . mX [ 6ULL ] ;
out -> mLOG . mX [ 45ULL ] = ( ( ( ( ( ( ( t15 -> mX . mX [ 0ULL ] * 1.0E-9 +
t15 -> mX . mX [ 1ULL ] * - 1.0E-9 ) - t15 -> mX . mX [ 2ULL ] ) + t15 -> mX
. mX [ 3ULL ] * 1.0E-9 ) - t15 -> mX . mX [ 16ULL ] ) + t15 -> mX . mX [
10ULL ] * - 1.000000000001 ) + t15 -> mX . mX [ 11ULL ] * - 1.000000000001 )
+ t15 -> mX . mX [ 12ULL ] * - 1.0000000000020002 ) + t15 -> mX . mX [ 14ULL
] ; N_Channel_MOSFET1_capacitor_DS_n_v = ( ( ( ( ( ( ( t15 -> mX . mX [ 0ULL
] * 1.0000000000000002E-12 + t15 -> mX . mX [ 1ULL ] * -
1.0000000000000002E-12 ) + t15 -> mX . mX [ 2ULL ] * - 0.001 ) + t15 -> mX .
mX [ 3ULL ] * 1.0000000000000002E-12 ) + t15 -> mX . mX [ 14ULL ] * 0.001 ) +
t15 -> mX . mX [ 15ULL ] * 0.001 ) + t15 -> mX . mX [ 10ULL ] * -
0.001000000000001 ) + t15 -> mX . mX [ 11ULL ] * - 0.001000000000001 ) + t15
-> mX . mX [ 12ULL ] * - 0.0010000000000020002 ; out -> mLOG . mX [ 54ULL ] =
t15 -> mX . mX [ 7ULL ] ; out -> mLOG . mX [ 62ULL ] = t15 -> mX . mX [ 15ULL
] * t15 -> mX . mX [ 15ULL ] * 1.0E-9 ; N_Channel_MOSFET1_capacitor_GS_v =
t15 -> mX . mX [ 15ULL ] * 1.0E-6 + t15 -> mX . mX [ 5ULL ] ;
N_Channel_MOSFET1_drainLeadRL_i = ( ( ( ( ( t15 -> mX . mX [ 0ULL ] * 1.0E-9
+ t15 -> mX . mX [ 1ULL ] * - 1.0E-9 ) - t15 -> mX . mX [ 2ULL ] ) + t15 ->
mX . mX [ 3ULL ] * 1.0E-9 ) + t15 -> mX . mX [ 10ULL ] * - 1.000000000001 ) +
t15 -> mX . mX [ 11ULL ] * - 1.000000000001 ) + t15 -> mX . mX [ 12ULL ] * -
1.0000000000020002 ; out -> mLOG . mX [ 70ULL ] =
N_Channel_MOSFET1_drainLeadRL_i * N_Channel_MOSFET1_drainLeadRL_i * 0.001 ;
out -> mLOG . mX [ 82ULL ] = t15 -> mX . mX [ 6ULL ] * t15 -> mX . mX [ 16ULL
] ; N_Channel_MOSFET1_sourceLeadRL_i = ( ( ( ( ( ( ( t15 -> mX . mX [ 0ULL ]
* - 1.0E-9 + t15 -> mX . mX [ 1ULL ] * 1.0E-9 ) + t15 -> mX . mX [ 3ULL ] * -
1.0E-9 ) - t15 -> mX . mX [ 14ULL ] ) - t15 -> mX . mX [ 15ULL ] ) + t15 ->
mX . mX [ 10ULL ] * 1.000000000001 ) + t15 -> mX . mX [ 11ULL ] *
1.000000000001 ) + t15 -> mX . mX [ 12ULL ] * 1.0000000000020002 ) + t15 ->
mX . mX [ 2ULL ] ; out -> mLOG . mX [ 88ULL ] =
N_Channel_MOSFET1_sourceLeadRL_i * N_Channel_MOSFET1_sourceLeadRL_i * 0.001 ;
out -> mLOG . mX [ 91ULL ] = Current_Sensor_n_v ; t6 = ( ( t15 -> mX . mX [
10ULL ] * 0.001 + t15 -> mX . mX [ 11ULL ] * 0.001 ) + t15 -> mX . mX [ 12ULL
] * 0.001 ) + t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [ 103ULL ] = ( - t15
-> mX . mX [ 11ULL ] - t15 -> mX . mX [ 17ULL ] ) - t15 -> mX . mX [ 12ULL ]
; N_Channel_MOSFET2_capacitor_DS_n_v = ( ( ( - t15 -> mX . mX [ 3ULL ] + t15
-> mX . mX [ 10ULL ] * 0.001 ) + t15 -> mX . mX [ 11ULL ] * 0.001 ) + t15 ->
mX . mX [ 12ULL ] * 0.001 ) + t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [
112ULL ] = t15 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 120ULL ] = t15 -> mX
. mX [ 11ULL ] * t15 -> mX . mX [ 11ULL ] * 1.0E-9 ;
N_Channel_MOSFET2_capacitor_GS_v = t15 -> mX . mX [ 11ULL ] * 1.0E-6 + t15 ->
mX . mX [ 4ULL ] ; N_Channel_MOSFET2_drainLeadRL_i = ( - t15 -> mX . mX [
10ULL ] - t15 -> mX . mX [ 11ULL ] ) - t15 -> mX . mX [ 12ULL ] ; out -> mLOG
. mX [ 128ULL ] = N_Channel_MOSFET2_drainLeadRL_i *
N_Channel_MOSFET2_drainLeadRL_i * 0.001 ; out -> mLOG . mX [ 140ULL ] = t15
-> mX . mX [ 3ULL ] * t15 -> mX . mX [ 17ULL ] ; out -> mLOG . mX [ 149ULL ]
= t15 -> mX . mX [ 12ULL ] * t15 -> mX . mX [ 12ULL ] * 0.001 ; out -> mLOG .
mX [ 152ULL ] = Current_Sensor_n_v - Current_Sensor_n_v ; out -> mLOG . mX [
153ULL ] = t15 -> mX . mX [ 1ULL ] - Current_Sensor_n_v ; out -> mLOG . mX [
154ULL ] = Half_Bridge_Driver_HO_v - Current_Sensor_n_v ;
Rload_Resistor_power_dissipated = Current_Sensor1_I * Current_Sensor1_I * 0.4
; out -> mLOG . mX [ 173ULL ] = t15 -> mX . mX [ 13ULL ] * t15 -> mX . mX [
13ULL ] * 3.0E-5 ; t13 = Current_Sensor_n_v - t15 -> mX . mX [ 0ULL ] ; out
-> mLOG . mX [ 1ULL ] = t15 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 2ULL ] =
t15 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 3ULL ] = t15 -> mX . mX [ 0ULL ]
; out -> mLOG . mX [ 4ULL ] = 0.0 ; out -> mLOG . mX [ 6ULL ] = t15 -> mX .
mX [ 1ULL ] ; out -> mLOG . mX [ 7ULL ] = t15 -> mX . mX [ 1ULL ] ; out ->
mLOG . mX [ 8ULL ] = t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [ 9ULL ] =
0.0 ; out -> mLOG . mX [ 10ULL ] = Current_Sensor_I ; out -> mLOG . mX [
11ULL ] = Current_Sensor_I ; out -> mLOG . mX [ 12ULL ] = Current_Sensor_n_v
; out -> mLOG . mX [ 13ULL ] = Current_Sensor_n_v ; out -> mLOG . mX [ 14ULL
] = Current_Sensor1_I ; out -> mLOG . mX [ 15ULL ] = Current_Sensor1_I ; out
-> mLOG . mX [ 16ULL ] = t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [ 17ULL ]
= t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [ 18ULL ] = Current_Sensor1_I ;
out -> mLOG . mX [ 19ULL ] = Current_Sensor_I ; out -> mLOG . mX [ 20ULL ] =
t15 -> mD . mX [ 0ULL ] ; out -> mLOG . mX [ 21ULL ] = t15 -> mD . mX [ 1ULL
] ; out -> mLOG . mX [ 22ULL ] = ( Half_Bridge_Driver_power_dissipated_high_side
+ Half_Bridge_Driver_power_dissipated_low_side ) * 1000.0 ; out -> mLOG . mX
[ 23ULL ] = Half_Bridge_Driver_HO_v ; out -> mLOG . mX [ 24ULL ] =
Current_Sensor_n_v ; out -> mLOG . mX [ 25ULL ] = Half_Bridge_Driver_LO_v ;
out -> mLOG . mX [ 26ULL ] = Half_Bridge_Driver_iH ; out -> mLOG . mX [ 27ULL
] = Half_Bridge_Driver_iL ; out -> mLOG . mX [ 28ULL ] =
Half_Bridge_Driver_power_dissipated_high_side * 1000.0 ; out -> mLOG . mX [
29ULL ] = Half_Bridge_Driver_power_dissipated_low_side * 1000.0 ; out -> mLOG
. mX [ 30ULL ] = t15 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 31ULL ] = t15
-> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 32ULL ] = ( real_T ) ( size_t ) t15
-> mQ . mX [ 0ULL ] ; out -> mLOG . mX [ 33ULL ] = ( real_T ) ( size_t ) t15
-> mQ . mX [ 1ULL ] ; out -> mLOG . mX [ 34ULL ] = t15 -> mX . mX [ 0ULL ] ;
out -> mLOG . mX [ 35ULL ] = Current_Sensor_n_v ; out -> mLOG . mX [ 36ULL ]
= Current_Sensor_I ; out -> mLOG . mX [ 37ULL ] = t15 -> mX . mX [ 2ULL ] ;
out -> mLOG . mX [ 38ULL ] = ( t15 -> mX . mX [ 2ULL ] * t15 -> mX . mX [
2ULL ] * 0.0005 + L1_v * L1_v * 1.0000000000000002E-12 ) * 1000.0 ; out ->
mLOG . mX [ 39ULL ] = L1_v ; out -> mLOG . mX [ 40ULL ] = Current_Sensor_n_v
; out -> mLOG . mX [ 41ULL ] = Current_Sensor_n_v ; out -> mLOG . mX [ 42ULL
] = t4 ; out -> mLOG . mX [ 43ULL ] = Half_Bridge_Driver_LO_v ; out -> mLOG .
mX [ 44ULL ] = Half_Bridge_Driver_LO_v ; out -> mLOG . mX [ 46ULL ] =
N_Channel_MOSFET1_capacitor_DS_n_v ; out -> mLOG . mX [ 47ULL ] = t4 ; out ->
mLOG . mX [ 48ULL ] = t15 -> mX . mX [ 6ULL ] ; out -> mLOG . mX [ 49ULL ] =
t15 -> mX . mX [ 6ULL ] ; out -> mLOG . mX [ 50ULL ] = 0.0 ; out -> mLOG . mX
[ 51ULL ] = t15 -> mX . mX [ 14ULL ] ; out -> mLOG . mX [ 52ULL ] = t4 ; out
-> mLOG . mX [ 53ULL ] = Half_Bridge_Driver_LO_v ; out -> mLOG . mX [ 55ULL ]
= t15 -> mX . mX [ 7ULL ] ; out -> mLOG . mX [ 56ULL ] = 0.0 ; out -> mLOG .
mX [ 57ULL ] = t15 -> mX . mX [ 15ULL ] ; out -> mLOG . mX [ 58ULL ] =
N_Channel_MOSFET1_capacitor_DS_n_v ; out -> mLOG . mX [ 59ULL ] =
Half_Bridge_Driver_LO_v ; out -> mLOG . mX [ 60ULL ] =
N_Channel_MOSFET1_capacitor_GS_v ; out -> mLOG . mX [ 61ULL ] = t15 -> mX .
mX [ 5ULL ] ; out -> mLOG . mX [ 63ULL ] = N_Channel_MOSFET1_drainLeadRL_i ;
out -> mLOG . mX [ 64ULL ] = Current_Sensor_n_v ; out -> mLOG . mX [ 65ULL ]
= Current_Sensor_n_v ; out -> mLOG . mX [ 66ULL ] =
N_Channel_MOSFET1_drainLeadRL_i ; out -> mLOG . mX [ 67ULL ] = t4 ; out ->
mLOG . mX [ 68ULL ] = Current_Sensor_n_v ; out -> mLOG . mX [ 69ULL ] =
N_Channel_MOSFET1_drainLeadRL_i * 0.001 ; out -> mLOG . mX [ 71ULL ] = -
Half_Bridge_Driver_iL ; out -> mLOG . mX [ 72ULL ] = Half_Bridge_Driver_LO_v
; out -> mLOG . mX [ 73ULL ] = Half_Bridge_Driver_LO_v ; out -> mLOG . mX [
74ULL ] = N_Channel_MOSFET1_drainLeadRL_i ; out -> mLOG . mX [ 75ULL ] = -
Half_Bridge_Driver_iL ; out -> mLOG . mX [ 76ULL ] = t4 ; out -> mLOG . mX [
77ULL ] = Half_Bridge_Driver_LO_v ; out -> mLOG . mX [ 78ULL ] =
N_Channel_MOSFET1_capacitor_DS_n_v ; out -> mLOG . mX [ 79ULL ] = t15 -> mX .
mX [ 16ULL ] ; out -> mLOG . mX [ 80ULL ] = t15 -> mX . mX [ 16ULL ] ; out ->
mLOG . mX [ 81ULL ] = t15 -> mX . mX [ 6ULL ] ; out -> mLOG . mX [ 83ULL ] =
N_Channel_MOSFET1_capacitor_GS_v ; out -> mLOG . mX [ 84ULL ] =
N_Channel_MOSFET1_sourceLeadRL_i ; out -> mLOG . mX [ 85ULL ] =
N_Channel_MOSFET1_sourceLeadRL_i ; out -> mLOG . mX [ 86ULL ] =
N_Channel_MOSFET1_capacitor_DS_n_v ; out -> mLOG . mX [ 87ULL ] =
N_Channel_MOSFET1_sourceLeadRL_i * 0.001 ; out -> mLOG . mX [ 89ULL ] = t15
-> mX . mX [ 6ULL ] ; out -> mLOG . mX [ 90ULL ] =
N_Channel_MOSFET1_capacitor_GS_v ; out -> mLOG . mX [ 92ULL ] =
Half_Bridge_Driver_LO_v ; out -> mLOG . mX [ 93ULL ] = Current_Sensor_n_v ;
out -> mLOG . mX [ 94ULL ] = Current_Sensor_n_v ; out -> mLOG . mX [ 95ULL ]
= Current_Sensor_n_v ; out -> mLOG . mX [ 96ULL ] = t15 -> mX . mX [ 1ULL ] ;
out -> mLOG . mX [ 97ULL ] = t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [
98ULL ] = t6 ; out -> mLOG . mX [ 99ULL ] = Half_Bridge_Driver_HO_v ; out ->
mLOG . mX [ 100ULL ] = Half_Bridge_Driver_HO_v ; out -> mLOG . mX [ 101ULL ]
= Current_Sensor_n_v ; out -> mLOG . mX [ 102ULL ] = Current_Sensor_n_v ; out
-> mLOG . mX [ 104ULL ] = N_Channel_MOSFET2_capacitor_DS_n_v ; out -> mLOG .
mX [ 105ULL ] = t6 ; out -> mLOG . mX [ 106ULL ] = t15 -> mX . mX [ 3ULL ] ;
out -> mLOG . mX [ 107ULL ] = t15 -> mX . mX [ 3ULL ] ; out -> mLOG . mX [
108ULL ] = 0.0 ; out -> mLOG . mX [ 109ULL ] = t15 -> mX . mX [ 10ULL ] ; out
-> mLOG . mX [ 110ULL ] = t6 ; out -> mLOG . mX [ 111ULL ] =
Half_Bridge_Driver_HO_v ; out -> mLOG . mX [ 113ULL ] = t15 -> mX . mX [ 8ULL
] ; out -> mLOG . mX [ 114ULL ] = 0.0 ; out -> mLOG . mX [ 115ULL ] = t15 ->
mX . mX [ 11ULL ] ; out -> mLOG . mX [ 116ULL ] =
N_Channel_MOSFET2_capacitor_DS_n_v ; out -> mLOG . mX [ 117ULL ] =
Half_Bridge_Driver_HO_v ; out -> mLOG . mX [ 118ULL ] =
N_Channel_MOSFET2_capacitor_GS_v ; out -> mLOG . mX [ 119ULL ] = t15 -> mX .
mX [ 4ULL ] ; out -> mLOG . mX [ 121ULL ] = N_Channel_MOSFET2_drainLeadRL_i ;
out -> mLOG . mX [ 122ULL ] = t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [
123ULL ] = t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [ 124ULL ] =
N_Channel_MOSFET2_drainLeadRL_i ; out -> mLOG . mX [ 125ULL ] = t6 ; out ->
mLOG . mX [ 126ULL ] = t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [ 127ULL ]
= N_Channel_MOSFET2_drainLeadRL_i * 0.001 ; out -> mLOG . mX [ 129ULL ] = -
Half_Bridge_Driver_iH ; out -> mLOG . mX [ 130ULL ] = Half_Bridge_Driver_HO_v
; out -> mLOG . mX [ 131ULL ] = Half_Bridge_Driver_HO_v ; out -> mLOG . mX [
132ULL ] = N_Channel_MOSFET2_drainLeadRL_i ; out -> mLOG . mX [ 133ULL ] = -
Half_Bridge_Driver_iH ; out -> mLOG . mX [ 134ULL ] = t6 ; out -> mLOG . mX [
135ULL ] = Half_Bridge_Driver_HO_v ; out -> mLOG . mX [ 136ULL ] =
N_Channel_MOSFET2_capacitor_DS_n_v ; out -> mLOG . mX [ 137ULL ] = t15 -> mX
. mX [ 17ULL ] ; out -> mLOG . mX [ 138ULL ] = t15 -> mX . mX [ 17ULL ] ; out
-> mLOG . mX [ 139ULL ] = t15 -> mX . mX [ 3ULL ] ; out -> mLOG . mX [ 141ULL
] = N_Channel_MOSFET2_capacitor_GS_v ; out -> mLOG . mX [ 142ULL ] = t15 ->
mX . mX [ 12ULL ] ; out -> mLOG . mX [ 143ULL ] = Current_Sensor_n_v ; out ->
mLOG . mX [ 144ULL ] = Current_Sensor_n_v ; out -> mLOG . mX [ 145ULL ] = t15
-> mX . mX [ 12ULL ] ; out -> mLOG . mX [ 146ULL ] =
N_Channel_MOSFET2_capacitor_DS_n_v ; out -> mLOG . mX [ 147ULL ] =
Current_Sensor_n_v ; out -> mLOG . mX [ 148ULL ] = t15 -> mX . mX [ 12ULL ] *
0.001 ; out -> mLOG . mX [ 150ULL ] = t15 -> mX . mX [ 3ULL ] ; out -> mLOG .
mX [ 151ULL ] = N_Channel_MOSFET2_capacitor_GS_v ; out -> mLOG . mX [ 155ULL
] = t15 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [ 156ULL ] = -
Current_Sensor1_I ; out -> mLOG . mX [ 157ULL ] = t15 -> mX . mX [ 1ULL ] ;
out -> mLOG . mX [ 158ULL ] = Current_Sensor1_I * - 400.0 ; out -> mLOG . mX
[ 159ULL ] = Rload_Resistor_power_dissipated * 1000.0 ; out -> mLOG . mX [
160ULL ] = - Current_Sensor1_I ; out -> mLOG . mX [ 161ULL ] =
Rload_Resistor_power_dissipated * 1000.0 ; out -> mLOG . mX [ 162ULL ] =
Current_Sensor1_I * - 400.0 ; out -> mLOG . mX [ 163ULL ] = t15 -> mU . mX [
0ULL ] ; out -> mLOG . mX [ 164ULL ] = Half_Bridge_Driver_HO_v ; out -> mLOG
. mX [ 165ULL ] = Half_Bridge_Driver_HO_v ; out -> mLOG . mX [ 166ULL ] =
Half_Bridge_Driver_HO_v ; out -> mLOG . mX [ 167ULL ] =
Half_Bridge_Driver_LO_v ; out -> mLOG . mX [ 168ULL ] =
Half_Bridge_Driver_LO_v ; out -> mLOG . mX [ 169ULL ] =
Half_Bridge_Driver_LO_v ; out -> mLOG . mX [ 170ULL ] = t15 -> mX . mX [
13ULL ] ; out -> mLOG . mX [ 171ULL ] = t15 -> mX . mX [ 9ULL ] *
0.00027777777777777778 ; out -> mLOG . mX [ 172ULL ] = t15 -> mX . mX [ 0ULL
] ; out -> mLOG . mX [ 174ULL ] = t15 -> mX . mX [ 9ULL ] ; out -> mLOG . mX
[ 175ULL ] = t15 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 176ULL ] = t15 ->
mX . mX [ 1ULL ] ; out -> mLOG . mX [ 177ULL ] = t15 -> mX . mX [ 1ULL ] ;
out -> mLOG . mX [ 178ULL ] = t15 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [
179ULL ] = t15 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 180ULL ] = t15 -> mX
. mX [ 0ULL ] ; out -> mLOG . mX [ 181ULL ] = t13 ; out -> mLOG . mX [ 182ULL
] = t15 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 183ULL ] =
Current_Sensor_n_v ; out -> mLOG . mX [ 184ULL ] = t13 ; out -> mLOG . mX [
185ULL ] = t15 -> mX . mX [ 1ULL ] ; ( void ) sys ; ( void ) out ; return 0 ;
}
