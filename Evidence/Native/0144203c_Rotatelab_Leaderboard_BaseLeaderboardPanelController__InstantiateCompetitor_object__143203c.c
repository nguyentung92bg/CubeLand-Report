/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$InstantiateCompetitor<object>
Il2CppObject* Rotatelab_Leaderboard_BaseLeaderboardPanelController__InstantiateCompetitor_object_ (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, Il2CppObject* prefab, const MethodInfo_143203C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$InstantiateCompetitor<object>
   Il2CppObject* Rotatelab_Leaderboard_BaseLeaderboardPanelController__InstantiateCompetitor_object_
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, Il2CppObject* prefab, const
   MethodInfo_143203C* method); */

int Rotatelab_Leaderboard_BaseLeaderboardPanelController__InstantiateCompetitor_object__143203c
              (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01442168 + 0x1442064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0144216c + 0x1442070));
    if (*(int *)(param_3 + 0x1c) == 0) {
      FUN_00efd7c4(param_3);
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(**(int **)(_UNK_01442170 + 0x1442090) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__Instantiate_object__14d4e4c
                    (param_2,uVar5,0,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseCompetitor__Initialize_10b107c
            (iVar1,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),0);
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar3 + 8);
  uVar6 = *(uint *)(iVar3 + 0xc);
  piVar2 = *(int **)(_UNK_01442174 + 0x1442114);
  *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar4 + 0xc)) {
    *(uint *)(iVar3 + 0xc) = uVar6 + 1;
    piVar2 = (int *)(iVar4 + uVar6 * 4 + 0x10);
    *piVar2 = iVar1;
    thunk_FUN_00ec5080(piVar2,iVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar3,iVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
  }
  return iVar1;
}

