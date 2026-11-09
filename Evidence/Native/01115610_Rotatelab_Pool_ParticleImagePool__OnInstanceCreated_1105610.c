/* IL2CPP: Rotatelab.Pool.ParticleImagePool$$OnInstanceCreated
void Rotatelab_Pool_ParticleImagePool__OnInstanceCreated (Rotatelab_Pool_ParticleImagePool_o* __this, Rotatelab_FX_ParticleImageController_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.ParticleImagePool$$OnInstanceCreated
   void Rotatelab_Pool_ParticleImagePool__OnInstanceCreated (Rotatelab_Pool_ParticleImagePool_o*
   __this, Rotatelab_FX_ParticleImageController_o* instance, const MethodInfo* method); */

void Rotatelab_Pool_ParticleImagePool__OnInstanceCreated_1105610(undefined4 param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0111567c + 0x1115628);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01115680 + 0x111563c));
    *pcVar4 = '\x01';
  }
  Rotatelab_Pool_ObjectPool_object___OnInstanceCreated_1857cf0
            (param_1,param_2,**(undefined4 **)(_UNK_01115684 + 0x1115654));
  if (param_2 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0x14);
    *puVar3 = param_1;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar3 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar3 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

