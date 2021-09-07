#ifndef LC_PROT_LCFU___I2C_PCF8591_READ__H
#define LC_PROT_LCFU___I2C_PCF8591_READ__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__AND.h>
#include <lcfu_iec61131__CONVERT.h>
#include <lcfu_iec61131__OR.h>
#include <lcfu_logilibrary__SYSTEM_IOCTL.h>
#include <lcfu_logilibrary__SYSTEM_READ.h>
#include <lcfu_logilibrary__SYSTEM_WRITE.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_I2C_PCF8591_READ
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_UINT LC_VD_I2C_PCF8591_READ;
} LCCG_StructAttrib LC_TD_Function_I2C_PCF8591_READ;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_I2C_PCF8591_READ(p) \
{ \
  LC_INIT_UINT(&((p)->LC_VD_I2C_PCF8591_READ)); \
}

/*                            Prototype                        */
void  lcfu___I2C_PCF8591_READ(LC_TD_Function_I2C_PCF8591_READ* LC_this, LC_TD_DINT LC_VD_FD, LC_TD_INT LC_VD_ADDRESS, LC_TD_UINT LC_VD_CHANNEL, struct _lcoplck_epdb_1_impl* pEPDB);

#endif
