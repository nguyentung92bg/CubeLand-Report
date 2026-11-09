/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor$$Initialize
void Rotatelab_Leaderboard_BaseCompetitor__Initialize (Rotatelab_Leaderboard_BaseCompetitor_o* __this, Rotatelab_Leaderboard_ILeaderboardManager_o* manager, Rotatelab_Leaderboard_CycleData_o* cycle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor$$Initialize
   void Rotatelab_Leaderboard_BaseCompetitor__Initialize (Rotatelab_Leaderboard_BaseCompetitor_o*
   __this, Rotatelab_Leaderboard_ILeaderboardManager_o* manager, Rotatelab_Leaderboard_CycleData_o*
   cycle, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseCompetitor__Initialize_10b107c
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar7 = (char *)(_UNK_010c1148 + 0x10c1098);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c114c + 0x10c10ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c1150 + 0x10c10b8));
    *pcVar7 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x48) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x48),param_2);
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x4c),param_3);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c1154 + 0x10c1100));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_010c1158 + 0x10c1120),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar1,uVar1,0);
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
    *pcVar7 = '\x01';
  }
  iVar6 = *(int *)(iVar4 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar6 + 8);
  uVar5 = *(uint *)(iVar6 + 0xc);
  piVar3 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar5 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar5 + 1;
    puVar2 = (undefined4 *)(iVar8 + uVar5 * 4 + 0x10);
    *puVar2 = uVar1;
    thunk_FUN_00ec5080(puVar2,uVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar6,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar3 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar4 + 0x14) = 1;
  return;
}

