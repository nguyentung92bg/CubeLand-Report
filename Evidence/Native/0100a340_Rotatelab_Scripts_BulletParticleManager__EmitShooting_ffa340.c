/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitShooting
void Rotatelab_Scripts_BulletParticleManager__EmitShooting (Rotatelab_Scripts_BulletParticleManager_o* __this, UnityEngine_Vector3_o worldPosition, UnityEngine_Quaternion_o rotation, int32_t count, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitShooting
   void Rotatelab_Scripts_BulletParticleManager__EmitShooting
   (Rotatelab_Scripts_BulletParticleManager_o* __this, UnityEngine_Vector3_o worldPosition,
   UnityEngine_Quaternion_o rotation, int32_t count, const MethodInfo* method); */

void Rotatelab_Scripts_BulletParticleManager__EmitShooting_ffa340
               (int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,int param_9)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  
  pcVar3 = (char *)(_UNK_0100a620 + 0x100a368);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a624 + 0x100a380));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_Scripts_BulletParticleManager__NextInPool_ffa2e4
                    (*(undefined4 *)(param_1 + 0x40),param_1 + 0x44);
  piVar4 = *(int **)(_UNK_0100a628 + 0x100a3a8);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar1,0,0);
  if ((0 < param_9) && (iVar2 == 0)) {
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = 0;
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(uVar5,0,0);
    if (iVar2 == 0) {
      uVar5 = 0;
      uVar6 = 0;
      fVar10 = _UNK_0100a618;
      fVar9 = _UNK_0100a618;
      fVar8 = _UNK_0100a618;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x3c);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = *(undefined4 *)(iVar2 + 0x10);
      uVar5 = *(undefined4 *)(iVar2 + 0x14);
      uVar7 = *(undefined4 *)(iVar2 + 0x18);
      fVar10 = *(float *)(iVar2 + 0x1c) * _UNK_0100a61c;
      fVar9 = *(float *)(iVar2 + 0x20) * _UNK_0100a61c;
      fVar8 = *(float *)(iVar2 + 0x24) * _UNK_0100a61c;
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
    UnityEngine_Quaternion__op_Multiply_35ee71c
              (&fStack_60,param_5,param_6,param_7,param_8,uVar6,uVar5,uVar7,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_position_3614acc
              (iVar2,fStack_60 + param_2,fStack_5c + param_3,fStack_58 + param_4,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
    fStack_50 = fVar10;
    fStack_4c = fVar9;
    fStack_48 = fVar8;
    UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&fStack_60,&fStack_50,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_rotation_3614e20
              (iVar2,(fStack_54 * param_5 + fStack_60 * param_8 + fStack_58 * param_6) -
                     fStack_5c * param_7,
               (fStack_54 * param_6 + fStack_5c * param_8 + fStack_60 * param_7) -
               fStack_58 * param_5,
               (fStack_54 * param_7 + fStack_58 * param_8 + fStack_5c * param_5) -
               fStack_60 * param_6,
               ((fStack_54 * param_8 - fStack_60 * param_5) - fStack_5c * param_6) -
               fStack_58 * param_7,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystem__Emit_368ea7c(iVar1,param_9,0);
  }
  return;
}

