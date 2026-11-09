/* IL2CPP: Rotatelab.Save.SavedValue<bool>$$op_Implicit
bool Rotatelab_Save_SavedValue_bool___op_Implicit (Rotatelab_Save_SavedValue_T__o* instance, const MethodInfo_1A8B15C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<bool>$$op_Implicit
   bool Rotatelab_Save_SavedValue_bool___op_Implicit (Rotatelab_Save_SavedValue_T__o* instance,
   const MethodInfo_1A8B15C* method); */

uint Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(ushort *)(*(int *)(param_2 + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  if ((char)param_1[7] != '\0') {
    return (uint)(*(char *)((int)param_1 + 0x1d) != '\0');
  }
  uVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  *(char *)((int)param_1 + 0x1d) = (char)uVar1;
  *(undefined1 *)(param_1 + 7) = 1;
  return uVar1;
}

