/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$NextInPool
UnityEngine_ParticleSystem_o* Rotatelab_Scripts_BulletParticleManager__NextInPool (UnityEngine_ParticleSystem_array* pool, int32_t* index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$NextInPool
   UnityEngine_ParticleSystem_o* Rotatelab_Scripts_BulletParticleManager__NextInPool
   (UnityEngine_ParticleSystem_array* pool, int32_t* index, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_BulletParticleManager__NextInPool_ffa2e4(int param_1,uint *param_2)

{
  uint extraout_r1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  if ((param_1 != 0) && (*(uint *)(param_1 + 0xc) != 0)) {
    uVar2 = *param_2;
    if (*(uint *)(param_1 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar1 = *(undefined4 *)(param_1 + uVar2 * 4 + 0x10);
    FUN_00f88884(uVar2 + 1);
    *param_2 = extraout_r1;
  }
  return uVar1;
}

