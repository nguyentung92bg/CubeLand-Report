/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$GetPlayerScoreToMigrate
int32_t Rotatelab_Leaderboard_LateGameLeaderboardManager__GetPlayerScoreToMigrate (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$GetPlayerScoreToMigrate
   int32_t Rotatelab_Leaderboard_LateGameLeaderboardManager__GetPlayerScoreToMigrate
   (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Leaderboard_LateGameLeaderboardManager__GetPlayerScoreToMigrate_10b6d5c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  int aiStack_1c [2];
  
  pcVar5 = (char *)(_UNK_010c6ddc + 0x10c6d6c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6de0 + 0x10c6d80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6de4 + 0x10c6d8c));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_010c6de8 + 0x10c6da8);
  iVar3 = Rotatelab_Save_SaveManager__GetBool_107f0d4(*puVar6,0,0);
  if (iVar3 != 0) {
    Rotatelab_Save_SaveManager__DeleteKey_1082f50(*puVar6,1,0);
    uVar4 = **(undefined4 **)(_UNK_010c6dec + 0x10c6dd4);
    pcVar5 = (char *)(_UNK_010c3c64 + 0x10c3984);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c3c68 + 0x10c3998));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c3c6c + 0x10c39a4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c3c70 + 0x10c39b0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c3c74 + 0x10c39bc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c3c78 + 0x10c39c8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c3c7c + 0x10c39d4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c3c80 + 0x10c39e0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c3c84 + 0x10c39ec));
      *pcVar5 = '\x01';
    }
    aiStack_1c[0] = 0;
    if (*(int *)(**(int **)(_UNK_010c3c88 + 0x10c3a04) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = UnityEngine_Application__get_persistentDataPath_35a750c(0);
    if (*(int *)(**(int **)(_UNK_010c3c8c + 0x10c3a34) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = System_IO_Path__Combine_2b3e6c0(uVar1,uVar4,0);
    uVar4 = 0;
    iVar2 = System_IO_File__Exists_2b27c30(iVar3,0);
    if (iVar2 != 0) {
      uVar4 = System_IO_File__ReadAllText_2b2e26c(iVar3,0);
      iVar2 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                        (uVar4,**(undefined4 **)(_UNK_010c3c90 + 0x10c3a84));
      uVar4 = 0;
      if (iVar2 != 0) {
        iVar3 = *(int *)(iVar2 + 8);
      }
      if (iVar2 != 0 && iVar3 != 0) {
        piVar8 = *(int **)(_UNK_010c3c94 + 0x10c3ab4);
        iVar2 = *piVar8;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar8;
        }
        puVar6 = *(undefined4 **)(iVar2 + 0x5c);
        iVar7 = puVar6[1];
        if (iVar7 == 0) {
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            puVar6 = *(undefined4 **)(*piVar8 + 0x5c);
          }
          uVar1 = *puVar6;
          iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c3c98 + 0x10c3b00));
          System_Predicate_object____ctor_1876380
                    (iVar7,uVar1,**(undefined4 **)(_UNK_010c3c9c + 0x10c3b14),0);
          piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
          *piVar8 = iVar7;
          thunk_FUN_00ec5080(piVar8,iVar7);
        }
        if (*(int *)(**(int **)(_UNK_010c3ca0 + 0x10c3b44) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = Rotatelab_Extensions__TryFind_object__14899b0
                          (iVar3,iVar7,aiStack_1c,**(undefined4 **)(_UNK_010c3ca4 + 0x10c3b60));
        if (iVar3 != 0) {
          if (aiStack_1c[0] == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar4 = *(undefined4 *)(aiStack_1c[0] + 8);
        }
      }
    }
    return uVar4;
  }
  return 0;
}

