/** @file
 *	@brief MAVLink comm testsuite protocol generated from rtc_rc.xml
 *	@see http://mavlink.org
 */

#pragma once

#include <gtest/gtest.h>
#include "rtc_rc.hpp"

#ifdef TEST_INTEROP
using namespace mavlink;
#undef MAVLINK_HELPER
#include "mavlink.h"
#endif


TEST(rtc_rc, RTC_RC_CHANNELS)
{
    mavlink::mavlink_message_t msg;
    mavlink::MsgMap map1(msg);
    mavlink::MsgMap map2(msg);

    mavlink::rtc_rc::msg::RTC_RC_CHANNELS packet_in{};
    packet_in.ch1 = 17235;
    packet_in.ch2 = 17339;
    packet_in.ch3 = 17443;
    packet_in.ch4 = 17547;
    packet_in.ch5 = 17651;
    packet_in.ch6 = 17755;
    packet_in.ch7 = 17859;
    packet_in.ch8 = 17963;
    packet_in.ch9 = 18067;
    packet_in.ch10 = 18171;
    packet_in.ch11 = 18275;
    packet_in.ch12 = 18379;
    packet_in.ch13 = 18483;
    packet_in.ch14 = 18587;
    packet_in.ch15 = 18691;
    packet_in.ch16 = 18795;

    mavlink::rtc_rc::msg::RTC_RC_CHANNELS packet1{};
    mavlink::rtc_rc::msg::RTC_RC_CHANNELS packet2{};

    packet1 = packet_in;

    //std::cout << packet1.to_yaml() << std::endl;

    packet1.serialize(map1);

    mavlink::mavlink_finalize_message(&msg, 1, 1, packet1.MIN_LENGTH, packet1.LENGTH, packet1.CRC_EXTRA);

    packet2.deserialize(map2);

    EXPECT_EQ(packet1.ch1, packet2.ch1);
    EXPECT_EQ(packet1.ch2, packet2.ch2);
    EXPECT_EQ(packet1.ch3, packet2.ch3);
    EXPECT_EQ(packet1.ch4, packet2.ch4);
    EXPECT_EQ(packet1.ch5, packet2.ch5);
    EXPECT_EQ(packet1.ch6, packet2.ch6);
    EXPECT_EQ(packet1.ch7, packet2.ch7);
    EXPECT_EQ(packet1.ch8, packet2.ch8);
    EXPECT_EQ(packet1.ch9, packet2.ch9);
    EXPECT_EQ(packet1.ch10, packet2.ch10);
    EXPECT_EQ(packet1.ch11, packet2.ch11);
    EXPECT_EQ(packet1.ch12, packet2.ch12);
    EXPECT_EQ(packet1.ch13, packet2.ch13);
    EXPECT_EQ(packet1.ch14, packet2.ch14);
    EXPECT_EQ(packet1.ch15, packet2.ch15);
    EXPECT_EQ(packet1.ch16, packet2.ch16);
}

#ifdef TEST_INTEROP
TEST(rtc_rc_interop, RTC_RC_CHANNELS)
{
    mavlink_message_t msg;

    // to get nice print
    memset(&msg, 0, sizeof(msg));

    mavlink_rtc_rc_channels_t packet_c {
         17235, 17339, 17443, 17547, 17651, 17755, 17859, 17963, 18067, 18171, 18275, 18379, 18483, 18587, 18691, 18795
    };

    mavlink::rtc_rc::msg::RTC_RC_CHANNELS packet_in{};
    packet_in.ch1 = 17235;
    packet_in.ch2 = 17339;
    packet_in.ch3 = 17443;
    packet_in.ch4 = 17547;
    packet_in.ch5 = 17651;
    packet_in.ch6 = 17755;
    packet_in.ch7 = 17859;
    packet_in.ch8 = 17963;
    packet_in.ch9 = 18067;
    packet_in.ch10 = 18171;
    packet_in.ch11 = 18275;
    packet_in.ch12 = 18379;
    packet_in.ch13 = 18483;
    packet_in.ch14 = 18587;
    packet_in.ch15 = 18691;
    packet_in.ch16 = 18795;

    mavlink::rtc_rc::msg::RTC_RC_CHANNELS packet2{};

    mavlink_msg_rtc_rc_channels_encode(1, 1, &msg, &packet_c);

    // simulate message-handling callback
    [&packet2](const mavlink_message_t *cmsg) {
        MsgMap map2(cmsg);

        packet2.deserialize(map2);
    } (&msg);

    EXPECT_EQ(packet_in.ch1, packet2.ch1);
    EXPECT_EQ(packet_in.ch2, packet2.ch2);
    EXPECT_EQ(packet_in.ch3, packet2.ch3);
    EXPECT_EQ(packet_in.ch4, packet2.ch4);
    EXPECT_EQ(packet_in.ch5, packet2.ch5);
    EXPECT_EQ(packet_in.ch6, packet2.ch6);
    EXPECT_EQ(packet_in.ch7, packet2.ch7);
    EXPECT_EQ(packet_in.ch8, packet2.ch8);
    EXPECT_EQ(packet_in.ch9, packet2.ch9);
    EXPECT_EQ(packet_in.ch10, packet2.ch10);
    EXPECT_EQ(packet_in.ch11, packet2.ch11);
    EXPECT_EQ(packet_in.ch12, packet2.ch12);
    EXPECT_EQ(packet_in.ch13, packet2.ch13);
    EXPECT_EQ(packet_in.ch14, packet2.ch14);
    EXPECT_EQ(packet_in.ch15, packet2.ch15);
    EXPECT_EQ(packet_in.ch16, packet2.ch16);

#ifdef PRINT_MSG
    PRINT_MSG(msg);
#endif
}
#endif
