/* IL2CPP: Rotatelab.Leaderboard.BotNameGeneratorSo$$Generate
System_String_array* Rotatelab_Leaderboard_BotNameGeneratorSo__Generate (Rotatelab_Leaderboard_BotNameGeneratorSo_o* __this, int32_t maleCount, int32_t femaleCount, int32_t nicknameCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BotNameGeneratorSo$$Generate
   System_String_array* Rotatelab_Leaderboard_BotNameGeneratorSo__Generate
   (Rotatelab_Leaderboard_BotNameGeneratorSo_o* __this, int32_t maleCount, int32_t femaleCount,
   int32_t nicknameCount, const MethodInfo* method); */

int Rotatelab_Leaderboard_BotNameGeneratorSo__Generate_10b152c
              (int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uStack_34;
  
  pcVar6 = (char *)(_UNK_010c19c0 + 0x10c1558);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c19c4 + 0x10c156c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c19c8 + 0x10c1578));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c19cc + 0x10c1584));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c19d0 + 0x10c1590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c19d4 + 0x10c159c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c19d8 + 0x10c15a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c19dc + 0x10c15b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c19e0 + 0x10c15c0));
    *pcVar6 = '\x01';
  }
  puVar10 = *(undefined4 **)(_UNK_010c19e4 + 0x10c15d8);
  iVar1 = FUN_00ec388c(*puVar10,param_3 + param_2 + param_4);
  if (0 < param_2) {
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = 0;
    iVar2 = System_Array__Clone_2b97598(*(int *)(param_1 + 0xc),0);
    if (iVar2 != 0) {
      uVar11 = *puVar10;
      iVar7 = thunk_FUN_00f00bc8(iVar2,uVar11);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar2,uVar11);
      }
    }
    if (*(int *)(**(int **)(_UNK_010c19e8 + 0x10c1654) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__Shuffle_object__1488ae4
              (iVar7,**(undefined4 **)(_UNK_010c19ec + 0x10c1670));
    System_Array__Copy_2b96ff4(iVar7,0,iVar1,0,param_2,0);
  }
  if (0 < param_3) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = 0;
    iVar2 = System_Array__Clone_2b97598(*(int *)(param_1 + 0x10),0);
    if (iVar2 != 0) {
      uVar11 = *puVar10;
      iVar7 = thunk_FUN_00f00bc8(iVar2,uVar11);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(iVar2,uVar11);
      }
    }
    if (*(int *)(**(int **)(_UNK_010c19f0 + 0x10c1700) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__Shuffle_object__1488ae4
              (iVar7,**(undefined4 **)(_UNK_010c19f4 + 0x10c171c));
    System_Array__Copy_2b96ff4(iVar7,0,iVar1,param_2,param_3,0);
  }
  if (0 < param_4) {
    iVar2 = 0;
    piVar8 = *(int **)(_UNK_010c19f8 + 0x10c176c);
    piVar9 = *(int **)(_UNK_010c19fc + 0x10c1774);
    puVar10 = *(undefined4 **)(_UNK_010c1a00 + 0x10c177c);
    do {
      iVar7 = *piVar8;
      if (*(int *)(iVar7 + 0x74) == 0) {
        FUN_00ec3934();
        iVar7 = *piVar8;
      }
      if (**(int **)(iVar7 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar8 = (int *)System_Text_StringBuilder__Clear_2a15afc(**(int **)(iVar7 + 0x5c),0);
      uVar11 = *(undefined4 *)(param_1 + 0x18);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar7 = Rotatelab_Extensions__PickRandom_BotNameGeneratorSo_NicknameFormat__1487c0c
                        (uVar11,**(undefined4 **)(_UNK_010c1a04 + 0x10c17e0));
      uVar12 = 0;
      while( true ) {
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar12) break;
        if (*(uint *)(iVar7 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        uVar11 = *(undefined4 *)(iVar7 + 0x10 + uVar12 * 4);
        iVar3 = System_String__op_Equality_2a0975c(uVar11,*puVar10,0);
        if (iVar3 == 0) {
          iVar3 = System_String__op_Equality_2a0975c
                            (uVar11,**(undefined4 **)(_UNK_010c1a08 + 0x10c1874),0);
          if (iVar3 != 0) {
            fVar4 = (float)UnityEngine_Random__get_value_35f8bbc(0);
            if (0.5 <= fVar4) {
              uVar11 = 100;
              uVar5 = 1000;
            }
            else {
              uVar11 = 1;
              uVar5 = 100;
            }
            uStack_34 = UnityEngine_Random__Range_35f8b14(uVar11,uVar5,0);
            uVar11 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010c1a10 + 0x10c18c4) + 0x24),
                                  &uStack_34);
          }
        }
        else {
          uVar11 = *(undefined4 *)(param_1 + 0x14);
          if (*(int *)(*piVar9 + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar11 = Rotatelab_Extensions__PickRandom_object__1487798
                             (uVar11,**(undefined4 **)(_UNK_010c1a0c + 0x10c1858));
        }
        if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        System_Text_StringBuilder__Append_2a1746c(piVar8,uVar11,0);
        uVar12 = uVar12 + 1;
      }
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar11 = (**(code **)(*piVar8 + 0xd8))(piVar8,*(undefined4 *)(*piVar8 + 0xdc));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar12 = iVar2 + param_3 + param_2;
      if (*(uint *)(iVar1 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar1 + uVar12 * 4 + 0x10) = uVar11;
      thunk_FUN_00ec5080(iVar1 + 0x10 + uVar12 * 4,uVar11);
      iVar2 = iVar2 + 1;
      piVar8 = *(int **)(_UNK_010c1a14 + 0x10c197c);
    } while (iVar2 != param_4);
  }
  if (*(int *)(**(int **)(_UNK_010c1a18 + 0x10c1988) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__Shuffle_object__1488ae4(iVar1,**(undefined4 **)(_UNK_010c1a1c + 0x10c19a4));
  return iVar1;
}

