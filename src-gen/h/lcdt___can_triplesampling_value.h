#ifndef LC_PROT_LCDT___CAN_TRIPLESAMPLING_VALUE__H
#define LC_PROT_LCDT___CAN_TRIPLESAMPLING_VALUE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_BOOL LC_TD_DataType_CAN_TRIPLESAMPLING_VALUE;

/*                            Named Value Constants                         */
#define LC_ED__CAN_TRIPLESAMPLING_VALUE__ON (LC_EL_true)
#define LC_ED__CAN_TRIPLESAMPLING_VALUE__OFF (LC_EL_false)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_CAN_TRIPLESAMPLING_VALUE(p) \
{ \
  (*(p)) = LC_ED__CAN_TRIPLESAMPLING_VALUE__ON; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_CAN_TRIPLESAMPLING_VALUE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__CAN_TRIPLESAMPLING_VALUE__ON; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_CAN_TRIPLESAMPLING_VALUE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_CAN_TRIPLESAMPLING_VALUE * ptrToElement_ArrayOf_CAN_TRIPLESAMPLING_VALUE = (LC_TD_DataType_CAN_TRIPLESAMPLING_VALUE*)(p);\
  LC_TD_DataType_CAN_TRIPLESAMPLING_VALUE * arrayEnd = ptrToElement_ArrayOf_CAN_TRIPLESAMPLING_VALUE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_CAN_TRIPLESAMPLING_VALUE < arrayEnd; ptrToElement_ArrayOf_CAN_TRIPLESAMPLING_VALUE++) \
  { \
    LC_INIT_DataType_CAN_TRIPLESAMPLING_VALUE(ptrToElement_ArrayOf_CAN_TRIPLESAMPLING_VALUE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_CAN_TRIPLESAMPLING_VALUE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_CAN_TRIPLESAMPLING_VALUE(p,ARRAYSIZE); \
  } \
}

#endif
