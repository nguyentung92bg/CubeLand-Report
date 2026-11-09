/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$ForceOneShot
void Rotatelab_Scripts_BulletParticleManager__ForceOneShot (UnityEngine_ParticleSystem_o* ps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$ForceOneShot
   void Rotatelab_Scripts_BulletParticleManager__ForceOneShot (UnityEngine_ParticleSystem_o* ps,
   const MethodInfo* method); */

void Rotatelab_Scripts_BulletParticleManager__ForceOneShot_ffa19c(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_0100a2d0 + 0x100a1b4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a2d4 + 0x100a1c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a2d8 + 0x100a1d4));
    *pcVar2 = '\x01';
  }
  uStack_1c = 0;
  if (*(int *)(**(int **)(_UNK_0100a2dc + 0x100a1ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_1,0,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                      (param_1,1,**(undefined4 **)(_UNK_0100a2e0 + 0x100a23c));
    uVar4 = 0;
    while( true ) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar4) break;
      if (*(uint *)(iVar1 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar3 = *(int *)(iVar1 + 0x10 + uVar4 * 4);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_1c = UnityEngine_ParticleSystem__get_main_368ecf8(iVar3,0);
      UnityEngine_ParticleSystem_MainModule__set_loop_368eddc(&uStack_1c,0,0);
      UnityEngine_ParticleSystem_MainModule__set_playOnAwake_368f4f4(&uStack_1c,0,0);
      UnityEngine_ParticleSystem_MainModule__set_stopAction_368f5e8(&uStack_1c,0,0);
      uVar4 = uVar4 + 1;
    }
  }
  return;
}

