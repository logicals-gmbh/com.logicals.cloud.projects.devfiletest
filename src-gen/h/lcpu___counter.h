#ifndef LC_PROT_LCPU___COUNTER__H
#define LC_PROT_LCPU___COUNTER__H

#include <LC3CGBase.h>
#include <lcfu_iec61131__ADD.h>
#include <lcfu_iec61131__SEL_ANY.h>

/*                            Typedefs                         */
typedef struct _LC_TD_Program_COUNTER
{
  LC_TD_BOOL LC_VD_ENO;
  LC_TD_BOOL LC_VD_UP;
  LC_TD_INT LC_VD_COUNT;
  LC_TD_INT LC_VD___6_ADD;
  LC_TD_INT LC_VD___13_SEL;
} LCCG_StructAttrib LC_TD_Program_COUNTER;

/*                   ColdBoot Initialization Macro             */
#define LC_INIT_NONDMA_Program_COUNTER(p) \
  LC_INIT_BOOL(&((p)->LC_VD_UP)); \
  LC_INIT_INT(&((p)->LC_VD_COUNT)); \

#define LC_INIT_Program_COUNTER(p) \
{ \
  LC_INIT_NONDMA_Program_COUNTER(p) \
}

/*                   WarmBoot Initialization Macro             */
#define LC_WINIT_NONDMA_Program_COUNTER(p,RF) \
  LC_WINIT_BOOL(&((p)->LC_VD_UP),RF); \
  LC_WINIT_INT(&((p)->LC_VD_COUNT),RF); \

#define LC_WINIT_Program_COUNTER(p,RF) \
{ \
  LC_WINIT_NONDMA_Program_COUNTER(p,RF) \
}

/*                            Prototype                        */
void  lcpu___COUNTER(LC_TD_Program_COUNTER* LC_this, struct _lcoplck_epdb_1_impl* pEPDB);


#endif
