/* IL2CPP: Rotatelab.Save.SavedValue<object>$$op_Implicit
Il2CppObject* Rotatelab_Save_SavedValue_object___op_Implicit (Rotatelab_Save_SavedValue_T__o* instance, const MethodInfo_1A8BD1C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<object>$$op_Implicit
   Il2CppObject* Rotatelab_Save_SavedValue_object___op_Implicit (Rotatelab_Save_SavedValue_T__o*
   instance, const MethodInfo_1A8BD1C* method); */

int Rotatelab_Save_SavedValue_object___op_Implicit_1a8bd1c(int *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(ushort *)(*(int *)(param_2 + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  if ((char)param_1[7] == '\0') {
    pcVar2 = *(code **)(*param_1 + 0xe0);
    uVar3 = *(undefined4 *)(*param_1 + 0xe4);
    iVar1 = (*pcVar2)(param_1,uVar3,pcVar2,uVar3,unaff_r4,unaff_r5,unaff_r11,unaff_lr);
    param_1[8] = iVar1;
    thunk_FUN_00ec5080(param_1 + 8,iVar1);
    *(undefined1 *)(param_1 + 7) = 1;
  }
  return param_1[8];
}

