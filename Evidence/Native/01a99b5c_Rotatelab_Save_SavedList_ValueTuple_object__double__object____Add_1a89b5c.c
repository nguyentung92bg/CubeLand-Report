/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$Add
void Rotatelab_Save_SavedList_ValueTuple_object__double__object____Add (Rotatelab_Save_SavedList_T__o* __this, System_ValueTuple_object__double__object__o item, bool saveChanges, const MethodInfo_1A89B5C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$Add
   void Rotatelab_Save_SavedList_ValueTuple_object__double__object____Add
   (Rotatelab_Save_SavedList_T__o* __this, System_ValueTuple_object__double__object__o item, bool
   saveChanges, const MethodInfo_1A89B5C* method); */

void Rotatelab_Save_SavedList_ValueTuple_object__double__object____Add_1a89b5c
               (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               int param_9,int param_10)

{
  int iVar1;
  uint uVar2;
  int iVar3;
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
  iVar3 = *(int *)(iVar1 + 8);
  uVar2 = *(uint *)(iVar1 + 0xc);
  iVar4 = *(int *)(*(int *)(*(int *)(param_10 + 0x10) + 0x60) + 0x24);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar2 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar2 + 1;
    iVar3 = iVar3 + uVar2 * 0x18;
    *(undefined4 *)(iVar3 + 0x10) = param_3;
    *(undefined4 *)(iVar3 + 0x1c) = param_6;
    *(undefined4 *)(iVar3 + 0x14) = param_4;
    *(undefined4 *)(iVar3 + 0x18) = param_5;
    *(undefined4 *)(iVar3 + 0x24) = param_8;
    *(undefined4 *)(iVar3 + 0x20) = param_7;
    thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x10),0);
  }
  else {
    System_Collections_Generic_List_ValueTuple_object__double__object____AddWithResize_25c8784
              (iVar1,param_8,param_3,param_4,param_5,param_6,param_7,param_8,
               *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x10) + 0x60) + 0x38));
  }
  if (param_9 != 0) {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Could not recover jumptable at 0x01a99c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
    return;
  }
  return;
}

