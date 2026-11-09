/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$FindNearestFaceDistance
float Rotatelab_Scripts_RoundedMeshGenerator__FindNearestFaceDistance (UnityEngine_Vector3_o point, System_Collections_Generic_Dictionary_Vector3Int__byte__o* exposedFaceMasks, int32_t searchRange, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$FindNearestFaceDistance
   float Rotatelab_Scripts_RoundedMeshGenerator__FindNearestFaceDistance (UnityEngine_Vector3_o
   point, System_Collections_Generic_Dictionary_Vector3Int__byte__o* exposedFaceMasks, int32_t
   searchRange, const MethodInfo* method); */

float Rotatelab_Scripts_RoundedMeshGenerator__FindNearestFaceDistance_10236e0
                (float param_1,float param_2,float param_3,int param_4,int param_5)

{
  int iVar1;
  double dVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char *pcVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  byte bStack_51;
  double dStack_50;
  
  pcVar13 = (char *)(_UNK_01033ba8 + 0x1033708);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01033bac + 0x103371c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01033bb0 + 0x1033728));
    *pcVar13 = '\x01';
  }
  bStack_51 = 0;
  pcVar13 = (char *)(_UNK_01033bb4 + 0x1033744);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01033bb8 + 0x1033758));
    *pcVar13 = '\x01';
  }
  piVar16 = *(int **)(_UNK_01033bbc + 0x1033774);
  if (*(int *)(*piVar16 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar18 = (double)param_1;
  dVar19 = (double)modf(SUB84(dVar18,0),(int)((ulonglong)dVar18 >> 0x20),&dStack_50);
  dVar2 = dStack_50;
  if (0.0 <= param_1) {
    if (dVar19 == 0.5) {
      dVar18 = 1.0;
      goto LAB_010337dc;
    }
    dVar18 = (double)floor(SUB84(dVar18 + 0.5,0),(int)((ulonglong)(dVar18 + 0.5) >> 0x20));
  }
  else if (dVar19 == -0.5) {
    dVar18 = -1.0;
LAB_010337dc:
    dVar18 = dStack_50 + dVar18;
    uVar4 = FUN_00f88224(SUB84(dStack_50,0),(int)((ulonglong)dStack_50 >> 0x20));
    if ((uVar4 & 1) == 0) {
      dVar18 = dVar2;
    }
  }
  else {
    dVar18 = (double)ceil(SUB84(dVar18 + -0.5,0),(int)((ulonglong)(dVar18 + -0.5) >> 0x20));
  }
  dVar2 = _UNK_01033b98;
  iVar9 = (int)(longlong)dVar18;
  if (dVar18 == _UNK_01033b98) {
    iVar9 = -0x80000000;
  }
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01033bc0 + 0x1033848));
    *pcVar13 = '\x01';
  }
  if (*(int *)(*piVar16 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar19 = (double)param_2;
  dVar20 = (double)modf(SUB84(dVar19,0),(int)((ulonglong)dVar19 >> 0x20),&dStack_50);
  dVar18 = dStack_50;
  if (0.0 <= param_2) {
    if (dVar20 == 0.5) {
      dVar19 = 1.0;
      goto LAB_010338bc;
    }
    dVar19 = (double)floor(SUB84(dVar19 + 0.5,0),(int)((ulonglong)(dVar19 + 0.5) >> 0x20));
  }
  else if (dVar20 == -0.5) {
    dVar19 = -1.0;
LAB_010338bc:
    dVar19 = dStack_50 + dVar19;
    uVar4 = FUN_00f88224(SUB84(dStack_50,0),(int)((ulonglong)dStack_50 >> 0x20));
    if ((uVar4 & 1) == 0) {
      dVar19 = dVar18;
    }
  }
  else {
    dVar19 = (double)ceil(SUB84(dVar19 + -0.5,0),(int)((ulonglong)(dVar19 + -0.5) >> 0x20));
  }
  iVar10 = (int)(longlong)dVar19;
  if (dVar19 == dVar2) {
    iVar10 = -0x80000000;
  }
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01033bc4 + 0x1033924));
    *pcVar13 = '\x01';
  }
  if (*(int *)(*piVar16 + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar18 = (double)param_3;
  dVar19 = (double)modf(SUB84(dVar18,0),(int)((ulonglong)dVar18 >> 0x20),&dStack_50);
  if (0.0 <= param_3) {
    if (dVar19 != 0.5) {
      dVar18 = (double)floor(SUB84(dVar18 + 0.5,0),(int)((ulonglong)(dVar18 + 0.5) >> 0x20));
      goto LAB_010339d0;
    }
    dVar18 = 1.0;
  }
  else {
    if (dVar19 != -0.5) {
      dVar18 = (double)ceil(SUB84(dVar18 + -0.5,0),(int)((ulonglong)(dVar18 + -0.5) >> 0x20));
      goto LAB_010339d0;
    }
    dVar18 = -1.0;
  }
  uVar4 = FUN_00f88224(SUB84(dStack_50,0),(int)((ulonglong)dStack_50 >> 0x20));
  dVar18 = dStack_50 + dVar18;
  if ((uVar4 & 1) == 0) {
    dVar18 = dStack_50;
  }
LAB_010339d0:
  fVar3 = _UNK_01033ba0;
  iVar5 = (int)(longlong)dVar18;
  if (dVar18 == dVar2) {
    iVar5 = -0x80000000;
  }
  iVar1 = -param_5;
  fVar17 = _UNK_01033ba0;
  if (-param_5 == param_5 || param_5 * -2 < 0 != SBORROW4(iVar1,param_5)) {
    piVar16 = *(int **)(_UNK_01033bc8 + 0x1033a14);
    iVar12 = iVar1;
    do {
      iVar11 = iVar1;
      do {
        iVar15 = iVar1;
        do {
          if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar6 = System_Collections_Generic_Dictionary_Vector3Int__byte___TryGetValue_20b74f0
                            (param_4,iVar12 + iVar9,iVar11 + iVar10,iVar15 + iVar5,&bStack_51,
                             **(undefined4 **)(_UNK_01033bcc + 0x1033a64));
          if (iVar6 != 0) {
            iVar6 = 4;
            do {
              uVar4 = iVar6 - 4;
              if ((bStack_51 >> (uVar4 & 0xff) & 1) != 0) {
                iVar7 = *piVar16;
                if (*(int *)(iVar7 + 0x74) == 0) {
                  FUN_00ec3934();
                  iVar7 = *piVar16;
                }
                iVar7 = *(int *)(*(int *)(iVar7 + 0x5c) + 8);
                if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                if (*(uint *)(iVar7 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f07924();
                }
                iVar14 = *(int *)(*(int *)(*piVar16 + 0x5c) + 0xc);
                if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f078d4();
                }
                if (*(uint *)(iVar14 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
                  thunk_FUN_00f07924();
                }
                fVar8 = (float)Rotatelab_Scripts_RoundedMeshGenerator__DistanceToFaceRect_1024150
                                         (param_1,param_2,param_3,iVar12 + iVar9,iVar11 + iVar10,
                                          iVar15 + iVar5,*(undefined4 *)(iVar7 + iVar6 * 4),
                                          *(undefined4 *)(iVar14 + iVar6 * 4));
                if (fVar8 < fVar17) {
                  fVar17 = fVar8;
                }
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 != 10);
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 <= param_5);
        iVar11 = iVar11 + 1;
      } while (iVar11 <= param_5);
      iVar12 = iVar12 + 1;
    } while (iVar12 <= param_5);
  }
  if (fVar17 == fVar3) {
    fVar17 = _UNK_01033ba4;
  }
  return fVar17;
}

