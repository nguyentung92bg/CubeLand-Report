/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$<UpdateProgressionCoroutine>b__51_1
void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_1 (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$<UpdateProgressionCoroutine>b__51_1
   void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_1
   (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager___UpdateProgressionCoroutine_b__51_1_10e1d44(int param_1)

{
  char *pcVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  pcVar1 = (char *)(_UNK_010f1dc4 + 0x10f1d5c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1dc8 + 0x10f1d70));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0xa4),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffee4
            (*(int *)(param_1 + 0x60),**(undefined4 **)(_UNK_010f1dcc + 0x10f1da8),uVar2,0x40e00000,
             0);
  return;
}

