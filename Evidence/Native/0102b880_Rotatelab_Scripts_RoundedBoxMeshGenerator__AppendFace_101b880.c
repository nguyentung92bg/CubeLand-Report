/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$AppendFace
void Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendFace (System_Collections_Generic_List_Vector3__o* vertices, System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_Vector2__o* uvs, System_Collections_Generic_List_int__o* triangles, System_Single_array_array* axes, UnityEngine_Vector3_o halfExtents, UnityEngine_Vector3_o innerExtents, float radius, int32_t faceAxis, int32_t axis0, int32_t axis1, int32_t sign, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator$$AppendFace
   void Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendFace
   (System_Collections_Generic_List_Vector3__o* vertices,
   System_Collections_Generic_List_Vector3__o* normals, System_Collections_Generic_List_Vector2__o*
   uvs, System_Collections_Generic_List_int__o* triangles, System_Single_array_array* axes,
   UnityEngine_Vector3_o halfExtents, UnityEngine_Vector3_o innerExtents, float radius, int32_t
   faceAxis, int32_t axis0, int32_t axis1, int32_t sign, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedBoxMeshGenerator__AppendFace_101b880
               (int param_1,int param_2,int param_3,int param_4,int param_5,float param_6,
               float param_7,float param_8,float param_9,float param_10,float param_11,
               float param_12,int param_13,uint param_14,uint param_15,int param_16)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  int iVar15;
  float *pfVar16;
  uint uVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iStack_a8;
  uint uStack_90;
  float afStack_80 [6];
  
  pcVar13 = (char *)(_UNK_0102c528 + 0x102b8b0);
  if (*pcVar13 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102c52c + 0x102b8c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102c530 + 0x102b8d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102c534 + 0x102b8dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102c538 + 0x102b8e8));
    *pcVar13 = '\x01';
  }
  afStack_80[5] = 0.0;
  afStack_80[4] = 0.0;
  afStack_80[3] = 0.0;
  afStack_80[2] = 0.0;
  afStack_80[1] = 0.0;
  afStack_80[0] = 0.0;
  if (param_5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(param_5 + 0xc) <= param_14) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar8 = *(int *)(param_5 + param_14 * 4 + 0x10);
  if (*(uint *)(param_5 + 0xc) <= param_15) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar9 = *(int *)(param_5 + param_15 * 4 + 0x10);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = *(uint *)(iVar8 + 0xc);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar14 = *(uint *)(iVar9 + 0xc);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iStack_a8 = *(int *)(param_1 + 0xc);
  if (0 < (int)uVar11) {
    fVar27 = (float)VectorSignedToFloat(param_16,(byte)(in_fpscr >> 0x16) & 3);
    fVar18 = (float)VectorSignedToFloat(uVar11 - 1,(byte)(in_fpscr >> 0x16) & 3);
    fVar19 = (float)VectorSignedToFloat(uVar14 - 1,(byte)(in_fpscr >> 0x16) & 3);
    uStack_90 = 0;
    do {
      if (0 < (int)uVar14) {
        uVar12 = 0;
        fVar20 = (float)VectorSignedToFloat(uStack_90,(byte)(in_fpscr >> 0x16) & 3);
        fVar20 = fVar20 / fVar18;
        if (uVar11 == 1) {
          fVar20 = _UNK_0102bd94;
        }
        pfVar16 = (float *)(iVar9 + 0x10);
        do {
          if (*(char *)(_UNK_0102c53c + 0x102ba54) == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0102c540 + 0x102ba68));
            *(undefined1 *)(_UNK_0102c544 + 0x102ba78) = 1;
          }
          pfVar2 = *(float **)(**(int **)(_UNK_0102c548 + 0x102ba88) + 0x5c);
          afStack_80[5] = *pfVar2;
          afStack_80[4] = pfVar2[1];
          afStack_80[3] = pfVar2[2];
          if (param_13 == 0) {
            pfVar2 = afStack_80 + 5;
            fVar25 = param_6;
          }
          else if (param_13 == 1) {
            pfVar2 = afStack_80 + 4;
            fVar25 = param_7;
          }
          else {
            if (param_13 != 2) {
              thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102c54c + 0x102c4e8));
              uVar5 = thunk_FUN_00f00cdc();
              uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102c550 + 0x102c4fc));
              System_IndexOutOfRangeException___ctor_2b69538(uVar5,uVar6,0);
              uVar6 = *(undefined4 *)(_UNK_0102c554 + 0x102c518);
              goto LAB_0102c514;
            }
            pfVar2 = afStack_80 + 3;
            fVar25 = param_8;
          }
          *pfVar2 = fVar25 * fVar27;
          if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar8 + 0xc) <= uStack_90) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          if (param_14 != 0) {
            if (param_14 == 2) {
              pfVar2 = afStack_80 + 3;
              goto LAB_0102bb40;
            }
            if (param_14 == 1) {
              pfVar2 = afStack_80 + 4;
              goto LAB_0102bb40;
            }
LAB_0102c4a0:
            thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102c578 + 0x102c4ac));
            uVar5 = thunk_FUN_00f00cdc();
            uVar6 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0102c57c + 0x102c4c0));
            System_IndexOutOfRangeException___ctor_2b69538(uVar5,uVar6,0);
            uVar6 = *(undefined4 *)(_UNK_0102c580 + 0x102c4dc);
LAB_0102c514:
            uVar6 = thunk_FUN_00f23fd0(uVar6);
            func_0x00ec3920(uVar5,uVar6);
                    /* WARNING: Subroutine does not return */
            FUN_00ec3760();
          }
          pfVar2 = afStack_80 + 5;
LAB_0102bb40:
          *pfVar2 = *(float *)(iVar8 + uStack_90 * 4 + 0x10);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar9 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          if (param_15 == 0) {
            pfVar2 = afStack_80 + 5;
          }
          else if (param_15 == 2) {
            pfVar2 = afStack_80 + 3;
          }
          else {
            if (param_15 != 1) goto LAB_0102c4a0;
            pfVar2 = afStack_80 + 4;
          }
          *pfVar2 = *pfVar16;
          fVar25 = afStack_80[5];
          if (param_9 < afStack_80[5]) {
            fVar25 = param_9;
          }
          fVar26 = afStack_80[4];
          if (param_10 < afStack_80[4]) {
            fVar26 = param_10;
          }
          fVar28 = afStack_80[3];
          if (param_11 < afStack_80[3]) {
            fVar28 = param_11;
          }
          if (afStack_80[5] < -param_9) {
            fVar25 = -param_9;
          }
          uVar17 = in_fpscr & 0xfffffff | (uint)(afStack_80[3] < -param_11) << 0x1f;
          fVar22 = afStack_80[5] - fVar25;
          if (afStack_80[4] < -param_10) {
            fVar26 = -param_10;
          }
          fVar23 = afStack_80[4] - fVar26;
          if (SUB41(uVar17 >> 0x1f,0)) {
            fVar28 = -param_11;
          }
          fVar24 = afStack_80[3] - fVar28;
          afStack_80[0] = fVar24;
          afStack_80[1] = fVar23;
          afStack_80[2] = fVar22;
          if (*(char *)(_UNK_0102c558 + 0x102bbc4) == '\0') {
            FUN_00ec37c0(*(undefined4 *)(_UNK_0102c55c + 0x102bc2c));
            *(undefined1 *)(_UNK_0102c560 + 0x102bc3c) = 1;
          }
          if (*(int *)(**(int **)(_UNK_0102c564 + 0x102bc48) + 0x74) == 0) {
            FUN_00ec3934();
          }
          fVar21 = SQRT(fVar23 * fVar23 + fVar22 * fVar22 + fVar24 * fVar24);
          uVar17 = uVar17 & 0xfffffff | (uint)(fVar21 < _UNK_0102c038) << 0x1f |
                   (uint)(fVar21 == _UNK_0102c038) << 0x1e;
          in_fpscr = uVar17 | (uint)(NAN(fVar21) || NAN(_UNK_0102c038)) << 0x1c;
          bVar1 = (byte)(uVar17 >> 0x18);
          if ((bool)(bVar1 >> 6 & 1) || bVar1 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
            if (*(char *)(_UNK_0102c568 + 0x102bca0) == '\0') {
              FUN_00ec37c0(*(undefined4 *)(_UNK_0102c56c + 0x102bcb4));
              *(undefined1 *)(_UNK_0102c570 + 0x102bcc4) = 1;
            }
            pfVar2 = *(float **)(**(int **)(_UNK_0102c574 + 0x102bcd4) + 0x5c);
            afStack_80[2] = *pfVar2;
            afStack_80[1] = pfVar2[1];
            afStack_80[0] = pfVar2[2];
            if (param_13 == 0) {
              pfVar2 = afStack_80 + 2;
            }
            else if (param_13 == 2) {
              pfVar2 = afStack_80;
            }
            else {
              if (param_13 != 1) goto LAB_0102c4a0;
              pfVar2 = afStack_80 + 1;
            }
            *pfVar2 = fVar27;
          }
          else {
            afStack_80[2] = fVar22 / fVar21;
            afStack_80[1] = fVar23 / fVar21;
            afStack_80[0] = fVar24 / fVar21;
          }
          fVar24 = afStack_80[2];
          fVar23 = afStack_80[1];
          fVar22 = afStack_80[0];
          if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar15 = *(int *)(param_1 + 8);
          uVar17 = *(uint *)(param_1 + 0xc);
          piVar7 = *(int **)(_UNK_0102c584 + 0x102bd50);
          *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          fVar28 = fVar28 + afStack_80[0] * param_12;
          fVar26 = fVar26 + afStack_80[1] * param_12;
          fVar25 = fVar25 + afStack_80[2] * param_12;
          if (uVar17 < *(uint *)(iVar15 + 0xc)) {
            *(uint *)(param_1 + 0xc) = uVar17 + 1;
            iVar15 = iVar15 + uVar17 * 0xc;
            *(float *)(iVar15 + 0x10) = fVar25;
            *(float *)(iVar15 + 0x14) = fVar26;
            *(float *)(iVar15 + 0x18) = fVar28;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_26fcc04
                      (param_1,fVar25,fVar26,fVar28,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
          }
          if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar15 = *(int *)(param_2 + 8);
          uVar17 = *(uint *)(param_2 + 0xc);
          piVar7 = *(int **)(_UNK_0102c588 + 0x102bdf8);
          *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + 1;
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar17 < *(uint *)(iVar15 + 0xc)) {
            *(uint *)(param_2 + 0xc) = uVar17 + 1;
            iVar15 = iVar15 + uVar17 * 0xc;
            *(float *)(iVar15 + 0x10) = fVar24;
            *(float *)(iVar15 + 0x14) = fVar23;
            *(float *)(iVar15 + 0x18) = fVar22;
          }
          else {
            System_Collections_Generic_List_Vector3___AddWithResize_26fcc04
                      (param_2,fVar24,fVar23,fVar22,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
          }
          fVar25 = _UNK_0102bd94;
          if (1 < (int)uVar14) {
            fVar25 = (float)VectorSignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
            fVar25 = fVar25 / fVar19;
          }
          if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar15 = *(int *)(param_3 + 8);
          uVar17 = *(uint *)(param_3 + 0xc);
          piVar7 = *(int **)(_UNK_0102c58c + 0x102bea8);
          *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) + 1;
          if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (uVar17 < *(uint *)(iVar15 + 0xc)) {
            *(uint *)(param_3 + 0xc) = uVar17 + 1;
            iVar15 = iVar15 + uVar17 * 8;
            *(float *)(iVar15 + 0x10) = fVar25;
            *(float *)(iVar15 + 0x14) = fVar20;
          }
          else {
            System_Collections_Generic_List_Vector2___AddWithResize_26f9f1c
                      (param_3,fVar25,fVar20,
                       *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
          }
          uVar12 = uVar12 + 1;
          pfVar16 = pfVar16 + 1;
        } while (uVar14 != uVar12);
      }
      uStack_90 = uStack_90 + 1;
    } while (uStack_90 != uVar11);
  }
  if (0 < (int)(uVar11 - 1)) {
    iVar8 = 0;
    do {
      if (0 < (int)(uVar14 - 1)) {
        uVar12 = 1;
        iVar9 = iStack_a8;
        do {
          iVar15 = uVar14 + iVar9;
          iVar3 = iVar15 + 1;
          iVar4 = iVar9 + 1;
          if (param_16 < 1) {
            if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar10 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c5a8 + 0x102c00c);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar10 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar10 + uVar17 * 4 + 0x10) = iVar9;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar9,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar10 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c5ac + 0x102c280);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar10 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar10 + uVar17 * 4 + 0x10) = iVar4;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar4,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar10 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c5b0 + 0x102c2e8);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar10 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar10 + uVar17 * 4 + 0x10) = iVar3;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar3,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar10 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c5b4 + 0x102c350);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar10 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar10 + uVar17 * 4 + 0x10) = iVar9;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar9,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar9 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c5b8 + 0x102c3b4);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar9 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar9 + uVar17 * 4 + 0x10) = iVar3;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar3,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar9 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c5bc + 0x102c420);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(uint *)(iVar9 + 0xc) <= uVar17) {
              iVar9 = *(int *)(*piVar7 + 0x10);
              goto LAB_0102c454;
            }
            *(uint *)(param_4 + 0xc) = uVar17 + 1;
            *(int *)(iVar9 + uVar17 * 4 + 0x10) = iVar15;
          }
          else {
            if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar10 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c590 + 0x102bfb4);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar10 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar10 + uVar17 * 4 + 0x10) = iVar9;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar9,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar10 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c594 + 0x102c078);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar10 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar10 + uVar17 * 4 + 0x10) = iVar15;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar15,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar15 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c598 + 0x102c0dc);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar15 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar15 + uVar17 * 4 + 0x10) = iVar3;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar3,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar15 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c59c + 0x102c144);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar15 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar15 + uVar17 * 4 + 0x10) = iVar9;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar9,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar9 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c5a0 + 0x102c1a8);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar9 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar9 + uVar17 * 4 + 0x10) = iVar3;
            }
            else {
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar3,
                         *(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
            }
            iVar9 = *(int *)(param_4 + 8);
            uVar17 = *(uint *)(param_4 + 0xc);
            piVar7 = *(int **)(_UNK_0102c5a4 + 0x102c210);
            *(int *)(param_4 + 0x10) = *(int *)(param_4 + 0x10) + 1;
            if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (uVar17 < *(uint *)(iVar9 + 0xc)) {
              *(uint *)(param_4 + 0xc) = uVar17 + 1;
              *(int *)(iVar9 + uVar17 * 4 + 0x10) = iVar4;
            }
            else {
              iVar9 = *(int *)(*piVar7 + 0x10);
              iVar15 = iVar4;
LAB_0102c454:
              System_Collections_Generic_List_int___AddWithResize_261b948
                        (param_4,iVar15,*(undefined4 *)(*(int *)(iVar9 + 0x60) + 0x38));
            }
          }
          uVar12 = uVar12 + 1;
          iVar9 = iVar4;
        } while (uVar14 != uVar12);
      }
      iStack_a8 = iStack_a8 + uVar14;
      iVar8 = iVar8 + 1;
    } while (iVar8 != uVar11 - 1);
  }
  return;
}

