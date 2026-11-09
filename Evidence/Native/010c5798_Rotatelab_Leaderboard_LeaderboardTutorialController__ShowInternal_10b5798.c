/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$ShowInternal
void Rotatelab_Leaderboard_LeaderboardTutorialController__ShowInternal (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$ShowInternal
   void Rotatelab_Leaderboard_LeaderboardTutorialController__ShowInternal
   (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardTutorialController__ShowInternal_10b5798(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010c585c + 0x10c57ac);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5860 + 0x10c57c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c5864 + 0x10c57cc));
    *pcVar3 = '\x01';
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  Rotatelab_Leaderboard_LeaderboardTutorialController__StartStep_10b5870(param_1,0);
  piVar2 = *(int **)(_UNK_010c5868 + 0x10c5818);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14));
  return;
}

