#ifndef LC_PROT_LCDT____STEPTYPE__H
#define LC_PROT_LCDT____STEPTYPE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef struct _LC_TD_DataType__STEPTYPE
{
  LC_TD_BOOL LC_VD_X;
  LC_TD_TIME LC_VD_S;
  LC_TD_TIME LC_VD_T;
} LCCG_StructAttrib LC_TD_DataType__STEPTYPE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType__STEPTYPE(p) \
{ \
  LC_INIT_BOOL(&((p)->LC_VD_X)); \
  LC_INIT_TIME(&((p)->LC_VD_T)); \
  LC_INIT_TIME(&((p)->LC_VD_S)); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType__STEPTYPE(p,RF) \
{ \
  LC_WINIT_BOOL(&((p)->LC_VD_X),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_T),RF); \
  LC_WINIT_TIME(&((p)->LC_VD_S),RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType__STEPTYPE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType__STEPTYPE * ptrToElement_ArrayOf__STEPTYPE = (LC_TD_DataType__STEPTYPE*)(p);\
  LC_TD_DataType__STEPTYPE * arrayEnd = ptrToElement_ArrayOf__STEPTYPE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf__STEPTYPE < arrayEnd; ptrToElement_ArrayOf__STEPTYPE++) \
  { \
    LC_INIT_DataType__STEPTYPE(ptrToElement_ArrayOf__STEPTYPE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType__STEPTYPE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType__STEPTYPE(p,ARRAYSIZE); \
  } \
}


#endif
