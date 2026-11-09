/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterInfoController$$<ShowPopup>b__9_2
void Rotatelab_RainbowShooter_RainbowShooterInfoController___ShowPopup_b__9_2 (Rotatelab_RainbowShooter_RainbowShooterInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RainbowShooter.RainbowShooterInfoController$$<ShowPopup>b__9_2
   void Rotatelab_RainbowShooter_RainbowShooterInfoController___ShowPopup_b__9_2
   (Rotatelab_RainbowShooter_RainbowShooterInfoController_o* __this, const MethodInfo* method); */

void Rotatelab_RainbowShooter_RainbowShooterInfoController___ShowPopup_b__9_2_10acf5c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 auStack_20 [16];
  
  pcVar2 = (char *)(_UNK_010bd004 + 0x10bcf74);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bd008 + 0x10bcf88));
    *pcVar2 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(**(int **)(_UNK_010bd00c + 0x10bcf9c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(auStack_20,uVar1,0x3f800000,0x3e19999a,0,0,0,0,0,1,0,0,0,0,0);
  return;
}

