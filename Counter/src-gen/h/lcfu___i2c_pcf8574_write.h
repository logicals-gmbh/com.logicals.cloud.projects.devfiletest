#ifndef LC_PROT_LCFU___I2C_PCF8574_WRITE__H
#define LC_PROT_LCFU___I2C_PCF8574_WRITE__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__NOT.h>
#include <lcfu_iec61131__OR.h>
#include <lcfu_iec61131__SHL.h>
#include <lcfu_logilibrary__SYSTEM_IOCTL.h>
#include <lcfu_logilibrary__SYSTEM_WRITE.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Function_I2C_PCF8574_WRITE
{
  LC_TD_BOOL LC_VD_ENO;
} LCCG_StructAttrib LC_TD_Function_I2C_PCF8574_WRITE;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_Function_I2C_PCF8574_WRITE(p) \
{ \
}

/*                            Prototype                        */
void  lcfu___I2C_PCF8574_WRITE(LC_TD_Function_I2C_PCF8574_WRITE* LC_this, LC_TD_DINT LC_VD_FD, LC_TD_INT LC_VD_ADDRESS, LC_TD_BOOL LC_VD_PIN_VALUES[8], struct _lcoplck_epdb_1_impl* pEPDB);

#endif