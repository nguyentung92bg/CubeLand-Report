/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$Initialize
void Rotatelab_Leaderboard_LeaderboardResultsController__Initialize (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, Rotatelab_Leaderboard_ILeaderboardManager_o* manager, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$Initialize
   void Rotatelab_Leaderboard_LeaderboardResultsController__Initialize
   (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this,
   Rotatelab_Leaderboard_ILeaderboardManager_o* manager, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardResultsController__Initialize_10b3d5c
               (int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  pcVar5 = (char *)(_UNK_010c3e78 + 0x10c3d74);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3e7c + 0x10c3d88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3e80 + 0x10c3d94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3e84 + 0x10c3da0));
    *pcVar5 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x14) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),param_2);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_010c3e88 + 0x10c3dd8);
  iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_010c3e8c + 0x10c3df8),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar3,uVar1,0);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x3c) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_010c3e90 + 0x10c3e50),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar1,uVar1,0);
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(iVar3 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar6 + 8);
  uVar4 = *(uint *)(iVar6 + 0xc);
  piVar2 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar4 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar4 + 1;
    puVar7 = (undefined4 *)(iVar8 + uVar4 * 4 + 0x10);
    *puVar7 = uVar1;
    thunk_FUN_00ec5080(puVar7,uVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar6,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar3 + 0x14) = 1;
  return;
}

