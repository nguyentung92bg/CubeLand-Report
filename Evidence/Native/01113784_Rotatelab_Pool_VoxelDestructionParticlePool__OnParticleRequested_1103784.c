/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$OnParticleRequested
void Rotatelab_Pool_VoxelDestructionParticlePool__OnParticleRequested (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, UnityEngine_Vector3_o position, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$OnParticleRequested
   void Rotatelab_Pool_VoxelDestructionParticlePool__OnParticleRequested
   (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, UnityEngine_Vector3_o position, int32_t
   colorType, const MethodInfo* method); */

void Rotatelab_Pool_VoxelDestructionParticlePool__OnParticleRequested_1103784
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0111381c + 0x11137a8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113820 + 0x11137c0));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Pool_ObjectPool_object___Get_1857ab4
                    (param_1,**(undefined4 **)(_UNK_01113824 + 0x11137d8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_FX_VoxelDestructionParticleController__Play_10fb0cc
            (iVar1,param_2,param_3,param_4,param_5,*(undefined4 *)(param_1 + 0x2c));
  return;
}

