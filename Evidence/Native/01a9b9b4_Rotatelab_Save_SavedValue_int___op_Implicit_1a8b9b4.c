/* IL2CPP: Rotatelab.Save.SavedValue<int>$$op_Implicit
int32_t Rotatelab_Save_SavedValue_int___op_Implicit (Rotatelab_Save_SavedValue_T__o* instance, const MethodInfo_1A8B9B4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<int>$$op_Implicit
   int32_t Rotatelab_Save_SavedValue_int___op_Implicit (Rotatelab_Save_SavedValue_T__o* instance,
   const MethodInfo_1A8B9B4* method); */

int Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(ushort *)(*(int *)(param_2 + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  if ((char)param_1[7] == '\0') {
    iVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
    param_1[8] = iVar1;
    *(undefined1 *)(param_1 + 7) = 1;
    return iVar1;
  }
  return param_1[8];
}

