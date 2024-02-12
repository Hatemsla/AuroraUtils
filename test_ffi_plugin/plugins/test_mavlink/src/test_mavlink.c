#include "test_mavlink.h"

#define HZ_1 1000000
#define HZ_10 100000
#define NUM_OF_POINTS 4

mavlink_message_t tx_msg;
mavlink_message_t rx_msg;
mavlink_heartbeat_t rx_heartbeat;
mavlink_status_t rx_status;
mavlink_attitude_t rx_attitude;
mavlink_local_position_ned_t rx_local_pos;
mavlink_global_position_int_t rx_global_pos;

uint8_t sysid_apm;                       // id дрона
uint8_t compid_apm;                      // id автопилота
bool already_received_heartbeat = false; // первое сообщение heartbeat принято
unsigned long t_last_heartbeat = 0;
uint8_t tx_msg_buffer[MAVLINK_MAX_PACKET_LEN];
int tx_msg_len = 0;

// GUIDED
const uint16_t TYPEMASK_IGNORE = POSITION_TARGET_TYPEMASK_VX_IGNORE +
                                 POSITION_TARGET_TYPEMASK_VY_IGNORE +
                                 POSITION_TARGET_TYPEMASK_VZ_IGNORE +
                                 POSITION_TARGET_TYPEMASK_AX_IGNORE +
                                 POSITION_TARGET_TYPEMASK_AY_IGNORE +
                                 POSITION_TARGET_TYPEMASK_AZ_IGNORE +
                                 POSITION_TARGET_TYPEMASK_YAW_RATE_IGNORE;
int points[NUM_OF_POINTS][3] = {{0, 0, -2},
                                {0, 5, -2},
                                {5, 5, -2},
                                {5, 0, -2}};
int current_point = 0;
float allowable_error = 0.5;
unsigned long t_last_local_pose = 0;

FFI_PLUGIN_EXPORT intptr_t sum(intptr_t a, intptr_t b) { return a + b; }

FFI_PLUGIN_EXPORT void send_heardbeat(){
  mavlink_msg_heartbeat_pack_chan(sysid_apm, MAV_COMP_ID_ONBOARD_COMPUTER, MAVLINK_COMM_0, &tx_msg,
                                  MAV_TYPE_ONBOARD_CONTROLLER, MAV_AUTOPILOT_INVALID, 0, 0, 0);
  tx_msg_len = mavlink_msg_to_send_buffer(tx_msg_buffer, &tx_msg);
}

FFI_PLUGIN_EXPORT void send_local_pose(float x, float y, float z){
  mavlink_msg_set_position_target_local_ned_pack_chan(sysid_apm, MAV_COMP_ID_ONBOARD_COMPUTER, MAVLINK_COMM_0, &tx_msg, 0,
                                                      sysid_apm, MAV_TYPE_ONBOARD_CONTROLLER, MAV_FRAME_LOCAL_NED, TYPEMASK_IGNORE,
                                                      x, y, z, 0, 0, 0, 0, 0, 0, 0, 0);
  tx_msg_len = mavlink_msg_to_send_buffer(tx_msg_buffer, &tx_msg);
}

FFI_PLUGIN_EXPORT bool point_is_reached()
{
  float delta_x = rx_local_pos.x - points[current_point][0];
  float delta_y = rx_local_pos.y - points[current_point][1];
  float delta_z = rx_local_pos.z - points[current_point][2];
  float distance = sqrt(pow(delta_x, 2) + pow(delta_y, 2) + pow(delta_z, 2));
  return distance < allowable_error;
}
