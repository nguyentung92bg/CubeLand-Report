/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$AppendSharpFace
void Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendSharpFace (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_int__o* triangles, UnityEngine_Vector3_o halfExtents, int32_t faceAxis, int32_t axis0, int32_t axis1, int32_t sign, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$AppendSharpFace
   void Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendSharpFace
   (System_Collections_Generic_List_Vector3__o* vertices,
   System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_int__o* triangles, UnityEngine_Vector3_o halfExtents,
   int32_t faceAxis, int32_t axis0, int32_t axis1, int32_t sign, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendSharpFace_101c5c0
               (int param_1,int param_2,int param_3,int param_4,float param_5,float param_6,
               float param_7,int param_8,int param_9,int param_10,int param_11)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  undefined4 *puVar6;
  float *pfVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  uint in_fpscr;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float afStack_80 [6];
  
  pcVar11 = (char *)(_UNK_0102cfa4 + 0x102c5e8);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102cfa8 + 0x102c620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102cfac + 0x102c62c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102cfb0 + 0x102c638));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102cfb4 + 0x102c644));
    *pcVar11 = '\x01';
  }
  afStack_80[5] = 0.0;
  afStack_80[4] = 0.0;
  afStack_80[3] = 0.0;
  afStack_80[2] = 0.0;
  afStack_80[1] = 0.0;
  afStack_80[0] = 0.0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar12 = *(int *)(param_1 + 0xc);
  fVar21 = param_5;
  if ((((param_9 == 0) || (fVar21 = param_7, param_9 == 2)) || (fVar21 = param_6, param_9 == 1)) &&
     (((fVar22 = param_5, param_10 == 0 || (fVar22 = param_7, param_10 == 2)) ||
      (fVar22 = param_6, param_10 == 1)))) {
    if (*(char *)(_UNK_0102cfc4 + 0x102c6d4) == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0102cfc8 + 0x102c6e8));
      *(undefined1 *)(_UNK_0102cfcc + 0x102c6f8) = 1;
    }
    puVar6 = *(undefined4 **)(**(int **)(_UNK_0102cfd0 + 0x102c708) + 0x5c);
    afStack_80[5] = (float)*puVar6;
    afStack_80[4] = (float)puVar6[1];
    afStack_80[3] = (float)puVar6[2];
    if (param_8 == 0) {
      pfVar7 = afStack_80 + 5;
    }
    else if (param_8 == 2) {
      pfVar7 = afStack_80 + 3;
    }
    else {
      if (param_8 != 1) {
LAB_0102cf1c:
        thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102cfe8 + 0x102cf28));
        uVar13 = thunk_FUN_00f00cdc();
        uVar19 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102cfec + 0x102cf3c));
        System_IndexOutOfRangeException___ctor_2b69538(uVar13,uVar19,0);
        uVar19 = *(undefined4 *)(_UNK_0102cff0 + 0x102cf58);
        goto LAB_0102cf90;
      }
      pfVar7 = afStack_80 + 4;
    }
    fVar23 = (float)VectorSignedToFloat(param_11,(byte)(in_fpscr >> 0x16) & 3);
    *pfVar7 = fVar23;
    fVar4 = afStack_80[5];
    fVar3 = afStack_80[4];
    fVar2 = afStack_80[3];
    iVar8 = 0;
    piVar17 = *(int **)(_UNK_0102cfd4 + 0x102c790);
    do {
      uVar19 = VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
      uVar13 = 0;
      bVar5 = true;
      fVar20 = fVar21;
      if (iVar8 == 0) {
        fVar20 = -fVar21;
      }
      do {
        bVar1 = bVar5;
        if (*(char *)(_UNK_0102cfd8 + 0x102c7d0) == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0102cfdc + 0x102c7e4));
          *(undefined1 *)(_UNK_0102cfe0 + 0x102c7f4) = 1;
        }
        puVar6 = *(undefined4 **)(**(int **)(_UNK_0102cfe4 + 0x102c808) + 0x5c);
        afStack_80[2] = (float)*puVar6;
        afStack_80[1] = (float)puVar6[1];
        afStack_80[0] = (float)puVar6[2];
        pfVar10 = afStack_80 + 2;
        pfVar7 = pfVar10;
        fVar18 = param_5;
        if (param_8 != 0) {
          if (param_8 == 1) {
            pfVar7 = afStack_80 + 1;
            fVar18 = param_6;
          }
          else {
            if (param_8 != 2) goto LAB_0102cf58;
            pfVar7 = afStack_80;
            fVar18 = param_7;
          }
        }
        *pfVar7 = fVar18 * fVar23;
        pfVar7 = pfVar10;
        if (param_9 != 0) {
          if (param_9 == 2) {
            pfVar7 = afStack_80;
          }
          else {
            if (param_9 != 1) goto LAB_0102cf1c;
            pfVar7 = afStack_80 + 1;
          }
        }
        fVar18 = fVar22;
        if (bVar1) {
          fVar18 = -fVar22;
        }
        *pfVar7 = fVar20;
        if (param_10 != 0) {
          if (param_10 == 2) {
            pfVar10 = afStack_80;
          }
          else {
            if (param_10 != 1) goto LAB_0102cf1c;
            pfVar10 = afStack_80 + 1;
          }
        }
        *pfVar10 = fVar18;
        iVar16 = *piVar17;
        iVar14 = *(int *)(param_1 + 8);
        uVar15 = *(uint *)(param_1 + 0xc);
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar15 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(param_1 + 0xc) = uVar15 + 1;
          iVar14 = iVar14 + uVar15 * 0xc;
          *(float *)(iVar14 + 0x10) = afStack_80[2];
          *(float *)(iVar14 + 0x14) = afStack_80[1];
          *(float *)(iVar14 + 0x18) = afStack_80[0];
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_26fcc04
                    (param_1,afStack_80[2],afStack_80[1],afStack_80[0],
                     *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38));
        }
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar14 = *(int *)(param_2 + 8);
        uVar15 = *(uint *)(param_2 + 0xc);
        iVar16 = *piVar17;
        *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar15 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(param_2 + 0xc) = uVar15 + 1;
          iVar14 = iVar14 + uVar15 * 0xc;
          *(float *)(iVar14 + 0x10) = fVar4;
          *(float *)(iVar14 + 0x14) = fVar3;
          *(float *)(iVar14 + 0x18) = fVar2;
        }
        else {
          System_Collections_Generic_List_Vector3___AddWithResize_26fcc04
                    (param_2,fVar4,fVar3,fVar2,
                     *(undefined4 *)(*(int *)(*(int *)(iVar16 + 0x10) + 0x60) + 0x38));
        }
        if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar14 = *(int *)(param_3 + 8);
        uVar15 = *(uint *)(param_3 + 0xc);
        piVar9 = *(int **)(_UNK_0102cff4 + 0x102ca0c);
        *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar15 < *(uint *)(iVar14 + 0xc)) {
          *(uint *)(param_3 + 0xc) = uVar15 + 1;
          iVar14 = iVar14 + uVar15 * 8;
          *(undefined4 *)(iVar14 + 0x14) = uVar19;
          *(undefined4 *)(iVar14 + 0x10) = uVar13;
        }
        else {
          System_Collections_Generic_List_Vector2___AddWithResize_26f9f1c
                    (param_3,uVar13,uVar19,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar9 + 0x10) + 0x60) + 0x38));
        }
        uVar13 = 0x3f800000;
        bVar5 = false;
      } while (bVar1);
      iVar8 = iVar8 + 1;
      if (iVar8 == 2) {
        if (param_11 < 1) {
          if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar8 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          piVar17 = *(int **)(_UNK_0102cffc + 0x102cb24);
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar15 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar8 + uVar15 * 4 + 0x10) = iVar12;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar12,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
          }
          iVar8 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar14 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar15 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar8 + uVar15 * 4 + 0x10) = iVar12 + 1;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar12 + 1,
                       *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
          }
          iVar14 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar8 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar16 = iVar12 + 3;
          if (uVar15 < *(uint *)(iVar14 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar14 + uVar15 * 4 + 0x10) = iVar16;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar16,
                       *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
          iVar14 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar8 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar15 < *(uint *)(iVar14 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar14 + uVar15 * 4 + 0x10) = iVar12;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar12,
                       *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
          iVar14 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar8 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar15 < *(uint *)(iVar14 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar14 + uVar15 * 4 + 0x10) = iVar16;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar16,
                       *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
          iVar8 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar14 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar12 = iVar12 + 2;
        }
        else {
          if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar8 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          piVar17 = *(int **)(_UNK_0102cff8 + 0x102cac4);
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar15 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar8 + uVar15 * 4 + 0x10) = iVar12;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar12,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar17 + 0x10) + 0x60) + 0x38));
          }
          iVar8 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar14 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar15 < *(uint *)(iVar8 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar8 + uVar15 * 4 + 0x10) = iVar12 + 2;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar12 + 2,
                       *(undefined4 *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38));
          }
          iVar14 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar8 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar16 = iVar12 + 3;
          if (uVar15 < *(uint *)(iVar14 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar14 + uVar15 * 4 + 0x10) = iVar16;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar16,
                       *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
          iVar14 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar8 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar15 < *(uint *)(iVar14 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar14 + uVar15 * 4 + 0x10) = iVar12;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar12,
                       *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
          iVar14 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar8 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar15 < *(uint *)(iVar14 + 0xc)) {
            *(uint *)(param_4 + 0xc) = uVar15 + 1;
            *(int *)(iVar14 + uVar15 * 4 + 0x10) = iVar16;
          }
          else {
            System_Collections_Generic_List_int___AddWithResize_261b948
                      (param_4,iVar16,
                       *(undefined4 *)(*(int *)(*(int *)(iVar8 + 0x10) + 0x60) + 0x38));
          }
          iVar8 = *(int *)(param_4 + 8);
          uVar15 = *(uint *)(param_4 + 0xc);
          iVar14 = *piVar17;
          *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar12 = iVar12 + 1;
        }
        if (uVar15 < *(uint *)(iVar8 + 0xc)) {
          *(uint *)(param_4 + 0xc) = uVar15 + 1;
          *(int *)(iVar8 + uVar15 * 4 + 0x10) = iVar12;
          return;
        }
        uVar15 = *(uint *)(param_4 + 0xc);
        System_Collections_Generic_List_int___EnsureCapacity_261bf3c
                  (param_4,uVar15 + 1,
                   *(undefined4 *)
                    (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar14 + 0x10) + 0x60) + 0x38) +
                                      0x10) + 0x60) + 0x3c));
        iVar8 = *(int *)(param_4 + 8);
        *(uint *)(param_4 + 0xc) = uVar15 + 1;
        if (iVar8 != 0) {
          if (uVar15 < *(uint *)(iVar8 + 0xc)) {
            *(int *)(iVar8 + uVar15 * 4 + 0x10) = iVar12;
            return;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    } while( true );
  }
LAB_0102cf58:
  thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102cfb8 + 0x102cf64));
  uVar13 = thunk_FUN_00f00cdc();
  uVar19 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102cfbc + 0x102cf78));
  System_IndexOutOfRangeException___ctor_2b69538(uVar13,uVar19,0);
  uVar19 = *(undefined4 *)(_UNK_0102cfc0 + 0x102cf94);
LAB_0102cf90:
  uVar19 = thunk_FUN_00f23fd0(uVar19);
  func_0x00ec3920(uVar13,uVar19);
                    /* WARNING: Subroutine does not return */
  FUN_00ec3760();
}

