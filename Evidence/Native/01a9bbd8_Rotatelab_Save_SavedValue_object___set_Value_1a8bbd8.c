/* IL2CPP: Rotatelab.Save.SavedValue<object>$$set_Value
void Rotatelab_Save_SavedValue_object___set_Value (Rotatelab_Save_SavedValue_T__o* __this, Il2CppObject* value, const MethodInfo_1A8BBD8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<object>$$set_Value
   void Rotatelab_Save_SavedValue_object___set_Value (Rotatelab_Save_SavedValue_T__o* __this,
   Il2CppObject* value, const MethodInfo_1A8BBD8* method); */

void Rotatelab_Save_SavedValue_object___set_Value_1a8bbd8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    param_2 = (**(code **)(iVar1 + 0xc))
                        (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  }
  piVar2 = (int *)FUN_013a7998(*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x24));
  uVar3 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_1);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = (**(code **)(*piVar2 + 0x100))(piVar2,uVar3,param_2,*(undefined4 *)(*piVar2 + 0x104));
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0xe8))(param_1,param_2,*(undefined4 *)(*param_1 + 0xec));
    param_1[8] = param_2;
    thunk_FUN_00ec5080(param_1 + 8,param_2);
    iVar1 = param_1[6];
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x01a9bca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
      return;
    }
  }
  return;
}

