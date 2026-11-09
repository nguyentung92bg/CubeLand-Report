/* IL2CPP: Rotatelab.FX.VoxelDestructionParticleController$$Play
void Rotatelab_FX_VoxelDestructionParticleController__Play (Rotatelab_FX_VoxelDestructionParticleController_o* __this, UnityEngine_Vector3_o position, int32_t colorType, float sizeMultiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.FX.VoxelDestructionParticleController$$Play
   void Rotatelab_FX_VoxelDestructionParticleController__Play
   (Rotatelab_FX_VoxelDestructionParticleController_o* __this, UnityEngine_Vector3_o position,
   int32_t colorType, float sizeMultiplier, const MethodInfo* method); */

void Rotatelab_FX_VoxelDestructionParticleController__Play_10fb0cc
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
               undefined4 param_6)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar3 = (char *)(_UNK_0110b4d4 + 0x110b0f4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110b4d8 + 0x110b10c));
    *pcVar3 = '\x01';
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c(iVar1,param_2,param_3,param_4,0);
  Rotatelab_FX_VoxelDestructionParticleController__ApplyStartSize_10fb4e8
            (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
             *(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
             *(undefined4 *)(param_1 + 0x38),param_6);
  Rotatelab_FX_VoxelDestructionParticleController__ApplyStartSize_10fb4e8
            (*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x3c),
             *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),
             *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
             *(undefined4 *)(param_1 + 0x50),param_6);
  if (*(char *)(param_1 + 0x6c) != '\0') {
    Rotatelab_FX_VoxelDestructionParticleController__ApplyTrailWidth_10fb578
              (*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x54),
               *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
               *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x68),param_6);
  }
  puVar5 = *(undefined4 **)(_UNK_0110b4dc + 0x110b1e4);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_VoxelColorDataSo__GetVoxelMesh_ff54cc(iVar1,param_5,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystemRenderer__set_mesh_3690c44(iVar4,uVar2,0);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar5);
  if (param_5 == 0x15) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Scripts_VoxelColorDataSo__GetData_ff536c(iVar1,0x15,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__set_material_35c59b4(iVar4,*(undefined4 *)(iVar1 + 0x38),0);
    iVar4 = *(int *)(param_1 + 0x18);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystemRenderer__set_trailMaterial_3690934
              (iVar4,*(undefined4 *)(iVar1 + 0x20),0);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_36903d4
              (&uStack_5c,*(undefined4 *)(iVar1 + 0x30),0);
    UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color_36904f4
              (param_1 + 0x20,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,
               uStack_40,uStack_3c,uStack_38,uStack_34,0);
    iVar4 = *(int *)(param_1 + 0x1c);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_0110b4e0 + 0x110b34c));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x28);
  }
  else {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__set_material_35c59b4(iVar4,*(undefined4 *)(iVar1 + 0x14),0);
    iVar4 = *(int *)(param_1 + 0x18);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystemRenderer__set_trailMaterial_3690934
              (iVar4,*(undefined4 *)(iVar1 + 0x1c),0);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_36903d4
              (&uStack_5c,*(undefined4 *)(iVar1 + 0x2c),0);
    UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color_36904f4
              (param_1 + 0x20,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,
               uStack_40,uStack_3c,uStack_38,uStack_34,0);
    iVar4 = *(int *)(param_1 + 0x1c);
    iVar1 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_0110b4e4 + 0x110b450));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = *(undefined4 *)(iVar1 + 0x24);
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_material_35c59b4(iVar4,uVar2,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e864(*(int *)(param_1 + 0x10),0,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e864(*(int *)(param_1 + 0x14),0,0);
  return;
}

