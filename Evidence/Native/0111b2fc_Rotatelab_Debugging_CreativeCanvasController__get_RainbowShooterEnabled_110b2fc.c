/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$get_RainbowShooterEnabled
bool Rotatelab_Debugging_CreativeCanvasController__get_RainbowShooterEnabled (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$get_RainbowShooterEnabled
   bool Rotatelab_Debugging_CreativeCanvasController__get_RainbowShooterEnabled
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

undefined8
Rotatelab_Debugging_CreativeCanvasController__get_RainbowShooterEnabled_110b2fc(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 unaff_r4;
  int *piVar3;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_0111b354 + 0x111b310);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111b358 + 0x111b324));
    *pcVar4 = '\x01';
  }
  piVar3 = *(int **)(param_1 + 0x6c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((char)piVar3[7] != '\0') {
    return CONCAT44(**(undefined4 **)(_UNK_0111b35c + 0x111b348),
                    (uint)(*(char *)((int)piVar3 + 0x1d) != '\0'));
  }
  pcVar1 = *(code **)(*piVar3 + 0xe0);
  uVar2 = *(undefined4 *)(*piVar3 + 0xe4);
  uVar2 = (*pcVar1)(piVar3,uVar2,pcVar1,uVar2,unaff_r4,unaff_lr);
  *(char *)((int)piVar3 + 0x1d) = (char)uVar2;
  *(undefined1 *)(piVar3 + 7) = 1;
  return CONCAT44(1,uVar2);
}

