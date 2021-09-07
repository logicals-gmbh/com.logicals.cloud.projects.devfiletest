#ifndef LC_PROT_LCDT___LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE__H
#define LC_PROT_LCDT___LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_UDINT LC_TD_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE;

/*                            Named Value Constants                         */
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__succeeded ((LC_TD_UDINT)0UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__invalidFlags ((LC_TD_UDINT)2164260881UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__invalidHandle ((LC_TD_UDINT)2164260882UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__cannotCreateSocket ((LC_TD_UDINT)2164260883UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__cannotBindSocket ((LC_TD_UDINT)2164260884UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__cannotSendData ((LC_TD_UDINT)2164260885UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__cannotReceiveData ((LC_TD_UDINT)2164260886UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__invalidDataSize ((LC_TD_UDINT)2164260887UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__cannotListenOnSocket ((LC_TD_UDINT)2164260888UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__cannotAcceptClientConnections ((LC_TD_UDINT)2164260889UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__cannotConnectToServer ((LC_TD_UDINT)2164260890UL)
#define LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__noInComingConnection ((LC_TD_UDINT)2164260891UL)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE(p) \
{ \
  (*(p)) = LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__succeeded; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__logicalsx2Esystemx2Enetworkx2Etcpx2ETCP_ErrorCode__succeeded; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE * ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE = (LC_TD_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE*)(p);\
  LC_TD_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE * arrayEnd = ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE < arrayEnd; ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE++) \
  { \
    LC_INIT_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE(ptrToElement_ArrayOf_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_LOGICALSx2ESYSTEMx2ENETWORKx2ETCPx2ETCP_ERRORCODE(p,ARRAYSIZE); \
  } \
}

#endif
