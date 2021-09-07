#ifndef LC_PROT_LCDT___MB_PARITY__H
#define LC_PROT_LCDT___MB_PARITY__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_SINT LC_TD_DataType_MB_PARITY;

/*                            Named Value Constants                         */
#define LC_ED__MB_PARITY__NONE ((LC_TD_SINT)0)
#define LC_ED__MB_PARITY__EVEN ((LC_TD_SINT)1)
#define LC_ED__MB_PARITY__ODD ((LC_TD_SINT)2)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_MB_PARITY(p) \
{ \
  (*(p)) = LC_ED__MB_PARITY__NONE; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_MB_PARITY(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__MB_PARITY__NONE; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_MB_PARITY(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_MB_PARITY * ptrToElement_ArrayOf_MB_PARITY = (LC_TD_DataType_MB_PARITY*)(p);\
  LC_TD_DataType_MB_PARITY * arrayEnd = ptrToElement_ArrayOf_MB_PARITY+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_MB_PARITY < arrayEnd; ptrToElement_ArrayOf_MB_PARITY++) \
  { \
    LC_INIT_DataType_MB_PARITY(ptrToElement_ArrayOf_MB_PARITY); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_MB_PARITY(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_MB_PARITY(p,ARRAYSIZE); \
  } \
}

#endif
