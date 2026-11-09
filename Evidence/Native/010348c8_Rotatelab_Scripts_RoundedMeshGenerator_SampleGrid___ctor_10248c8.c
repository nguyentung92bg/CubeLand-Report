/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator.SampleGrid$$.ctor
void Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid___ctor (Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o __this, UnityEngine_Vector3Int_o min, UnityEngine_Vector3Int_o max, float radius, int32_t resolution, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator.SampleGrid$$.ctor
   void Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid___ctor
   (Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid_o __this, UnityEngine_Vector3Int_o min,
   UnityEngine_Vector3Int_o max, float radius, int32_t resolution, const MethodInfo* method); */

void Rotatelab_Scripts_RoundedMeshGenerator_SampleGrid___ctor_10248c8
               (float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
               undefined4 param_9)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar5 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar8 = (float)VectorSignedToFloat(param_9,(byte)(in_fpscr >> 0x16) & 3);
  pcVar3 = (char *)(_UNK_01034b6c + 0x103490c);
  fVar11 = param_8 + _UNK_01034b64;
  cVar1 = *pcVar3;
  param_1[3] = 1.0 / fVar8;
  fVar7 = (fVar6 + -0.5) - fVar11;
  fVar9 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x16) & 3);
  fVar10 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  *param_1 = fVar7;
  fVar6 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x16) & 3);
  param_1[1] = (fVar10 + -0.5) - fVar11;
  param_1[2] = (fVar9 + -0.5) - fVar11;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01034b70 + 0x103497c));
    *pcVar3 = '\x01';
  }
  bVar2 = false;
  piVar4 = *(int **)(_UNK_01034b74 + 0x1034998);
  fVar9 = (float)VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x16) & 3);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
    bVar2 = *pcVar3 == '\0';
  }
  fVar10 = param_1[1];
  fVar13 = param_1[3];
  fVar7 = (float)FUN_01f4f1bc(((fVar11 + fVar5 + 0.5) - fVar7) / (1.0 / fVar8));
  fVar5 = _UNK_01034b68;
  fVar8 = (float)((int)fVar7 + 2);
  if (fVar7 == _UNK_01034b68) {
    fVar8 = -2.8026e-45;
  }
  param_1[4] = fVar8;
  if (bVar2) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01034b78 + 0x1034a0c));
    *pcVar3 = '\x01';
  }
  bVar2 = false;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
    bVar2 = *pcVar3 == '\0';
  }
  fVar8 = param_1[2];
  fVar12 = param_1[3];
  fVar6 = (float)FUN_01f4f1bc(((fVar11 + fVar6 + 0.5) - fVar10) / fVar13);
  fVar7 = (float)((int)fVar6 + 2);
  if (fVar6 == fVar5) {
    fVar7 = -2.8026e-45;
  }
  param_1[5] = fVar7;
  if (bVar2) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01034b7c + 0x1034a88));
    *pcVar3 = '\x01';
  }
  fVar12 = ((fVar11 + fVar9 + 0.5) - fVar8) / fVar12;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
    fVar6 = (float)FUN_01f4f1bc(fVar12);
    cVar1 = *pcVar3;
    fVar7 = (float)((int)fVar6 + 2);
    if (fVar6 == fVar5) {
      fVar7 = -2.8026e-45;
    }
    param_1[6] = fVar7;
    if (cVar1 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01034b80 + 0x1034b14));
      *pcVar3 = '\x01';
    }
  }
  else {
    fVar6 = (float)FUN_01f4f1bc(fVar12);
    fVar7 = (float)((int)fVar6 + 2);
    if (fVar6 == fVar5) {
      fVar7 = -2.8026e-45;
    }
    param_1[6] = fVar7;
  }
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar6 = (float)FUN_01f4f1bc(param_8 + 1.5);
  fVar7 = (float)(int)fVar6;
  if (fVar6 == fVar5) {
    fVar7 = -0.0;
  }
  param_1[7] = fVar7;
  return;
}

