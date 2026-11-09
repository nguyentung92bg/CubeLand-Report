/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$Get
UnityEngine_Pool_PooledObject_ParticleSystem__o Rotatelab_Pool_LargeVoxelBreakParticlePool__Get (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, UnityEngine_ParticleSystem_o** v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$Get
   UnityEngine_Pool_PooledObject_ParticleSystem__o Rotatelab_Pool_LargeVoxelBreakParticlePool__Get
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, UnityEngine_ParticleSystem_o** v, const
   MethodInfo* method); */

void Rotatelab_Pool_LargeVoxelBreakParticlePool__Get_110205c
               (undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_011120d8 + 0x1112078);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011120dc + 0x111208c));
    *pcVar3 = '\x01';
  }
  uVar1 = Rotatelab_Pool_LargeVoxelBreakParticlePool__Get_1101e38(param_2);
  *param_3 = uVar1;
  thunk_FUN_00ec5080(param_3,uVar1);
  uVar1 = *param_3;
  puVar2 = *(undefined4 **)(_UNK_011120e0 + 0x11120c0);
  *param_1 = 0;
  param_1[1] = 0;
  UnityEngine_Pool_PooledObject_object____ctor_187000c(param_1,uVar1,param_2,*puVar2);
  return;
}

