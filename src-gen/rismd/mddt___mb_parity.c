#include <RISMD.h>
#include <lcdt___mb_parity.h>

static char const lcmd_type_name_MB_PARITY[] RISMD_ATTRIBUTES = "MB_PARITY";
extern RISMDSimpleNumType const risMdType_SINT;
RISMDDerivedType const lcmd_type_MB_PARITY RISMD_ATTRIBUTES = INIT_RISMDDerivedType(lcmd_type_name_MB_PARITY, &risMdType_SINT);
