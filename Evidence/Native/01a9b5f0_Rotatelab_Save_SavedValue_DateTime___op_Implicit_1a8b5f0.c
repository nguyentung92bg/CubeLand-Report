/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$op_Implicit
System_DateTime_o Rotatelab_Save_SavedValue_DateTime___op_Implicit (Rotatelab_Save_SavedValue_T__o* instance, const MethodInfo_1A8B5F0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<DateTime>$$op_Implicit
   System_DateTime_o Rotatelab_Save_SavedValue_DateTime___op_Implicit
   (Rotatelab_Save_SavedValue_T__o* instance, const MethodInfo_1A8B5F0* method); */

void Rotatelab_Save_SavedValue_DateTime___op_Implicit_1a8b5f0(int *param_1,int *param_2,int param_3)

{
  int iStack_20;
  int iStack_1c;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(ushort *)(*(int *)(param_3 + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  if ((char)param_2[9] == '\0') {
    (**(code **)(*param_2 + 0xe0))(&iStack_20,param_2,*(undefined4 *)(*param_2 + 0xe4));
    param_2[10] = iStack_20;
    param_2[0xb] = iStack_1c;
    *(undefined1 *)(param_2 + 9) = 1;
  }
  else {
    iStack_20 = param_2[10];
    iStack_1c = param_2[0xb];
  }
  *param_1 = iStack_20;
  param_1[1] = iStack_1c;
  return;
}

