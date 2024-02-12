// MESSAGE RTC_RC_CHANNELS support class

#pragma once

namespace mavlink {
namespace rtc_rc {
namespace msg {

/**
 * @brief RTC_RC_CHANNELS message
 *
 * Current values of RC channels.
 */
struct RTC_RC_CHANNELS : mavlink::Message {
    static constexpr msgid_t MSG_ID = 45000;
    static constexpr size_t LENGTH = 32;
    static constexpr size_t MIN_LENGTH = 32;
    static constexpr uint8_t CRC_EXTRA = 66;
    static constexpr auto NAME = "RTC_RC_CHANNELS";


    uint16_t ch1; /*< [us] Channel 1. */
    uint16_t ch2; /*< [us] Channel 2. */
    uint16_t ch3; /*< [us] Channel 3. */
    uint16_t ch4; /*< [us] Channel 4. */
    uint16_t ch5; /*< [us] Channel 5. */
    uint16_t ch6; /*< [us] Channel 6. */
    uint16_t ch7; /*< [us] Channel 7. */
    uint16_t ch8; /*< [us] Channel 8. */
    uint16_t ch9; /*< [us] Channel 9. */
    uint16_t ch10; /*< [us] Channel 10. */
    uint16_t ch11; /*< [us] Channel 11. */
    uint16_t ch12; /*< [us] Channel 12. */
    uint16_t ch13; /*< [us] Channel 13. */
    uint16_t ch14; /*< [us] Channel 14. */
    uint16_t ch15; /*< [us] Channel 15. */
    uint16_t ch16; /*< [us] Channel 16. */


    inline std::string get_name(void) const override
    {
            return NAME;
    }

    inline Info get_message_info(void) const override
    {
            return { MSG_ID, LENGTH, MIN_LENGTH, CRC_EXTRA };
    }

    inline std::string to_yaml(void) const override
    {
        std::stringstream ss;

        ss << NAME << ":" << std::endl;
        ss << "  ch1: " << ch1 << std::endl;
        ss << "  ch2: " << ch2 << std::endl;
        ss << "  ch3: " << ch3 << std::endl;
        ss << "  ch4: " << ch4 << std::endl;
        ss << "  ch5: " << ch5 << std::endl;
        ss << "  ch6: " << ch6 << std::endl;
        ss << "  ch7: " << ch7 << std::endl;
        ss << "  ch8: " << ch8 << std::endl;
        ss << "  ch9: " << ch9 << std::endl;
        ss << "  ch10: " << ch10 << std::endl;
        ss << "  ch11: " << ch11 << std::endl;
        ss << "  ch12: " << ch12 << std::endl;
        ss << "  ch13: " << ch13 << std::endl;
        ss << "  ch14: " << ch14 << std::endl;
        ss << "  ch15: " << ch15 << std::endl;
        ss << "  ch16: " << ch16 << std::endl;

        return ss.str();
    }

    inline void serialize(mavlink::MsgMap &map) const override
    {
        map.reset(MSG_ID, LENGTH);

        map << ch1;                           // offset: 0
        map << ch2;                           // offset: 2
        map << ch3;                           // offset: 4
        map << ch4;                           // offset: 6
        map << ch5;                           // offset: 8
        map << ch6;                           // offset: 10
        map << ch7;                           // offset: 12
        map << ch8;                           // offset: 14
        map << ch9;                           // offset: 16
        map << ch10;                          // offset: 18
        map << ch11;                          // offset: 20
        map << ch12;                          // offset: 22
        map << ch13;                          // offset: 24
        map << ch14;                          // offset: 26
        map << ch15;                          // offset: 28
        map << ch16;                          // offset: 30
    }

    inline void deserialize(mavlink::MsgMap &map) override
    {
        map >> ch1;                           // offset: 0
        map >> ch2;                           // offset: 2
        map >> ch3;                           // offset: 4
        map >> ch4;                           // offset: 6
        map >> ch5;                           // offset: 8
        map >> ch6;                           // offset: 10
        map >> ch7;                           // offset: 12
        map >> ch8;                           // offset: 14
        map >> ch9;                           // offset: 16
        map >> ch10;                          // offset: 18
        map >> ch11;                          // offset: 20
        map >> ch12;                          // offset: 22
        map >> ch13;                          // offset: 24
        map >> ch14;                          // offset: 26
        map >> ch15;                          // offset: 28
        map >> ch16;                          // offset: 30
    }
};

} // namespace msg
} // namespace rtc_rc
} // namespace mavlink
