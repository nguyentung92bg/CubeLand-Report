/* IL2CPP: Rotatelab.Grid.GridManager$$GetCellsEncapsulatedByRenderer
UnityEngine_Vector3Int_array* Rotatelab_Grid_GridManager__GetCellsEncapsulatedByRenderer (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridManager$$GetCellsEncapsulatedByRenderer
   UnityEngine_Vector3Int_array* Rotatelab_Grid_GridManager__GetCellsEncapsulatedByRenderer
   (Rotatelab_Grid_GridManager_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo*
   method); */

void Rotatelab_Grid_GridManager__GetCellsEncapsulatedByRenderer_1107118
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  float fVar7;
  float *pfVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar16;
  double dVar15;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  int iStack_9c;
  float fStack_98;
  float *pfStack_94;
  float fStack_90;
  int iStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int iStack_70;
  
  pcVar6 = (char *)(_UNK_01117a44 + 0x1117140);
  iStack_70 = **(int **)(_UNK_01117a48 + 0x1117150);
  iStack_8c = param_1;
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a4c + 0x1117168));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a50 + 0x1117174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a54 + 0x1117180));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a58 + 0x111718c));
    *pcVar6 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__get_localBounds_35c43e4(&fStack_88,param_2,0);
  fVar12 = fStack_80;
  fVar9 = fStack_84;
  fVar16 = fStack_88;
  pfStack_94 = &fStack_100;
  FUN_00f88e5c(pfStack_94,0x60);
  fStack_ec = fVar12 + fStack_74;
  iVar10 = 0;
  fStack_f8 = fVar12 - fStack_74;
  fStack_fc = fVar9 - fStack_78;
  fStack_e4 = fVar9 + fStack_78;
  fStack_d0 = fVar16 + fStack_7c;
  fStack_100 = fVar16 - fStack_7c;
  fVar9 = _UNK_01117560;
  fVar12 = _UNK_0111755c;
  fVar17 = _UNK_0111755c;
  fVar7 = _UNK_01117560;
  fVar14 = _UNK_01117560;
  fVar16 = _UNK_0111755c;
  fStack_f4 = fStack_100;
  fStack_f0 = fStack_fc;
  fStack_e8 = fStack_100;
  fStack_e0 = fStack_f8;
  fStack_dc = fStack_100;
  fStack_d8 = fStack_e4;
  fStack_d4 = fStack_ec;
  fStack_cc = fStack_fc;
  fStack_c8 = fStack_f8;
  fStack_c4 = fStack_d0;
  fStack_c0 = fStack_fc;
  fStack_bc = fStack_ec;
  fStack_b8 = fStack_d0;
  fStack_b4 = fStack_e4;
  fStack_b0 = fStack_f8;
  fStack_ac = fStack_d0;
  fStack_a8 = fStack_e4;
  fStack_a4 = fStack_ec;
  fStack_90 = (float)param_2;
  do {
    fVar18 = fStack_90;
    iVar1 = UnityEngine_Component__get_transform_35fe190(iStack_8c,0);
    if (fVar18 == 0.0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(fVar18,0);
    puVar3 = (undefined4 *)((int)pfStack_94 + iVar10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__TransformPoint_3616968(&fStack_88,iVar2,*puVar3,puVar3[1],puVar3[2],0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__InverseTransformPoint_3616aa0
              (&fStack_88,iVar1,fStack_88,fStack_84,fStack_80,0);
    iVar10 = iVar10 + 0xc;
    fVar18 = fStack_80;
    if (fStack_80 < fVar17) {
      fVar18 = fVar17;
    }
    fVar17 = fVar18;
    fVar18 = fStack_84;
    if (fStack_84 < fVar16) {
      fVar18 = fVar16;
    }
    fVar16 = fVar18;
    fVar18 = fStack_88;
    if (fStack_88 < fVar12) {
      fVar18 = fVar12;
    }
    fVar12 = fVar18;
    fVar18 = fStack_80;
    if (fVar7 < fStack_80) {
      fVar18 = fVar7;
    }
    fVar7 = fStack_84;
    if (fVar9 < fStack_84) {
      fVar7 = fVar9;
    }
    fVar9 = fVar7;
    fVar7 = fStack_88;
    if (fVar14 < fStack_88) {
      fVar7 = fVar14;
    }
    fVar14 = fVar7;
    fVar7 = fVar18;
  } while (iVar10 != 0x60);
  pcVar6 = (char *)(_UNK_01117a5c + 0x11173c4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a60 + 0x11173d8));
    *pcVar6 = '\x01';
  }
  piVar11 = *(int **)(_UNK_01117a64 + 0x11173f0);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar15 = (double)(fVar14 + 0.5);
  dVar19 = (double)modf(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),&fStack_88);
  if (0.0 <= fVar14 + 0.5) {
    if (dVar19 == 0.5) {
      dVar15 = 1.0;
      goto LAB_01117454;
    }
    dVar15 = (double)floor(SUB84(dVar15 + 0.5,0),(int)((ulonglong)(dVar15 + 0.5) >> 0x20));
  }
  else if (dVar19 == -0.5) {
    dVar15 = -1.0;
LAB_01117454:
    dVar19 = (double)CONCAT44(fStack_84,fStack_88);
    uVar4 = FUN_00f88224(fStack_88,fStack_84);
    dVar15 = dVar19 + dVar15;
    if ((uVar4 & 1) == 0) {
      dVar15 = dVar19;
    }
  }
  else {
    dVar15 = (double)ceil(SUB84(dVar15 + -0.5,0),(int)((ulonglong)(dVar15 + -0.5) >> 0x20));
  }
  dVar19 = _UNK_01117888;
  fVar7 = (float)(longlong)dVar15;
  if (dVar15 == _UNK_01117888) {
    fVar7 = -0.0;
  }
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a68 + 0x11174bc));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar15 = (double)(fVar9 + 0.5);
  dVar20 = (double)modf(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),&fStack_88);
  if (0.0 <= fVar9 + 0.5) {
    if (dVar20 == 0.5) {
      dVar15 = 1.0;
      goto LAB_01117530;
    }
    dVar15 = (double)floor(SUB84(dVar15 + 0.5,0),(int)((ulonglong)(dVar15 + 0.5) >> 0x20));
  }
  else if (dVar20 == -0.5) {
    dVar15 = -1.0;
LAB_01117530:
    dVar20 = (double)CONCAT44(fStack_84,fStack_88);
    uVar4 = FUN_00f88224(fStack_88,fStack_84);
    dVar15 = dVar20 + dVar15;
    if ((uVar4 & 1) == 0) {
      dVar15 = dVar20;
    }
  }
  else {
    dVar15 = (double)ceil(SUB84(dVar15 + -0.5,0),(int)((ulonglong)(dVar15 + -0.5) >> 0x20));
  }
  fStack_98 = (float)(longlong)dVar15;
  if (dVar15 == dVar19) {
    fStack_98 = -0.0;
  }
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a6c + 0x11175a8));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar15 = (double)(fVar18 + 0.5);
  dVar20 = (double)modf(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),&fStack_88);
  if (0.0 <= fVar18 + 0.5) {
    if (dVar20 == 0.5) {
      dVar15 = 1.0;
      goto LAB_01117618;
    }
    dVar15 = (double)floor(SUB84(dVar15 + 0.5,0),(int)((ulonglong)(dVar15 + 0.5) >> 0x20));
  }
  else if (dVar20 == -0.5) {
    dVar15 = -1.0;
LAB_01117618:
    dVar20 = (double)CONCAT44(fStack_84,fStack_88);
    uVar4 = FUN_00f88224(fStack_88,fStack_84);
    dVar15 = dVar20 + dVar15;
    if ((uVar4 & 1) == 0) {
      dVar15 = dVar20;
    }
  }
  else {
    dVar15 = (double)ceil(SUB84(dVar15 + -0.5,0),(int)((ulonglong)(dVar15 + -0.5) >> 0x20));
  }
  fVar9 = (float)(longlong)dVar15;
  if (dVar15 == dVar19) {
    fVar9 = -0.0;
  }
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a70 + 0x1117680));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar15 = (double)(fVar12 + -0.5);
  dVar20 = (double)modf(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),&fStack_88);
  if (0.0 <= fVar12 + -0.5) {
    if (dVar20 == 0.5) {
      dVar15 = 1.0;
      goto LAB_011176f0;
    }
    dVar15 = (double)floor(SUB84(dVar15 + 0.5,0),(int)((ulonglong)(dVar15 + 0.5) >> 0x20));
  }
  else if (dVar20 == -0.5) {
    dVar15 = -1.0;
LAB_011176f0:
    dVar20 = (double)CONCAT44(fStack_84,fStack_88);
    uVar4 = FUN_00f88224(fStack_88,fStack_84);
    dVar15 = dVar20 + dVar15;
    if ((uVar4 & 1) == 0) {
      dVar15 = dVar20;
    }
  }
  else {
    dVar15 = (double)ceil(SUB84(dVar15 + -0.5,0),(int)((ulonglong)(dVar15 + -0.5) >> 0x20));
  }
  iVar10 = (int)(longlong)dVar15;
  if (dVar15 == dVar19) {
    iVar10 = -0x80000000;
  }
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a74 + 0x1117754));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar15 = (double)(fVar16 + -0.5);
  dVar20 = (double)modf(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),&fStack_88);
  if (0.0 <= fVar16 + -0.5) {
    if (dVar20 == 0.5) {
      dVar15 = 1.0;
      goto LAB_011177c4;
    }
    dVar15 = (double)floor(SUB84(dVar15 + 0.5,0),(int)((ulonglong)(dVar15 + 0.5) >> 0x20));
  }
  else if (dVar20 == -0.5) {
    dVar15 = -1.0;
LAB_011177c4:
    dVar20 = (double)CONCAT44(fStack_84,fStack_88);
    uVar4 = FUN_00f88224(fStack_88,fStack_84);
    dVar15 = dVar20 + dVar15;
    if ((uVar4 & 1) == 0) {
      dVar15 = dVar20;
    }
  }
  else {
    dVar15 = (double)ceil(SUB84(dVar15 + -0.5,0),(int)((ulonglong)(dVar15 + -0.5) >> 0x20));
  }
  iStack_8c = (int)(longlong)dVar15;
  if (dVar15 == dVar19) {
    iStack_8c = -0x80000000;
  }
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a78 + 0x111782c));
    *pcVar6 = '\x01';
  }
  if (*(int *)(*piVar11 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar15 = (double)(fVar17 + -0.5);
  dVar20 = (double)modf(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),&fStack_88);
  fStack_90 = fVar7;
  if (0.0 <= fVar17 + -0.5) {
    if (dVar20 != 0.5) {
      dVar15 = (double)floor(SUB84(dVar15 + 0.5,0),(int)((ulonglong)(dVar15 + 0.5) >> 0x20));
      goto LAB_011178e0;
    }
    dVar15 = 1.0;
  }
  else {
    if (dVar20 != -0.5) {
      dVar15 = (double)ceil(SUB84(dVar15 + -0.5,0),(int)((ulonglong)(dVar15 + -0.5) >> 0x20));
      goto LAB_011178e0;
    }
    dVar15 = -1.0;
  }
  uVar4 = FUN_00f88224(fStack_88,fStack_84);
  dVar15 = (double)CONCAT44(fStack_84,fStack_88) + dVar15;
  if ((uVar4 & 1) == 0) {
    dVar15 = (double)CONCAT44(fStack_84,fStack_88);
  }
LAB_011178e0:
  pcVar6 = (char *)(_UNK_01117a7c + 0x11178f8);
  iVar13 = iStack_8c - (int)fStack_98;
  iVar1 = (int)(longlong)dVar15;
  iVar2 = iVar10 - (int)fStack_90;
  if (dVar15 == dVar19) {
    iVar1 = -0x80000000;
  }
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01117a80 + 0x111792c));
    *pcVar6 = '\x01';
  }
  iVar5 = *(int *)(**(int **)(_UNK_01117a84 + 0x1117940) + 0x5c);
  iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_01117a88 + 0x1117970),
                       (iVar13 + *(int *)(iVar5 + 0x10)) * (iVar2 + *(int *)(iVar5 + 0xc)) *
                       ((iVar1 - (int)fVar9) + *(int *)(iVar5 + 0x14)));
  if ((int)fVar9 <= iVar1) {
    pfStack_94 = (float *)(iVar2 + 0x10);
    uVar4 = 0;
    fVar16 = fStack_98;
    do {
      for (; iStack_9c = iVar1, (int)fVar16 <= iStack_8c; fVar16 = (float)((int)fVar16 + 1)) {
        if ((int)fStack_90 <= iVar10) {
          pfVar8 = pfStack_94 + uVar4 * 3;
          fVar12 = fStack_90;
          do {
            if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(uint *)(iVar2 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f07924();
            }
            *pfVar8 = fVar12;
            pfVar8[1] = fVar16;
            fVar12 = (float)((int)fVar12 + 1);
            uVar4 = uVar4 + 1;
            pfVar8[2] = fVar9;
            pfVar8 = pfVar8 + 3;
          } while ((int)fVar12 <= iVar10);
        }
      }
      fVar9 = (float)((int)fVar9 + 1);
      fVar16 = fStack_98;
    } while ((int)fVar9 <= iVar1);
  }
  if (**(int **)(_UNK_01117a8c + 0x1117a24) == iStack_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iStack_70);
}

