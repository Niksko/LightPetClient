/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.6-dev at Mon May 30 15:49:09 2016. */

#ifndef PB_SENSORDATA_PB_H_INCLUDED
#define PB_SENSORDATA_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _SensorData {
    bool has_timestamp;
    uint64_t timestamp;
    bool has_temperatureSampleRate;
    uint32_t temperatureSampleRate;
    bool has_humiditySampleRate;
    uint32_t humiditySampleRate;
    bool has_audioSampleRate;
    uint32_t audioSampleRate;
    bool has_lightSampleRate;
    uint32_t lightSampleRate;
    pb_callback_t temperatureData;
    pb_callback_t humidityData;
    pb_callback_t audioData;
    pb_callback_t lightData;
/* @@protoc_insertion_point(struct:SensorData) */
} SensorData;

/* Default values for struct fields */

/* Initializer values for message structs */
#define SensorData_init_default                  {false, 0, false, 0, false, 0, false, 0, false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}
#define SensorData_init_zero                     {false, 0, false, 0, false, 0, false, 0, false, 0, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}}

/* Field tags (for use in manual encoding/decoding) */
#define SensorData_timestamp_tag                 1
#define SensorData_temperatureSampleRate_tag     2
#define SensorData_humiditySampleRate_tag        3
#define SensorData_audioSampleRate_tag           4
#define SensorData_lightSampleRate_tag           5
#define SensorData_temperatureData_tag           6
#define SensorData_humidityData_tag              7
#define SensorData_audioData_tag                 8
#define SensorData_lightData_tag                 9

/* Struct field encoding specification for nanopb */
extern const pb_field_t SensorData_fields[10];

/* Maximum encoded size of messages (where known) */
/* SensorData_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define SENSORDATA_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
