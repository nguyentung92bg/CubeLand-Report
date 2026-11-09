/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController.<>c$$<SortCompetitorsByScore>b__22_0
int32_t Rotatelab_Leaderboard_BaseLeaderboardPanelController___c___SortCompetitorsByScore_b__22_0 (Rotatelab_Leaderboard_BaseLeaderboardPanelController___c_o* __this, Rotatelab_Leaderboard_BaseCompetitor_o* e1, Rotatelab_Leaderboard_BaseCompetitor_o* e2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController.<>c$$<SortCompetitorsByScore>b__22_0
   int32_t Rotatelab_Leaderboard_BaseLeaderboardPanelController___c___SortCompetitorsByScore_b__22_0
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController___c_o* __this,
   Rotatelab_Leaderboard_BaseCompetitor_o* e1, Rotatelab_Leaderboard_BaseCompetitor_o* e2, const
   MethodInfo* method); */

uint Rotatelab_Leaderboard_BaseLeaderboardPanelController___c___SortCompetitorsByScore_b__22_0_10b0ee8
               (undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_010c1040 + 0x10c0f04);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c1044 + 0x10c0f18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c1048 + 0x10c0f24));
    *pcVar4 = '\x01';
  }
  uVar5 = 0;
  uStack_14 = 0;
  if (*(int *)(**(int **)(_UNK_010c104c + 0x10c0f3c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_2,param_3,0);
  if (iVar1 == 0) {
    if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_14 = (**(code **)(*param_3 + 0xe0))(param_3,*(undefined4 *)(*param_3 + 0xe4));
    if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = (**(code **)(*param_2 + 0xe0))(param_2,*(undefined4 *)(*param_2 + 0xe4));
    uVar5 = System_Int32__CompareTo_2b6b964(&uStack_14,uVar2,0);
    if (uVar5 == 0) {
      iVar1 = **(int **)(_UNK_010c1050 + 0x10c0fe0);
      uVar3 = (uint)*(byte *)(iVar1 + 0xb8);
      if ((*(byte *)(*param_2 + 0xb8) < uVar3) ||
         (*(int *)(*(int *)(*param_2 + 100) + uVar3 * 4 + -4) != iVar1)) {
        uVar5 = 0;
        if (uVar3 <= *(byte *)(*param_3 + 0xb8)) {
          uVar5 = (uint)(*(int *)(*(int *)(*param_3 + 100) + uVar3 * 4 + -4) == iVar1);
        }
      }
      else {
        uVar5 = 0xffffffff;
      }
    }
  }
  return uVar5;
}

