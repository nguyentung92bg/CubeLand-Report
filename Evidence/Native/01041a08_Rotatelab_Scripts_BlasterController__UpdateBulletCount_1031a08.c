/* IL2CPP: Rotatelab.Scripts.BlasterController$$UpdateBulletCount
void Rotatelab_Scripts_BlasterController__UpdateBulletCount (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BlasterController$$UpdateBulletCount
   void Rotatelab_Scripts_BlasterController__UpdateBulletCount
   (Rotatelab_Scripts_BlasterController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BlasterController__UpdateBulletCount_1031a08(int param_1)

{
  char *pcVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  
  pcVar1 = (char *)(_UNK_01041b1c + 0x1041a20);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01041b20 + 0x1041a34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01041b24 + 0x1041a40));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x114),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34
            (*(int *)(param_1 + 0x54),**(undefined4 **)(_UNK_01041b28 + 0x1041a74),uVar2,0);
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x54),0);
  if (*(int *)(**(int **)(_UNK_01041b2c + 0x1041ab0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4a3c
            (auStack_20,uVar2,0x3f800000,0x3f99999a,0x3dcccccd,0,0,0,0,0,2,3,0,0,0,0);
  return;
}

