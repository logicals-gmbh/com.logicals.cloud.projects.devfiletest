#ifndef LC_PROT_LCDT___CAN_RETURN_CODE__H
#define LC_PROT_LCDT___CAN_RETURN_CODE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UINT LC_TD_DataType_CAN_RETURN_CODE;

/*                            Named Value Constants                         */
#define LC_ED__CAN_RETURN_CODE__CAN_OK ((LC_TD_UINT)0)
#define LC_ED__CAN_RETURN_CODE__CAN_SEND_ERROR ((LC_TD_UINT)1)
#define LC_ED__CAN_RETURN_CODE__CAN_RECEIVE_ERROR ((LC_TD_UINT)2)
#define LC_ED__CAN_RETURN_CODE__CAN_NO_RECEIVE_DATA_REFERENCE ((LC_TD_UINT)3)
#define LC_ED__CAN_RETURN_CODE__CAN_NO_SEND_DATA_REFERENCE ((LC_TD_UINT)4)
#define LC_ED__CAN_RETURN_CODE__CAN_SYSTEM_SERVICE_NOT_LOADED ((LC_TD_UINT)5)
#define LC_ED__CAN_RETURN_CODE__CAN_DLC_ERROR ((LC_TD_UINT)6)
#define LC_ED__CAN_RETURN_CODE__CAN_INTERFACE_ERROR ((LC_TD_UINT)7)
#define LC_ED__CAN_RETURN_CODE__CAN_NO_INTERFACE_NAME ((LC_TD_UINT)8)
#define LC_ED__CAN_RETURN_CODE__CAN_NO_BITRATE ((LC_TD_UINT)9)
#define LC_ED__CAN_RETURN_CODE__CAN_NO_FREE_INTERFACE_SLOT ((LC_TD_UINT)10)
#define LC_ED__CAN_RETURN_CODE__CAN_NO_VALID_HANDLE ((LC_TD_UINT)11)
#define LC_ED__CAN_RETURN_CODE__CAN_NO_CONNECTION ((LC_TD_UINT)12)
#define LC_ED__CAN_RETURN_CODE__CAN_INTERFACE_STILL_IN_USE ((LC_TD_UINT)13)
#define LC_ED__CAN_RETURN_CODE__CAN_INTERFACE_SLOT_UNUSED ((LC_TD_UINT)14)
#define LC_ED__CAN_RETURN_CODE__CAN_INTERFACE_ALREADY_IN_USE ((LC_TD_UINT)15)
#define LC_ED__CAN_RETURN_CODE__CAN_NOT_IMPLEMENTED ((LC_TD_UINT)16)
#define LC_ED__CAN_RETURN_CODE__CAN_NO_VALID_BITRATE ((LC_TD_UINT)17)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CAN_RETURN_CODE(p) \
{ \
  (*(p)) = LC_ED__CAN_RETURN_CODE__CAN_OK; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CAN_RETURN_CODE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__CAN_RETURN_CODE__CAN_OK; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CAN_RETURN_CODE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CAN_RETURN_CODE * ptrToElement_ArrayOf_CAN_RETURN_CODE = (LC_TD_DataType_CAN_RETURN_CODE*)(p);\
  LC_TD_DataType_CAN_RETURN_CODE * arrayEnd = ptrToElement_ArrayOf_CAN_RETURN_CODE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CAN_RETURN_CODE < arrayEnd; ptrToElement_ArrayOf_CAN_RETURN_CODE++) \
  { \
    LC_INIT_DataType_CAN_RETURN_CODE(ptrToElement_ArrayOf_CAN_RETURN_CODE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CAN_RETURN_CODE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CAN_RETURN_CODE(p,ARRAYSIZE); \
  } \
}

#endif
