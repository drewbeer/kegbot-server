#include "HardwareSerial.h"

#define LOG(s) Serial.println(s);

#define KB_BOARDNAME_MAXLEN   8

#define KB_MESSAGE_TYPE_HELLO_ID      0x01
#define KB_MESSAGE_TYPE_HELLO_TAG_PROTOCOL_VERSION  0x01

#define KB_MESSAGE_TYPE_THERMO_READING 0x11
#define KB_MESSAGE_TYPE_THERMO_READING_TAG_SENSOR_NAME  0x01
#define KB_MESSAGE_TYPE_THERMO_READING_TAG_SENSOR_READING  0x02

#define KB_MESSAGE_TYPE_METER_STATUS 0x10
#define KB_MESSAGE_TYPE_METER_STATUS_TAG_METER_NAME  0x01
#define KB_MESSAGE_TYPE_METER_STATUS_TAG_METER_READING  0x02

#define KB_MESSAGE_TYPE_OUTPUT_STATUS 0x12
#define KB_MESSAGE_TYPE_OUTPUT_STATUS_TAG_OUTPUT_NAME  0x01
#define KB_MESSAGE_TYPE_OUTPUT_STATUS_TAG_OUTPUT_READING  0x02

// Max freq 10Hz, Min freq 0.1Hz
#define KB_UPDATE_INTERVAL_MIN  100
#define KB_UPDATE_INTERVAL_MAX  10000
