/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$GetCubeIndex
int32_t Rotatelab_Scripts_RoundedMeshGenerator__GetCubeIndex (System_Single_array* cubeValues, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.RoundedMeshGenerator$$GetCubeIndex
   int32_t Rotatelab_Scripts_RoundedMeshGenerator__GetCubeIndex (System_Single_array* cubeValues,
   const MethodInfo* method); */

uint Rotatelab_Scripts_RoundedMeshGenerator__GetCubeIndex_1023d74(int param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  
  pfVar3 = (float *)(param_1 + 0x10);
  uVar4 = 0;
  uVar2 = 0;
  while( true ) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_1 + 0xc) <= (int)uVar4) break;
    if (*(uint *)(param_1 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    fVar5 = *pfVar3;
    pfVar3 = pfVar3 + 1;
    uVar1 = uVar4 & 0x1f;
    uVar4 = uVar4 + 1;
    if (fVar5 < 0.0) {
      uVar2 = uVar2 | 1 << uVar1;
    }
  }
  return uVar2;
}

