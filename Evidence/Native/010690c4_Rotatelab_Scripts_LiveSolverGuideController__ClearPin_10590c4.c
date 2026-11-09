/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$ClearPin
void Rotatelab_Scripts_LiveSolverGuideController__ClearPin (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSolverGuideController$$ClearPin
   void Rotatelab_Scripts_LiveSolverGuideController__ClearPin
   (Rotatelab_Scripts_LiveSolverGuideController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LiveSolverGuideController__ClearPin_10590c4(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)(_UNK_01069120 + 0x10690d8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01069124 + 0x10690ec));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x40);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar3 + 0x10);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(int *)(iVar3 + 0x10) = iVar1 + 1;
  return;
}

