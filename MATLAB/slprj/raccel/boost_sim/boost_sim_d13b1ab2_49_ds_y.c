#include "ne_ds.h"
#include "boost_sim_d13b1ab2_49_ds_sys_struct.h"
#include "boost_sim_d13b1ab2_49_ds_y.h"
#include "boost_sim_d13b1ab2_49_ds.h"
#include "boost_sim_d13b1ab2_49_ds_externals.h"
#include "boost_sim_d13b1ab2_49_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T boost_sim_d13b1ab2_49_ds_y ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t3 , NeDsMethodOutput * out ) { out -> mY . mX [ 1ULL
] = ( ( ( ( ( t3 -> mX . mX [ 0ULL ] * - 1.0E-9 + t3 -> mX . mX [ 1ULL ] *
1.0E-9 ) + t3 -> mX . mX [ 3ULL ] * - 1.0E-9 ) + t3 -> mX . mX [ 10ULL ] *
1.0000000000000002E-12 ) + t3 -> mX . mX [ 11ULL ] * 1.0000000000000002E-12 )
+ t3 -> mX . mX [ 12ULL ] * 2.0000000000000004E-12 ) + t3 -> mX . mX [ 2ULL ]
; out -> mY . mX [ 0ULL ] = t3 -> mX . mX [ 1ULL ] * - 0.0025 ; out -> mY .
mX [ 3ULL ] = ( ( ( ( ( ( ( ( t3 -> mX . mX [ 0ULL ] * 1.0000000000000002E-12
+ t3 -> mX . mX [ 1ULL ] * - 1.0000000000000002E-12 ) + t3 -> mX . mX [ 2ULL
] * - 0.001 ) + t3 -> mX . mX [ 3ULL ] * 1.0000000000000002E-12 ) + t3 -> mX
. mX [ 14ULL ] * 0.001 ) + t3 -> mX . mX [ 15ULL ] * 0.001001 ) + t3 -> mX .
mX [ 10ULL ] * - 0.001000000000001 ) + t3 -> mX . mX [ 11ULL ] * -
0.001000000000001 ) + t3 -> mX . mX [ 12ULL ] * - 0.0010000000000020002 ) +
t3 -> mX . mX [ 5ULL ] ; out -> mY . mX [ 2ULL ] = ( ( ( ( - t3 -> mX . mX [
3ULL ] + t3 -> mX . mX [ 10ULL ] * 0.001 ) + t3 -> mX . mX [ 11ULL ] *
0.001001 ) + t3 -> mX . mX [ 12ULL ] * 0.001 ) + t3 -> mX . mX [ 1ULL ] ) +
t3 -> mX . mX [ 4ULL ] ; out -> mY . mX [ 6ULL ] = t3 -> mX . mX [ 1ULL ] ;
out -> mY . mX [ 4ULL ] = t3 -> mX . mX [ 0ULL ] ; out -> mY . mX [ 5ULL ] =
( ( ( ( - t3 -> mX . mX [ 3ULL ] + t3 -> mX . mX [ 10ULL ] * 0.001 ) + t3 ->
mX . mX [ 11ULL ] * 0.001 ) + t3 -> mX . mX [ 12ULL ] * 0.002 ) + t3 -> mX .
mX [ 1ULL ] ) - t3 -> mX . mX [ 0ULL ] ; ( void ) sys ; ( void ) out ; return
0 ; }
