/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_UI_GenericDialog__ShowAsync (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message, System_String_o* buttonLabel, UnityEngine_Sprite_o* icon, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowAsync
   Cysharp_Threading_Tasks_UniTask_o Rotatelab_UI_GenericDialog__ShowAsync
   (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message,
   System_String_o* buttonLabel, UnityEngine_Sprite_o* icon, const MethodInfo* method); */

void Rotatelab_UI_GenericDialog__ShowAsync_1111a10
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar5 = (char *)(_UNK_01121b4c + 0x1121a30);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121b50 + 0x1121a4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121b54 + 0x1121a58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01121b58 + 0x1121a64));
    *pcVar5 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_01121b5c + 0x1121a7c),1);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01121b60 + 0x1121a90));
  Rotatelab_UI_GenericDialog_ButtonConfiguration___ctor_1111944(iVar2,param_5,0);
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
  Rotatelab_UI_GenericDialog__ShowAsync_1111b68(&uStack_30,param_2,param_3,param_4,param_6,piVar1);
  Cysharp_Threading_Tasks_UniTask_int___op_Implicit_1c5c740
            (&uStack_30,uStack_30,uStack_2c,uStack_28,**(undefined4 **)(_UNK_01121b64 + 0x1121b2c));
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}

