/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitIceHit
void Rotatelab_Scripts_BulletParticleManager__EmitIceHit (Rotatelab_Scripts_BulletParticleManager_o* __this, UnityEngine_Vector3_o worldPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitIceHit
   void Rotatelab_Scripts_BulletParticleManager__EmitIceHit
   (Rotatelab_Scripts_BulletParticleManager_o* __this, UnityEngine_Vector3_o worldPosition, const
   MethodInfo* method); */

void Rotatelab_Scripts_BulletParticleManager__EmitIceHit_ffab28
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
  
  pcVar4 = (char *)(_UNK_0100ac5c + 0x100ab48);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100ac60 + 0x100ab5c));
    *pcVar4 = '\x01';
  }
  uVar1 = Rotatelab_Scripts_BulletParticleManager__NextInPool_ffa2e4
                    (*(undefined4 *)(param_1 + 0x58),param_1 + 0x5c);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(**(int **)(_UNK_0100ac64 + 0x100ab80) + 0x74) == 0) {
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
    uVar8 = *(undefined4 *)(iVar2 + 0x58);
    uVar7 = *(undefined4 *)(iVar2 + 0x5c);
    uVar6 = *(undefined4 *)(iVar2 + 0x60);
    uVar5 = *(undefined4 *)(iVar2 + 100);
    uVar9 = *(undefined4 *)(iVar2 + 0x68);
    uVar10 = *(undefined4 *)(iVar2 + 0x6c);
  }
  pcVar4 = (char *)(_UNK_0100ac68 + 0x100abf4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100ac6c + 0x100ac08));
    *pcVar4 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_0100ac70 + 0x100ac1c) + 0x5c);
  Rotatelab_Scripts_BulletParticleManager__EmitTargeted_ffa778
            (uVar1,param_2,param_3,param_4,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar8,uVar7,uVar6,
             uVar5,uVar9,uVar10);
  return;
}

