/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator.CacheKey$$Quantize
int32_t Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Quantize (float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RoundedBoxMeshGenerator.CacheKey$$Quantize
   int32_t Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Quantize (float value, const
   MethodInfo* method); */

undefined4 Rotatelab_Scripts_RoundedBoxMeshGenerator_CacheKey__Quantize_101d0b0(float param_1)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  double dVar5;
  double dVar6;
  double dStack_20;
  
  fVar1 = _UNK_0102d1c8;
  pcVar4 = (char *)(_UNK_0102d1cc + 0x102d0d0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0102d1d0 + 0x102d0e4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0102d1d4 + 0x102d0fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar5 = (double)(param_1 * fVar1);
  dVar6 = (double)modf(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),&dStack_20);
  if (0.0 <= param_1 * fVar1) {
    if (dVar6 != 0.5) {
      dVar5 = (double)floor(SUB84(dVar5 + 0.5,0),(int)((ulonglong)(dVar5 + 0.5) >> 0x20));
      goto LAB_0102d198;
    }
    dVar5 = 1.0;
  }
  else {
    if (dVar6 != -0.5) {
      dVar5 = (double)ceil(SUB84(dVar5 + -0.5,0),(int)((ulonglong)(dVar5 + -0.5) >> 0x20));
      goto LAB_0102d198;
    }
    dVar5 = -1.0;
  }
  uVar2 = FUN_00f88224(SUB84(dStack_20,0),(int)((ulonglong)dStack_20 >> 0x20));
  dVar5 = dStack_20 + dVar5;
  if ((uVar2 & 1) == 0) {
    dVar5 = dStack_20;
  }
LAB_0102d198:
  uVar3 = (undefined4)(longlong)dVar5;
  if (dVar5 == _UNK_0102d1c0) {
    uVar3 = 0x80000000;
  }
  return uVar3;
}

