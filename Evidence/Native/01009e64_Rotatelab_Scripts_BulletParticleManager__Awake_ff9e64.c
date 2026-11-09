/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$Awake
void Rotatelab_Scripts_BulletParticleManager__Awake (Rotatelab_Scripts_BulletParticleManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$Awake
   void Rotatelab_Scripts_BulletParticleManager__Awake (Rotatelab_Scripts_BulletParticleManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Scripts_BulletParticleManager__Awake_ff9e64(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_01009f24 + 0x1009e78);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01009f28 + 0x1009e8c));
    *pcVar5 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_01009f2c + 0x1009ea0));
  uVar3 = Rotatelab_Scripts_BulletParticleManager__BuildPool_ff9f30
                    (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = Rotatelab_Scripts_BulletParticleManager__BuildPool_ff9f30
                    (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = Rotatelab_Scripts_BulletParticleManager__BuildPool_ff9f30
                    (*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = Rotatelab_Scripts_BulletParticleManager__BuildPool_ff9f30
                    (*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = Rotatelab_Scripts_BulletParticleManager__BuildPool_ff9f30
                    (*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38));
  puVar4 = (undefined4 *)(param_1 + 0x68);
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

