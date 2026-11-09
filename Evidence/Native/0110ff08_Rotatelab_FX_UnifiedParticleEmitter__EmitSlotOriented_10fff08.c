/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$EmitSlotOriented
void Rotatelab_FX_UnifiedParticleEmitter__EmitSlotOriented (Rotatelab_FX_UnifiedParticleEmitter_o* __this, int32_t slotIndex, UnityEngine_Vector3_o worldPosition, UnityEngine_Vector3_o worldNormal, UnityEngine_Color_o color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.UnifiedParticleEmitter$$EmitSlotOriented
   void Rotatelab_FX_UnifiedParticleEmitter__EmitSlotOriented
   (Rotatelab_FX_UnifiedParticleEmitter_o* __this, int32_t slotIndex, UnityEngine_Vector3_o
   worldPosition, UnityEngine_Vector3_o worldNormal, UnityEngine_Color_o color, const MethodInfo*
   method); */

void Rotatelab_FX_UnifiedParticleEmitter__EmitSlotOriented_10fff08
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
               undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_011101a8 + 0x110ff28);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011101ac + 0x110ff40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011101b0 + 0x110ff4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011101b4 + 0x110ff58));
    *pcVar4 = '\x01';
  }
  uStack_44 = 0;
  if (-1 < param_2) {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (param_2 < *(int *)(*(int *)(param_1 + 0x18) + 0xc)) {
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_List_UnifiedParticleEmitter_Instance___get_Item_27b0a14
                (&iStack_70,*(int *)(param_1 + 0x18),param_2,
                 **(undefined4 **)(_UNK_011101b8 + 0x110ffb0));
      iVar1 = iStack_70;
      if (*(int *)(**(int **)(_UNK_011101bc + 0x110ffc4) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Equality_36033f4(iVar1,0,0);
      if (iVar2 == 0) {
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
        uStack_28 = param_8;
        pcVar4 = (char *)(_UNK_011101c0 + 0x1110034);
        uStack_2c = param_7;
        uStack_30 = param_6;
        uStack_40 = 0;
        uStack_38 = 0;
        if (*pcVar4 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_011101c4 + 0x111005c));
          *pcVar4 = '\x01';
        }
        iVar3 = *(int *)(**(int **)(_UNK_011101c8 + 0x1110080) + 0x5c);
        uStack_40 = *(undefined8 *)(iVar3 + 0x18);
        uStack_38 = *(undefined4 *)(iVar3 + 0x20);
        UnityEngine_Quaternion__Internal_LookRotation_35ee358(&iStack_70,&uStack_30,&uStack_40,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__SetPositionAndRotation_3615c58
                  (iVar2,param_3,param_4,param_5,iStack_70,uStack_6c,uStack_68,uStack_64,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uStack_44 = UnityEngine_ParticleSystem__get_main_368ecf8(iVar1,0);
        UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_369036c
                  (&iStack_70,param_9,param_10,param_11,param_12,0);
        UnityEngine_ParticleSystem_MainModule__set_startColor_368f2ec
                  (&uStack_44,iStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,
                   uStack_54,uStack_50,uStack_4c,uStack_48,0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_ParticleSystem__Stop_368e968(iVar1,1,1,0);
        UnityEngine_ParticleSystem__Play_368e864(iVar1,1,0);
      }
    }
  }
  return;
}

