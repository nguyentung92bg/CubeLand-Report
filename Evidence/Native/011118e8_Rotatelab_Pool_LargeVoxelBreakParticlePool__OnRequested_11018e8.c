/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$OnRequested
void Rotatelab_Pool_LargeVoxelBreakParticlePool__OnRequested (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, int32_t colorType, UnityEngine_Vector3_o position, int32_t emission, float radius, float sizeMultiplier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.LargeVoxelBreakParticlePool$$OnRequested
   void Rotatelab_Pool_LargeVoxelBreakParticlePool__OnRequested
   (Rotatelab_Pool_LargeVoxelBreakParticlePool_o* __this, int32_t colorType, UnityEngine_Vector3_o
   position, int32_t emission, float radius, float sizeMultiplier, const MethodInfo* method); */

void Rotatelab_Pool_LargeVoxelBreakParticlePool__OnRequested_11018e8
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,int param_6,float param_7,float param_8)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint in_fpscr;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  pcVar7 = (char *)(_UNK_01111e1c + 0x1111914);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01111e20 + 0x1111928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01111e24 + 0x1111934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01111e28 + 0x1111940));
    *pcVar7 = '\x01';
  }
  uStack_94 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_90 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_8c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_34 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  iStack_38 = 0;
  uStack_3c = 0;
  uStack_40 = 0;
  uStack_44 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_9c = 0;
  uStack_7c = uStack_94;
  uStack_78 = uStack_90;
  uStack_74 = uStack_8c;
  uStack_64 = uStack_94;
  uStack_60 = uStack_90;
  uStack_5c = uStack_8c;
  uStack_54 = uStack_94;
  uStack_50 = uStack_90;
  uStack_4c = uStack_8c;
  iVar2 = Rotatelab_Pool_LargeVoxelBreakParticlePool__Get_1101e38(param_1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_transform_35fe190(iVar2,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc(iVar3,param_3,param_4,param_5,0);
  iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_01111e2c + 0x1111a00));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_Scripts_VoxelColorDataSo__GetData_ff536c(iVar3,param_2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__GetComponent_object__143f3b0
                    (iVar2,**(undefined4 **)(_UNK_01111e30 + 0x1111a40));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_FX_ParticleController__UpdateColor_10fad7c(iVar4,*(undefined4 *)(iVar3 + 0x38));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_34 = UnityEngine_ParticleSystem__get_main_368ecf8(iVar2,0);
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_369036c
            (&uStack_c8,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
             *(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18),0);
  UnityEngine_ParticleSystem_MainModule__set_startColor_368f2ec
            (&uStack_34,uStack_c8,uStack_c4,uStack_c0,uStack_bc,uStack_b8,uStack_b4,uStack_b0,
             uStack_ac,uStack_a8,uStack_a4,uStack_a0,0);
  uVar8 = in_fpscr & 0xfffffff | (uint)(param_7 < 0.0) << 0x1f | (uint)(param_7 == 0.0) << 0x1e;
  uVar9 = uVar8 | (uint)NAN(param_7) << 0x1c;
  bVar1 = (byte)(uVar8 >> 0x18);
  if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar9 >> 0x1c) & 1)) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_3c = UnityEngine_ParticleSystem__get_shape_368ed50(iVar2,0);
    UnityEngine_ParticleSystem_ShapeModule__set_radius_368f960(&uStack_3c,param_7,0);
  }
  if (0 < param_6) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_40 = UnityEngine_ParticleSystem__get_emission_368ed24(iVar2,0);
    iVar3 = UnityEngine_ParticleSystem_EmissionModule__get_burstCount_368f87c(&uStack_40,0);
    if (0 < iVar3) {
      UnityEngine_ParticleSystem_EmissionModule__GetBurst_368f78c(&uStack_c8,&uStack_40,0,0);
      uVar10 = VectorSignedToFloat(param_6,(byte)(uVar9 >> 0x16) & 3);
      uStack_68 = uStack_c8;
      uStack_64 = uStack_c4;
      uStack_60 = uStack_c0;
      uStack_5c = uStack_bc;
      uStack_58 = uStack_b8;
      uStack_54 = uStack_b4;
      uStack_50 = uStack_b0;
      uStack_4c = uStack_ac;
      uStack_48 = uStack_a8;
      uStack_44 = uStack_a4;
      UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit_368feac(&uStack_e0,uVar10,0);
      UnityEngine_ParticleSystem_Burst__set_count_368fc14
                (&uStack_68,uStack_e0,uStack_dc,uStack_d8,uStack_d4,uStack_d0,uStack_cc,0);
      UnityEngine_ParticleSystem_EmissionModule__SetBurst_368f690
                (&uStack_40,0,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58,uStack_54,uStack_50,
                 uStack_4c,uStack_48,uStack_44,0);
    }
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_206b35c
                    (*(int *)(param_1 + 0x20),iVar2,&iStack_38,
                     **(undefined4 **)(_UNK_01111e34 + 0x1111c48));
  if (iVar3 != 0) {
    iVar3 = 0;
    uVar8 = 0;
    while( true ) {
      if (iStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iStack_38 + 0xc) <= (int)uVar8) break;
      if (iStack_38 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iStack_38 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar4 = iStack_38 + iVar3;
      uStack_98 = *(undefined4 *)(iVar4 + 0x14);
      uStack_94 = *(undefined4 *)(iVar4 + 0x18);
      uStack_90 = *(undefined4 *)(iVar4 + 0x1c);
      uStack_8c = *(undefined4 *)(iVar4 + 0x20);
      iVar6 = *(int *)(iVar4 + 0x10);
      uStack_88 = *(undefined8 *)(iVar4 + 0x24);
      uStack_80 = uStack_98;
      uStack_7c = uStack_94;
      uStack_78 = uStack_90;
      uStack_74 = uStack_8c;
      uStack_70 = uStack_88;
      iVar4 = UnityEngine_ParticleSystem_MinMaxCurve__get_mode_368fd28(&uStack_98,0);
      if (iVar4 - 1U < 2) {
        fVar5 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_curveMultiplier_368fd30
                                 (&uStack_80,0);
        UnityEngine_ParticleSystem_MinMaxCurve__set_curveMultiplier_368fd38
                  (&uStack_98,fVar5 * param_8,0);
      }
      else if (iVar4 == 3) {
        fVar5 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin_368fd60(&uStack_80,0)
        ;
        UnityEngine_ParticleSystem_MinMaxCurve__set_constantMin_368fd68
                  (&uStack_98,fVar5 * param_8,0);
        fVar5 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax_368fd50(&uStack_80,0)
        ;
        UnityEngine_ParticleSystem_MinMaxCurve__set_constantMax_368fd58
                  (&uStack_98,fVar5 * param_8,0);
      }
      else if (iVar4 == 0) {
        fVar5 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constant_368fd70(&uStack_80,0);
        UnityEngine_ParticleSystem_MinMaxCurve__set_constant_368fd78(&uStack_98,fVar5 * param_8,0);
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_9c = UnityEngine_ParticleSystem__get_main_368ecf8(iVar6,0);
      UnityEngine_ParticleSystem_MainModule__set_startSize_368f154
                (&uStack_9c,uStack_98,uStack_94,uStack_90,uStack_8c,(undefined4)uStack_88,
                 uStack_88._4_4_,0);
      iVar3 = iVar3 + 0x1c;
      uVar8 = uVar8 + 1;
    }
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e864(iVar2,1,0);
  return;
}

