/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitIceBreak
void Rotatelab_Scripts_BulletParticleManager__EmitIceBreak (Rotatelab_Scripts_BulletParticleManager_o* __this, UnityEngine_Vector3_o worldPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitIceBreak
   void Rotatelab_Scripts_BulletParticleManager__EmitIceBreak
   (Rotatelab_Scripts_BulletParticleManager_o* __this, UnityEngine_Vector3_o worldPosition, const
   MethodInfo* method); */

void Rotatelab_Scripts_BulletParticleManager__EmitIceBreak_ffa9dc
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
  
  pcVar4 = (char *)(_UNK_0100ab10 + 0x100a9fc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100ab14 + 0x100aa10));
    *pcVar4 = '\x01';
  }
  uVar1 = Rotatelab_Scripts_BulletParticleManager__NextInPool_ffa2e4
                    (*(undefined4 *)(param_1 + 0x50),param_1 + 0x54);
  uVar5 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(**(int **)(_UNK_0100ab18 + 0x100aa34) + 0x74) == 0) {
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
    uVar8 = *(undefined4 *)(iVar2 + 0x40);
    uVar7 = *(undefined4 *)(iVar2 + 0x44);
    uVar6 = *(undefined4 *)(iVar2 + 0x48);
    uVar5 = *(undefined4 *)(iVar2 + 0x4c);
    uVar9 = *(undefined4 *)(iVar2 + 0x50);
    uVar10 = *(undefined4 *)(iVar2 + 0x54);
  }
  pcVar4 = (char *)(_UNK_0100ab1c + 0x100aaa8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100ab20 + 0x100aabc));
    *pcVar4 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_0100ab24 + 0x100aad0) + 0x5c);
  Rotatelab_Scripts_BulletParticleManager__EmitTargeted_ffa778
            (uVar1,param_2,param_3,param_4,*puVar3,puVar3[1],puVar3[2],puVar3[3],uVar8,uVar7,uVar6,
             uVar5,uVar9,uVar10);
  return;
}

