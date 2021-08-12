#ifndef LC_PROT_LCDT___LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE__H
#define LC_PROT_LCDT___LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE__H

#include <LC3CGBase.h>

/*                            Typedefs                         */
typedef LC_TD_INT LC_TD_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE;

/*                            Named Value Constants                         */
#define LC_ED__logicalsx2Estandardx2Eutilx2Eschedulex2EPROGRAM_HANDLE__InvalidProgramHandle ((LC_TD_INT)-1)

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE(p) \
{ \
  (*(p)) = LC_ED__logicalsx2Estandardx2Eutilx2Eschedulex2EPROGRAM_HANDLE__InvalidProgramHandle; \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE(p,RF) \
{ \
  if (RF==0) (*(p)) = LC_ED__logicalsx2Estandardx2Eutilx2Eschedulex2EPROGRAM_HANDLE__InvalidProgramHandle; \
}

/*                ColdBoot Initialization Macro for Arrays            */
#define LC_INIT_ARRAY_OF_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE(p,ARRAYSIZE) \
{ \
  LC_TD_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE * ptrToElement_ArrayOf_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE = (LC_TD_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE*)(p);\
  LC_TD_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE * arrayEnd = ptrToElement_ArrayOf_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE+ARRAYSIZE;\
  for (; ptrToElement_ArrayOf_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE < arrayEnd; ptrToElement_ArrayOf_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE++) \
  { \
    LC_INIT_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE(ptrToElement_ArrayOf_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE); \
  } \
}

/*                WarmBoot Initialization Macro for Arrays            */
#define LC_WINIT_ARRAY_OF_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE(p,ARRAYSIZE,RF) \
{ \
  if (RF==0) \
  { \
    LC_INIT_ARRAY_OF_DataType_LOGICALSx2ESTANDARDx2EUTILx2ESCHEDULEx2EPROGRAM_HANDLE(p,ARRAYSIZE); \
  } \
}

#endif
