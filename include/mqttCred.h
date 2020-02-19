/**
 * @brief This file contains the information needed to connect to a remote MQTT broker server.
 * 
 *  Constants used to connect with a MQTT broker. All of these values are default values only. 
 *  If values are already saved in configuration, then those will take priority over these values.
 * 
 */
//! Default value for the MQTT broker server host name. Can be a Domain name or IP address.
#define MQTT_BROKER_HOSTNAME    ""
//! Default value for the MQTT broker server port.
#define MQTT_BROKER_PORT        1883
//! Default value for the MQTT broker username to connect with. Leave blank for no username.
#define MQTT_USERNAME           ""
//! Default value for the MQTT broker password to connect with. Leave blank for no password.
#define MQTT_PASSWORD           ""