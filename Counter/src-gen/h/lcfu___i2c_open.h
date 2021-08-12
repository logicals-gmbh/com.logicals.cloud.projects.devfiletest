#ifndef LC_PROT_LCFU___I2C_OPEN__H
#define LC_PROT_LCFU___I2C_OPEN__H

#include <LC3CGBase.h>
#include <lcfu_logilibrary__SYSTEM_OPEN.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_I2C_OPEN
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_DINT LC_VD_I2C_OPEN;
} LCCG_StructAttrib LC_TD_Function_I2C_OPEN;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_I2C_OPEN(p) \
{ \
  LC_INIT_DINT(&((p)->LC_VD_I2C_OPEN)); \
}

/*                            Prototype                        */
void  lcfu___I2C_OPEN(LC_TD_Function_I2C_OPEN* LC_this, LC_TD_INT LC_VD_BUS_ID, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
