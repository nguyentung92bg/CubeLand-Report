/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$MoveInProgression
float Rotatelab_CloudRush_CloudRushPlayerAvatarController__MoveInProgression (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, UnityEngine_Vector2_o newAnchoredPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$MoveInProgression
   float Rotatelab_CloudRush_CloudRushPlayerAvatarController__MoveInProgression
   (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, UnityEngine_Vector2_o
   newAnchoredPosition, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushPlayerAvatarController__MoveInProgression_10e2820
               (int param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char *pcVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  
  pcVar10 = (char *)(_UNK_010f3154 + 0x10f2848);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f3158 + 0x10f285c));
    *pcVar10 = '\x01';
  }
  uStack_84 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_80 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_7c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  fVar17 = *(float *)(param_1 + 0x28);
  fStack_78 = 0.0;
  uStack_88 = 0;
  fStack_74 = (float)uStack_84;
  fStack_70 = (float)uStack_80;
  uStack_6c = uStack_7c;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&fStack_d0,*(int *)(param_1 + 0x10),0);
  fVar15 = fStack_cc;
  fVar14 = *(float *)(param_1 + 0x24);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localScale_36154c0(&fStack_d0,*(int *)(param_1 + 0x10),0);
  fVar6 = fStack_c8;
  fVar4 = fStack_cc;
  fVar1 = fStack_d0;
  fVar13 = *(float *)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&fStack_d0,*(int *)(param_1 + 0x10),0);
  fVar2 = fStack_d0;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localEulerAngles_3614ed4(&fStack_d0,*(int *)(param_1 + 0x10),0);
  fVar7 = fStack_c8;
  fVar5 = fStack_cc;
  fVar3 = fStack_d0;
  fVar8 = (float)UnityEngine_Random__Range_35f8ac0
                           (*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),0);
  fVar9 = (float)UnityEngine_Random__Range_35f8ac0
                           (*(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c),0);
  PrimeTween_Sequence__Create_2cef1e0(&fStack_98,1,0,1,0,0,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uVar16 = *(undefined4 *)(param_1 + 0x28);
  fStack_78 = fStack_98;
  fStack_74 = (float)uStack_94;
  fStack_70 = (float)uStack_90;
  uStack_6c = uStack_8c;
  if (*(int *)(**(int **)(_UNK_010f315c + 0x10f2998) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
            (&fStack_d0,uVar11,param_2,uVar16,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Group_2cef730
            (&fStack_a8,&fStack_78,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  fStack_78 = fStack_a8;
  fStack_74 = (float)uStack_a4;
  fStack_70 = (float)uStack_a0;
  uStack_6c = uStack_9c;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_b8,1,0,1,0,0,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uStack_88 = uStack_b8;
  uStack_84 = uStack_b4;
  uStack_80 = uStack_b0;
  uStack_7c = uStack_ac;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_d0,6,0);
  fVar17 = fVar17 * 0.5;
  fVar12 = param_3;
  if (param_3 < fVar15) {
    fVar12 = fVar15;
  }
  PrimeTween_Tween__UIAnchoredPositionY_2ce7730
            (&fStack_d0,uVar11,fVar12 + fVar14,fVar17,fStack_d0,fStack_cc,fStack_c8,uStack_c4,
             uStack_c0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_e0,&uStack_88,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uStack_88 = uStack_e0;
  uStack_84 = uStack_dc;
  uStack_80 = uStack_d8;
  uStack_7c = uStack_d4;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_d0,5,0);
  PrimeTween_Tween__UIAnchoredPositionY_2ce7730
            (&fStack_d0,uVar11,param_3,fVar17,fStack_d0,fStack_cc,fStack_c8,uStack_c4,uStack_c0,1,0,
             0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_d0,&uStack_88,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  PrimeTween_Sequence__Group_2cf164c
            (&fStack_f0,&fStack_78,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  fStack_78 = fStack_f0;
  fStack_74 = (float)uStack_ec;
  fStack_70 = (float)uStack_e8;
  uStack_6c = uStack_e4;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_100,1,0,1,0,0,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uStack_88 = uStack_100;
  uStack_84 = uStack_fc;
  uStack_80 = uStack_f8;
  uStack_7c = uStack_f4;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_d0,6,0);
  fVar14 = 1.0;
  fVar15 = 1.0 - fVar13;
  fVar13 = fVar13 + 1.0;
  PrimeTween_Tween__Scale_2ce6560
            (&fStack_d0,uVar11,fVar1 * fVar15,fVar4 * fVar13,fVar6,fVar17 * _UNK_010f2fdc,fStack_d0,
             fStack_cc,fStack_c8,uStack_c4,uStack_c0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_110,&uStack_88,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uStack_88 = uStack_110;
  uStack_84 = uStack_10c;
  uStack_80 = uStack_108;
  uStack_7c = uStack_104;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_d0,6,0);
  PrimeTween_Tween__Scale_2ce6560
            (&fStack_d0,uVar11,fVar1,fVar4,fVar6,fVar17 * _UNK_010f2fe0,fStack_d0,fStack_cc,
             fStack_c8,uStack_c4,uStack_c0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_120,&uStack_88,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  uStack_88 = uStack_120;
  uStack_84 = uStack_11c;
  uStack_80 = uStack_118;
  uStack_7c = uStack_114;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_130,&uStack_88,fVar17,0);
  uStack_88 = uStack_130;
  uStack_84 = uStack_12c;
  uStack_80 = uStack_128;
  uStack_7c = uStack_124;
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_d0,6,0);
  PrimeTween_Tween__Scale_2ce6560
            (&fStack_d0,uVar11,fVar1 * fVar13,fVar4 * fVar15,fVar6,0x3dcccccd,fStack_d0,fStack_cc,
             fStack_c8,uStack_c4,uStack_c0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_140,&uStack_88,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uStack_88 = uStack_140;
  uStack_84 = uStack_13c;
  uStack_80 = uStack_138;
  uStack_7c = uStack_134;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_d0,0x1b,0);
  PrimeTween_Tween__Scale_2ce6560
            (&fStack_d0,uVar11,fVar1,fVar4,fVar6,0x3e19999a,fStack_d0,fStack_cc,fStack_c8,uStack_c4,
             uStack_c0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_d0,&uStack_88,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  PrimeTween_Sequence__Group_2cf164c
            (&fStack_150,&fStack_78,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  fStack_78 = fStack_150;
  fStack_74 = (float)uStack_14c;
  fStack_70 = (float)uStack_148;
  uStack_6c = uStack_144;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_160,1,0,1,0,0,0);
  uStack_88 = uStack_160;
  uStack_84 = uStack_15c;
  uStack_80 = uStack_158;
  uStack_7c = uStack_154;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_170,&uStack_88,fVar17,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uStack_88 = uStack_170;
  uStack_84 = uStack_16c;
  uStack_80 = uStack_168;
  uStack_7c = uStack_164;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_d0,6,0);
  if (param_2 - fVar2 < 0.0) {
    fVar14 = -1.0;
  }
  PrimeTween_Tween__LocalRotation_2ce4354
            (&fStack_d0,uVar11,fVar3,fVar5,fVar7 + fVar14 * fVar8,fVar17 * _UNK_010f314c,fStack_d0,
             fStack_cc,fStack_c8,uStack_c4,uStack_c0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_180,&uStack_88,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  uStack_88 = uStack_180;
  uStack_84 = uStack_17c;
  uStack_80 = uStack_178;
  uStack_7c = uStack_174;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_190,&uStack_88,fVar17 * _UNK_010f3150,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uStack_88 = uStack_190;
  uStack_84 = uStack_18c;
  uStack_80 = uStack_188;
  uStack_7c = uStack_184;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_d0,6,0);
  PrimeTween_Tween__LocalRotation_2ce4354
            (&fStack_d0,uVar11,fVar3,fVar5,fVar7 - fVar14 * fVar9,0x3dcccccd,fStack_d0,fStack_cc,
             fStack_c8,uStack_c4,uStack_c0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_1a0,&uStack_88,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uStack_88 = uStack_1a0;
  uStack_84 = uStack_19c;
  uStack_80 = uStack_198;
  uStack_7c = uStack_194;
  PrimeTween_Easing__op_Implicit_2ce2e54(&fStack_d0,0x1b,0);
  PrimeTween_Tween__LocalRotation_2ce4354
            (&fStack_d0,uVar11,fVar3,fVar5,fVar7,0x3dcccccd,fStack_d0,fStack_cc,fStack_c8,uStack_c4,
             uStack_c0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&fStack_d0,&uStack_88,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  PrimeTween_Sequence__Group_2cf164c
            (&fStack_d0,&fStack_78,fStack_d0,fStack_cc,fStack_c8,uStack_c4,0);
  fStack_78 = fStack_d0;
  fStack_74 = fStack_cc;
  fStack_70 = fStack_c8;
  uStack_6c = uStack_c4;
  PrimeTween_Sequence__get_duration_2ceee58(&fStack_78,0);
  return;
}

