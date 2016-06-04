/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.6-dev at Sat Jun  4 16:24:42 2016. */

#include "sensorData.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t SensorData_fields[11] = {
    PB_FIELD(  1, UINT64  , OPTIONAL, STATIC  , FIRST, SensorData, timestamp, timestamp, 0),
    PB_FIELD(  2, UINT32  , OPTIONAL, STATIC  , OTHER, SensorData, temperatureSampleRate, timestamp, 0),
    PB_FIELD(  3, UINT32  , OPTIONAL, STATIC  , OTHER, SensorData, humiditySampleRate, temperatureSampleRate, 0),
    PB_FIELD(  4, UINT32  , OPTIONAL, STATIC  , OTHER, SensorData, audioSampleRate, humiditySampleRate, 0),
    PB_FIELD(  5, UINT32  , OPTIONAL, STATIC  , OTHER, SensorData, lightSampleRate, audioSampleRate, 0),
    PB_FIELD(  6, UINT32  , REPEATED, CALLBACK, OTHER, SensorData, temperatureData, lightSampleRate, 0),
    PB_FIELD(  7, UINT32  , REPEATED, CALLBACK, OTHER, SensorData, humidityData, temperatureData, 0),
    PB_FIELD(  8, UINT32  , REPEATED, CALLBACK, OTHER, SensorData, audioData, humidityData, 0),
    PB_FIELD(  9, UINT32  , REPEATED, CALLBACK, OTHER, SensorData, lightData, audioData, 0),
    PB_FIELD( 10, UINT32  , OPTIONAL, STATIC  , OTHER, SensorData, chipID, lightData, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
