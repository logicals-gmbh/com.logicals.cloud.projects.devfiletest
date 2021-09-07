#ifndef LC_PROT_LCDT___GPIOPINFLAGS__H
#define LC_PROT_LCDT___GPIOPINFLAGS__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_DWORD LC_TD_DataType_GPIOPINFLAGS;

/*                            Named Value Constants                         */
#define LC_ED__GPIOPinFlags__Output ((LC_TD_DWORD)1UL)
#define LC_ED__GPIOPinFlags__Input ((LC_TD_DWORD)2UL)
#define LC_ED__GPIOPinFlags__Open ((LC_TD_DWORD)4UL)
#define LC_ED__GPIOPinFlags__PullUp ((LC_TD_DWORD)8UL)
#define LC_ED__GPIOPinFlags__PullDown ((LC_TD_DWORD)12UL)
#define LC_ED__GPIOPinFlags__ActiveLow ((LC_TD_DWORD)16UL)
#define LC_ED__GPIOPinFlags__ActiveHigh ((LC_TD_DWORD)32UL)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_GPIOPINFLAGS(p) \
{ \
  (*(p)) = LC_ED__GPIOPinFlags__Output; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_GPIOPINFLAGS(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__GPIOPinFlags__Output; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_GPIOPINFLAGS(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_GPIOPINFLAGS * ptrToElement_ArrayOf_GPIOPINFLAGS = (LC_TD_DataType_GPIOPINFLAGS*)(p);\
  LC_TD_DataType_GPIOPINFLAGS * arrayEnd = ptrToElement_ArrayOf_GPIOPINFLAGS+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_GPIOPINFLAGS < arrayEnd; ptrToElement_ArrayOf_GPIOPINFLAGS++) \
  { \
    LC_INIT_DataType_GPIOPINFLAGS(ptrToElement_ArrayOf_GPIOPINFLAGS); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_GPIOPINFLAGS(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_GPIOPINFLAGS(p,ARRAYSIZE); \
  } \
}

#endif
