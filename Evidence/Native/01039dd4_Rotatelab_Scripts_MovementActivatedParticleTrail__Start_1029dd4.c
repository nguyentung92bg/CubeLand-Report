/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$Start
void Rotatelab_Scripts_MovementActivatedParticleTrail__Start (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01039d24) */
/* WARNING: Removing unreachable block (ram,0x01039d78) */
/* WARNING: Removing unreachable block (ram,0x01039d2c) */
/* WARNING: Removing unreachable block (ram,0x01039d94) */
/* WARNING: Removing unreachable block (ram,0x01039d40) */
/* WARNING: Removing unreachable block (ram,0x01039c64) */
/* WARNING: Removing unreachable block (ram,0x01039c68) */
/* WARNING: Removing unreachable block (ram,0x01039c7c) */
/* WARNING: Removing unreachable block (ram,0x01039d48) */
/* WARNING: Removing unreachable block (ram,0x01039d4c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$Start
   void Rotatelab_Scripts_MovementActivatedParticleTrail__Start
   (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_MovementActivatedParticleTrail__Start_1029dd4(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_01039dc8 + 0x1039c30);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01039dcc + 0x1039c44));
    *pcVar2 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x20);
  uStack_28 = 0;
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x35) = 0;
    uVar4 = 0;
    piVar6 = *(int **)(_UNK_01039dd0 + 0x1039ca0);
    while( true ) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar4) break;
      if (*(uint *)(iVar3 + 0xc) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar5 = *(int *)(iVar3 + 0x10 + uVar4 * 4);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar1 = UnityEngine_Object__op_Equality_36033f4(iVar5,0,0);
      if (iVar1 == 0) {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uStack_28 = UnityEngine_ParticleSystem__get_emission_368ed24(iVar5,0);
        UnityEngine_ParticleSystem_EmissionModule__set_enabled_368f63c(&uStack_28,0,0);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_ParticleSystem__Stop_368e968(iVar5,0,0,0);
      }
      uVar4 = uVar4 + 1;
    }
    Rotatelab_Scripts_MovementActivatedParticleTrail__SetRootObjectsActive_1029f4c(param_1,0);
  }
  return;
}

