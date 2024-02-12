/** @file
 *  @brief MAVLink comm protocol generated from rtc_rc.xml
 *  @see http://mavlink.org
 */
#pragma once
#ifndef MAVLINK_RTC_RC_H
#define MAVLINK_RTC_RC_H

#ifndef MAVLINK_H
    #error Wrong include order: MAVLINK_RTC_RC.H MUST NOT BE DIRECTLY USED. Include mavlink.h from the same directory instead or set ALL AND EVERY defines from MAVLINK.H manually accordingly, including the #define MAVLINK_H call.
#endif

#define MAVLINK_RTC_RC_XML_HASH -5977074236667706927

#ifdef __cplusplus
extern "C" {
#endif

// MESSAGE LENGTHS AND CRCS

#ifndef MAVLINK_MESSAGE_LENGTHS
#define MAVLINK_MESSAGE_LENGTHS {}
#endif

#ifndef MAVLINK_MESSAGE_CRCS
#define MAVLINK_MESSAGE_CRCS {{45000, 66, 32, 32, 0, 0, 0}}
#endif

#include "../protocol.h"

#define MAVLINK_ENABLED_RTC_RC

// ENUM DEFINITIONS



// MAVLINK VERSION

#ifndef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

#if (MAVLINK_VERSION == 0)
#undef MAVLINK_VERSION
#define MAVLINK_VERSION 2
#endif

// MESSAGE DEFINITIONS
#include "./mavlink_msg_rtc_rc_channels.h"

// base include



#if MAVLINK_RTC_RC_XML_HASH == MAVLINK_PRIMARY_XML_HASH
# define MAVLINK_MESSAGE_INFO {MAVLINK_MESSAGE_INFO_RTC_RC_CHANNELS}
# define MAVLINK_MESSAGE_NAMES {{ "RTC_RC_CHANNELS", 45000 }}
# if MAVLINK_COMMAND_24BIT
#  include "../mavlink_get_info.h"
# endif
#endif

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // MAVLINK_RTC_RC_H
