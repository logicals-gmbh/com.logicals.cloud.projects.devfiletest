#include <RISMD.h>
#include <lcdt___mqtt_rc.h>

static char const lcmd_type_name_MQTT_RC[] RISMD_ATTRIBUTES = "MQTT_RC";
extern RISMDSimpleNumType const risMdType_DINT;
RISMDDerivedType const lcmd_type_MQTT_RC RISMD_ATTRIBUTES = INIT_RISMDDerivedType(lcmd_type_name_MQTT_RC, &risMdType_DINT);
