/* IL2CPP: Rotatelab.Grid.GridJobHelpers$$InitializeDDAData
bool Rotatelab_Grid_GridJobHelpers__InitializeDDAData (Unity_Mathematics_float3_o* gridMinPosition, Unity_Mathematics_int3_o* gridSize, Unity_Mathematics_float3_o* rayOrigin, Unity_Mathematics_float3_o* rayDirection, Unity_Mathematics_float3_o* inverseRayDirection, Unity_Mathematics_int3_o* currentCell, Unity_Mathematics_int3_o* step, Unity_Mathematics_float3_o* tDelta, Unity_Mathematics_float3_o* tMax, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Grid.GridJobHelpers$$InitializeDDAData
   bool Rotatelab_Grid_GridJobHelpers__InitializeDDAData (Unity_Mathematics_float3_o*
   gridMinPosition, Unity_Mathematics_int3_o* gridSize, Unity_Mathematics_float3_o* rayOrigin,
   Unity_Mathematics_float3_o* rayDirection, Unity_Mathematics_float3_o* inverseRayDirection,
   Unity_Mathematics_int3_o* currentCell, Unity_Mathematics_int3_o* step,
   Unity_Mathematics_float3_o* tDelta, Unity_Mathematics_float3_o* tMax, const MethodInfo* method);
    */

bool Rotatelab_Grid_GridJobHelpers__InitializeDDAData_11062a8
               (float *param_1,int *param_2,float *param_3,float *param_4,float *param_5,
               int *param_6,int *param_7,float *param_8,float *param_9)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  float fVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int *piVar7;
  uint in_fpscr;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  pcVar6 = (char *)(_UNK_01116838 + 0x11162d0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111683c + 0x11162ec));
    *pcVar6 = '\x01';
  }
  fVar23 = param_1[1];
  fVar12 = (float)VectorSignedToFloat(param_2[1],(byte)(in_fpscr >> 0x16) & 3);
  fVar26 = param_3[1];
  fVar16 = (float)VectorSignedToFloat(param_2[2],(byte)(in_fpscr >> 0x16) & 3);
  fVar24 = param_1[2];
  fVar27 = param_3[2];
  fVar22 = *param_1;
  fVar10 = (float)VectorSignedToFloat(*param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar25 = *param_3;
  fVar13 = ((fVar23 + fVar12) - fVar26) * param_5[1];
  fVar28 = ((fVar24 + fVar16) - fVar27) * param_5[2];
  fVar16 = (fVar23 - fVar26) * param_5[1];
  fVar12 = ((fVar22 + fVar10) - fVar25) * *param_5;
  fVar19 = (fVar22 - fVar25) * *param_5;
  fVar10 = fVar13;
  if (0x7f800000 < (uint)ABS(fVar13)) {
    fVar10 = fVar16;
  }
  fVar4 = fVar10;
  if (fVar16 != fVar13 && fVar16 >= fVar13) {
    fVar4 = fVar16;
  }
  if (fVar16 < fVar13) {
    fVar10 = fVar16;
  }
  fVar16 = (fVar24 - fVar27) * param_5[2];
  fVar13 = fVar28;
  if (0x7f800000 < (uint)ABS(fVar28)) {
    fVar13 = fVar16;
  }
  fVar14 = fVar12;
  if (0x7f800000 < (uint)ABS(fVar12)) {
    fVar14 = fVar19;
  }
  fVar17 = fVar13;
  if (fVar16 != fVar28 && fVar16 >= fVar28) {
    fVar17 = fVar16;
  }
  if (fVar16 < fVar28) {
    fVar13 = fVar16;
  }
  fVar16 = fVar14;
  if (fVar19 != fVar12 && fVar19 >= fVar12) {
    fVar16 = fVar19;
  }
  if (fVar19 < fVar12) {
    fVar14 = fVar19;
  }
  fVar12 = fVar4;
  if (0x7f800000 < (uint)ABS(fVar4)) {
    fVar12 = fVar16;
  }
  fVar19 = fVar10;
  if (0x7f800000 < (uint)ABS(fVar10)) {
    fVar19 = fVar14;
  }
  if (fVar16 < fVar4) {
    fVar12 = fVar16;
  }
  if (fVar10 < fVar14) {
    fVar19 = fVar14;
  }
  fVar10 = fVar17;
  if (fVar12 < fVar17) {
    fVar10 = fVar12;
  }
  fVar16 = fVar13;
  if (fVar13 < fVar19) {
    fVar16 = fVar19;
  }
  if (0x7f800000 < (uint)ABS(fVar17)) {
    fVar10 = fVar12;
  }
  if (0x7f800000 < (uint)ABS(fVar13)) {
    fVar16 = fVar19;
  }
  if (fVar16 <= fVar10 && 0.0 <= fVar10) {
    uVar8 = in_fpscr & 0xfffffff | (uint)(fVar16 < 0.0) << 0x1f;
    fVar28 = *param_4;
    fVar13 = param_4[1];
    fVar19 = param_4[2];
    pcVar6 = (char *)(_UNK_01116840 + 0x11164bc);
    fVar12 = fVar16;
    if (0x7f800000 < (uint)ABS(fVar16)) {
      fVar12 = _UNK_01116830;
    }
    if (SUB41(uVar8 >> 0x1f,0)) {
      fVar12 = _UNK_01116830;
    }
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01116844 + 0x11164e4));
      *pcVar6 = '\x01';
    }
    piVar7 = *(int **)(_UNK_01116848 + 0x11164f8);
    if ((*(int *)(*piVar7 + 0x74) == 0) && (FUN_00ec3934(), *pcVar6 == '\0')) {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0111684c + 0x1116520));
      *pcVar6 = '\x01';
    }
    if ((*(int *)(*piVar7 + 0x74) == 0) && (FUN_00ec3934(), *pcVar6 == '\0')) {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01116850 + 0x1116560));
      *pcVar6 = '\x01';
    }
    fVar24 = (fVar27 + fVar12 * fVar19) - fVar24;
    fVar23 = (fVar26 + fVar12 * fVar13) - fVar23;
    fVar22 = (fVar25 + fVar12 * fVar28) - fVar22;
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar13 = (float)FUN_01f4f1b4(fVar22);
    fVar19 = (float)FUN_01f4f1b4(fVar24);
    fVar25 = (float)VectorSignedToFloat(param_2[2] + -1,(byte)(uVar8 >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(*param_2 + -1,(byte)(uVar8 >> 0x16) & 3);
    fVar27 = (float)VectorSignedToFloat(param_2[1] + -1,(byte)(uVar8 >> 0x16) & 3);
    uVar8 = uVar8 & 0xfffffff | (uint)(fVar19 < fVar25) << 0x1f | (uint)(fVar19 == fVar25) << 0x1e;
    uVar9 = uVar8 | (uint)(NAN(fVar19) || NAN(fVar25)) << 0x1c;
    bVar3 = (byte)(uVar8 >> 0x18);
    fVar12 = fVar19;
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar9 >> 0x1c) & 1)) {
      fVar12 = fVar25;
    }
    fVar4 = (float)FUN_01f4f1b4(fVar23);
    uVar8 = uVar9 & 0xfffffff | (uint)(fVar4 < fVar27) << 0x1f | (uint)(fVar4 == fVar27) << 0x1e;
    puVar5 = *(undefined4 **)(**(int **)(_UNK_01116854 + 0x1116608) + 0x5c);
    fVar14 = (float)VectorSignedToFloat(*puVar5,(byte)(uVar8 >> 0x16) & 3);
    fVar20 = (float)VectorSignedToFloat(puVar5[2],(byte)(uVar8 >> 0x16) & 3);
    fVar17 = (float)VectorSignedToFloat(puVar5[1],(byte)(uVar8 >> 0x16) & 3);
    fVar28 = fVar13;
    if (fVar26 < fVar13) {
      fVar28 = fVar26;
    }
    bVar3 = (byte)(uVar8 >> 0x18);
    fVar11 = fVar4;
    if (!(bool)(bVar3 >> 6 & 1) && (bool)(bVar3 >> 7) == (NAN(fVar4) || NAN(fVar27))) {
      fVar11 = fVar27;
    }
    if (0x7f800000 < (uint)ABS(fVar19)) {
      fVar12 = fVar25;
    }
    if (0x7f800000 < (uint)ABS(fVar13)) {
      fVar28 = fVar26;
    }
    if (0x7f800000 < (uint)ABS(fVar4)) {
      fVar11 = fVar27;
    }
    fVar13 = fVar28;
    if (0x7f800000 < (uint)ABS(fVar28)) {
      fVar13 = fVar14;
    }
    fVar19 = fVar12;
    if (0x7f800000 < (uint)ABS(fVar12)) {
      fVar19 = fVar20;
    }
    fVar25 = fVar11;
    if (0x7f800000 < (uint)ABS(fVar11)) {
      fVar25 = fVar17;
    }
    if (fVar28 < fVar14) {
      fVar13 = fVar14;
    }
    iVar15 = (int)fVar13;
    if (fVar12 < fVar20) {
      fVar19 = fVar20;
    }
    if (fVar11 < fVar17) {
      fVar25 = fVar17;
    }
    iVar18 = (int)fVar19;
    bVar1 = fVar25 == _UNK_01116834;
    iVar21 = (int)fVar25;
    if (fVar19 == _UNK_01116834) {
      iVar18 = -0x80000000;
    }
    bVar2 = fVar13 == _UNK_01116834;
    param_6[2] = iVar18;
    iVar18 = -1;
    if (bVar1) {
      iVar21 = -0x80000000;
    }
    param_6[1] = iVar21;
    iVar21 = -1;
    if (bVar2) {
      iVar15 = -0x80000000;
    }
    *param_6 = iVar15;
    iVar15 = -1;
    fVar13 = param_4[1];
    fVar12 = *param_4;
    if (0.0 < param_4[2]) {
      iVar21 = 1;
    }
    uVar8 = uVar9 & 0xfffffff | (uint)(fVar12 < 0.0) << 0x1f | (uint)(fVar12 == 0.0) << 0x1e;
    param_7[2] = iVar21;
    if (0.0 < fVar13) {
      iVar15 = 1;
    }
    bVar3 = (byte)(uVar8 >> 0x18);
    if (!(bool)(bVar3 >> 6 & 1) && (bool)(bVar3 >> 7) == NAN(fVar12)) {
      iVar18 = 1;
    }
    *param_7 = iVar18;
    param_7[1] = iVar15;
    fVar25 = *param_5;
    fVar19 = param_5[1];
    fVar13 = param_5[2];
    *param_8 = ABS(fVar25);
    param_8[1] = ABS(fVar19);
    param_8[2] = ABS(fVar13);
    fVar28 = (float)VectorSignedToFloat(param_6[2],(byte)(uVar8 >> 0x16) & 3);
    fVar27 = (float)VectorSignedToFloat(param_6[1],(byte)(uVar8 >> 0x16) & 3);
    fVar26 = (float)VectorSignedToFloat(*param_6,(byte)(uVar8 >> 0x16) & 3);
    fVar12 = fVar24 - fVar28;
    if (0 < param_7[2]) {
      fVar12 = (fVar28 + 1.0) - fVar24;
    }
    fVar24 = fVar23 - fVar27;
    if (0 < param_7[1]) {
      fVar24 = (fVar27 + 1.0) - fVar23;
    }
    fVar23 = fVar22 - fVar26;
    if (0 < *param_7) {
      fVar23 = (fVar26 + 1.0) - fVar22;
    }
    param_9[2] = fVar12 * ABS(fVar13);
    param_9[1] = fVar24 * ABS(fVar19);
    *param_9 = fVar23 * ABS(fVar25);
  }
  else {
    param_6[1] = 0;
    *param_6 = 0;
    param_6[2] = 0;
    param_7[1] = 0;
    *param_7 = 0;
    param_7[2] = 0;
    param_8[1] = 0.0;
    *param_8 = 0.0;
    param_8[2] = 0.0;
    param_9[1] = 0.0;
    *param_9 = 0.0;
    param_9[2] = 0.0;
  }
  return fVar16 <= fVar10 && 0.0 <= fVar10;
}

