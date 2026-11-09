/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$InstantiateCompetitor<object>
Il2CppObject* Rotatelab_Leaderboard_LeaderboardResultsController__InstantiateCompetitor_object_ (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, Il2CppObject* prefab, const MethodInfo_14AE964* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$InstantiateCompetitor<object>
   Il2CppObject* Rotatelab_Leaderboard_LeaderboardResultsController__InstantiateCompetitor_object_
   (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, Il2CppObject* prefab, const
   MethodInfo_14AE964* method); */

int Rotatelab_Leaderboard_LeaderboardResultsController__InstantiateCompetitor_object__14ae964
              (int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_014beaac + 0x14be98c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_014beab0 + 0x14be998));
    if (*(int *)(param_3 + 0x1c) == 0) {
      FUN_00efd7c4(param_3);
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x24),0);
  if (*(int *)(**(int **)(_UNK_014beab4 + 0x14be9d8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__Instantiate_object__14d4e4c
                    (param_2,uVar1,0,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseCompetitor__Initialize_10b107c
            (iVar2,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),0);
  iVar4 = *(int *)(param_1 + 0x34);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar4 + 8);
  uVar6 = *(uint *)(iVar4 + 0xc);
  piVar3 = *(int **)(_UNK_014beab8 + 0x14bea58);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar5 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar6 + 1;
    piVar3 = (int *)(iVar5 + uVar6 * 4 + 0x10);
    *piVar3 = iVar2;
    thunk_FUN_00ec5080(piVar3,iVar2);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,iVar2,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
  }
  return iVar2;
}

