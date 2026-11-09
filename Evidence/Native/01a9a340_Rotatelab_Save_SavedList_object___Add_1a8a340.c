/* IL2CPP: Rotatelab.Save.SavedList<object>$$Add
void Rotatelab_Save_SavedList_object___Add (Rotatelab_Save_SavedList_T__o* __this, Il2CppObject* item, bool saveChanges, const MethodInfo_1A8A340* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<object>$$Add
   void Rotatelab_Save_SavedList_object___Add (Rotatelab_Save_SavedList_T__o* __this, Il2CppObject*
   item, bool saveChanges, const MethodInfo_1A8A340* method); */

void Rotatelab_Save_SavedList_object___Add_1a8a340
               (int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar1 + 8);
  uVar4 = *(uint *)(iVar1 + 0xc);
  iVar5 = *(int *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0x24);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar4 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar4 + 1;
    puVar2 = (undefined4 *)(iVar3 + uVar4 * 4 + 0x10);
    *puVar2 = param_2;
    thunk_FUN_00ec5080(puVar2,param_2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x38));
  }
  if (param_3 != 0) {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Could not recover jumptable at 0x01a9a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
    return;
  }
  return;
}

