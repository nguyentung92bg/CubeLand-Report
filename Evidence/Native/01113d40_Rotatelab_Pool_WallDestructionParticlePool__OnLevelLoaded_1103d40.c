/* IL2CPP: Rotatelab.Pool.WallDestructionParticlePool$$OnLevelLoaded
void Rotatelab_Pool_WallDestructionParticlePool__OnLevelLoaded (Rotatelab_Pool_WallDestructionParticlePool_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WallDestructionParticlePool$$OnLevelLoaded
   void Rotatelab_Pool_WallDestructionParticlePool__OnLevelLoaded
   (Rotatelab_Pool_WallDestructionParticlePool_o* __this, Rotatelab_SoLevelData_o* levelData, const
   MethodInfo* method); */

void Rotatelab_Pool_WallDestructionParticlePool__OnLevelLoaded_1103d40(int param_1)

{
  int iVar1;
  char *pcVar2;
  float fVar3;
  
  pcVar2 = (char *)(_UNK_01113db4 + 0x1113d54);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113db8 + 0x1113d68));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01113dbc + 0x1113d7c));
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

