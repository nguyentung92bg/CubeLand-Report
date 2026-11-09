/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$set_Value
void Rotatelab_Save_SavedValue_DateTime___set_Value (Rotatelab_Save_SavedValue_DateTime__o* __this, System_DateTime_o value, const MethodInfo_1A8B3BC* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$set_Value
   void Rotatelab_Save_SavedValue_DateTime___set_Value (Rotatelab_Save_SavedValue_DateTime__o*
   __this, System_DateTime_o value, const MethodInfo_1A8B3BC* method); */

void Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
               (int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iStack_28;
  int iStack_24;
  
  iVar1 = param_1[7];
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))
              (&iStack_28,*(undefined4 *)(iVar1 + 0x20),param_3,param_4,
               *(undefined4 *)(iVar1 + 0x14));
    param_3 = iStack_28;
    param_4 = iStack_24;
  }
  piVar2 = (int *)func_0x016f8ee4(*(undefined4 *)(*(int *)(*(int *)(param_5 + 0x10) + 0x60) + 0x24))
  ;
  if ((char)param_1[9] == '\0') {
    (**(code **)(*param_1 + 0xe0))(&iStack_28,param_1,*(undefined4 *)(*param_1 + 0xe4));
    *(undefined1 *)(param_1 + 9) = 1;
    param_1[10] = iStack_28;
    param_1[0xb] = iStack_24;
  }
  else {
    iStack_28 = param_1[10];
    iStack_24 = param_1[0xb];
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = *(code **)(*piVar2 + 0x100);
  uVar4 = (*pcVar3)(piVar2,pcVar3,iStack_28,iStack_24,param_3,param_4,
                    *(undefined4 *)(*piVar2 + 0x104));
  if ((int)uVar4 == 0) {
    (**(code **)(*param_1 + 0xe8))
              (param_1,(int)((ulonglong)uVar4 >> 0x20),param_3,param_4,
               *(undefined4 *)(*param_1 + 0xec));
    iVar1 = param_1[8];
    param_1[10] = param_3;
    param_1[0xb] = param_4;
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),*(code **)(iVar1 + 0xc),param_3,param_4,
                 *(undefined4 *)(iVar1 + 0x14));
    }
  }
  return;
}

