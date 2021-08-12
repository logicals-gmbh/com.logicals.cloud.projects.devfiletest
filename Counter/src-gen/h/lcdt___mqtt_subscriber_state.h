#ifndef LC_PROT_LCDT___MQTT_SUBSCRIBER_STATE__H
#define LC_PROT_LCDT___MQTT_SUBSCRIBER_STATE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_SINT LC_TD_DataType_MQTT_SUBSCRIBER_STATE;

/*                            Named Value Constants                         */
#define LC_ED__MQTT_SUBSCRIBER_STATE__UNUSED ((LC_TD_SINT)0)
#define LC_ED__MQTT_SUBSCRIBER_STATE__INVALID ((LC_TD_SINT)1)
#define LC_ED__MQTT_SUBSCRIBER_STATE__UNINITIALIZED ((LC_TD_SINT)2)
#define LC_ED__MQTT_SUBSCRIBER_STATE__DISCONNECTING ((LC_TD_SINT)3)
#define LC_ED__MQTT_SUBSCRIBER_STATE__DISCONNECTED ((LC_TD_SINT)4)
#define LC_ED__MQTT_SUBSCRIBER_STATE__CONNECTING ((LC_TD_SINT)5)
#define LC_ED__MQTT_SUBSCRIBER_STATE__CONNECTED ((LC_TD_SINT)6)
#define LC_ED__MQTT_SUBSCRIBER_STATE__CONNECT_ERROR ((LC_TD_SINT)7)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_MQTT_SUBSCRIBER_STATE(p) \
{ \
  (*(p)) = LC_ED__MQTT_SUBSCRIBER_STATE__UNUSED; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_MQTT_SUBSCRIBER_STATE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__MQTT_SUBSCRIBER_STATE__UNUSED; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_MQTT_SUBSCRIBER_STATE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_MQTT_SUBSCRIBER_STATE * ptrToElement_ArrayOf_MQTT_SUBSCRIBER_STATE = (LC_TD_DataType_MQTT_SUBSCRIBER_STATE*)(p);\
  LC_TD_DataType_MQTT_SUBSCRIBER_STATE * arrayEnd = ptrToElement_ArrayOf_MQTT_SUBSCRIBER_STATE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_MQTT_SUBSCRIBER_STATE < arrayEnd; ptrToElement_ArrayOf_MQTT_SUBSCRIBER_STATE++) \
  { \
    LC_INIT_DataType_MQTT_SUBSCRIBER_STATE(ptrToElement_ArrayOf_MQTT_SUBSCRIBER_STATE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_MQTT_SUBSCRIBER_STATE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_MQTT_SUBSCRIBER_STATE(p,ARRAYSIZE); \
  } \
}

#endif
