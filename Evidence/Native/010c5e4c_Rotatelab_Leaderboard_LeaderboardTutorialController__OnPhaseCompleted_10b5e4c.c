/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$OnPhaseCompleted
void Rotatelab_Leaderboard_LeaderboardTutorialController__OnPhaseCompleted (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, int32_t phase, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$OnPhaseCompleted
   void Rotatelab_Leaderboard_LeaderboardTutorialController__OnPhaseCompleted
   (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, int32_t phase, const MethodInfo*
   method); */

void Rotatelab_Leaderboard_LeaderboardTutorialController__OnPhaseCompleted_10b5e4c
               (int param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010c5f18 + 0x10c5e64);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5f1c + 0x10c5e78));
    *pcVar6 = '\x01';
  }
  piVar5 = *(int **)(param_1 + 0x1c);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar5;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_010c5f20 + 0x10c5ea0)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 200);
        goto LAB_010c5ee8;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar5,**(int **)(_UNK_010c5f20 + 0x10c5ea0),1);
LAB_010c5ee8:
  iVar1 = (*(code *)*puVar2)(piVar5,puVar2[1]);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | param_2;
  return;
}

