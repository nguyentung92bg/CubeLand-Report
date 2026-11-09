/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$SetRootObjectsActive
void Rotatelab_Scripts_MovementActivatedParticleTrail__SetRootObjectsActive (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, bool active, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.MovementActivatedParticleTrail$$SetRootObjectsActive
   void Rotatelab_Scripts_MovementActivatedParticleTrail__SetRootObjectsActive
   (Rotatelab_Scripts_MovementActivatedParticleTrail_o* __this, bool active, const MethodInfo*
   method); */

void Rotatelab_Scripts_MovementActivatedParticleTrail__SetRootObjectsActive_1029f4c
               (int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int unaff_r6;
  int *piVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_0103a020 + 0x1039f64);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0103a024 + 0x1039f78));
    *pcVar3 = '\x01';
  }
  bVar7 = *(char *)(param_1 + 0x19) != '\0';
  if (bVar7) {
    unaff_r6 = *(int *)(param_1 + 0x24);
  }
  if ((bVar7 && unaff_r6 != 0) && (uVar1 = *(uint *)(unaff_r6 + 0xc), 0 < (int)uVar1)) {
    uVar4 = 0;
    piVar6 = *(int **)(_UNK_0103a028 + 0x1039fb8);
    do {
      if (uVar1 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar5 = *(int *)(unaff_r6 + 0x10 + uVar4 * 4);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar5,0,0);
      if (iVar2 != 0) {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_GameObject__SetActive_3602038(iVar5,param_2,0);
      }
      uVar1 = *(uint *)(unaff_r6 + 0xc);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar1);
  }
  return;
}

