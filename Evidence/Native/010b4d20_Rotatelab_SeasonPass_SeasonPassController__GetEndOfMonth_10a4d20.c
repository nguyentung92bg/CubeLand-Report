/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$GetEndOfMonth
System_DateTime_o Rotatelab_SeasonPass_SeasonPassController__GetEndOfMonth (Rotatelab_SeasonPass_SeasonPassController_o* __this, System_DateTime_o date, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$GetEndOfMonth
   System_DateTime_o Rotatelab_SeasonPass_SeasonPassController__GetEndOfMonth
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, System_DateTime_o date, const MethodInfo*
   method); */

void Rotatelab_SeasonPass_SeasonPassController__GetEndOfMonth_10a4d20
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_010b4e08 + 0x10b4d3c);
  uStack_20 = param_3;
  uStack_1c = param_4;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4e0c + 0x10b4d54));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010b4e10 + 0x10b4d68) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_DateTime__get_Year_2b4a408(&uStack_20,0);
  uVar2 = System_DateTime__get_Month_2b4a0bc(&uStack_20,0);
  uVar1 = System_DateTime__DaysInMonth_2b49044(uVar1,uVar2,0);
  uVar2 = System_DateTime__get_Year_2b4a408(&uStack_20,0);
  uVar3 = System_DateTime__get_Month_2b4a0bc(&uStack_20,0);
  *param_1 = 0;
  param_1[1] = 0;
  System_DateTime___ctor_2b47860(param_1,uVar2,uVar3,uVar1,0x17,0x3b,0x3b,0);
  return;
}

