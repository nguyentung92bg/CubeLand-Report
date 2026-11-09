/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowWithOKCancelButtons
void Rotatelab_UI_GenericDialog__ShowWithOKCancelButtons (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message, System_String_o* okButtonLabel, System_Action_o* onOK, System_Action_o* onCancel, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowWithOKCancelButtons
   void Rotatelab_UI_GenericDialog__ShowWithOKCancelButtons (Rotatelab_UI_GenericDialog_o* __this,
   System_String_o* title, System_String_o* message, System_String_o* okButtonLabel,
   System_Action_o* onOK, System_Action_o* onCancel, const MethodInfo* method); */

void Rotatelab_UI_GenericDialog__ShowWithOKCancelButtons_1111ed8
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_0112203c + 0x1121ef8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122040 + 0x1121f14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122044 + 0x1121f20));
    *pcVar5 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_01122048 + 0x1121f38),2);
  puVar6 = *(undefined4 **)(_UNK_0112204c + 0x1121f4c);
  iVar2 = thunk_FUN_00f00cdc(*puVar6);
  Rotatelab_UI_GenericDialog_ButtonConfiguration___ctor_1111944(iVar2,param_4,param_5);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[4] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 4,iVar2);
  iVar2 = thunk_FUN_00f00cdc(*puVar6);
  Rotatelab_UI_GenericDialog_ButtonConfiguration___ctor_1111944(iVar2,0,param_6);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar4 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar4,0);
  }
  if ((uint)piVar1[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[5] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 5,iVar2);
  Rotatelab_UI_GenericDialog__Show_1111980(param_1,param_2,param_3,piVar1);
  return;
}

