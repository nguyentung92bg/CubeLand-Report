/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$Awake
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Awake (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDE2B8* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$Awake
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Awake
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDE2B8* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Awake_1dde2b8(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8));
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___PostProcessLoadedData_1ddf02c
            (param_1,*(undefined4 *)(iVar3 + 8),
             *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x10));
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___PostProcessLoadedData_1ddf02c
            (param_1,*(undefined4 *)(iVar3 + 0xc),
             *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x10));
  if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseLeaderboardPanelController__Initialize_10ae1c4(param_1[4],param_1,0);
  if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_LeaderboardResultsController__Initialize_10b3d5c(param_1[5],param_1,0);
  iVar3 = param_1[6];
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_010c56ac + 0x10c55b4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c56b0 + 0x10c55c8),param_1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c56b4 + 0x10c55d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c56b8 + 0x10c55e0));
    *pcVar4 = '\x01';
  }
  *(int *)(iVar3 + 0x1c) = (int)param_1;
  thunk_FUN_00ec5080((int *)(iVar3 + 0x1c),param_1);
  iVar1 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                    (iVar3,1,**(undefined4 **)(_UNK_010c56bc + 0x10c5608));
  uVar5 = 0;
  puVar7 = *(undefined4 **)(_UNK_010c56c0 + 0x10c5628);
  puVar8 = *(undefined4 **)(_UNK_010c56c4 + 0x10c5630);
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) {
      return;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = *(int *)(iVar1 + 0x10 + uVar5 * 4);
    if (iVar6 == 0) break;
    iVar6 = *(int *)(iVar6 + 0xb4);
    uVar2 = thunk_FUN_00f00cdc(*puVar7);
    UnityEngine_Events_UnityAction___ctor_361afc4(uVar2,iVar3,*puVar8,0);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Events_UnityEvent__AddListener_361b098(iVar6,uVar2,0);
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

