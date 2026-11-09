/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$SetEmitting
void Rotatelab_Scripts_MovementActivatedParticleTrail__SetEmitting (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, bool shouldEmit, bool clearParticles, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$SetEmitting
   void Rotatelab_Scripts_MovementActivatedParticleTrail__SetEmitting
   (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, bool shouldEmit, bool
   clearParticles, const MethodInfo* method); */

void Rotatelab_Scripts_MovementActivatedParticleTrail__SetEmitting_1029c10
               (int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_01039dc8 + 0x1039c30);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01039dcc + 0x1039c44));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x20);
  uVar1 = 0;
  uStack_28 = 0;
  if (iVar5 != 0) {
    if (param_3 == 0) {
      uVar1 = (uint)*(byte *)(param_1 + 0x35);
    }
    if (param_3 != 0 || uVar1 != param_2) {
      *(char *)(param_1 + 0x35) = (char)param_2;
      if (param_2 != 0) {
        Rotatelab_Scripts_MovementActivatedParticleTrail__SetRootObjectsActive_1029f4c(param_1,1);
        iVar5 = *(int *)(param_1 + 0x20);
      }
      uVar1 = 0;
      piVar7 = *(int **)(_UNK_01039dd0 + 0x1039ca0);
      while( true ) {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar5 + 0xc) <= (int)uVar1) break;
        if (*(uint *)(iVar5 + 0xc) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar6 = *(int *)(iVar5 + 0x10 + uVar1 * 4);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar6,0,0);
        if (iVar2 == 0) {
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uStack_28 = UnityEngine_ParticleSystem__get_emission_368ed24(iVar6,0);
          uVar3 = UnityEngine_ParticleSystem_EmissionModule__set_enabled_368f63c
                            (&uStack_28,param_2,0);
          if (param_2 == 0) {
            if (param_3 == 0) {
              uVar3 = (uint)*(byte *)(param_1 + 0x19);
            }
            if (param_3 != 0 || uVar3 != 0) {
              if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              UnityEngine_ParticleSystem__Stop_368e968(iVar6,0,0,0);
            }
          }
          else {
            if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar2 = UnityEngine_ParticleSystem__get_isPlaying_368e778(iVar6,0);
            if (iVar2 == 0) {
              UnityEngine_ParticleSystem__Play_368e864(iVar6,0,0);
            }
          }
        }
        uVar1 = uVar1 + 1;
      }
      if (param_2 == 0) {
        Rotatelab_Scripts_MovementActivatedParticleTrail__SetRootObjectsActive_1029f4c(param_1,0);
      }
    }
  }
  return;
}

