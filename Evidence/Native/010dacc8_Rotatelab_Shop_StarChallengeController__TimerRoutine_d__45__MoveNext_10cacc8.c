/* IL2CPP: Rotatelab.Shop.StarChallengeController.<TimerRoutine>d__45$$MoveNext
bool Rotatelab_Shop_StarChallengeController__TimerRoutine_d__45__MoveNext (Rotatelab_Shop_StarChallengeController__TimerRoutine_d__45_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController.<TimerRoutine>d__45$$MoveNext
   bool Rotatelab_Shop_StarChallengeController__TimerRoutine_d__45__MoveNext
   (Rotatelab_Shop_StarChallengeController__TimerRoutine_d__45_o* __this, const MethodInfo* method);
    */

undefined4 Rotatelab_Shop_StarChallengeController__TimerRoutine_d__45__MoveNext_10cacc8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_010dad9c + 0x10dacdc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dada0 + 0x10dacf0));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = *(int *)(iVar4 + 0x58) - 1;
    *(uint *)(iVar4 + 0x58) = uVar1 & ~((int)uVar1 >> 0x1f);
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  Rotatelab_Shop_StarChallengeController__SetRemainingTimeText_10c9120(iVar4);
  if (*(int *)(**(int **)(_UNK_010dada4 + 0x10dad64) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3f800000,0);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}

