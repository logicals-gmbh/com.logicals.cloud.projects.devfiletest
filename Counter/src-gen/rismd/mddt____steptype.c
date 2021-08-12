#include <RISMD.h>
#include <lcdt____steptype.h>

extern RISMDSimpleNumType const risMdType_TIME;
static char const lcmd_var_name__STEPTYPE_S[] RISMD_ATTRIBUTES = "S";
static RISMDStdVariable const lcmd_var__STEPTYPE_S RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name__STEPTYPE_S, &risMdType_TIME, offsetof(LC_TD_DataType__STEPTYPE,LC_VD_S));

static char const lcmd_var_name__STEPTYPE_T[] RISMD_ATTRIBUTES = "T";
static RISMDStdVariable const lcmd_var__STEPTYPE_T RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name__STEPTYPE_T, &risMdType_TIME, offsetof(LC_TD_DataType__STEPTYPE,LC_VD_T));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name__STEPTYPE_X[] RISMD_ATTRIBUTES = "X";
static RISMDStdVariable const lcmd_var__STEPTYPE_X RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name__STEPTYPE_X, &risMdType_BOOL, offsetof(LC_TD_DataType__STEPTYPE,LC_VD_X));

static RISMDReference const lcmd_var_list__STEPTYPE[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var__STEPTYPE_S),
  INIT_RISMDReference(&lcmd_var__STEPTYPE_T),
  INIT_RISMDReference(&lcmd_var__STEPTYPE_X),
};

static char const lcmd_type_name__STEPTYPE[] RISMD_ATTRIBUTES = "_STEPTYPE";
RISMDCompoundType const lcmd_type__STEPTYPE RISMD_ATTRIBUTES = INIT_RISMDCompoundType(lcmd_type_name__STEPTYPE, sizeof(LC_TD_DataType__STEPTYPE), 3, lcmd_var_list__STEPTYPE);
