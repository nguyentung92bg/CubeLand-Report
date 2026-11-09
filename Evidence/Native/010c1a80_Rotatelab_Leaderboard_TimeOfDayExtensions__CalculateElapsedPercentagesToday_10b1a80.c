/* IL2CPP: Rotatelab.Leaderboard.TimeOfDayExtensions$$CalculateElapsedPercentagesToday
System_Single_array* Rotatelab_Leaderboard_TimeOfDayExtensions__CalculateElapsedPercentagesToday (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.TimeOfDayExtensions$$CalculateElapsedPercentagesToday
   System_Single_array* Rotatelab_Leaderboard_TimeOfDayExtensions__CalculateElapsedPercentagesToday
   (const MethodInfo* method); */

undefined4 Rotatelab_Leaderboard_TimeOfDayExtensions__CalculateElapsedPercentagesToday_10b1a80(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int extraout_r1;
  undefined4 extraout_r1_00;
  char *pcVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar8 = (char *)(_UNK_010c1f54 + 0x10c1a9c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c1f58 + 0x10c1ab0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c1f5c + 0x10c1abc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c1f60 + 0x10c1ac8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c1f64 + 0x10c1ad4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c1f68 + 0x10c1ae0));
    *pcVar8 = '\x01';
  }
  piVar11 = *(int **)(_UNK_010c1f6c + 0x10c1af8);
  uStack_3c = 0;
  uStack_40 = 0;
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = UnityEngine_Time__get_frameCount_35fd3d8(0);
  if (*(int *)(**(int **)(_UNK_010c1f70 + 0x10c1b28) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = Rotatelab_Utilities__TryChangeValue_int__1663db8
                    (*(int *)(*piVar11 + 0x5c) + 8,uVar5,
                     **(undefined4 **)(_UNK_010c1f74 + 0x10c1b48));
  if (iVar6 == 0) {
    iVar6 = *(int *)(*piVar11 + 0x74);
  }
  else {
    if (*(int *)(**(int **)(_UNK_010c1f78 + 0x10c1b6c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_48,0);
    uStack_3c = uStack_44;
    uStack_40 = uStack_48;
    System_DateTime__get_TimeOfDay_2b4a384(&uStack_48,&uStack_40,0);
    uVar3 = uStack_44;
    uVar5 = uStack_48;
    fVar1 = _UNK_010c1f50;
    uVar15 = 0;
    while( true ) {
      iVar6 = *piVar11;
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        iVar6 = *piVar11;
      }
      iVar9 = *(int *)(*(int *)(iVar6 + 0x5c) + 4);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *piVar11;
      iVar6 = *(int *)(iVar7 + 0x74);
      if (*(int *)(iVar9 + 0xc) <= (int)uVar15) break;
      if (iVar6 == 0) {
        FUN_00ec3934();
        iVar7 = *piVar11;
      }
      iVar6 = **(int **)(iVar7 + 0x5c);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (**(uint **)(iVar6 + 8) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar12 = (*(uint **)(iVar6 + 8))[2];
      if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar9 = **(int **)(*piVar11 + 0x5c);
      iVar6 = iVar6 + uVar12 * uVar15 * 8;
      uVar16 = *(undefined4 *)(iVar6 + 0x10);
      uVar10 = *(undefined4 *)(iVar6 + 0x14);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (**(uint **)(iVar9 + 8) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar12 = (*(uint **)(iVar9 + 8))[2];
      if (uVar12 < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar9 = iVar9 + uVar12 * uVar15 * 8;
      uVar13 = *(undefined4 *)(iVar9 + 0x18);
      uVar14 = *(undefined4 *)(iVar9 + 0x1c);
      if (*(int *)(**(int **)(_UNK_010c1f7c + 0x10c1cb0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar6 = System_TimeSpan__op_GreaterThanOrEqual_2b8abf8(uVar5,uVar3,uVar13,uVar14,0);
      if (iVar6 == 0) {
        if (*(int *)(**(int **)(_UNK_010c1f80 + 0x10c1d44) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar6 = System_TimeSpan__op_GreaterThanOrEqual_2b8abf8(uVar5,uVar3,uVar16,uVar10,0);
        iVar9 = *piVar11;
        if (iVar6 == 0) {
          if (*(int *)(iVar9 + 0x74) == 0) {
            FUN_00ec3934();
            iVar9 = *piVar11;
          }
          iVar6 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar12 = *(uint *)(iVar6 + 0xc);
          fVar17 = fVar1;
        }
        else {
          if (*(int *)(iVar9 + 0x74) == 0) {
            FUN_00ec3934();
            iVar9 = *piVar11;
          }
          iVar7 = **(int **)(_UNK_010c1f84 + 0x10c1d9c);
          iVar6 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
          if (*(int *)(iVar7 + 0x74) == 0) {
            FUN_00ec3934(iVar7);
            iVar7 = extraout_r1;
          }
          System_TimeSpan__op_Subtraction_2b8aa5c(&uStack_48,iVar7,uVar5,uVar3,uVar16,uVar10,0);
          uVar4 = uStack_44;
          uVar2 = uStack_48;
          System_TimeSpan__op_Subtraction_2b8aa5c
                    (&uStack_48,extraout_r1_00,uVar13,uVar14,uVar16,uVar10,0);
          uVar16 = uStack_44;
          uVar10 = uStack_48;
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          dVar19 = (double)FUN_00f88328(uVar2,uVar4);
          dVar18 = (double)FUN_00f88328(uVar10,uVar16);
          uVar12 = *(uint *)(iVar6 + 0xc);
          fVar17 = (float)(dVar19 / dVar18);
        }
        if (uVar12 <= uVar15) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(float *)(iVar6 + uVar15 * 4 + 0x10) = fVar17;
        iVar6 = uVar15 * 4 + 0x14;
        while( true ) {
          uVar15 = uVar15 + 1;
          iVar9 = *piVar11;
          if (*(int *)(iVar9 + 0x74) == 0) {
            FUN_00ec3934();
            iVar9 = *piVar11;
          }
          iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar9 + 0xc) <= (int)uVar15) break;
          iVar9 = *piVar11;
          if (*(int *)(iVar9 + 0x74) == 0) {
            FUN_00ec3934();
            iVar9 = *piVar11;
          }
          iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 4);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar9 + 0xc) <= uVar15) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          *(undefined4 *)(iVar9 + iVar6) = 0;
          iVar6 = iVar6 + 4;
        }
      }
      else {
        iVar6 = *piVar11;
        if (*(int *)(iVar6 + 0x74) == 0) {
          FUN_00ec3934();
          iVar6 = *piVar11;
        }
        iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 4);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar6 + 0xc) <= uVar15) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        *(undefined4 *)(iVar6 + uVar15 * 4 + 0x10) = 0x3f800000;
      }
      uVar15 = uVar15 + 1;
    }
  }
  if (iVar6 == 0) {
    FUN_00ec3934();
  }
  return *(undefined4 *)(*(int *)(*piVar11 + 0x5c) + 4);
}

