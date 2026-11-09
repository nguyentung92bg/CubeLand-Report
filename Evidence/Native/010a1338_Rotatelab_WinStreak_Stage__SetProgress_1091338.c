/* IL2CPP: Rotatelab.WinStreak.Stage$$SetProgress
void Rotatelab_WinStreak_Stage__SetProgress (Rotatelab_WinStreak_Stage_o* __this, float progress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Stage$$SetProgress
   void Rotatelab_WinStreak_Stage__SetProgress (Rotatelab_WinStreak_Stage_o* __this, float progress,
   const MethodInfo* method); */

void Rotatelab_WinStreak_Stage__SetProgress_1091338(int param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 auStack_30 [16];
  
  pcVar3 = (char *)(_UNK_010a146c + 0x10a1358);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a1470 + 0x10a136c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Slider__set_normalizedValue_39c28b8(*(int *)(param_1 + 0x10),param_2,0);
  iVar1 = 0x2c;
  if (param_2 < 1.0) {
    iVar1 = 0x28;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + iVar1),0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((1.0 <= param_2) && (*(char *)(*(int *)(param_1 + 0x40) + 0xc) != '\0')) {
    uVar2 = *(undefined4 *)(param_1 + 0x3c);
    if (*(int *)(**(int **)(_UNK_010a1474 + 0x10a1404) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIFillAmount_2ce81d0
              (auStack_30,uVar2,0x3f800000,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  }
  return;
}

