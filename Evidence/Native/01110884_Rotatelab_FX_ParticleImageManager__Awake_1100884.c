/* IL2CPP: Rotatelab.FX.ParticleImageManager$$Awake
void Rotatelab_FX_ParticleImageManager__Awake (Rotatelab_FX_ParticleImageManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.ParticleImageManager$$Awake
   void Rotatelab_FX_ParticleImageManager__Awake (Rotatelab_FX_ParticleImageManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_FX_ParticleImageManager__Awake_1100884(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_011108fc + 0x1110898);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110900 + 0x11108ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01110904 + 0x11108b8));
    *pcVar5 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01110908 + 0x11108cc));
  uVar3 = UnityEngine_Component__GetComponentInParent_object__143f94c
                    (param_1,**(undefined4 **)(_UNK_0111090c + 0x11108e0));
  puVar4 = (undefined4 *)(param_1 + 0x18);
  *puVar4 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

