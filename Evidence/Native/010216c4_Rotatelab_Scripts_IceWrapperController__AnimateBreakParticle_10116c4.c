/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$AnimateBreakParticle
void Rotatelab_Scripts_IceWrapperController__AnimateBreakParticle (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.IceWrapperController$$AnimateBreakParticle
   void Rotatelab_Scripts_IceWrapperController__AnimateBreakParticle
   (Rotatelab_Scripts_IceWrapperController_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_IceWrapperController__AnimateBreakParticle_10116c4(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  char *pcVar14;
  int iVar15;
  uint in_fpscr;
  uint uVar16;
  float fVar17;
  float fVar18;
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
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  
  pcVar14 = (char *)(_UNK_01021a94 + 0x10216e4);
  if (*pcVar14 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021a98 + 0x10216f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021a9c + 0x1021704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01021aa0 + 0x1021710));
    *pcVar14 = '\x01';
  }
  uStack_8c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_88 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  iVar15 = *(int *)(param_1 + 0x10);
  uStack_64 = 0;
  uStack_90 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_94 = 0;
  uStack_98 = 0;
  uStack_7c = uStack_8c;
  uStack_78 = uStack_88;
  uStack_74 = uStack_84;
  if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar17 = ((*(float *)(iVar15 + 0x14) + *(float *)(iVar15 + 0x14)) *
            (*(float *)(iVar15 + 0x18) + *(float *)(iVar15 + 0x18)) *
            (*(float *)(iVar15 + 0x1c) + *(float *)(iVar15 + 0x1c)) + -4.0) / _UNK_01021a7c;
  bVar1 = fVar17 < 0.0;
  if (1.0 < fVar17) {
    fVar17 = 1.0;
  }
  if (bVar1) {
    fVar17 = _UNK_01021a80;
  }
  uVar16 = in_fpscr & 0xfffffff | (uint)(fVar17 < 0.0) << 0x1f;
  if (SUB41(uVar16 >> 0x1f,0)) {
    fVar17 = _UNK_01021a80;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar15 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x14),0);
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_b0,iVar15,0);
  uVar7 = uStack_a8;
  uVar5 = uStack_ac;
  uVar13 = uStack_b0;
  if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar18 = fVar17 * 30.0 + 20.0;
  UnityEngine_Transform__get_rotation_3614cfc(&uStack_b0,iVar15,0);
  uVar9 = uStack_a4;
  uVar8 = uStack_a8;
  uVar6 = uStack_ac;
  uVar4 = uStack_b0;
  if (*(int *)(**(int **)(_UNK_01021aa4 + 0x1021830) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar11 = UnityEngine_Object__Instantiate_object__14d4f24
                     (uVar10,uVar13,uVar5,uVar7,uVar4,uVar6,uVar8,uVar9,
                      **(undefined4 **)(_UNK_01021aa8 + 0x1021860));
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_64 = UnityEngine_ParticleSystem__get_shape_368ed50(iVar11,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar12 = UnityEngine_Component__GetComponent_object__143f3b0
                     (*(int *)(param_1 + 0x14),**(undefined4 **)(_UNK_01021aac + 0x10218b0));
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = VectorSignedToFloat((int)fVar18,(byte)(uVar16 >> 0x16) & 3);
  uVar13 = UnityEngine_MeshFilter__get_sharedMesh_35cdfcc(iVar12,0);
  UnityEngine_ParticleSystem_ShapeModule__set_mesh_368f9b4(&uStack_64,uVar13,0);
  fVar3 = _UNK_01021a88;
  fVar2 = _UNK_01021a84;
  if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_lossyScale_3617374(&uStack_b0,iVar15,0);
  UnityEngine_ParticleSystem_ShapeModule__set_scale_368fab8
            (&uStack_64,uStack_b0,uStack_ac,uStack_a8,0);
  if (fVar18 == _UNK_01021a8c) {
    uVar10 = _UNK_01021a90;
  }
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit_368feac(&uStack_b0,uVar10,0);
  UnityEngine_ParticleSystem_Burst___ctor_368fb70
            (&uStack_90,0,uStack_b0,uStack_ac,uStack_a8,uStack_a4,uStack_a0,uStack_9c,0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_98 = UnityEngine_ParticleSystem__get_emission_368ed24(iVar11,0);
  UnityEngine_ParticleSystem_EmissionModule__SetBurst_368f690
            (&uStack_98,0,uStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,uStack_78,
             uStack_74,uStack_70,uStack_6c,0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_94 = UnityEngine_ParticleSystem__get_main_368ecf8(iVar11,0);
  uStack_ac = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_a8 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_a4 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_9c = 0;
  uStack_b0 = 0;
  uStack_a0 = 0;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fce0
            (&uStack_b0,fVar3 + fVar17 * fVar2,fVar17 * 0.5 + 2.0,0);
  UnityEngine_ParticleSystem_MainModule__set_startSize_368f154
            (&uStack_94,uStack_b0,uStack_ac,uStack_a8,uStack_a4,uStack_a0,uStack_9c,0);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_ParticleSystem__Play_368e960(iVar11,0);
  return;
}

