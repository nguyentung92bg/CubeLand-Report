/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$GenerateNewData
Rotatelab_Leaderboard_CycleData_o* Rotatelab_Leaderboard_BaseLeaderboardManager_object___GenerateNewData (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDEF0C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$GenerateNewData
   Rotatelab_Leaderboard_CycleData_o*
   Rotatelab_Leaderboard_BaseLeaderboardManager_object___GenerateNewData
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDEF0C* method); */

int Rotatelab_Leaderboard_BaseLeaderboardManager_object___GenerateNewData_1ddef0c
              (int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_01def018 + 0x1deef28);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01def01c + 0x1deef3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01def020 + 0x1deef48));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01def024 + 0x1deef5c));
  Rotatelab_Leaderboard_CycleData___ctor_10b1a28(iVar1,0);
  if (*(int *)(**(int **)(_UNK_01def028 + 0x1deef78) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_28,0);
  (**(code **)(*param_1 + 0x158))
            (&uStack_28,param_1,uStack_28,uStack_24,*(undefined4 *)(*param_1 + 0x15c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = uStack_28;
  *(undefined4 *)(iVar1 + 0xc) = uStack_24;
  uVar2 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined4 *)(*param_1 + 0x17c));
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  *(undefined4 *)(iVar1 + 0x1c) = 0xffffffff;
  uVar2 = Rotatelab_Leaderboard_BaseLeaderboardManager_object___GetRandomSeed_1ddf920();
  iVar3 = *(int *)(param_2 + 0x10);
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___PostProcessLoadedData_1ddf02c
            (param_1,iVar1,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x10));
  return iVar1;
}

