#ifndef LC_PROT_LCFU___I2C_PCF8574_READ__C
#define LC_PROT_LCFU___I2C_PCF8574_READ__C

#include <lcfu___i2c_pcf8574_read.h>
#include <LC3CGStmtFor.h>
#include <lcfu_iec61131__AND.h>

/*                            Functions                        */
void  lcfu___I2C_PCF8574_READ(LC_TD_Function_I2C_PCF8574_READ* LC_this, LC_TD_DINT LC_VD_FD, LC_TD_INT LC_VD_ADDRESS, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_TD_DINT LC_VD_NUM_BYTES;
  LC_TD_INT LC_VD_CNT;
  LC_TD_BYTE LC_VD_DATA[64];
  LC_TD_DINT LC_VD_I2C_SLAVE;
  LC_VD_NUM_BYTES = (LC_TD_DINT)-1L;
  LC_VD_CNT = (LC_TD_INT)0;
  LC_INIT_ARRAY(&(LC_VD_DATA),BYTE,64);
  LC_VD_I2C_SLAVE = (LC_TD_DINT)1795L;
  if ((LC_TD_BOOL)(LC_VD_FD >= (LC_TD_DINT)0L))
  {
    {
      LC_TD_Function_SYSTEM_IOCTL lFunction_SYSTEM_IOCTL;
      LC_INIT_Function_SYSTEM_IOCTL(&lFunction_SYSTEM_IOCTL);
      lFunction_SYSTEM_IOCTL.LC_VD_ENO = LC_EL_true;
      lcfu_logilibrary__SYSTEM_IOCTL(&lFunction_SYSTEM_IOCTL, LC_VD_FD, LC_VD_I2C_SLAVE, LC_VD_ADDRESS, pEPDB);
      LC_this->LC_VD_ENO = lFunction_SYSTEM_IOCTL.LC_VD_ENO;
    }
    if (LC_this->LC_VD_ENO)
    {
      {
        LC_TD_Function_SYSTEM_READ lFunction_SYSTEM_READ;
        LC_INIT_Function_SYSTEM_READ(&lFunction_SYSTEM_READ);
        lFunction_SYSTEM_READ.LC_VD_ENO = LC_EL_true;
        lcfu_logilibrary__SYSTEM_READ(&lFunction_SYSTEM_READ, LC_VD_FD, (LC_TD_DINT)1L, &LC_VD_DATA, pEPDB);
        LC_VD_NUM_BYTES = lFunction_SYSTEM_READ.LC_VD_SYSTEM_READ;
        LC_this->LC_VD_ENO = lFunction_SYSTEM_READ.LC_VD_ENO;
      }
      {
        LC_TD_BOOL conditionResult = LC_EL_false;
        conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_ENO,(LC_TD_BOOL)(LC_VD_NUM_BYTES == (LC_TD_DINT)1L)));
        if (conditionResult)
        {
          {
            LC3_MST_FOR(LC_VD_CNT, (LC_TD_USINT)0, (LC_TD_USINT)7, (LC_TD_USINT)1,INT, UINT);
            {
              {
                LC_TD_Function_NOT__BYTE lFunction__leftOp_AND__IN1_NOT;
                LC_TD_Function_SHL__BYTE lFunction__leftOp_AND__IN2_SHL;
                LC_TD_Function_AND__BYTE lFunction__leftOp_AND;
                LC_INIT_Function_NOT__BYTE(&lFunction__leftOp_AND__IN1_NOT);
                LC_INIT_Function_SHL__BYTE(&lFunction__leftOp_AND__IN2_SHL);
                LC_INIT_Function_AND__BYTE(&lFunction__leftOp_AND);
                lFunction__leftOp_AND__IN1_NOT.LC_VD_ENO = LC_EL_true;
                lcfu_iec61131__NOT__BYTE(&lFunction__leftOp_AND__IN1_NOT, LC_SUBSCRIPT_ARRAY(LC_VD_DATA,(LC_TD_USINT)0,(LC_TD_DINT)0,(LC_TD_DINT)63), pEPDB);
                lFunction__leftOp_AND__IN2_SHL.LC_VD_ENO = LC_EL_true;
                lcfu_iec61131__SHL__BYTE(&lFunction__leftOp_AND__IN2_SHL, (LC_TD_BYTE)1, LC_VD_CNT, pEPDB);
                lFunction__leftOp_AND.LC_VD_ENO = LC_EL_true;
                lcfu_iec61131__AND__ANY__2(&lFunction__leftOp_AND, lFunction__leftOp_AND__IN1_NOT.LC_VD_NOT, lFunction__leftOp_AND__IN2_SHL.LC_VD_SHL, pEPDB);
                LC_SUBSCRIPT_ARRAY(LC_this->LC_VD_I2C_PCF8574_READ,LC_VD_CNT,(LC_TD_DINT)0,(LC_TD_DINT)7) = (LC_TD_BOOL)(lFunction__leftOp_AND.LC_VD_AND != (LC_TD_BYTE)0);
              }
            }
            LC3_MST_FOR_END(LC_VD_CNT, (LC_TD_USINT)0,(LC_TD_USINT)7, (LC_TD_USINT)1, INT, UINT);
          }
        }
      }
    }
  }
  else
  {
    LC_this->LC_VD_ENO = LC_EL_false;
  }
}

#endif
