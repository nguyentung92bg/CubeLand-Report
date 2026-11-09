/* IL2CPP: Rotatelab.Scripts.BombController$$FindDestructibleGridPositions
void Rotatelab_Scripts_BombController__FindDestructibleGridPositions (Rotatelab_Scripts_BombController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BombController$$FindDestructibleGridPositions
   void Rotatelab_Scripts_BombController__FindDestructibleGridPositions
   (Rotatelab_Scripts_BombController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_BombController__FindDestructibleGridPositions_ff6b88(int param_1)

{
  double dVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined4 uStack_5c;
  double dStack_58;
  
  pcVar8 = (char *)(_UNK_01007068 + 0x1006ba8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100706c + 0x1006bbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007070 + 0x1006bc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007074 + 0x1006bd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007078 + 0x1006be0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100707c + 0x1006bec));
    *pcVar8 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 0x4c);
  uStack_5c = 0;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar9 + 0xc) = 0;
  iVar10 = *(int *)(param_1 + 0x38);
  *(int *)(iVar9 + 0x10) = *(int *)(iVar9 + 0x10) + 1;
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar20 = *(float *)(iVar10 + 8);
  pcVar8 = (char *)(_UNK_01007080 + 0x1006c3c);
  fVar22 = *(float *)(iVar10 + 0xc);
  fVar19 = *(float *)(iVar10 + 0x10);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007084 + 0x1006c58));
    *pcVar8 = '\x01';
  }
  piVar11 = *(int **)(_UNK_01007088 + 0x1006c6c);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar21 = (double)fVar20;
  dVar23 = (double)modf(SUB84(dVar21,0),(int)((ulonglong)dVar21 >> 0x20),&dStack_58);
  dVar1 = dStack_58;
  if (0.0 <= fVar20) {
    if (dVar23 == 0.5) {
      dVar21 = 1.0;
      goto LAB_01006cd0;
    }
    dVar21 = (double)floor(SUB84(dVar21 + 0.5,0),(int)((ulonglong)(dVar21 + 0.5) >> 0x20));
  }
  else if (dVar23 == -0.5) {
    dVar21 = -1.0;
LAB_01006cd0:
    dVar21 = dStack_58 + dVar21;
    uVar3 = FUN_00f88224(SUB84(dStack_58,0),(int)((ulonglong)dStack_58 >> 0x20));
    if ((uVar3 & 1) == 0) {
      dVar21 = dVar1;
    }
  }
  else {
    dVar21 = (double)ceil(SUB84(dVar21 + -0.5,0),(int)((ulonglong)(dVar21 + -0.5) >> 0x20));
  }
  dVar1 = _UNK_01007060;
  iVar9 = (int)(longlong)dVar21;
  if (dVar21 == _UNK_01007060) {
    iVar9 = -0x80000000;
  }
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100708c + 0x1006d3c));
    *pcVar8 = '\x01';
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar23 = (double)fVar22;
  dVar24 = (double)modf(SUB84(dVar23,0),(int)((ulonglong)dVar23 >> 0x20),&dStack_58);
  dVar21 = dStack_58;
  if (0.0 <= fVar22) {
    if (dVar24 == 0.5) {
      dVar23 = 1.0;
      goto LAB_01006da8;
    }
    dVar23 = (double)floor(SUB84(dVar23 + 0.5,0),(int)((ulonglong)(dVar23 + 0.5) >> 0x20));
  }
  else if (dVar24 == -0.5) {
    dVar23 = -1.0;
LAB_01006da8:
    dVar23 = dStack_58 + dVar23;
    uVar3 = FUN_00f88224(SUB84(dStack_58,0),(int)((ulonglong)dStack_58 >> 0x20));
    if ((uVar3 & 1) == 0) {
      dVar23 = dVar21;
    }
  }
  else {
    dVar23 = (double)ceil(SUB84(dVar23 + -0.5,0),(int)((ulonglong)(dVar23 + -0.5) >> 0x20));
  }
  iVar10 = (int)(longlong)dVar23;
  if (dVar23 == dVar1) {
    iVar10 = -0x80000000;
  }
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01007090 + 0x1006e10));
    *pcVar8 = '\x01';
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar21 = (double)fVar19;
  dVar23 = (double)modf(SUB84(dVar21,0),(int)((ulonglong)dVar21 >> 0x20),&dStack_58);
  if (0.0 <= fVar19) {
    if (dVar23 != 0.5) {
      dVar21 = (double)floor(SUB84(dVar21 + 0.5,0),(int)((ulonglong)(dVar21 + 0.5) >> 0x20));
      goto LAB_01006eb4;
    }
    dVar21 = 1.0;
  }
  else {
    if (dVar23 != -0.5) {
      dVar21 = (double)ceil(SUB84(dVar21 + -0.5,0),(int)((ulonglong)(dVar21 + -0.5) >> 0x20));
      goto LAB_01006eb4;
    }
    dVar21 = -1.0;
  }
  uVar3 = FUN_00f88224(SUB84(dStack_58,0),(int)((ulonglong)dStack_58 >> 0x20));
  dVar21 = dStack_58 + dVar21;
  if ((uVar3 & 1) == 0) {
    dVar21 = dStack_58;
  }
LAB_01006eb4:
  iVar6 = -3;
  puVar16 = *(undefined4 **)(_UNK_01007094 + 0x1006ec8);
  iVar12 = (int)(longlong)dVar21;
  puVar13 = *(undefined4 **)(_UNK_01007098 + 0x1006ed8);
  if (dVar21 == dVar1) {
    iVar12 = -0x80000000;
  }
  do {
    iVar4 = iVar6 + iVar9;
    iVar7 = -3;
    do {
      iVar15 = -3;
      iVar18 = iVar7 + iVar10;
      do {
        iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar16);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar14 = iVar12 + iVar15;
        iVar5 = Rotatelab_Grid_GridManager__TryGetGridCellContent_object__1492bbc
                          (iVar5,iVar4,iVar18,iVar14,&uStack_5c,*puVar13);
        uVar2 = uStack_5c;
        if (iVar5 != 0) {
          if (*(int *)(**(int **)(_UNK_0100709c + 0x1006f54) + 0x74) == 0) {
            FUN_00ec3934();
          }
          iVar5 = UnityEngine_Object__op_Inequality_36018e4(uVar2,param_1,0);
          if (iVar5 != 0) {
            iVar5 = *(int *)(param_1 + 0x4c);
            if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar17 = *(int *)(iVar5 + 8);
            uVar3 = *(uint *)(iVar5 + 0xc);
            piVar11 = *(int **)(_UNK_010070a0 + 0x1006fb0);
            *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + 1;
            if (iVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar3 < *(uint *)(iVar17 + 0xc)) {
              *(uint *)(iVar5 + 0xc) = uVar3 + 1;
              iVar17 = iVar17 + uVar3 * 0xc;
              *(int *)(iVar17 + 0x10) = iVar4;
              *(int *)(iVar17 + 0x14) = iVar18;
              *(int *)(iVar17 + 0x18) = iVar14;
            }
            else {
              System_Collections_Generic_List_Vector3Int___AddWithResize_26ffa98
                        (iVar5,iVar4,iVar18,iVar14,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar11 + 0x10) + 0x60) + 0x38));
            }
            puVar16 = *(undefined4 **)(_UNK_010070a4 + 0x1007020);
            puVar13 = *(undefined4 **)(_UNK_010070a8 + 0x1007028);
          }
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 4);
    iVar6 = iVar6 + 1;
    if (iVar6 == 4) {
      return;
    }
  } while( true );
}

