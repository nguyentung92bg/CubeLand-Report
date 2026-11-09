/* IL2CPP: Rotatelab.Save.SavedList<int>$$Add
void Rotatelab_Save_SavedList_int___Add (Rotatelab_Save_SavedList_int__o* __this, int32_t item, bool saveChanges, const MethodInfo_1A89F94* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<int>$$Add
   void Rotatelab_Save_SavedList_int___Add (Rotatelab_Save_SavedList_int__o* __this, int32_t item,
   bool saveChanges, const MethodInfo_1A89F94* method); */

void Rotatelab_Save_SavedList_int___Add_1a89f94
               (int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar1 + 8);
  uVar3 = *(uint *)(iVar1 + 0xc);
  iVar4 = *(int *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0x24);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar3 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar3 + 1;
    *(undefined4 *)(iVar2 + uVar3 * 4 + 0x10) = param_2;
  }
  else {
    System_Collections_Generic_List_int___AddWithResize_261b948
              (iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
  }
  if (param_3 != 0) {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Could not recover jumptable at 0x01a9a058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
    return;
  }
  return;
}

