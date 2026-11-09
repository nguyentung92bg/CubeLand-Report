/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$AnimateBreakParticle
void Rotatelab_Scripts_ColorBoxController__AnimateBreakParticle (Rotatelab_Scripts_ColorBoxController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ColorBoxController$$AnimateBreakParticle
   void Rotatelab_Scripts_ColorBoxController__AnimateBreakParticle
   (Rotatelab_Scripts_ColorBoxController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_ColorBoxController__AnimateBreakParticle_ffdff0(int param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int *piVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  uint in_fpscr;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar30;
  undefined1 in_q6 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined4 uVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  uint uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uStack_100;
  uint uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  uint uStack_d4;
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
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  
  pcVar8 = (char *)(_UNK_0100e8c0 + 0x100e010);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100e8c4 + 0x100e024));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100e8c8 + 0x100e030));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100e8cc + 0x100e03c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100e8d0 + 0x100e048));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100e8d4 + 0x100e054));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100e8d8 + 0x100e060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100e8dc + 0x100e06c));
    *pcVar8 = '\x01';
  }
  fVar24 = _UNK_0100e2b4;
  uStack_a4 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_a0 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_9c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar9 = *(int *)(param_1 + 0x10);
  uStack_5c = 0;
  uStack_80 = (ulonglong)uStack_a4 << 0x20;
  uStack_78 = CONCAT44(uStack_9c,uStack_a0);
  uStack_a8 = 0;
  uStack_98 = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_94 = uStack_a4;
  uStack_90 = uStack_a0;
  uStack_8c = uStack_9c;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  auVar25._12_4_ = in_q6._12_4_;
  auVar25._0_8_ = in_q6._0_8_;
  auVar25._8_4_ = *(float *)(iVar9 + 0x14) + *(float *)(iVar9 + 0x14);
  auVar26._4_12_ = auVar25._4_12_;
  auVar26._0_4_ = *(float *)(iVar9 + 0x18) + *(float *)(iVar9 + 0x18);
  fVar22 = *(float *)(iVar9 + 0x1c) + *(float *)(iVar9 + 0x1c);
  fVar21 = (auVar25._8_4_ * auVar26._0_4_ * fVar22 + -4.0) / _UNK_0100e2b8;
  uVar19 = in_fpscr & 0xfffffff | (uint)(fVar21 < 0.0) << 0x1f;
  if (1.0 < fVar21) {
    fVar21 = 1.0;
  }
  if (SUB41(uVar19 >> 0x1f,0)) {
    fVar21 = _UNK_0100e2b4;
  }
  iVar9 = FUN_00ec388c(**(undefined4 **)(_UNK_0100e8e0 + 0x100e0f0),3);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = *(uint *)(iVar9 + 0xc);
  if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(int *)(iVar9 + 0x10) = auVar26._8_4_;
  if (uVar10 < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(int *)(iVar9 + 0x14) = auVar26._0_4_;
  if (uVar10 < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  *(float *)(iVar9 + 0x18) = fVar22;
  fVar22 = *(float *)(iVar9 + 0x10);
  if (1 < (int)uVar10) {
    pfVar13 = (float *)(iVar9 + 0x14);
    uVar14 = 1;
    do {
      if (*(uint *)(iVar9 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      fVar20 = *pfVar13;
      uVar36 = uVar19 & 0xfffffff | (uint)(fVar20 < fVar22) << 0x1f |
               (uint)(fVar20 == fVar22) << 0x1e;
      uVar19 = uVar36 | (uint)(NAN(fVar20) || NAN(fVar22)) << 0x1c;
      bVar1 = (byte)(uVar36 >> 0x18);
      if ((!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar19 >> 0x1c) & 1)) &&
         (fVar22 = fVar20, *(uint *)(iVar9 + 0xc) <= uVar14)) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar14 = uVar14 + 1;
      pfVar13 = pfVar13 + 1;
    } while (uVar10 != uVar14);
  }
  uVar19 = uVar19 & 0xfffffff | (uint)(fVar21 < 0.0) << 0x1f;
  auVar27._4_12_ = auVar26._4_12_;
  auVar27._0_4_ = 0x41f00000;
  pcVar8 = (char *)(_UNK_0100e8e4 + 0x100e1f4);
  if (SUB41(uVar19 >> 0x1f,0)) {
    fVar21 = fVar24;
  }
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100e8e8 + 0x100e210));
    *pcVar8 = '\x01';
  }
  fVar24 = fVar21 * auVar27._0_4_ + 20.0;
  if (*(int *)(**(int **)(_UNK_0100e8ec + 0x100e228) + 0x74) == 0) {
    FUN_00ec3934();
  }
  auVar28._8_8_ = auVar27._8_8_;
  auVar28._0_8_ = (double)fVar24;
  dVar32 = (double)modf(SUB84(auVar28._0_8_,0),(int)((ulonglong)auVar28._0_8_ >> 0x20),&uStack_100);
  if (NAN(fVar24)) {
    uVar19 = uVar19 & 0xfffffff | (uint)(dVar32 == -0.5) << 0x1e;
    if (!SUB41(uVar19 >> 0x1e,0)) {
      dVar32 = auVar28._0_8_ + -0.5;
      dVar32 = (double)ceil(SUB84(dVar32,0),(int)((ulonglong)dVar32 >> 0x20));
      goto LAB_0100e2d8;
    }
    dVar32 = -1.0;
  }
  else {
    uVar19 = uVar19 & 0xfffffff | (uint)(dVar32 == 0.5) << 0x1e;
    if (!SUB41(uVar19 >> 0x1e,0)) {
      dVar32 = auVar28._0_8_ + 0.5;
      dVar32 = (double)floor(SUB84(dVar32,0),(int)((ulonglong)dVar32 >> 0x20));
      goto LAB_0100e2d8;
    }
    dVar32 = 1.0;
  }
  auVar28._0_8_ = (double)CONCAT44(uStack_fc,uStack_100);
  dVar32 = auVar28._0_8_ + dVar32;
  uVar10 = FUN_00f88224(uStack_100,uStack_fc);
  if ((uVar10 & 1) == 0) {
    dVar32 = auVar28._0_8_;
  }
LAB_0100e2d8:
  iVar9 = (int)(longlong)dVar32;
  uVar11 = *(undefined4 *)(param_1 + 0x24);
  uVar19 = uVar19 & 0xfffffff | (uint)(dVar32 == _UNK_0100e2c0) << 0x1e;
  if (SUB41(uVar19 >> 0x1e,0)) {
    iVar9 = -0x80000000;
  }
  if (*(int *)(**(int **)(_UNK_0100e8f0 + 0x100e2ec) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__Instantiate_object__14d4b10
                    (uVar11,**(undefined4 **)(_UNK_0100e8f4 + 0x100e320));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
  iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  iVar15 = *(int *)(param_1 + 0x10);
  if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__TransformPoint_3616968
            (&uStack_100,iVar5,*(undefined4 *)(iVar15 + 8),*(undefined4 *)(iVar15 + 0xc),
             *(undefined4 *)(iVar15 + 0x10),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc(iVar4,uStack_100,uStack_fc,uStack_f8,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__GetComponent_object__143f3b0
                    (iVar3,**(undefined4 **)(_UNK_0100e8f8 + 0x100e3ec));
  iVar5 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                    (**(undefined4 **)(_UNK_0100e8fc + 0x100e404));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = Rotatelab_Scripts_ColorBoxColorDataSO__GetDataByType_ff4f68
                    (iVar5,*(undefined4 *)(param_1 + 0x14));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  auVar29._4_12_ = auVar28._4_12_;
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  auVar29._0_4_ = _UNK_0100e7c4;
  Rotatelab_FX_ParticleController__UpdateColor_10fad7c(iVar4,*(undefined4 *)(iVar5 + 0x14),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar24 = fVar21 * 0.75 + 1.0;
  iVar4 = UnityEngine_Component__GetComponentsInChildren_object__143ff14
                    (iVar3,1,**(undefined4 **)(_UNK_0100e900 + 0x100e488));
  uVar11 = 0;
  uVar10 = *(uint *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar31 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uVar14 = 0;
  puVar16 = *(undefined4 **)(_UNK_0100e904 + 0x100e4b8);
  uVar23 = VectorSignedToFloat(iVar9,(byte)(uVar19 >> 0x16) & 3);
  piVar12 = *(int **)(_UNK_0100e908 + 0x100e4c4);
  while( true ) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar4 + 0xc) <= (int)uVar14) {
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_ParticleSystem__Play_368e864(iVar3,1,0);
      return;
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar5 = *(int *)(iVar4 + 0x10 + uVar14 * 4);
    if (iVar5 == 0) break;
    iVar15 = UnityEngine_Component__GetComponent_object__143f3b0(iVar5,*puVar16);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__op_Equality_36033f4(iVar15,0,0);
    if (iVar6 == 0) {
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar15 = UnityEngine_Renderer__get_enabled_35c510c(iVar15,0);
      if (iVar15 != 0) {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar15 = UnityEngine_Component__get_gameObject_35fe360(iVar5,0);
        if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar15 = UnityEngine_GameObject__get_activeSelf_360212c(iVar15,0);
        if (iVar15 != 0) {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uStack_5c = UnityEngine_ParticleSystem__get_main_368ecf8(iVar5,0);
          UnityEngine_ParticleSystem_MainModule__get_startSize_368f014(&uStack_100,&uStack_5c,0);
          uStack_70 = CONCAT44(uStack_ec,uStack_f0);
          uStack_80 = CONCAT44(uStack_fc,uStack_100);
          uStack_78 = CONCAT44(uStack_f4,uStack_f8);
          fVar21 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMin_368fd60
                                    (&uStack_80,0);
          UnityEngine_ParticleSystem_MainModule__get_startSize_368f014(&uStack_c0,&uStack_5c,0);
          uStack_80 = CONCAT44(uStack_bc,uStack_c0);
          auVar2._8_4_ = uStack_b8;
          auVar2._0_8_ = uStack_80;
          auVar2._12_4_ = uStack_b4;
          uStack_70 = CONCAT44(uStack_ac,uStack_b0);
          uStack_78 = auVar2._8_8_;
          fVar20 = (float)UnityEngine_ParticleSystem_MinMaxCurve__get_constantMax_368fd50
                                    (&uStack_80,0);
          uStack_c8 = 0;
          uStack_c4 = 0;
          uStack_d8 = uVar11;
          uStack_d4 = uVar10;
          uStack_d0 = uVar30;
          uStack_cc = uVar31;
          UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fce0
                    (&uStack_d8,fVar24 * fVar21,fVar24 * fVar20,0);
          UnityEngine_ParticleSystem_MainModule__set_startSize_368f154
                    (&uStack_5c,uStack_d8,uStack_d4,uStack_d0,uStack_cc,uStack_c8,uStack_c4,0);
          iVar15 = UnityEngine_ParticleSystem_MainModule__get_maxParticles_368f548(&uStack_5c,0);
          if (iVar15 < iVar9) {
            UnityEngine_ParticleSystem_MainModule__set_maxParticles_368f594(&uStack_5c,iVar9,0);
          }
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uStack_60 = UnityEngine_ParticleSystem__get_shape_368ed50(iVar5,0);
          iVar15 = UnityEngine_ParticleSystem_ShapeModule__get_enabled_368f8c8(&uStack_60,0);
          if (iVar15 != 0) {
            UnityEngine_ParticleSystem_ShapeModule__set_radius_368f960
                      (&uStack_60,fVar22 * 0.5 * auVar29._0_4_,0);
          }
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uStack_64 = UnityEngine_ParticleSystem__get_emission_368ed24(iVar5,0);
          iVar5 = UnityEngine_ParticleSystem_EmissionModule__get_burstCount_368f87c(&uStack_64,0);
          if (iVar5 < 1) {
            UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit_368feac(&uStack_100,uVar23,0);
            uVar36 = uStack_ec;
            uVar33 = uStack_f0;
            uVar18 = uStack_f4;
            uVar17 = uStack_f8;
            uVar19 = uStack_fc;
            uVar7 = uStack_100;
            uStack_e0 = 0;
            uStack_dc = 0;
            uStack_100 = uVar11;
            uStack_fc = uVar10;
            uStack_f8 = uVar30;
            uStack_f4 = uVar31;
            uStack_f0 = uVar11;
            uStack_ec = uVar10;
            uStack_e8 = uVar30;
            uStack_e4 = uVar31;
            UnityEngine_ParticleSystem_Burst___ctor_368fb70
                      (&uStack_100,0,uVar7,uVar19,uVar17,uVar18,uVar33,uVar36,0);
            uVar7 = uStack_100;
            uVar19 = uStack_fc;
            uVar17 = uStack_e0;
            uVar18 = uStack_dc;
            uVar33 = uStack_f8;
            uVar34 = uStack_f4;
            uVar35 = uStack_f0;
            uVar36 = uStack_ec;
            uVar37 = uStack_e8;
            uVar38 = uStack_e4;
          }
          else {
            UnityEngine_ParticleSystem_EmissionModule__GetBurst_368f78c(&uStack_100,&uStack_64,0,0);
            uStack_a8 = uStack_100;
            uStack_a4 = uStack_fc;
            uStack_a0 = uStack_f8;
            uStack_9c = uStack_f4;
            uStack_98 = uStack_f0;
            uStack_94 = uStack_ec;
            uStack_90 = uStack_e8;
            uStack_8c = uStack_e4;
            uStack_88 = uStack_e0;
            uStack_84 = uStack_dc;
            UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit_368feac(&uStack_c0,uVar23,0);
            UnityEngine_ParticleSystem_Burst__set_count_368fc14
                      (&uStack_a8,uStack_c0,uStack_bc,uStack_b8,uStack_b4,uStack_b0,uStack_ac,0);
            uVar7 = uStack_a8;
            uVar19 = uStack_a4;
            uVar17 = uStack_88;
            uVar18 = uStack_84;
            uVar33 = uStack_a0;
            uVar34 = uStack_9c;
            uVar35 = uStack_98;
            uVar36 = uStack_94;
            uVar37 = uStack_90;
            uVar38 = uStack_8c;
          }
          UnityEngine_ParticleSystem_EmissionModule__SetBurst_368f690
                    (&uStack_64,0,uVar7,uVar19,uVar33,uVar34,uVar35,uVar36,uVar37,uVar38,uVar17,
                     uVar18,0);
          piVar12 = *(int **)(_UNK_0100e90c + 0x100e880);
          puVar16 = *(undefined4 **)(_UNK_0100e910 + 0x100e88c);
        }
      }
    }
    uVar14 = uVar14 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

