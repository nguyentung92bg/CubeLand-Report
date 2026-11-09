/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowWithOKCancelButtonsAsync
Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message, System_String_o* okButtonLabel, UnityEngine_Sprite_o* icon, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog$$ShowWithOKCancelButtonsAsync
   Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync
   (Rotatelab_UI_GenericDialog_o* __this, System_String_o* title, System_String_o* message,
   System_String_o* okButtonLabel, UnityEngine_Sprite_o* icon, const MethodInfo* method); */

void Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync_1112050
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar1 = (char *)(_UNK_01122194 + 0x1122078);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122198 + 0x112208c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112219c + 0x1122098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011221a0 + 0x11220a4));
    *pcVar1 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  thunk_FUN_00ec5080((uint)&uStack_58 | 4,0);
  uStack_48 = param_2;
  thunk_FUN_00ec5080(&uStack_48,param_2);
  uStack_44 = param_3;
  thunk_FUN_00ec5080(&uStack_44,param_3);
  uStack_40 = param_4;
  thunk_FUN_00ec5080(&uStack_40,param_4);
  uStack_38 = param_5;
  thunk_FUN_00ec5080(&uStack_38,param_5);
  uStack_3c = param_6;
  thunk_FUN_00ec5080(&uStack_3c);
  uStack_58 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_011221a4 + 0x1122148) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_UI_GenericDialog__ShowWithOKCancelButtonsAsync_d__17__MoveNext_1112cac(&uStack_58);
  func_0x0109f558(&uStack_60,(uint)&uStack_58 | 4,**(undefined4 **)(_UNK_011221a8 + 0x1122174));
  *param_1 = uStack_60;
  param_1[1] = uStack_5c;
  return;
}

