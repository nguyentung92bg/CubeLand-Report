/* IL2CPP: Rotatelab.Pool.WallDestructionParticlePool$$OnParticleRequested
void Rotatelab_Pool_WallDestructionParticlePool__OnParticleRequested (Rotatelab_Pool_WallDestructionParticlePool_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WallDestructionParticlePool$$OnParticleRequested
   void Rotatelab_Pool_WallDestructionParticlePool__OnParticleRequested
   (Rotatelab_Pool_WallDestructionParticlePool_o* __this, UnityEngine_Vector3_o position, const
   MethodInfo* method); */

void Rotatelab_Pool_WallDestructionParticlePool__OnParticleRequested_1103dc0
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01113e50 + 0x1113de4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113e54 + 0x1113dfc));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Pool_ObjectPool_object___Get_1857ab4
                    (param_1,**(undefined4 **)(_UNK_01113e58 + 0x1113e10));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_FX_WallDestructionParticleController__Play_10fb938
            (iVar1,param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x2c));
  return;
}

