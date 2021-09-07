#ifndef LC_PROT_LCDT___LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE__H
#define LC_PROT_LCDT___LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_DWORD LC_TD_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE(p) \
{ \
  LC_INIT_DWORD(p); \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE(p,RF) \
{ \
  LC_WINIT_DWORD(p,RF); \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE * ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE = (LC_TD_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE*)(p);\
  LC_TD_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE * arrayEnd = ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE < arrayEnd; ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE++) \
  { \
    LC_INIT_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE(ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_CLIENTHANDLE(p,ARRAYSIZE); \
  } \
}

#endif