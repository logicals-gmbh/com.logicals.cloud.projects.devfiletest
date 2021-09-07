#ifndef LC_PROT_LCDT___MQTT_RC__H
#define LC_PROT_LCDT___MQTT_RC__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_DINT LC_TD_DataType_MQTT_RC;

/*                            Named Value Constants                         */
#define LC_ED__MQTT_RC__OK ((LC_TD_DINT)0L)
#define LC_ED__MQTT_RC__ERROR ((LC_TD_DINT)1L)
#define LC_ED__MQTT_RC__ERROR_MEM_ALLOC ((LC_TD_DINT)2L)
#define LC_ED__MQTT_RC__ERROR_CONNECT ((LC_TD_DINT)3L)
#define LC_ED__MQTT_RC__ERROR_CH_INVALID ((LC_TD_DINT)4L)
#define LC_ED__MQTT_RC__ERROR_OUT_OF_CLIENTS ((LC_TD_DINT)5L)
#define LC_ED__MQTT_RC__ERROR_OUT_OF_CB ((LC_TD_DINT)6L)
#define LC_ED__MQTT_RC__ERROR_INVALID_MUTEX ((LC_TD_DINT)7L)
#define LC_ED__MQTT_RC__ERROR_NO_MSG_RECEIVED ((LC_TD_DINT)8L)
#define LC_ED__MQTT_RC__ERROR_NO_MSG_PUBLISHED ((LC_TD_DINT)9L)
#define LC_ED__MQTT_RC__ERROR_MSG_TRUNCATED ((LC_TD_DINT)10L)
#define LC_ED__MQTT_RC__ERROR_CH_INVALID_STATE ((LC_TD_DINT)11L)
#define LC_ED__MQTT_RC__ERROR_CANNOT_DISCONNECT ((LC_TD_DINT)12L)
#define LC_ED__MQTT_RC__ERROR_AUTHENTICATION_FAILED ((LC_TD_DINT)13L)
#define LC_ED__MQTT_RC__ERROR_SSL_NOT_SUPPORTED ((LC_TD_DINT)14L)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_MQTT_RC(p) \
{ \
  (*(p)) = LC_ED__MQTT_RC__OK; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_MQTT_RC(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__MQTT_RC__OK; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_MQTT_RC(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_MQTT_RC * ptrToElement_ArrayOf_MQTT_RC = (LC_TD_DataType_MQTT_RC*)(p);\
  LC_TD_DataType_MQTT_RC * arrayEnd = ptrToElement_ArrayOf_MQTT_RC+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_MQTT_RC < arrayEnd; ptrToElement_ArrayOf_MQTT_RC++) \
  { \
    LC_INIT_DataType_MQTT_RC(ptrToElement_ArrayOf_MQTT_RC); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_MQTT_RC(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_MQTT_RC(p,ARRAYSIZE); \
  } \
}

#endif
