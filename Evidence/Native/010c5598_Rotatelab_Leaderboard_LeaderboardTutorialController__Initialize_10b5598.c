/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$Initialize
void Rotatelab_Leaderboard_LeaderboardTutorialController__Initialize (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, Rotatelab_Leaderboard_ILeaderboardManager_o* manager, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$Initialize
   void Rotatelab_Leaderboard_LeaderboardTutorialController__Initialize
   (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this,
   Rotatelab_Leaderboard_ILeaderboardManager_o* manager, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardTutorialController__Initialize_10b5598
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  pcVar3 = (char *)(_UNK_010c56ac + 0x10c55b4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c56b0 + 0x10c55c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c56b4 + 0x10c55d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c56b8 + 0x10c55e0));
    *pcVar3 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),param_2);
  iVar1 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                    (param_1,1,**(undefined4 **)(_UNK_010c56bc + 0x10c5608));
  uVar4 = 0;
  puVar6 = *(undefined4 **)(_UNK_010c56c0 + 0x10c5628);
  puVar7 = *(undefined4 **)(_UNK_010c56c4 + 0x10c5630);
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar4) {
      return;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar1 + 0x10 + uVar4 * 4);
    if (iVar5 == 0) break;
    iVar5 = *(int *)(iVar5 + 0xb4);
    uVar2 = thunk_FUN_00f00cdc(*puVar6);
    UnityEngine_Events_UnityAction___ctor_361afc4(uVar2,param_1,*puVar7,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar2,0);
    uVar4 = uVar4 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

