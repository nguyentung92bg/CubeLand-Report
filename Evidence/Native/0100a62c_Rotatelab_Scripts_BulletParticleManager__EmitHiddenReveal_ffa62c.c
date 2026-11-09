/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitHiddenReveal
void Rotatelab_Scripts_BulletParticleManager__EmitHiddenReveal (Rotatelab_Scripts_BulletParticleManager_o* __this, UnityEngine_Vector3_o worldPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitHiddenReveal
   void Rotatelab_Scripts_BulletParticleManager__EmitHiddenReveal
   (Rotatelab_Scripts_BulletParticleManager_o* __this, UnityEngine_Vector3_o worldPosition, const
   MethodInfo* method); */

void Rotatelab_Scripts_BulletParticleManager__EmitHiddenReveal_ffa62c
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  pcVar4 = (char *)(_UNK_0100a760 + 0x100a64c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a764 + 0x100a660));
    *pcVar4 = '\x01';
  }
  uVar1 = Rotatelab_Scripts_BulletParticleManager__NextInPool_ffa2e4
                    (*(undefined4 *)(param_1 + 0x48),param_1 + 0x4c);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(**(int **)(_UNK_0100a768 + 0x100a684) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar10 = 0;
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar5,0,0);
  uVar9 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  uVar8 = 0;
  if (iVar2 != 0) {
    iVar2 = *(int *)(param_1 + 0x3c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(iVar2 + 0x28);
    uVar7 = *(undefined4 *)(iVar2 + 0x2c);
    uVar6 = *(undefined4 *)(iVar2 + 0x30);
    uVar5 = *(undefined4 *)(iVar2 + 0x34);
    uVar9 = *(undefined4 *)(iVar2 + 0x38);
    uVar10 = *(undefined4 *)(iVar2 + 0x3c);
  }
  pcVar4 = (char *)(_UNK_0100a76c + 0x100a6f8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a770 + 0x100a70c));
    *pcVar4 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_0100a774 + 0x100a720) + 0x5c);
  Rotatelab_Scripts_BulletParticleManager__EmitTargeted_ffa778
            (uVar1,param_2,param_3,param_4,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar8,uVar7,uVar6,
             uVar5,uVar9,uVar10);
  return;
}

