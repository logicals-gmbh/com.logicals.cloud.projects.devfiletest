#ifndef LC_PROT_LCFU___I2C_PCF8591_READ__C
#define LC_PROT_LCFU___I2C_PCF8591_READ__C

#include <lcfu___i2c_pcf8591_read.h>
#include <lcfu_iec61131__AND.h>

/*                            Functions                        */
void  lcfu___I2C_PCF8591_READ(LC_TD_Function_I2C_PCF8591_READ* LC_this, LC_TD_DINT LC_VD_FD, LC_TD_INT LC_VD_ADDRESS, LC_TD_UINT LC_VD_CHANNEL, struct _lcoplck_epdb_1_impl* pEPDB)
{
  LC_TD_BYTE LC_VD_RAW_VALUE;
  LC_TD_DINT LC_VD_NUM_BYTES;
  LC_TD_BYTE LC_VD_DATA[64];
  LC_TD_DINT LC_VD_I2C_SLAVE;
  LC_VD_RAW_VALUE = (LC_TD_BYTE)0;
  LC_VD_NUM_BYTES = (LC_TD_DINT)-1L;
  LC_INIT_ARRAY(&(LC_VD_DATA),BYTE,64);
  LC_VD_I2C_SLAVE = (LC_TD_DINT)1795L;
  {
    LC_TD_BOOL conditionResult = LC_EL_false;
    conditionResult = (lcfu_iec61131__AND__BOOL__2__INL((lcfu_iec61131__AND__BOOL__2__INL((LC_TD_BOOL)(LC_VD_FD >= (LC_TD_DINT)0L),(LC_TD_BOOL)(LC_VD_CHANNEL >= (LC_TD_UINT)0))),(LC_TD_BOOL)(LC_VD_CHANNEL <= (LC_TD_UINT)3)));
    if (conditionResult)
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
          LC_TD_Function_TO_BYTE lFunction_OR__IN2_AND__IN1_TO_BYTE;
          LC_TD_Function_AND__BYTE lFunction_OR__IN2_AND;
          LC_TD_Function_OR__BYTE lFunction_OR;
          LC_INIT_Function_TO_BYTE(&lFunction_OR__IN2_AND__IN1_TO_BYTE);
          LC_INIT_Function_AND__BYTE(&lFunction_OR__IN2_AND);
          LC_INIT_Function_OR__BYTE(&lFunction_OR);
          lFunction_OR__IN2_AND__IN1_TO_BYTE.LC_VD_ENO = LC_EL_true;
          lcfu_iec61131__TO_BYTE__UINT(&lFunction_OR__IN2_AND__IN1_TO_BYTE, LC_VD_CHANNEL, pEPDB);
          lFunction_OR__IN2_AND.LC_VD_ENO = LC_EL_true;
          lcfu_iec61131__AND__ANY__2(&lFunction_OR__IN2_AND, lFunction_OR__IN2_AND__IN1_TO_BYTE.LC_VD_TO_BYTE, (LC_TD_BYTE)3, pEPDB);
          lFunction_OR.LC_VD_ENO = LC_EL_true;
          lcfu_iec61131__OR__ANY__2(&lFunction_OR, (LC_TD_BYTE)64, lFunction_OR__IN2_AND.LC_VD_AND, pEPDB);
          LC_SUBSCRIPT_ARRAY(LC_VD_DATA,(LC_TD_USINT)0,(LC_TD_DINT)0,(LC_TD_DINT)63) = lFunction_OR.LC_VD_OR;
        }
        {
          LC_TD_Function_SYSTEM_WRITE lFunction_SYSTEM_WRITE;
          LC_INIT_Function_SYSTEM_WRITE(&lFunction_SYSTEM_WRITE);
          lFunction_SYSTEM_WRITE.LC_VD_ENO = LC_EL_true;
          lcfu_logilibrary__SYSTEM_WRITE(&lFunction_SYSTEM_WRITE, LC_VD_FD, (LC_TD_DINT)1L, &LC_VD_DATA, pEPDB);
          LC_VD_NUM_BYTES = lFunction_SYSTEM_WRITE.LC_VD_SYSTEM_WRITE;
          LC_this->LC_VD_ENO = lFunction_SYSTEM_WRITE.LC_VD_ENO;
        }
        {
          LC_TD_BOOL conditionResult = LC_EL_false;
          conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_ENO,(LC_TD_BOOL)(LC_VD_NUM_BYTES == (LC_TD_DINT)1L)));
          if (conditionResult)
          {
            {
              LC_TD_Function_SYSTEM_READ lFunction_SYSTEM_READ;
              LC_INIT_Function_SYSTEM_READ(&lFunction_SYSTEM_READ);
              lFunction_SYSTEM_READ.LC_VD_ENO = LC_EL_true;
              lcfu_logilibrary__SYSTEM_READ(&lFunction_SYSTEM_READ, LC_VD_FD, (LC_TD_DINT)1L, &LC_VD_DATA, pEPDB);
              LC_VD_NUM_BYTES = lFunction_SYSTEM_READ.LC_VD_SYSTEM_READ;
              LC_this->LC_VD_ENO = lFunction_SYSTEM_READ.LC_VD_ENO;
            }
          }
        }
        {
          LC_TD_BOOL conditionResult = LC_EL_false;
          conditionResult = (lcfu_iec61131__AND__BOOL__2__INL(LC_this->LC_VD_ENO,(LC_TD_BOOL)(LC_VD_NUM_BYTES == (LC_TD_DINT)1L)));
          if (conditionResult)
          {
            {
              LC_TD_Function_SYSTEM_READ lFunction_SYSTEM_READ;
              LC_INIT_Function_SYSTEM_READ(&lFunction_SYSTEM_READ);
              lFunction_SYSTEM_READ.LC_VD_ENO = LC_EL_true;
              lcfu_logilibrary__SYSTEM_READ(&lFunction_SYSTEM_READ, LC_VD_FD, (LC_TD_DINT)1L, &LC_VD_DATA, pEPDB);
              LC_VD_NUM_BYTES = lFunction_SYSTEM_READ.LC_VD_SYSTEM_READ;
              LC_this->LC_VD_ENO = lFunction_SYSTEM_READ.LC_VD_ENO;
            }
            if ((LC_TD_BOOL)(LC_VD_NUM_BYTES != (LC_TD_DINT)1L))
            {
              LC_this->LC_VD_ENO = LC_EL_false;
            }
            else
            {
              LC_VD_RAW_VALUE = LC_SUBSCRIPT_ARRAY(LC_VD_DATA,(LC_TD_USINT)0,(LC_TD_DINT)0,(LC_TD_DINT)63);
              {
                LC_TD_Function_TO_UINT lFunction_TO_UINT;
                LC_INIT_Function_TO_UINT(&lFunction_TO_UINT);
                lFunction_TO_UINT.LC_VD_ENO = LC_EL_true;
                lcfu_iec61131__TO_UINT__BYTE(&lFunction_TO_UINT, LC_VD_RAW_VALUE, pEPDB);
                LC_this->LC_VD_I2C_PCF8591_READ = lFunction_TO_UINT.LC_VD_TO_UINT;
              }
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
}

#endif
