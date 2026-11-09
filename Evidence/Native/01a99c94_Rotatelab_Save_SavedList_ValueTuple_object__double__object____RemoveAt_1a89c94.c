/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$RemoveAt
void Rotatelab_Save_SavedList_ValueTuple_object__double__object____RemoveAt (Rotatelab_Save_SavedList_T__o* __this, int32_t index, bool saveChanges, const MethodInfo_1A89C94* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$RemoveAt
   void Rotatelab_Save_SavedList_ValueTuple_object__double__object____RemoveAt
   (Rotatelab_Save_SavedList_T__o* __this, int32_t index, bool saveChanges, const
   MethodInfo_1A89C94* method); */

void Rotatelab_Save_SavedList_ValueTuple_object__double__object____RemoveAt_1a89c94
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
  System_Collections_Generic_List_ValueTuple_object__double__object____RemoveAt_25ca6e8
            (iVar1,param_2,*(undefined4 *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0x30));
  if (param_3 == 0) {
    return;
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01a99d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

