#include <RISMD.h>
#include <lcpu___counter.h>

extern RISMDSimpleNumType const risMdType_INT;
static char const lcmd_var_name_COUNTER_COUNT[] RISMD_ATTRIBUTES = "count";
static RISMDStdVariable const lcmd_var_COUNTER_COUNT RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_COUNTER_COUNT, &risMdType_INT, offsetof(LC_TD_Program_COUNTER,LC_VD_COUNT));

extern RISMDSimpleNumType const risMdType_BOOL;
static char const lcmd_var_name_COUNTER_ENO[] RISMD_ATTRIBUTES = "ENO";
static RISMDInterfaceVariable const lcmd_var_COUNTER_ENO RISMD_ATTRIBUTES =
INIT_RISMDInterfaceVariable(lcmd_var_name_COUNTER_ENO, &risMdType_BOOL, offsetof(LC_TD_Program_COUNTER,LC_VD_ENO), RISMD_VARIABLE_SECTION_OUTPUT);

static char const lcmd_var_name_COUNTER_UP[] RISMD_ATTRIBUTES = "up";
static RISMDStdVariable const lcmd_var_COUNTER_UP RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_COUNTER_UP, &risMdType_BOOL, offsetof(LC_TD_Program_COUNTER,LC_VD_UP));

static char const lcmd_var_name_COUNTER___13_SEL[] RISMD_ATTRIBUTES = "__13_SEL";
static RISMDStdVariable const lcmd_var_COUNTER___13_SEL RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_COUNTER___13_SEL, &risMdType_INT, offsetof(LC_TD_Program_COUNTER,LC_VD___13_SEL));

static char const lcmd_var_name_COUNTER___6_ADD[] RISMD_ATTRIBUTES = "__6_ADD";
static RISMDStdVariable const lcmd_var_COUNTER___6_ADD RISMD_ATTRIBUTES =
INIT_RISMDStdVariable(lcmd_var_name_COUNTER___6_ADD, &risMdType_INT, offsetof(LC_TD_Program_COUNTER,LC_VD___6_ADD));

static RISMDReference const lcmd_var_list_COUNTER[] RISMD_ATTRIBUTES =
{
  INIT_RISMDReference(&lcmd_var_COUNTER_COUNT),
  INIT_RISMDReference(&lcmd_var_COUNTER_ENO),
  INIT_RISMDReference(&lcmd_var_COUNTER_UP),
  INIT_RISMDReference(&lcmd_var_COUNTER___13_SEL),
  INIT_RISMDReference(&lcmd_var_COUNTER___6_ADD),
};

static char const lcmd_type_name_COUNTER[] RISMD_ATTRIBUTES = "COUNTER";
RISMDPOUType const lcmd_type_COUNTER RISMD_ATTRIBUTES = INIT_RISMDPOUType(lcmd_type_name_COUNTER, sizeof(LC_TD_Program_COUNTER), 5, lcmd_var_list_COUNTER);
