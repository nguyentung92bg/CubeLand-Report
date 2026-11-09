/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$EmitInto
void Rotatelab_FX_UnifiedParticleEmitter__EmitInto (UnityEngine_ParticleSystem_o* target, UnityEngine_Vector3_o worldPosition, UnityEngine_Color_o color, int32_t count, float startSize, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$EmitInto
   void Rotatelab_FX_UnifiedParticleEmitter__EmitInto (UnityEngine_ParticleSystem_o* target,
   UnityEngine_Vector3_o worldPosition, UnityEngine_Color_o color, int32_t count, float startSize,
   const MethodInfo* method); */

void Rotatelab_FX_UnifiedParticleEmitter__EmitInto_10ffd94
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar2 = (char *)(_UNK_0110fefc + 0x110fdb4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110ff00 + 0x110fdcc));
    *pcVar2 = '\x01';
  }
  uStack_28 = 0;
  if (*(int *)(**(int **)(_UNK_0110ff04 + 0x110fde4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(param_1,0,0);
  if (iVar1 == 0) {
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_position_3614acc(iVar1,param_2,param_3,param_4,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_28 = UnityEngine_ParticleSystem__get_main_368ecf8(param_1,0);
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_369036c
              (&uStack_54,param_5,param_6,param_7,param_8,0);
    UnityEngine_ParticleSystem_MainModule__set_startColor_368f2ec
              (&uStack_28,uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,uStack_3c,
               uStack_38,uStack_34,uStack_30,uStack_2c,0);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystem__Play_368e960(param_1,0);
  }
  return;
}

