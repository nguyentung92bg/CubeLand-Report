/* IL2CPP: Rotatelab.Save.SavedList<int>$$RemoveAt
void Rotatelab_Save_SavedList_int___RemoveAt (Rotatelab_Save_SavedList_int__o* __this, int32_t index, bool saveChanges, const MethodInfo_1A8A060* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<int>$$RemoveAt
   void Rotatelab_Save_SavedList_int___RemoveAt (Rotatelab_Save_SavedList_int__o* __this, int32_t
   index, bool saveChanges, const MethodInfo_1A8A060* method); */

void Rotatelab_Save_SavedList_int___RemoveAt_1a8a060
               (int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_int___RemoveAt_261d234
            (iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0x30));
  if (param_3 == 0) {
    return;
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01a9a0d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

