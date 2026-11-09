/* IL2CPP: Rotatelab.Leaderboard.TimeOfDayExtensions$$ElapsedPercentageToday
float Rotatelab_Leaderboard_TimeOfDayExtensions__ElapsedPercentageToday (System_Collections_Generic_IList_TimeOfDay__o* times, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.TimeOfDayExtensions$$ElapsedPercentageToday
   float Rotatelab_Leaderboard_TimeOfDayExtensions__ElapsedPercentageToday
   (System_Collections_Generic_IList_TimeOfDay__o* times, const MethodInfo* method); */

float Rotatelab_Leaderboard_TimeOfDayExtensions__ElapsedPercentageToday_10b1f88(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  
  pcVar9 = (char *)(_UNK_010c2208 + 0x10c1fa4);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c220c + 0x10c1fb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c2210 + 0x10c1fc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c2214 + 0x10c1fd0));
    *pcVar9 = '\x01';
  }
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *param_1;
  piVar11 = *(int **)(_UNK_010c2218 + 0x10c1ff4);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == *piVar11) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
        goto LAB_010c203c;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,*piVar11,0);
LAB_010c203c:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar1 == 0) {
    return _UNK_010c2204;
  }
  if (*(int *)(**(int **)(_UNK_010c221c + 0x10c2060) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Leaderboard_TimeOfDayExtensions__CalculateElapsedPercentagesToday_10b1a80();
  iVar10 = 0;
  piVar7 = *(int **)(_UNK_010c2220 + 0x10c208c);
  fVar13 = _UNK_010c2204;
  do {
    iVar3 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_010c20d8;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,*piVar11,0);
LAB_010c20d8:
    iVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
    iVar6 = *param_1;
    uVar5 = (uint)*(ushort *)(iVar6 + 0xb6);
    if (iVar3 <= iVar10) {
      if (uVar5 == 0) goto LAB_010c21b4;
      piVar7 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      break;
    }
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar6 + 0x58) + 4);
      do {
        if (piVar8[-1] == *piVar7) {
          puVar2 = (undefined4 *)(iVar6 + *piVar8 * 8 + 0xc0);
          goto LAB_010c2140;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,*piVar7,0);
LAB_010c2140:
    uVar5 = (*(code *)*puVar2)(param_1,iVar10,puVar2[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar10 = iVar10 + 1;
    fVar13 = fVar13 + *(float *)(iVar1 + uVar5 * 4 + 0x10);
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar7 = piVar7 + 2;
    if (uVar5 == 0) break;
    if (piVar7[-1] == *piVar11) {
      puVar2 = (undefined4 *)(iVar6 + *piVar7 * 8 + 0xc0);
      goto LAB_010c21d8;
    }
  }
LAB_010c21b4:
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,*piVar11,0);
LAB_010c21d8:
  uVar4 = (*(code *)*puVar2)(param_1,puVar2[1]);
  fVar12 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  return fVar13 / fVar12;
}

