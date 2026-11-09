/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$WriteRibbonVertices
void Rotatelab_Scripts_SeamRibbonMeshGenerator__WriteRibbonVertices (System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample__o* samples, System_Single_array* arcLengths, float totalPerimeter, int32_t tileCount, int32_t axisU, int32_t axisV, int32_t seamAxis, float topSeam, float bottomSeam, UnityEngine_Vector3_array* vertices, UnityEngine_Vector3_array* normals, UnityEngine_Vector2_array* uvs, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.SeamRibbonMeshGenerator$$WriteRibbonVertices
   void Rotatelab_Scripts_SeamRibbonMeshGenerator__WriteRibbonVertices
   (System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample__o* samples,
   System_Single_array* arcLengths, float totalPerimeter, int32_t tileCount, int32_t axisU, int32_t
   axisV, int32_t seamAxis, float topSeam, float bottomSeam, UnityEngine_Vector3_array* vertices,
   UnityEngine_Vector3_array* normals, UnityEngine_Vector2_array* uvs, const MethodInfo* method); */

void Rotatelab_Scripts_SeamRibbonMeshGenerator__WriteRibbonVertices_1025974
               (int param_1,int param_2,float param_3,undefined4 param_4,int param_5,int param_6,
               int param_7,float param_8,float param_9,int param_10,int param_11,float *param_12)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 extraout_r1;
  char *pcVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  float fVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float afStack_8c [9];
  
  pcVar12 = (char *)(_UNK_01035f38 + 0x10359a0);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01035f3c + 0x10359b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01035f40 + 0x10359c0));
    *pcVar12 = '\x01';
  }
  fVar5 = _UNK_01035d24;
  fVar4 = _UNK_01035d20;
  fVar3 = _UNK_01035d1c;
  fVar2 = _UNK_01035d18;
  afStack_8c[8] = 0.0;
  afStack_8c[7] = 0.0;
  afStack_8c[6] = 0.0;
  afStack_8c[5] = 0.0;
  afStack_8c[4] = 0.0;
  afStack_8c[3] = 0.0;
  afStack_8c[2] = 0.0;
  afStack_8c[1] = 0.0;
  afStack_8c[0] = 0.0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar13 = *(uint *)(param_1 + 0xc);
  if (uVar13 < 0x7fffffff) {
    fVar22 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
    pfVar14 = (float *)(param_2 + 0x10);
    iStack_a8 = 0;
    fStack_a0 = 1.4013e-45;
    uStack_a4 = 0;
    pfVar1 = param_12;
    do {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      FUN_00f88e68(uStack_a4,uVar13);
      System_Collections_Generic_List_SeamRibbonMeshGenerator_PerimeterSample___get_Item_2764c2c
                (&fStack_9c,param_1,extraout_r1,**(undefined4 **)(_UNK_01035f44 + 0x1035aa8));
      fVar23 = fStack_90;
      fVar21 = fStack_94;
      fVar9 = fStack_98;
      fVar19 = fStack_9c;
      pcVar12 = (char *)(_UNK_01035f48 + 0x1035ad0);
      if (*pcVar12 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01035f4c + 0x1035ae4));
        *pcVar12 = '\x01';
      }
      pfVar7 = *(float **)(**(int **)(_UNK_01035f50 + 0x1035afc) + 0x5c);
      afStack_8c[8] = *pfVar7;
      afStack_8c[7] = pfVar7[1];
      afStack_8c[6] = pfVar7[2];
      pfVar8 = afStack_8c + 8;
      pfVar7 = pfVar8;
      if (param_5 != 0) {
        if (param_5 == 2) {
          pfVar7 = afStack_8c + 6;
        }
        else {
          if (param_5 != 1) goto LAB_01035eec;
          pfVar7 = afStack_8c + 7;
        }
      }
      *pfVar7 = fVar21;
      if (param_6 != 0) {
        if (param_6 == 2) {
          pfVar8 = afStack_8c + 6;
        }
        else {
          if (param_6 != 1) goto LAB_01035eec;
          pfVar8 = afStack_8c + 7;
        }
      }
      *pfVar8 = fVar23;
      fVar6 = afStack_8c[8];
      fVar16 = afStack_8c[7];
      fVar23 = afStack_8c[6];
      fVar17 = afStack_8c[7] * afStack_8c[7] + afStack_8c[8] * afStack_8c[8] +
               afStack_8c[6] * afStack_8c[6];
      fVar20 = afStack_8c[7];
      fVar18 = afStack_8c[8];
      fVar21 = afStack_8c[6];
      if (fVar2 < fVar17) {
        if (*(char *)(_UNK_01035f54 + 0x1035b98) == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01035f58 + 0x1035bac));
          *(undefined1 *)(_UNK_01035f5c + 0x1035bbc) = 1;
        }
        if (*(int *)(**(int **)(_UNK_01035f60 + 0x1035bc8) + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar17 = SQRT(fVar17);
        fVar21 = fVar3;
        fVar20 = fVar3;
        fVar18 = fVar3;
        if (fVar4 < fVar17) {
          fVar21 = fVar23 / fVar17;
          fVar20 = fVar16 / fVar17;
          fVar18 = fVar6 / fVar17;
        }
        afStack_8c[6] = fVar21;
        afStack_8c[7] = fVar20;
        afStack_8c[8] = fVar18;
        if (*pcVar12 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01035f64 + 0x1035c24));
          *pcVar12 = '\x01';
        }
      }
      pfVar7 = *(float **)(**(int **)(_UNK_01035f68 + 0x1035c4c) + 0x5c);
      afStack_8c[5] = *pfVar7;
      afStack_8c[4] = pfVar7[1];
      afStack_8c[3] = pfVar7[2];
      pfVar8 = afStack_8c + 5;
      pfVar7 = pfVar8;
      if (param_5 != 0) {
        if (param_5 == 2) {
          pfVar7 = afStack_8c + 3;
        }
        else {
          if (param_5 != 1) goto LAB_01035eec;
          pfVar7 = afStack_8c + 4;
        }
      }
      *pfVar7 = fVar19;
      if (param_6 != 0) {
        if (param_6 == 2) {
          pfVar8 = afStack_8c + 3;
        }
        else {
          if (param_6 != 1) goto LAB_01035eec;
          pfVar8 = afStack_8c + 4;
        }
      }
      *pfVar8 = fVar9;
      afStack_8c[5] = afStack_8c[5] + fVar18 * fVar5;
      afStack_8c[4] = afStack_8c[4] + fVar20 * fVar5;
      afStack_8c[3] = afStack_8c[3] + fVar21 * fVar5;
      fVar19 = afStack_8c[4];
      fVar9 = afStack_8c[3];
      afStack_8c[0] = afStack_8c[3];
      afStack_8c[1] = afStack_8c[4];
      afStack_8c[2] = afStack_8c[5];
      if (param_7 == 0) {
        pfVar7 = afStack_8c + 2;
        fVar23 = param_8;
      }
      else {
        fVar23 = afStack_8c[5];
        if (param_7 == 1) {
          pfVar7 = afStack_8c + 1;
          fVar19 = param_8;
        }
        else {
          if (param_7 != 2) {
LAB_01035eec:
            thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01035f6c + 0x1035ef8));
            uVar10 = thunk_FUN_00f00cdc();
            uVar11 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01035f70 + 0x1035f0c));
            System_IndexOutOfRangeException___ctor_2b69538(uVar10,uVar11,0);
            uVar11 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01035f74 + 0x1035f28));
            func_0x00ec3920(uVar10,uVar11);
                    /* WARNING: Subroutine does not return */
            FUN_00ec3760();
          }
          pfVar7 = afStack_8c;
          fVar9 = param_8;
        }
      }
      *pfVar7 = param_9;
      if (param_10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar16 = (float)((int)fStack_a0 - 1);
      if ((uint)*(float *)(param_10 + 0xc) <= (uint)fVar16) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar15 = param_10 + iStack_a8;
      *(float *)(iVar15 + 0x10) = fVar23;
      *(float *)(iVar15 + 0x14) = fVar19;
      *(float *)(iVar15 + 0x18) = fVar9;
      if ((uint)*(float *)(param_10 + 0xc) <= (uint)fStack_a0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(float *)(iVar15 + 0x24) = afStack_8c[0];
      *(float *)(iVar15 + 0x1c) = afStack_8c[2];
      *(float *)(iVar15 + 0x20) = afStack_8c[1];
      if (param_11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((uint)*(float *)(param_11 + 0xc) <= (uint)fVar16) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar15 = param_11 + iStack_a8;
      *(float *)(iVar15 + 0x10) = fVar18;
      *(float *)(iVar15 + 0x14) = fVar20;
      *(float *)(iVar15 + 0x18) = fVar21;
      if ((uint)*(float *)(param_11 + 0xc) <= (uint)fStack_a0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(float *)(iVar15 + 0x1c) = fVar18;
      *(float *)(iVar15 + 0x20) = fVar20;
      *(float *)(iVar15 + 0x24) = fVar21;
      fVar19 = param_3;
      if ((int)uStack_a4 < (int)uVar13) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(param_2 + 0xc) <= uStack_a4) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        fVar19 = *pfVar14;
      }
      if (param_12 == (float *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar9 = param_12[3];
      if ((uint)fVar9 <= (uint)fVar16) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar19 = (fVar19 / param_3) * fVar22;
      pfVar1[4] = fVar19;
      param_12[uStack_a4 * 4 + 5] = 1.0;
      if ((uint)fVar9 <= (uint)fStack_a0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      pfVar1[6] = fVar19;
      param_12[uStack_a4 * 4 + 7] = 0.0;
      pfVar14 = pfVar14 + 1;
      iStack_a8 = iStack_a8 + 0x18;
      uStack_a4 = uStack_a4 + 1;
      fStack_a0 = (float)((int)fStack_a0 + 2);
      pfVar1 = pfVar1 + 4;
    } while (uVar13 + 1 != uStack_a4);
  }
  return;
}

