/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitTargeted
void Rotatelab_Scripts_BulletParticleManager__EmitTargeted (UnityEngine_ParticleSystem_o* ps, UnityEngine_Vector3_o worldPosition, UnityEngine_Quaternion_o rotation, Rotatelab_Scripts_BlasterParticleOffsets_Offset_o offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitTargeted
   void Rotatelab_Scripts_BulletParticleManager__EmitTargeted (UnityEngine_ParticleSystem_o* ps,
   UnityEngine_Vector3_o worldPosition, UnityEngine_Quaternion_o rotation,
   Rotatelab_Scripts_BlasterParticleOffsets_Offset_o offset, const MethodInfo* method); */

void Rotatelab_Scripts_BulletParticleManager__EmitTargeted_ffa778
               (int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
               float param_7,float param_8,undefined4 param_9,undefined4 param_10,
               undefined4 param_11,float param_12,float param_13,float param_14)

{
  int iVar1;
  char *pcVar2;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  pcVar2 = (char *)(_UNK_0100a9d0 + 0x100a798);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100a9d4 + 0x100a7b0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0100a9d8 + 0x100a7c4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_1,0,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    UnityEngine_Quaternion__op_Multiply_35ee71c
              (&fStack_40,param_5,param_6,param_7,param_8,param_9,param_10,param_11,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_position_3614acc
              (iVar1,fStack_40 + param_2,fStack_3c + param_3,fStack_38 + param_4,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    fStack_2c = param_13 * _UNK_0100a9cc;
    fStack_30 = param_12 * _UNK_0100a9cc;
    fStack_28 = param_14 * _UNK_0100a9cc;
    UnityEngine_Quaternion__Internal_FromEulerRad_35ee008(&fStack_40,&fStack_30,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_rotation_3614e20
              (iVar1,(fStack_34 * param_5 + fStack_40 * param_8 + fStack_38 * param_6) -
                     fStack_3c * param_7,
               (fStack_34 * param_6 + fStack_3c * param_8 + fStack_40 * param_7) -
               fStack_38 * param_5,
               (fStack_34 * param_7 + fStack_38 * param_8 + fStack_3c * param_5) -
               fStack_40 * param_6,
               ((fStack_34 * param_8 - fStack_40 * param_5) - fStack_3c * param_6) -
               fStack_38 * param_7,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystem__Play_368e960(param_1,0);
  }
  return;
}

