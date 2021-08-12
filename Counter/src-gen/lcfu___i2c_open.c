#ifndef LC_PROT_LCFU___I2C_OPEN__C
#define LC_PROT_LCFU___I2C_OPEN__C

#include <lcfu___i2c_open.h>

/*                            Functions                        */
void  lcfu___I2C_OPEN(LC_TD_Function_I2C_OPEN* LC_this, LC_TD_INT LC_VD_BUS_ID, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_STRING_STACK_OFFSET offset = LC_STRING_STATEMENT_BUFFER(pEPDB);
  LcCgChar LC_VD_DEVICE_FILE[11];
  LC_TD_DINT LC_VD_O_RDWR;
  LC_INIT_SIZED_STRING(&(LC_VD_DEVICE_FILE));
  LC_VD_O_RDWR = (LC_TD_DINT)2L;
  if ((LC_TD_BOOL)(LC_VD_BUS_ID == (LC_TD_INT)0))
  {
    LC_MOV_STRING(LC_VD_DEVICE_FILE,10,"/dev/i2c-0",10,&LC_this->LC_VD_ENO);
  }
  else
  {
    if ((LC_TD_BOOL)(LC_VD_BUS_ID == (LC_TD_INT)1))
    {
      LC_MOV_STRING(LC_VD_DEVICE_FILE,10,"/dev/i2c-1",10,&LC_this->LC_VD_ENO);
    }
    else
    {
      if ((LC_TD_BOOL)(LC_VD_BUS_ID == (LC_TD_INT)2))
      {
        LC_MOV_STRING(LC_VD_DEVICE_FILE,10,"/dev/i2c-2",10,&LC_this->LC_VD_ENO);
      }
    }
  }
  {
    LC_TD_Function_SYSTEM_OPEN lFunction_SYSTEM_OPEN;
    LC_INIT_Function_SYSTEM_OPEN(&lFunction_SYSTEM_OPEN);
    lFunction_SYSTEM_OPEN.LC_VD_ENO = LC_EL_true;
    lcfu_logilibrary__SYSTEM_OPEN(&lFunction_SYSTEM_OPEN, LCCG_CreateStringStruct(LC_VD_DEVICE_FILE,10), LC_VD_O_RDWR, (LC_TD_DINT)0L, pEPDB);
    LC_this->LC_VD_I2C_OPEN = lFunction_SYSTEM_OPEN.LC_VD_SYSTEM_OPEN;
    LC_this->LC_VD_ENO = lFunction_SYSTEM_OPEN.LC_VD_ENO;
    LC_RESET_STRING_STATEMENT_BUFFER(pEPDB,offset);
  }
}

#endif
