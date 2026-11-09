/* IL2CPP: Rotatelab.Save.SavedValue<float>$$set_Value
void Rotatelab_Save_SavedValue_float___set_Value (Rotatelab_Save_SavedValue_float__o* __this, float value, const MethodInfo_1A8BF14* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<float>$$set_Value
   void Rotatelab_Save_SavedValue_float___set_Value (Rotatelab_Save_SavedValue_float__o* __this,
   float value, const MethodInfo_1A8BF14* method); */

void Rotatelab_Save_SavedValue_float___set_Value_1a8bf14(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    param_2 = (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  }
  piVar2 = (int *)FUN_0142315c(*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x24));
  if ((char)param_1[7] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
    param_1[8] = iVar1;
    *(undefined1 *)(param_1 + 7) = 1;
  }
  else {
    iVar1 = param_1[8];
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar2 + 0x100))(piVar2,iVar1,param_2,*(undefined4 *)(*piVar2 + 0x104));
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,param_2,*(undefined4 *)(*param_1 + 0xec));
    iVar1 = param_1[6];
    param_1[8] = param_2;
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9c014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}

