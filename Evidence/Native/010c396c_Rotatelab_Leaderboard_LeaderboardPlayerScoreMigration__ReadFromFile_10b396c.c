/* IL2CPP: Rotatelab.Leaderboard.LeaderboardPlayerScoreMigration$$ReadFromFile
int32_t Rotatelab_Leaderboard_LeaderboardPlayerScoreMigration__ReadFromFile (System_String_o* filename, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardPlayerScoreMigration$$ReadFromFile
   int32_t Rotatelab_Leaderboard_LeaderboardPlayerScoreMigration__ReadFromFile (System_String_o*
   filename, const MethodInfo* method); */

undefined4
Rotatelab_Leaderboard_LeaderboardPlayerScoreMigration__ReadFromFile_10b396c(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_1c;
  
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
  iStack_1c = 0;
  if (*(int *)(**(int **)(_UNK_010c3c88 + 0x10c3a04) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = UnityEngine_Application__get_persistentDataPath_35a750c(0);
  if (*(int *)(**(int **)(_UNK_010c3c8c + 0x10c3a34) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = System_IO_Path__Combine_2b3e6c0(uVar1,param_1,0);
  uVar1 = 0;
  iVar3 = System_IO_File__Exists_2b27c30(iVar2,0);
  if (iVar3 != 0) {
    uVar1 = System_IO_File__ReadAllText_2b2e26c(iVar2,0);
    iVar3 = UnityEngine_JsonUtility__FromJson_object__14aaf98
                      (uVar1,**(undefined4 **)(_UNK_010c3c90 + 0x10c3a84));
    uVar1 = 0;
    if (iVar3 != 0) {
      iVar2 = *(int *)(iVar3 + 8);
    }
    if (iVar3 != 0 && iVar2 != 0) {
      piVar8 = *(int **)(_UNK_010c3c94 + 0x10c3ab4);
      iVar3 = *piVar8;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar8;
      }
      puVar4 = *(undefined4 **)(iVar3 + 0x5c);
      iVar6 = puVar4[1];
      if (iVar6 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          puVar4 = *(undefined4 **)(*piVar8 + 0x5c);
        }
        uVar7 = *puVar4;
        iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c3c98 + 0x10c3b00));
        System_Predicate_object____ctor_1876380
                  (iVar6,uVar7,**(undefined4 **)(_UNK_010c3c9c + 0x10c3b14),0);
        piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
        *piVar8 = iVar6;
        thunk_FUN_00ec5080(piVar8,iVar6);
      }
      if (*(int *)(**(int **)(_UNK_010c3ca0 + 0x10c3b44) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = Rotatelab_Extensions__TryFind_object__14899b0
                        (iVar2,iVar6,&iStack_1c,**(undefined4 **)(_UNK_010c3ca4 + 0x10c3b60));
      if (iVar2 != 0) {
        if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar1 = *(undefined4 *)(iStack_1c + 8);
      }
    }
  }
  return uVar1;
}

