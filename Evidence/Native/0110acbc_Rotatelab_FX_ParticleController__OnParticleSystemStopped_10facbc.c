/* IL2CPP: Rotatelab.FX.ParticleController$$OnParticleSystemStopped
void Rotatelab_FX_ParticleController__OnParticleSystemStopped (Rotatelab_FX_ParticleController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.ParticleController$$OnParticleSystemStopped
   void Rotatelab_FX_ParticleController__OnParticleSystemStopped (Rotatelab_FX_ParticleController_o*
   __this, const MethodInfo* method); */

void Rotatelab_FX_ParticleController__OnParticleSystemStopped_10facbc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_0110ad70 + 0x110acd0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ad74 + 0x110ace4));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 == (int *)0x0) {
    return;
  }
  iVar1 = *piVar6;
  uVar3 = (uint)*(ushort *)(iVar1 + 0xb6);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar4[-1] == **(int **)(_UNK_0110ad78 + 0x110ad08)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar4 * 8 + 0xc0);
        goto LAB_0110ad58;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar3 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_0110ad78 + 0x110ad08),0);
LAB_0110ad58:
                    /* WARNING: Could not recover jumptable at 0x0110ad6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(piVar6,uVar7,puVar2[1]);
  return;
}

