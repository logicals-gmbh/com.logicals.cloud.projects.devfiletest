#ifndef LC_PROT_LCDT____INITSTEPTYPE__H
#define LC_PROT_LCDT____INITSTEPTYPE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_DataType__INITSTEPTYPE
{
  LC_TD_BOOL LC_VD_X;
  LC_TD_TIME LC_VD_S;
  LC_TD_TIME LC_VD_T;
} LCCG_StructAttrib LC_TD_DataType__INITSTEPTYPE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType__INITSTEPTYPE(p) \
{ \
  (p)->LC_VD_X = LC_EL_true; \
  LC_INIT_TIME(&((p)->LC_VD_T)); \
  LC_INIT_TIME(&((p)->LC_VD_S)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType__INITSTEPTYPE(p,RF) \
{ \
  if (RF==0) (p)->LC_VD_X = LC_EL_true; \
  LC_WINIT_TIME(&((p)->LC_VD_T),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_S),RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType__INITSTEPTYPE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType__INITSTEPTYPE * ptrToElement_ArrayOf__INITSTEPTYPE = (LC_TD_DataType__INITSTEPTYPE*)(p);\
  LC_TD_DataType__INITSTEPTYPE * arrayEnd = ptrToElement_ArrayOf__INITSTEPTYPE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf__INITSTEPTYPE < arrayEnd; ptrToElement_ArrayOf__INITSTEPTYPE++) \
  { \
    LC_INIT_DataType__INITSTEPTYPE(ptrToElement_ArrayOf__INITSTEPTYPE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType__INITSTEPTYPE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType__INITSTEPTYPE(p,ARRAYSIZE); \
  } \
}


#endif
