/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$OnLevelLoaded
void Rotatelab_Pool_VoxelDestructionParticlePool__OnLevelLoaded (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.VoxelDestructionParticlePool$$OnLevelLoaded
   void Rotatelab_Pool_VoxelDestructionParticlePool__OnLevelLoaded
   (Rotatelab_Pool_VoxelDestructionParticlePool_o* __this, Rotatelab_SoLevelData_o* levelData, const
   MethodInfo* method); */

void Rotatelab_Pool_VoxelDestructionParticlePool__OnLevelLoaded_1103704(int param_1)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  
  pcVar2 = (char *)(_UNK_01113778 + 0x1113718);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111377c + 0x111372c));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01113780 + 0x1113740));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar3 = *(float *)(iVar1 + 0x54) / *(float *)(param_1 + 0x28);
  if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  *(float *)(param_1 + 0x2c) = fVar3;
  return;
}

