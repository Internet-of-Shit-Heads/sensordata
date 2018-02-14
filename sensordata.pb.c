/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.4.0-dev at Tue Feb 13 16:07:21 2018. */

#include "sensordata.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t at_ac_tuwien_iot1718_Command_fields[3] = {
    PB_FIELD(  1, UENUM   , REQUIRED, STATIC  , FIRST, at_ac_tuwien_iot1718_Command, type, type, 0),
    PB_FIELD(  2, FIXED32 , REPEATED, CALLBACK, OTHER, at_ac_tuwien_iot1718_Command, params, type, 0),
    PB_LAST_FIELD
};

const pb_field_t at_ac_tuwien_iot1718_N2C_fields[4] = {
    PB_FIELD(  1, FIXED32 , REQUIRED, STATIC  , FIRST, at_ac_tuwien_iot1718_N2C, roomNo, roomNo, 0),
    PB_FIELD(  2, UENUM   , REQUIRED, STATIC  , OTHER, at_ac_tuwien_iot1718_N2C, type, roomNo, 0),
    PB_FIELD(  3, FIXED32 , REQUIRED, STATIC  , OTHER, at_ac_tuwien_iot1718_N2C, data, type, 0),
    PB_LAST_FIELD
};

const pb_field_t at_ac_tuwien_iot1718_C2N_fields[3] = {
    PB_FIELD(  1, FIXED32 , REQUIRED, STATIC  , FIRST, at_ac_tuwien_iot1718_C2N, timestamp, timestamp, 0),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, at_ac_tuwien_iot1718_C2N, command, timestamp, &at_ac_tuwien_iot1718_Command_fields),
    PB_LAST_FIELD
};




/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(at_ac_tuwien_iot1718_C2N, command) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_at_ac_tuwien_iot1718_Command_at_ac_tuwien_iot1718_N2C_at_ac_tuwien_iot1718_C2N)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(at_ac_tuwien_iot1718_C2N, command) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_at_ac_tuwien_iot1718_Command_at_ac_tuwien_iot1718_N2C_at_ac_tuwien_iot1718_C2N)
#endif


/* @@protoc_insertion_point(eof) */
