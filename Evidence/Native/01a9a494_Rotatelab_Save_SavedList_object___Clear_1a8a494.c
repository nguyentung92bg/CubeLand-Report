/* IL2CPP: Rotatelab.Save.SavedList<object>$$Clear
void Rotatelab_Save_SavedList_object___Clear (Rotatelab_Save_SavedList_T__o* __this, bool saveChanges, const MethodInfo_1A8A494* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<object>$$Clear
   void Rotatelab_Save_SavedList_object___Clear (Rotatelab_Save_SavedList_T__o* __this, bool
   saveChanges, const MethodInfo_1A8A494* method); */

void Rotatelab_Save_SavedList_object___Clear_1a8a494(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar2) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar2,0);
  }
  if (param_2 == 0) {
    return;
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x01a9a514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

