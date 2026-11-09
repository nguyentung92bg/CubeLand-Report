/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$get_CountAll
int32_t Rotatelab_Pool_LargeVoxelBreakParticlePool__get_CountAll (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$get_CountAll
   int32_t Rotatelab_Pool_LargeVoxelBreakParticlePool__get_CountAll
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method); */

int Rotatelab_Pool_LargeVoxelBreakParticlePool__get_CountAll_1100ff0(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01111050 + 0x1111004);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01111054 + 0x1111018));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(int *)(*(int *)(param_1 + 0x1c) + 0xc) + *(int *)(*(int *)(param_1 + 0x18) + 0xc);
}

