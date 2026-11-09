/* IL2CPP: Rotatelab.UI.GenericDialog.DialogHandle$$Finalize
void Rotatelab_UI_GenericDialog_DialogHandle__Finalize (Rotatelab_UI_GenericDialog_DialogHandle_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.GenericDialog.DialogHandle$$Finalize
   void Rotatelab_UI_GenericDialog_DialogHandle__Finalize
   (Rotatelab_UI_GenericDialog_DialogHandle_o* __this, const MethodInfo* method); */

void Rotatelab_UI_GenericDialog_DialogHandle__Finalize_1112960(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01122a84 + 0x112297c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122a88 + 0x1122990));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122a8c + 0x112299c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01122a90 + 0x11229a8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = System_String__Concat_2a0b574
                    (**(undefined4 **)(_UNK_01122a98 + 0x11229e8),
                     *(undefined4 *)(*(int *)(param_1 + 8) + 0xc),
                     **(undefined4 **)(_UNK_01122a94 + 0x11229dc),0);
  if (*(int *)(**(int **)(_UNK_01122a9c + 0x1122a04) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__LogError_35b238c(uVar1,0);
  System_Object__Finalize_2bc9448(param_1,0);
  return;
}

