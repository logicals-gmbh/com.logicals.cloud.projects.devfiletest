#ifndef LC_PROT_LCPU___COUNTER__C
#define LC_PROT_LCPU___COUNTER__C

#include <lcpu___counter.h>



/*                            Programs                         */
void  lcpu___COUNTER(LC_TD_Program_COUNTER* LC_this, struct _lcoplck_epdb_1_impl* pEPDB)
{
  /* Network 1 */
  {
    {
      LC_TD_Function_SEL__INT lFunction_SEL;
      LC_INIT_Function_SEL__INT(&lFunction_SEL);
      lFunction_SEL.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__SEL__INT(&lFunction_SEL, LC_this->LC_VD_UP, (LC_TD_INT)-1, (LC_TD_INT)1, pEPDB);
      LC_this->LC_VD___13_SEL = lFunction_SEL.LC_VD_SEL;
    }
    {
      LC_TD_Function_ADD__INT lFunction_ADD;
      LC_INIT_Function_ADD__INT(&lFunction_ADD);
      lFunction_ADD.LC_VD_ENO = LC_EL_true;
      lcfu_iec61131__ADD__ANY__2(&lFunction_ADD, LC_this->LC_VD_COUNT, LC_this->LC_VD___13_SEL, pEPDB);
      LC_this->LC_VD_COUNT = lFunction_ADD.LC_VD_ADD;
      LC_this->LC_VD___6_ADD = lFunction_ADD.LC_VD_ADD;
    }
  }
}

#endif
