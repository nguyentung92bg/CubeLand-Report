/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$get_CountActive
int32_t Rotatelab_Pool_LargeVoxelBreakParticlePool__get_CountActive (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$get_CountActive
   int32_t Rotatelab_Pool_LargeVoxelBreakParticlePool__get_CountActive
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Pool_LargeVoxelBreakParticlePool__get_CountActive_1100f50(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01110f98 + 0x1110f64);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110f9c + 0x1110f78));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc);
}

