/* IL2CPP: Rotatelab.UI.GenericDialog$$Show
void Rotatelab_UI_GenericDialog__Show (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message, System_String_o* buttonLabel, System_Action_o* onButtonClicked, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$Show
   void Rotatelab_UI_GenericDialog__Show (Rotatelab_UI_GenericDialog_o* __this, System_String_o*
   title, System_String_o* message, System_String_o* buttonLabel, System_Action_o* onButtonClicked,
   const MethodInfo* method); */

void Rotatelab_UI_GenericDialog__Show_1111834
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01121930 + 0x1121854);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121934 + 0x1121870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121938 + 0x112187c));
    *pcVar5 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_0112193c + 0x1121894),1);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121940 + 0x11218a8));
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
  Rotatelab_UI_GenericDialog__Show_1111980(param_1,param_2,param_3,piVar1);
  return;
}

