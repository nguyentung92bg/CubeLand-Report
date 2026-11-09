/* IL2CPP: Rotatelab.Scripts.BlasterController$$UpdateIceHealthText
void Rotatelab_Scripts_BlasterController__UpdateIceHealthText (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$UpdateIceHealthText
   void Rotatelab_Scripts_BlasterController__UpdateIceHealthText
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__UpdateIceHealthText_1031b30(int param_1)

{
  char *pcVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined1 auStack_28 [16];
  
  pcVar1 = (char *)(_UNK_01041c40 + 0x1041b48);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01041c44 + 0x1041b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01041c48 + 0x1041b68));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x94),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34
            (*(int *)(param_1 + 0x90),**(undefined4 **)(_UNK_01041c4c + 0x1041b98),uVar2,0);
  if (*(int *)(param_1 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x90),0);
  if (*(int *)(**(int **)(_UNK_01041c50 + 0x1041bd4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4a3c
            (auStack_28,uVar2,0x3f800000,0x3f99999a,0x3dcccccd,0,0,0,0,0,2,3,0,0,0,0);
  return;
}

