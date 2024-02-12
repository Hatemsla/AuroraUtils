#pragma once
// MESSAGE RTC_RC_CHANNELS PACKING

#define MAVLINK_MSG_ID_RTC_RC_CHANNELS 45000


typedef struct __mavlink_rtc_rc_channels_t {
 uint16_t ch1; /*< [us] Channel 1.*/
 uint16_t ch2; /*< [us] Channel 2.*/
 uint16_t ch3; /*< [us] Channel 3.*/
 uint16_t ch4; /*< [us] Channel 4.*/
 uint16_t ch5; /*< [us] Channel 5.*/
 uint16_t ch6; /*< [us] Channel 6.*/
 uint16_t ch7; /*< [us] Channel 7.*/
 uint16_t ch8; /*< [us] Channel 8.*/
 uint16_t ch9; /*< [us] Channel 9.*/
 uint16_t ch10; /*< [us] Channel 10.*/
 uint16_t ch11; /*< [us] Channel 11.*/
 uint16_t ch12; /*< [us] Channel 12.*/
 uint16_t ch13; /*< [us] Channel 13.*/
 uint16_t ch14; /*< [us] Channel 14.*/
 uint16_t ch15; /*< [us] Channel 15.*/
 uint16_t ch16; /*< [us] Channel 16.*/
} mavlink_rtc_rc_channels_t;

#define MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN 32
#define MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN 32
#define MAVLINK_MSG_ID_45000_LEN 32
#define MAVLINK_MSG_ID_45000_MIN_LEN 32

#define MAVLINK_MSG_ID_RTC_RC_CHANNELS_CRC 66
#define MAVLINK_MSG_ID_45000_CRC 66



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_RTC_RC_CHANNELS { \
    45000, \
    "RTC_RC_CHANNELS", \
    16, \
    {  { "ch1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_rtc_rc_channels_t, ch1) }, \
         { "ch2", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_rtc_rc_channels_t, ch2) }, \
         { "ch3", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rtc_rc_channels_t, ch3) }, \
         { "ch4", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_rtc_rc_channels_t, ch4) }, \
         { "ch5", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_rtc_rc_channels_t, ch5) }, \
         { "ch6", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_rtc_rc_channels_t, ch6) }, \
         { "ch7", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_rtc_rc_channels_t, ch7) }, \
         { "ch8", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_rtc_rc_channels_t, ch8) }, \
         { "ch9", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_rtc_rc_channels_t, ch9) }, \
         { "ch10", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_rtc_rc_channels_t, ch10) }, \
         { "ch11", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_rtc_rc_channels_t, ch11) }, \
         { "ch12", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_rtc_rc_channels_t, ch12) }, \
         { "ch13", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_rtc_rc_channels_t, ch13) }, \
         { "ch14", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_rtc_rc_channels_t, ch14) }, \
         { "ch15", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_rtc_rc_channels_t, ch15) }, \
         { "ch16", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_rtc_rc_channels_t, ch16) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_RTC_RC_CHANNELS { \
    "RTC_RC_CHANNELS", \
    16, \
    {  { "ch1", NULL, MAVLINK_TYPE_UINT16_T, 0, 0, offsetof(mavlink_rtc_rc_channels_t, ch1) }, \
         { "ch2", NULL, MAVLINK_TYPE_UINT16_T, 0, 2, offsetof(mavlink_rtc_rc_channels_t, ch2) }, \
         { "ch3", NULL, MAVLINK_TYPE_UINT16_T, 0, 4, offsetof(mavlink_rtc_rc_channels_t, ch3) }, \
         { "ch4", NULL, MAVLINK_TYPE_UINT16_T, 0, 6, offsetof(mavlink_rtc_rc_channels_t, ch4) }, \
         { "ch5", NULL, MAVLINK_TYPE_UINT16_T, 0, 8, offsetof(mavlink_rtc_rc_channels_t, ch5) }, \
         { "ch6", NULL, MAVLINK_TYPE_UINT16_T, 0, 10, offsetof(mavlink_rtc_rc_channels_t, ch6) }, \
         { "ch7", NULL, MAVLINK_TYPE_UINT16_T, 0, 12, offsetof(mavlink_rtc_rc_channels_t, ch7) }, \
         { "ch8", NULL, MAVLINK_TYPE_UINT16_T, 0, 14, offsetof(mavlink_rtc_rc_channels_t, ch8) }, \
         { "ch9", NULL, MAVLINK_TYPE_UINT16_T, 0, 16, offsetof(mavlink_rtc_rc_channels_t, ch9) }, \
         { "ch10", NULL, MAVLINK_TYPE_UINT16_T, 0, 18, offsetof(mavlink_rtc_rc_channels_t, ch10) }, \
         { "ch11", NULL, MAVLINK_TYPE_UINT16_T, 0, 20, offsetof(mavlink_rtc_rc_channels_t, ch11) }, \
         { "ch12", NULL, MAVLINK_TYPE_UINT16_T, 0, 22, offsetof(mavlink_rtc_rc_channels_t, ch12) }, \
         { "ch13", NULL, MAVLINK_TYPE_UINT16_T, 0, 24, offsetof(mavlink_rtc_rc_channels_t, ch13) }, \
         { "ch14", NULL, MAVLINK_TYPE_UINT16_T, 0, 26, offsetof(mavlink_rtc_rc_channels_t, ch14) }, \
         { "ch15", NULL, MAVLINK_TYPE_UINT16_T, 0, 28, offsetof(mavlink_rtc_rc_channels_t, ch15) }, \
         { "ch16", NULL, MAVLINK_TYPE_UINT16_T, 0, 30, offsetof(mavlink_rtc_rc_channels_t, ch16) }, \
         } \
}
#endif

/**
 * @brief Pack a rtc_rc_channels message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param ch1 [us] Channel 1.
 * @param ch2 [us] Channel 2.
 * @param ch3 [us] Channel 3.
 * @param ch4 [us] Channel 4.
 * @param ch5 [us] Channel 5.
 * @param ch6 [us] Channel 6.
 * @param ch7 [us] Channel 7.
 * @param ch8 [us] Channel 8.
 * @param ch9 [us] Channel 9.
 * @param ch10 [us] Channel 10.
 * @param ch11 [us] Channel 11.
 * @param ch12 [us] Channel 12.
 * @param ch13 [us] Channel 13.
 * @param ch14 [us] Channel 14.
 * @param ch15 [us] Channel 15.
 * @param ch16 [us] Channel 16.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint16_t ch1, uint16_t ch2, uint16_t ch3, uint16_t ch4, uint16_t ch5, uint16_t ch6, uint16_t ch7, uint16_t ch8, uint16_t ch9, uint16_t ch10, uint16_t ch11, uint16_t ch12, uint16_t ch13, uint16_t ch14, uint16_t ch15, uint16_t ch16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN];
    _mav_put_uint16_t(buf, 0, ch1);
    _mav_put_uint16_t(buf, 2, ch2);
    _mav_put_uint16_t(buf, 4, ch3);
    _mav_put_uint16_t(buf, 6, ch4);
    _mav_put_uint16_t(buf, 8, ch5);
    _mav_put_uint16_t(buf, 10, ch6);
    _mav_put_uint16_t(buf, 12, ch7);
    _mav_put_uint16_t(buf, 14, ch8);
    _mav_put_uint16_t(buf, 16, ch9);
    _mav_put_uint16_t(buf, 18, ch10);
    _mav_put_uint16_t(buf, 20, ch11);
    _mav_put_uint16_t(buf, 22, ch12);
    _mav_put_uint16_t(buf, 24, ch13);
    _mav_put_uint16_t(buf, 26, ch14);
    _mav_put_uint16_t(buf, 28, ch15);
    _mav_put_uint16_t(buf, 30, ch16);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN);
#else
    mavlink_rtc_rc_channels_t packet;
    packet.ch1 = ch1;
    packet.ch2 = ch2;
    packet.ch3 = ch3;
    packet.ch4 = ch4;
    packet.ch5 = ch5;
    packet.ch6 = ch6;
    packet.ch7 = ch7;
    packet.ch8 = ch8;
    packet.ch9 = ch9;
    packet.ch10 = ch10;
    packet.ch11 = ch11;
    packet.ch12 = ch12;
    packet.ch13 = ch13;
    packet.ch14 = ch14;
    packet.ch15 = ch15;
    packet.ch16 = ch16;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTC_RC_CHANNELS;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_CRC);
}

/**
 * @brief Pack a rtc_rc_channels message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 *
 * @param ch1 [us] Channel 1.
 * @param ch2 [us] Channel 2.
 * @param ch3 [us] Channel 3.
 * @param ch4 [us] Channel 4.
 * @param ch5 [us] Channel 5.
 * @param ch6 [us] Channel 6.
 * @param ch7 [us] Channel 7.
 * @param ch8 [us] Channel 8.
 * @param ch9 [us] Channel 9.
 * @param ch10 [us] Channel 10.
 * @param ch11 [us] Channel 11.
 * @param ch12 [us] Channel 12.
 * @param ch13 [us] Channel 13.
 * @param ch14 [us] Channel 14.
 * @param ch15 [us] Channel 15.
 * @param ch16 [us] Channel 16.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_pack_status(uint8_t system_id, uint8_t component_id, mavlink_status_t *_status, mavlink_message_t* msg,
                               uint16_t ch1, uint16_t ch2, uint16_t ch3, uint16_t ch4, uint16_t ch5, uint16_t ch6, uint16_t ch7, uint16_t ch8, uint16_t ch9, uint16_t ch10, uint16_t ch11, uint16_t ch12, uint16_t ch13, uint16_t ch14, uint16_t ch15, uint16_t ch16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN];
    _mav_put_uint16_t(buf, 0, ch1);
    _mav_put_uint16_t(buf, 2, ch2);
    _mav_put_uint16_t(buf, 4, ch3);
    _mav_put_uint16_t(buf, 6, ch4);
    _mav_put_uint16_t(buf, 8, ch5);
    _mav_put_uint16_t(buf, 10, ch6);
    _mav_put_uint16_t(buf, 12, ch7);
    _mav_put_uint16_t(buf, 14, ch8);
    _mav_put_uint16_t(buf, 16, ch9);
    _mav_put_uint16_t(buf, 18, ch10);
    _mav_put_uint16_t(buf, 20, ch11);
    _mav_put_uint16_t(buf, 22, ch12);
    _mav_put_uint16_t(buf, 24, ch13);
    _mav_put_uint16_t(buf, 26, ch14);
    _mav_put_uint16_t(buf, 28, ch15);
    _mav_put_uint16_t(buf, 30, ch16);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN);
#else
    mavlink_rtc_rc_channels_t packet;
    packet.ch1 = ch1;
    packet.ch2 = ch2;
    packet.ch3 = ch3;
    packet.ch4 = ch4;
    packet.ch5 = ch5;
    packet.ch6 = ch6;
    packet.ch7 = ch7;
    packet.ch8 = ch8;
    packet.ch9 = ch9;
    packet.ch10 = ch10;
    packet.ch11 = ch11;
    packet.ch12 = ch12;
    packet.ch13 = ch13;
    packet.ch14 = ch14;
    packet.ch15 = ch15;
    packet.ch16 = ch16;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTC_RC_CHANNELS;
#if MAVLINK_CRC_EXTRA
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_CRC);
#else
    return mavlink_finalize_message_buffer(msg, system_id, component_id, _status, MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN);
#endif
}

/**
 * @brief Pack a rtc_rc_channels message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param ch1 [us] Channel 1.
 * @param ch2 [us] Channel 2.
 * @param ch3 [us] Channel 3.
 * @param ch4 [us] Channel 4.
 * @param ch5 [us] Channel 5.
 * @param ch6 [us] Channel 6.
 * @param ch7 [us] Channel 7.
 * @param ch8 [us] Channel 8.
 * @param ch9 [us] Channel 9.
 * @param ch10 [us] Channel 10.
 * @param ch11 [us] Channel 11.
 * @param ch12 [us] Channel 12.
 * @param ch13 [us] Channel 13.
 * @param ch14 [us] Channel 14.
 * @param ch15 [us] Channel 15.
 * @param ch16 [us] Channel 16.
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint16_t ch1,uint16_t ch2,uint16_t ch3,uint16_t ch4,uint16_t ch5,uint16_t ch6,uint16_t ch7,uint16_t ch8,uint16_t ch9,uint16_t ch10,uint16_t ch11,uint16_t ch12,uint16_t ch13,uint16_t ch14,uint16_t ch15,uint16_t ch16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN];
    _mav_put_uint16_t(buf, 0, ch1);
    _mav_put_uint16_t(buf, 2, ch2);
    _mav_put_uint16_t(buf, 4, ch3);
    _mav_put_uint16_t(buf, 6, ch4);
    _mav_put_uint16_t(buf, 8, ch5);
    _mav_put_uint16_t(buf, 10, ch6);
    _mav_put_uint16_t(buf, 12, ch7);
    _mav_put_uint16_t(buf, 14, ch8);
    _mav_put_uint16_t(buf, 16, ch9);
    _mav_put_uint16_t(buf, 18, ch10);
    _mav_put_uint16_t(buf, 20, ch11);
    _mav_put_uint16_t(buf, 22, ch12);
    _mav_put_uint16_t(buf, 24, ch13);
    _mav_put_uint16_t(buf, 26, ch14);
    _mav_put_uint16_t(buf, 28, ch15);
    _mav_put_uint16_t(buf, 30, ch16);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN);
#else
    mavlink_rtc_rc_channels_t packet;
    packet.ch1 = ch1;
    packet.ch2 = ch2;
    packet.ch3 = ch3;
    packet.ch4 = ch4;
    packet.ch5 = ch5;
    packet.ch6 = ch6;
    packet.ch7 = ch7;
    packet.ch8 = ch8;
    packet.ch9 = ch9;
    packet.ch10 = ch10;
    packet.ch11 = ch11;
    packet.ch12 = ch12;
    packet.ch13 = ch13;
    packet.ch14 = ch14;
    packet.ch15 = ch15;
    packet.ch16 = ch16;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_RTC_RC_CHANNELS;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_CRC);
}

/**
 * @brief Encode a rtc_rc_channels struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param rtc_rc_channels C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_rtc_rc_channels_t* rtc_rc_channels)
{
    return mavlink_msg_rtc_rc_channels_pack(system_id, component_id, msg, rtc_rc_channels->ch1, rtc_rc_channels->ch2, rtc_rc_channels->ch3, rtc_rc_channels->ch4, rtc_rc_channels->ch5, rtc_rc_channels->ch6, rtc_rc_channels->ch7, rtc_rc_channels->ch8, rtc_rc_channels->ch9, rtc_rc_channels->ch10, rtc_rc_channels->ch11, rtc_rc_channels->ch12, rtc_rc_channels->ch13, rtc_rc_channels->ch14, rtc_rc_channels->ch15, rtc_rc_channels->ch16);
}

/**
 * @brief Encode a rtc_rc_channels struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param rtc_rc_channels C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_rtc_rc_channels_t* rtc_rc_channels)
{
    return mavlink_msg_rtc_rc_channels_pack_chan(system_id, component_id, chan, msg, rtc_rc_channels->ch1, rtc_rc_channels->ch2, rtc_rc_channels->ch3, rtc_rc_channels->ch4, rtc_rc_channels->ch5, rtc_rc_channels->ch6, rtc_rc_channels->ch7, rtc_rc_channels->ch8, rtc_rc_channels->ch9, rtc_rc_channels->ch10, rtc_rc_channels->ch11, rtc_rc_channels->ch12, rtc_rc_channels->ch13, rtc_rc_channels->ch14, rtc_rc_channels->ch15, rtc_rc_channels->ch16);
}

/**
 * @brief Encode a rtc_rc_channels struct with provided status structure
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param status MAVLink status structure
 * @param msg The MAVLink message to compress the data into
 * @param rtc_rc_channels C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_encode_status(uint8_t system_id, uint8_t component_id, mavlink_status_t* _status, mavlink_message_t* msg, const mavlink_rtc_rc_channels_t* rtc_rc_channels)
{
    return mavlink_msg_rtc_rc_channels_pack_status(system_id, component_id, _status, msg,  rtc_rc_channels->ch1, rtc_rc_channels->ch2, rtc_rc_channels->ch3, rtc_rc_channels->ch4, rtc_rc_channels->ch5, rtc_rc_channels->ch6, rtc_rc_channels->ch7, rtc_rc_channels->ch8, rtc_rc_channels->ch9, rtc_rc_channels->ch10, rtc_rc_channels->ch11, rtc_rc_channels->ch12, rtc_rc_channels->ch13, rtc_rc_channels->ch14, rtc_rc_channels->ch15, rtc_rc_channels->ch16);
}

/**
 * @brief Send a rtc_rc_channels message
 * @param chan MAVLink channel to send the message
 *
 * @param ch1 [us] Channel 1.
 * @param ch2 [us] Channel 2.
 * @param ch3 [us] Channel 3.
 * @param ch4 [us] Channel 4.
 * @param ch5 [us] Channel 5.
 * @param ch6 [us] Channel 6.
 * @param ch7 [us] Channel 7.
 * @param ch8 [us] Channel 8.
 * @param ch9 [us] Channel 9.
 * @param ch10 [us] Channel 10.
 * @param ch11 [us] Channel 11.
 * @param ch12 [us] Channel 12.
 * @param ch13 [us] Channel 13.
 * @param ch14 [us] Channel 14.
 * @param ch15 [us] Channel 15.
 * @param ch16 [us] Channel 16.
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_rtc_rc_channels_send(mavlink_channel_t chan, uint16_t ch1, uint16_t ch2, uint16_t ch3, uint16_t ch4, uint16_t ch5, uint16_t ch6, uint16_t ch7, uint16_t ch8, uint16_t ch9, uint16_t ch10, uint16_t ch11, uint16_t ch12, uint16_t ch13, uint16_t ch14, uint16_t ch15, uint16_t ch16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN];
    _mav_put_uint16_t(buf, 0, ch1);
    _mav_put_uint16_t(buf, 2, ch2);
    _mav_put_uint16_t(buf, 4, ch3);
    _mav_put_uint16_t(buf, 6, ch4);
    _mav_put_uint16_t(buf, 8, ch5);
    _mav_put_uint16_t(buf, 10, ch6);
    _mav_put_uint16_t(buf, 12, ch7);
    _mav_put_uint16_t(buf, 14, ch8);
    _mav_put_uint16_t(buf, 16, ch9);
    _mav_put_uint16_t(buf, 18, ch10);
    _mav_put_uint16_t(buf, 20, ch11);
    _mav_put_uint16_t(buf, 22, ch12);
    _mav_put_uint16_t(buf, 24, ch13);
    _mav_put_uint16_t(buf, 26, ch14);
    _mav_put_uint16_t(buf, 28, ch15);
    _mav_put_uint16_t(buf, 30, ch16);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTC_RC_CHANNELS, buf, MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_CRC);
#else
    mavlink_rtc_rc_channels_t packet;
    packet.ch1 = ch1;
    packet.ch2 = ch2;
    packet.ch3 = ch3;
    packet.ch4 = ch4;
    packet.ch5 = ch5;
    packet.ch6 = ch6;
    packet.ch7 = ch7;
    packet.ch8 = ch8;
    packet.ch9 = ch9;
    packet.ch10 = ch10;
    packet.ch11 = ch11;
    packet.ch12 = ch12;
    packet.ch13 = ch13;
    packet.ch14 = ch14;
    packet.ch15 = ch15;
    packet.ch16 = ch16;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTC_RC_CHANNELS, (const char *)&packet, MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_CRC);
#endif
}

/**
 * @brief Send a rtc_rc_channels message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_rtc_rc_channels_send_struct(mavlink_channel_t chan, const mavlink_rtc_rc_channels_t* rtc_rc_channels)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_rtc_rc_channels_send(chan, rtc_rc_channels->ch1, rtc_rc_channels->ch2, rtc_rc_channels->ch3, rtc_rc_channels->ch4, rtc_rc_channels->ch5, rtc_rc_channels->ch6, rtc_rc_channels->ch7, rtc_rc_channels->ch8, rtc_rc_channels->ch9, rtc_rc_channels->ch10, rtc_rc_channels->ch11, rtc_rc_channels->ch12, rtc_rc_channels->ch13, rtc_rc_channels->ch14, rtc_rc_channels->ch15, rtc_rc_channels->ch16);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTC_RC_CHANNELS, (const char *)rtc_rc_channels, MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_CRC);
#endif
}

#if MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This variant of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_rtc_rc_channels_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint16_t ch1, uint16_t ch2, uint16_t ch3, uint16_t ch4, uint16_t ch5, uint16_t ch6, uint16_t ch7, uint16_t ch8, uint16_t ch9, uint16_t ch10, uint16_t ch11, uint16_t ch12, uint16_t ch13, uint16_t ch14, uint16_t ch15, uint16_t ch16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint16_t(buf, 0, ch1);
    _mav_put_uint16_t(buf, 2, ch2);
    _mav_put_uint16_t(buf, 4, ch3);
    _mav_put_uint16_t(buf, 6, ch4);
    _mav_put_uint16_t(buf, 8, ch5);
    _mav_put_uint16_t(buf, 10, ch6);
    _mav_put_uint16_t(buf, 12, ch7);
    _mav_put_uint16_t(buf, 14, ch8);
    _mav_put_uint16_t(buf, 16, ch9);
    _mav_put_uint16_t(buf, 18, ch10);
    _mav_put_uint16_t(buf, 20, ch11);
    _mav_put_uint16_t(buf, 22, ch12);
    _mav_put_uint16_t(buf, 24, ch13);
    _mav_put_uint16_t(buf, 26, ch14);
    _mav_put_uint16_t(buf, 28, ch15);
    _mav_put_uint16_t(buf, 30, ch16);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTC_RC_CHANNELS, buf, MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_CRC);
#else
    mavlink_rtc_rc_channels_t *packet = (mavlink_rtc_rc_channels_t *)msgbuf;
    packet->ch1 = ch1;
    packet->ch2 = ch2;
    packet->ch3 = ch3;
    packet->ch4 = ch4;
    packet->ch5 = ch5;
    packet->ch6 = ch6;
    packet->ch7 = ch7;
    packet->ch8 = ch8;
    packet->ch9 = ch9;
    packet->ch10 = ch10;
    packet->ch11 = ch11;
    packet->ch12 = ch12;
    packet->ch13 = ch13;
    packet->ch14 = ch14;
    packet->ch15 = ch15;
    packet->ch16 = ch16;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_RTC_RC_CHANNELS, (const char *)packet, MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN, MAVLINK_MSG_ID_RTC_RC_CHANNELS_CRC);
#endif
}
#endif

#endif

// MESSAGE RTC_RC_CHANNELS UNPACKING


/**
 * @brief Get field ch1 from rtc_rc_channels message
 *
 * @return [us] Channel 1.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  0);
}

/**
 * @brief Get field ch2 from rtc_rc_channels message
 *
 * @return [us] Channel 2.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  2);
}

/**
 * @brief Get field ch3 from rtc_rc_channels message
 *
 * @return [us] Channel 3.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  4);
}

/**
 * @brief Get field ch4 from rtc_rc_channels message
 *
 * @return [us] Channel 4.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  6);
}

/**
 * @brief Get field ch5 from rtc_rc_channels message
 *
 * @return [us] Channel 5.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  8);
}

/**
 * @brief Get field ch6 from rtc_rc_channels message
 *
 * @return [us] Channel 6.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  10);
}

/**
 * @brief Get field ch7 from rtc_rc_channels message
 *
 * @return [us] Channel 7.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  12);
}

/**
 * @brief Get field ch8 from rtc_rc_channels message
 *
 * @return [us] Channel 8.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  14);
}

/**
 * @brief Get field ch9 from rtc_rc_channels message
 *
 * @return [us] Channel 9.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch9(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  16);
}

/**
 * @brief Get field ch10 from rtc_rc_channels message
 *
 * @return [us] Channel 10.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch10(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  18);
}

/**
 * @brief Get field ch11 from rtc_rc_channels message
 *
 * @return [us] Channel 11.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch11(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  20);
}

/**
 * @brief Get field ch12 from rtc_rc_channels message
 *
 * @return [us] Channel 12.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch12(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  22);
}

/**
 * @brief Get field ch13 from rtc_rc_channels message
 *
 * @return [us] Channel 13.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch13(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  24);
}

/**
 * @brief Get field ch14 from rtc_rc_channels message
 *
 * @return [us] Channel 14.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch14(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  26);
}

/**
 * @brief Get field ch15 from rtc_rc_channels message
 *
 * @return [us] Channel 15.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch15(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  28);
}

/**
 * @brief Get field ch16 from rtc_rc_channels message
 *
 * @return [us] Channel 16.
 */
static inline uint16_t mavlink_msg_rtc_rc_channels_get_ch16(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint16_t(msg,  30);
}

/**
 * @brief Decode a rtc_rc_channels message into a struct
 *
 * @param msg The message to decode
 * @param rtc_rc_channels C-struct to decode the message contents into
 */
static inline void mavlink_msg_rtc_rc_channels_decode(const mavlink_message_t* msg, mavlink_rtc_rc_channels_t* rtc_rc_channels)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    rtc_rc_channels->ch1 = mavlink_msg_rtc_rc_channels_get_ch1(msg);
    rtc_rc_channels->ch2 = mavlink_msg_rtc_rc_channels_get_ch2(msg);
    rtc_rc_channels->ch3 = mavlink_msg_rtc_rc_channels_get_ch3(msg);
    rtc_rc_channels->ch4 = mavlink_msg_rtc_rc_channels_get_ch4(msg);
    rtc_rc_channels->ch5 = mavlink_msg_rtc_rc_channels_get_ch5(msg);
    rtc_rc_channels->ch6 = mavlink_msg_rtc_rc_channels_get_ch6(msg);
    rtc_rc_channels->ch7 = mavlink_msg_rtc_rc_channels_get_ch7(msg);
    rtc_rc_channels->ch8 = mavlink_msg_rtc_rc_channels_get_ch8(msg);
    rtc_rc_channels->ch9 = mavlink_msg_rtc_rc_channels_get_ch9(msg);
    rtc_rc_channels->ch10 = mavlink_msg_rtc_rc_channels_get_ch10(msg);
    rtc_rc_channels->ch11 = mavlink_msg_rtc_rc_channels_get_ch11(msg);
    rtc_rc_channels->ch12 = mavlink_msg_rtc_rc_channels_get_ch12(msg);
    rtc_rc_channels->ch13 = mavlink_msg_rtc_rc_channels_get_ch13(msg);
    rtc_rc_channels->ch14 = mavlink_msg_rtc_rc_channels_get_ch14(msg);
    rtc_rc_channels->ch15 = mavlink_msg_rtc_rc_channels_get_ch15(msg);
    rtc_rc_channels->ch16 = mavlink_msg_rtc_rc_channels_get_ch16(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN? msg->len : MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN;
        memset(rtc_rc_channels, 0, MAVLINK_MSG_ID_RTC_RC_CHANNELS_LEN);
    memcpy(rtc_rc_channels, _MAV_PAYLOAD(msg), len);
#endif
}
