/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitDie
void Rotatelab_Scripts_BulletParticleManager__EmitDie (Rotatelab_Scripts_BulletParticleManager_o* __this, UnityEngine_Vector3_o worldPosition, UnityEngine_Quaternion_o rotation, int32_t colorType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BulletParticleManager$$EmitDie
   void Rotatelab_Scripts_BulletParticleManager__EmitDie (Rotatelab_Scripts_BulletParticleManager_o*
   __this, UnityEngine_Vector3_o worldPosition, UnityEngine_Quaternion_o rotation, int32_t
   colorType, const MethodInfo* method); */

void Rotatelab_Scripts_BulletParticleManager__EmitDie_ffadc0
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               int param_9)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uStack_60;
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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar12 = (char *)(_UNK_0100b48c + 0x100ade0);
  if (*pcVar12 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b490 + 0x100adf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b494 + 0x100ae00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b498 + 0x100ae0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b49c + 0x100ae18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100b4a0 + 0x100ae24));
    *pcVar12 = '\x01';
  }
  uVar16 = 0;
  uStack_28 = 0;
  uStack_2c = 0;
  uStack_30 = 0;
  iVar2 = Rotatelab_Scripts_BulletParticleManager__NextInPool_ffa2e4
                    (*(undefined4 *)(param_1 + 0x68),param_1 + 0x6c);
  uVar13 = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(**(int **)(_UNK_0100b4a4 + 0x100ae58) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar13,0,0);
  uVar15 = 0;
  uVar13 = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x3c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = *(undefined4 *)(iVar3 + 0x88);
    uVar9 = *(undefined4 *)(iVar3 + 0x8c);
    uVar8 = *(undefined4 *)(iVar3 + 0x90);
    uVar13 = *(undefined4 *)(iVar3 + 0x94);
    uVar15 = *(undefined4 *)(iVar3 + 0x98);
    uVar16 = *(undefined4 *)(iVar3 + 0x9c);
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__GetComponent_object__143f3b0
                    (iVar2,**(undefined4 **)(_UNK_0100b4a8 + 0x100aee0));
  iVar4 = UnityEngine_Component__get_transform_35fe190(iVar2,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Transform__GetChild_3617760(iVar4,0,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__GetComponent_object__143f3b0
                    (iVar4,**(undefined4 **)(_UNK_0100b4b0 + 0x100af60));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__GetComponent_object__143f3b0
                    (iVar4,**(undefined4 **)(_UNK_0100b4b4 + 0x100af84));
  iVar6 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_0100b4b8 + 0x100af9c));
  if (param_9 == 0x15) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__set_material_35c59b4(iVar3,*(undefined4 *)(iVar6 + 0x28),0);
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_0100b4c0 + 0x100b040));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = *(undefined4 *)(iVar3 + 0x34);
  }
  else if (param_9 == 0x16) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__set_material_35c59b4(iVar3,*(undefined4 *)(iVar6 + 0x2c),0);
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_0100b4bc + 0x100afec));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = *(undefined4 *)(iVar3 + 0x38);
  }
  else {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Renderer__set_material_35c59b4(iVar3,*(undefined4 *)(iVar6 + 0x24),0);
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_0100b4c4 + 0x100b094));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = *(undefined4 *)(iVar3 + 0x30);
  }
  piVar14 = *(int **)(_UNK_0100b4c8 + 0x100b0bc);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Renderer__set_material_35c59b4(iVar5,uVar11,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Renderer__get_sharedMaterial_35c59b8(iVar5,0);
  if (*(int *)(*piVar14 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar5 = UnityEngine_Object__op_Inequality_36018e4(iVar3,0,0);
  bVar1 = true;
  if (iVar5 != 0) {
    piVar14 = *(int **)(_UNK_0100b4cc + 0x100b128);
    iVar5 = *piVar14;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar14;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Material__HasProperty_35c8130
                      (iVar3,*(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x74),0);
    if (iVar5 != 0) {
      iVar5 = *piVar14;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar14;
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      bVar1 = false;
      fVar7 = (float)UnityEngine_Material__GetFloat_35cb1b4
                               (iVar3,*(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x74),0);
      if (fVar7 < 0.5) {
        bVar1 = true;
      }
    }
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_28 = UnityEngine_ParticleSystem__get_main_368ecf8(iVar4,0);
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  uStack_40 = uStack_5c;
  uStack_3c = uStack_58;
  uStack_38 = uStack_54;
  if (bVar1) {
    uStack_60 = 0;
    uStack_50 = 0;
    UnityEngine_ParticleSystem_MinMaxGradient___ctor_3690048
              (&uStack_60,0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  }
  else {
    uStack_60 = 0;
    uStack_50 = 0;
    UnityEngine_ParticleSystem_MinMaxGradient___ctor_369010c
              (&uStack_60,0,0,0,0x3f800000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  }
  UnityEngine_ParticleSystem_MainModule__set_startColor_368f2ec
            (&uStack_28,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,
             uStack_44,uStack_40,uStack_3c,uStack_38,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_2c = UnityEngine_ParticleSystem__get_colorOverLifetime_368ed7c(iVar2,0);
  iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_0100b4d0 + 0x100b2e0));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Scripts_BlasterColorDataSo__GetDataByType_ff4740(iVar3,param_9);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_36903d4
            (&uStack_60,*(undefined4 *)(iVar3 + 0x58),0);
  UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color_36904f4
            (&uStack_2c,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,
             uStack_44,uStack_40,uStack_3c,uStack_38,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_30 = UnityEngine_ParticleSystem__get_colorOverLifetime_368ed7c(iVar4,0);
  iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_0100b4d4 + 0x100b398));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Scripts_BlasterColorDataSo__GetDataByType_ff4740(iVar3,param_9);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_36903d4
            (&uStack_60,*(undefined4 *)(iVar3 + 0x5c),0);
  UnityEngine_ParticleSystem_ColorOverLifetimeModule__set_color_36904f4
            (&uStack_30,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,uStack_4c,uStack_48,
             uStack_44,uStack_40,uStack_3c,uStack_38,0);
  Rotatelab_Scripts_BulletParticleManager__EmitTargeted_ffa778
            (iVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar10,uVar9,uVar8,uVar13
             ,uVar15,uVar16);
  return;
}

