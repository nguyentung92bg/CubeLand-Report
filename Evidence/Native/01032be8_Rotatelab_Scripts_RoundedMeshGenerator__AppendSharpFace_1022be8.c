/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$AppendSharpFace
void Rotatelab_Scripts_RoundedMeshGenerator__AppendSharpFace (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_int__o* triangles, UnityEngine_Vector3Int_o voxel, int32_t faceAxis, int32_t sign, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$AppendSharpFace
   void Rotatelab_Scripts_RoundedMeshGenerator__AppendSharpFace
   (System_Collections_Generic_List_Vector3__o* vertices,
   System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_int__o*
   triangles, UnityEngine_Vector3Int_o voxel, int32_t faceAxis, int32_t sign, const MethodInfo*
   method); */

void Rotatelab_Scripts_RoundedMeshGenerator__AppendSharpFace_1022be8
               (int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,int param_7,int param_8)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  uint in_fpscr;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float afStack_7c [7];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  pcVar12 = (char *)(_UNK_01033528 + 0x1032c10);
  uStack_60 = param_5;
  uStack_5c = param_6;
  afStack_7c[6] = (float)param_4;
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103352c + 0x1032c38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01033530 + 0x1032c44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01033534 + 0x1032c50));
    *pcVar12 = '\x01';
  }
  afStack_7c[5] = 0.0;
  afStack_7c[4] = 0.0;
  afStack_7c[3] = 0.0;
  afStack_7c[2] = 0.0;
  afStack_7c[1] = 0.0;
  afStack_7c[0] = 0.0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = *(int *)(param_1 + 0xc);
  if (*(char *)(_UNK_01033538 + 0x1032c98) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103353c + 0x1032cb0));
    *(undefined1 *)(_UNK_01033540 + 0x1032cc0) = 1;
  }
  puVar6 = *(undefined4 **)(**(int **)(_UNK_01033544 + 0x1032cd0) + 0x5c);
  afStack_7c[5] = (float)*puVar6;
  afStack_7c[4] = (float)puVar6[1];
  afStack_7c[3] = (float)puVar6[2];
  if (param_7 == 0) {
    pfVar7 = afStack_7c + 5;
  }
  else if (param_7 == 2) {
    pfVar7 = afStack_7c + 3;
  }
  else {
    if (param_7 != 1) {
LAB_010334dc:
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0103355c + 0x10334e8));
      uVar8 = thunk_FUN_00f00cdc();
      uVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01033560 + 0x10334fc));
      System_IndexOutOfRangeException___ctor_2b69538(uVar8,uVar10,0);
      uVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01033564 + 0x1033518));
      func_0x00ec3920(uVar8,uVar10);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
    pfVar7 = afStack_7c + 4;
  }
  pfVar11 = afStack_7c + 6;
  fVar22 = (float)VectorSignedToFloat(param_8,(byte)(in_fpscr >> 0x16) & 3);
  iVar14 = (param_7 + 2) % 3;
  iVar17 = (param_7 + 1) % 3;
  *pfVar7 = fVar22;
  uVar8 = func_0x010120c4(pfVar11,iVar17,0);
  fVar23 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
  uVar8 = func_0x010120c4(pfVar11,iVar17,0);
  fVar24 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
  uVar8 = func_0x010120c4(pfVar11,iVar14,0);
  fVar25 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
  uVar8 = func_0x010120c4(pfVar11,iVar14,0);
  fVar4 = afStack_7c[5];
  fVar3 = afStack_7c[4];
  fVar2 = afStack_7c[3];
  fVar20 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
  iVar9 = 0;
  piVar19 = *(int **)(_UNK_01033548 + 0x1032df8);
  do {
    fVar26 = fVar24 + 0.5;
    if (iVar9 == 0) {
      fVar26 = fVar23 + -0.5;
    }
    bVar5 = true;
    do {
      bVar1 = bVar5;
      if (*(char *)(_UNK_0103354c + 0x1032e20) == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01033550 + 0x1032e34));
        *(undefined1 *)(_UNK_01033554 + 0x1032e44) = 1;
      }
      puVar6 = *(undefined4 **)(**(int **)(_UNK_01033558 + 0x1032e50) + 0x5c);
      afStack_7c[2] = (float)*puVar6;
      afStack_7c[1] = (float)puVar6[1];
      afStack_7c[0] = (float)puVar6[2];
      uVar8 = func_0x010120c4(afStack_7c + 6,param_7,0);
      pfVar11 = afStack_7c + 2;
      pfVar7 = pfVar11;
      if (param_7 != 0) {
        if (param_7 == 2) {
          pfVar7 = afStack_7c;
        }
        else {
          if (param_7 != 1) goto LAB_010334dc;
          pfVar7 = afStack_7c + 1;
        }
      }
      fVar21 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
      *pfVar7 = fVar22 * 0.5 + fVar21;
      pfVar7 = pfVar11;
      if (iVar17 != 0) {
        if (iVar17 == 2) {
          pfVar7 = afStack_7c;
        }
        else {
          if (iVar17 != 1) goto LAB_010334dc;
          pfVar7 = afStack_7c + 1;
        }
      }
      fVar21 = fVar20 + 0.5;
      if (bVar1) {
        fVar21 = fVar25 + -0.5;
      }
      *pfVar7 = fVar26;
      if (iVar14 != 0) {
        if (iVar14 == 2) {
          pfVar11 = afStack_7c;
        }
        else {
          if (iVar14 != 1) goto LAB_010334dc;
          pfVar11 = afStack_7c + 1;
        }
      }
      *pfVar11 = fVar21;
      iVar18 = *piVar19;
      iVar15 = *(int *)(param_1 + 8);
      uVar16 = *(uint *)(param_1 + 0xc);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar16 < *(uint *)(iVar15 + 0xc)) {
        *(uint *)(param_1 + 0xc) = uVar16 + 1;
        iVar15 = iVar15 + uVar16 * 0xc;
        *(float *)(iVar15 + 0x10) = afStack_7c[2];
        *(float *)(iVar15 + 0x14) = afStack_7c[1];
        *(float *)(iVar15 + 0x18) = afStack_7c[0];
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_26fcc04
                  (param_1,afStack_7c[2],afStack_7c[1],afStack_7c[0],
                   *(undefined4 *)(*(int *)(*(int *)(iVar18 + 0x10) + 0x60) + 0x38));
      }
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar15 = *(int *)(param_2 + 8);
      uVar16 = *(uint *)(param_2 + 0xc);
      iVar18 = *piVar19;
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (uVar16 < *(uint *)(iVar15 + 0xc)) {
        *(uint *)(param_2 + 0xc) = uVar16 + 1;
        iVar15 = iVar15 + uVar16 * 0xc;
        *(float *)(iVar15 + 0x10) = fVar4;
        *(float *)(iVar15 + 0x14) = fVar3;
        *(float *)(iVar15 + 0x18) = fVar2;
      }
      else {
        System_Collections_Generic_List_Vector3___AddWithResize_26fcc04
                  (param_2,fVar4,fVar3,fVar2,
                   *(undefined4 *)(*(int *)(*(int *)(iVar18 + 0x10) + 0x60) + 0x38));
      }
      bVar5 = false;
    } while (bVar1);
    iVar9 = iVar9 + 1;
    if (iVar9 == 2) {
      if (param_8 < 1) {
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        piVar19 = *(int **)(_UNK_0103356c + 0x1033100);
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar16 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar9 + uVar16 * 4 + 0x10) = iVar13;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar13,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
        }
        iVar9 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar14 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar16 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar9 + uVar16 * 4 + 0x10) = iVar13 + 1;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar13 + 1,
                     *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
        }
        iVar14 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar9 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar17 = iVar13 + 3;
        if (uVar16 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar14 + uVar16 * 4 + 0x10) = iVar17;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar17,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
          ;
        }
        iVar14 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar9 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar16 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar14 + uVar16 * 4 + 0x10) = iVar13;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar13,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
          ;
        }
        iVar14 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar9 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar16 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar14 + uVar16 * 4 + 0x10) = iVar17;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar17,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
          ;
        }
        iVar9 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar14 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar13 = iVar13 + 2;
      }
      else {
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        piVar19 = *(int **)(_UNK_01033568 + 0x10330a0);
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar16 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar9 + uVar16 * 4 + 0x10) = iVar13;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar13,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar19 + 0x10) + 0x60) + 0x38));
        }
        iVar9 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar14 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar16 < *(uint *)(iVar9 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar9 + uVar16 * 4 + 0x10) = iVar13 + 2;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar13 + 2,
                     *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
        }
        iVar14 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar9 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar17 = iVar13 + 3;
        if (uVar16 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar14 + uVar16 * 4 + 0x10) = iVar17;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar17,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
          ;
        }
        iVar14 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar9 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar16 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar14 + uVar16 * 4 + 0x10) = iVar13;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar13,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
          ;
        }
        iVar14 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar9 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar16 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar16 + 1;
          *(int *)(iVar14 + uVar16 * 4 + 0x10) = iVar17;
        }
        else {
          System_Collections_Generic_List_int___AddWithResize_261b948
                    (param_3,iVar17,*(undefined4 *)(*(int *)(*(int *)(iVar9 + 0x10) + 0x60) + 0x38))
          ;
        }
        iVar9 = *(int *)(param_3 + 8);
        uVar16 = *(uint *)(param_3 + 0xc);
        iVar14 = *piVar19;
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar13 = iVar13 + 1;
      }
      if (uVar16 < *(uint *)(iVar9 + 0xc)) {
        *(uint *)(param_3 + 0xc) = uVar16 + 1;
        *(int *)(iVar9 + uVar16 * 4 + 0x10) = iVar13;
      }
      else {
        System_Collections_Generic_List_int___AddWithResize_261b948
                  (param_3,iVar13,*(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
      }
      return;
    }
  } while( true );
}

