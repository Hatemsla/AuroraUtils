/** @file
 *    @brief MAVLink comm protocol testsuite generated from rtc_rc.xml
 *    @see https://mavlink.io/en/
 */
#pragma once
#ifndef RTC_RC_TESTSUITE_H
#define RTC_RC_TESTSUITE_H

#ifdef __cplusplus
extern "C" {
#endif

#ifndef MAVLINK_TEST_ALL
#define MAVLINK_TEST_ALL

static void mavlink_test_rtc_rc(uint8_t, uint8_t, mavlink_message_t *last_msg);

static void mavlink_test_all(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{

    mavlink_test_rtc_rc(system_id, component_id, last_msg);
}
#endif




static void mavlink_test_rtc_rc_channels(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
    mavlink_status_t *status = mavlink_get_channel_status(MAVLINK_COMM_0);
        if ((status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) && MAVLINK_MSG_ID_RTC_RC_CHANNELS >= 256) {
            return;
        }
#endif
    mavlink_message_t msg;
        uint8_t buffer[MAVLINK_MAX_PACKET_LEN];
        uint16_t i;
    mavlink_rtc_rc_channels_t packet_in = {
        17235,17339,17443,17547,17651,17755,17859,17963,18067,18171,18275,18379,18483,18587,18691,18795
    };
    mavlink_rtc_rc_channels_t packet1, packet2;
        memset(&packet1, 0, sizeof(packet1));
        packet1.ch1 = packet_in.ch1;
        packet1.ch2 = packet_in.ch2;
        packet1.ch3 = packet_in.ch3;
        packet1.ch4 = packet_in.ch4;
        packet1.ch5 = packet_in.ch5;
        packet1.ch6 = packet_in.ch6;
        packet1.ch7 = packet_in.ch7;
        packet1.ch8 = packet_in.ch8;
        packet1.ch9 = packet_in.ch9;
        packet1.ch10 = packet_in.ch10;
        packet1.ch11 = packet_in.ch11;
        packet1.ch12 = packet_in.ch12;
        packet1.ch13 = packet_in.ch13;
        packet1.ch14 = packet_in.ch14;
        packet1.ch15 = packet_in.ch15;
        packet1.ch16 = packet_in.ch16;
        
        
#ifdef MAVLINK_STATUS_FLAG_OUT_MAVLINK1
        if (status->flags & MAVLINK_STATUS_FLAG_OUT_MAVLINK1) {
           // cope with extensions
           memset(MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN + (char *)&packet1, 0, sizeof(packet1)-MAVLINK_MSG_ID_RTC_RC_CHANNELS_MIN_LEN);
        }
#endif
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtc_rc_channels_encode(system_id, component_id, &msg, &packet1);
    mavlink_msg_rtc_rc_channels_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtc_rc_channels_pack(system_id, component_id, &msg , packet1.ch1 , packet1.ch2 , packet1.ch3 , packet1.ch4 , packet1.ch5 , packet1.ch6 , packet1.ch7 , packet1.ch8 , packet1.ch9 , packet1.ch10 , packet1.ch11 , packet1.ch12 , packet1.ch13 , packet1.ch14 , packet1.ch15 , packet1.ch16 );
    mavlink_msg_rtc_rc_channels_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtc_rc_channels_pack_chan(system_id, component_id, MAVLINK_COMM_0, &msg , packet1.ch1 , packet1.ch2 , packet1.ch3 , packet1.ch4 , packet1.ch5 , packet1.ch6 , packet1.ch7 , packet1.ch8 , packet1.ch9 , packet1.ch10 , packet1.ch11 , packet1.ch12 , packet1.ch13 , packet1.ch14 , packet1.ch15 , packet1.ch16 );
    mavlink_msg_rtc_rc_channels_decode(&msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

        memset(&packet2, 0, sizeof(packet2));
        mavlink_msg_to_send_buffer(buffer, &msg);
        for (i=0; i<mavlink_msg_get_send_buffer_length(&msg); i++) {
            comm_send_ch(MAVLINK_COMM_0, buffer[i]);
        }
    mavlink_msg_rtc_rc_channels_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);
        
        memset(&packet2, 0, sizeof(packet2));
    mavlink_msg_rtc_rc_channels_send(MAVLINK_COMM_1 , packet1.ch1 , packet1.ch2 , packet1.ch3 , packet1.ch4 , packet1.ch5 , packet1.ch6 , packet1.ch7 , packet1.ch8 , packet1.ch9 , packet1.ch10 , packet1.ch11 , packet1.ch12 , packet1.ch13 , packet1.ch14 , packet1.ch15 , packet1.ch16 );
    mavlink_msg_rtc_rc_channels_decode(last_msg, &packet2);
        MAVLINK_ASSERT(memcmp(&packet1, &packet2, sizeof(packet1)) == 0);

#ifdef MAVLINK_HAVE_GET_MESSAGE_INFO
    MAVLINK_ASSERT(mavlink_get_message_info_by_name("RTC_RC_CHANNELS") != NULL);
    MAVLINK_ASSERT(mavlink_get_message_info_by_id(MAVLINK_MSG_ID_RTC_RC_CHANNELS) != NULL);
#endif
}

static void mavlink_test_rtc_rc(uint8_t system_id, uint8_t component_id, mavlink_message_t *last_msg)
{
    mavlink_test_rtc_rc_channels(system_id, component_id, last_msg);
}

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // RTC_RC_TESTSUITE_H
