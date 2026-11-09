/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetScoreIcon
UnityEngine_Sprite_o* Rotatelab_Leaderboard_MidGameLeaderboardManager__GetScoreIcon (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, Rotatelab_Leaderboard_CycleData_o* cycle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$GetScoreIcon
   UnityEngine_Sprite_o* Rotatelab_Leaderboard_MidGameLeaderboardManager__GetScoreIcon
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, Rotatelab_Leaderboard_CycleData_o*
   cycle, const MethodInfo* method); */

undefined4
Rotatelab_Leaderboard_MidGameLeaderboardManager__GetScoreIcon_10b8298
          (int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uStack_28;
  int aiStack_24 [3];
  
  pcVar8 = (char *)(_UNK_010c7f20 + 0x10c7eb8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c7f24 + 0x10c7ecc));
    *pcVar8 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x44);
  if (*(int *)(**(int **)(_UNK_010c7f28 + 0x10c7ee0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Leaderboard_MidGameLeaderboardManager__GetTheme_10b7bb0(param_2);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_010c815c + 0x10c7f4c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8160 + 0x10c7f60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8164 + 0x10c7f6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8168 + 0x10c7f78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c816c + 0x10c7f84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8170 + 0x10c7f90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8174 + 0x10c7f9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8178 + 0x10c7fa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c817c + 0x10c7fb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8180 + 0x10c7fc0));
    *pcVar8 = '\x01';
  }
  piVar5 = *(int **)(_UNK_010c8184 + 0x10c7fd8);
  uVar9 = *(undefined4 *)(iVar6 + 0xc);
  aiStack_24[0] = 0;
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar7 = puVar3[1];
  if (iVar7 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar4 = *puVar3;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c8188 + 0x10c8028));
    System_Func_object__Int32Enum__bool____ctor_239e560
              (iVar7,uVar4,**(undefined4 **)(_UNK_010c818c + 0x10c8048),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
    *piVar5 = iVar7;
    thunk_FUN_00ec5080(piVar5,iVar7);
  }
  if (*(int *)(**(int **)(_UNK_010c8190 + 0x10c8070) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_Extensions__TryFind_object__Int32Enum__1489bc8
                    (uVar9,3,iVar7,aiStack_24,**(undefined4 **)(_UNK_010c8194 + 0x10c8098));
  if (iVar2 == 0) {
    uStack_28 = 3;
    uVar9 = FUN_00ec393c(**(undefined4 **)(_UNK_010c8198 + 0x10c80dc),&uStack_28);
    uVar4 = 0;
    uVar9 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_010c819c + 0x10c80fc),
                       **(undefined4 **)(_UNK_010c81a0 + 0x10c8108),uVar9,0);
    if (*(int *)(**(int **)(_UNK_010c81a4 + 0x10c811c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogError_35b24c8(uVar9,iVar6,0);
  }
  else if (iVar1 == 1) {
    if (aiStack_24[0] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(aiStack_24[0] + 0x10);
  }
  else {
    if (aiStack_24[0] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(aiStack_24[0] + 0xc);
  }
  return uVar4;
}

