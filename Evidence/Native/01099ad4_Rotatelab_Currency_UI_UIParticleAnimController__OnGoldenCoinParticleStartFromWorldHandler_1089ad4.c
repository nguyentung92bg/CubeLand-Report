/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnGoldenCoinParticleStartFromWorldHandler
void Rotatelab_Currency_UI_UIParticleAnimController__OnGoldenCoinParticleStartFromWorldHandler (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_Vector3_o worldPos, UnityEngine_Sprite_o* sprite, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnGoldenCoinParticleStartFromWorldHandler
   void Rotatelab_Currency_UI_UIParticleAnimController__OnGoldenCoinParticleStartFromWorldHandler
   (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_Vector3_o worldPos,
   UnityEngine_Sprite_o* sprite, const MethodInfo* method); */

void Rotatelab_Currency_UI_UIParticleAnimController__OnGoldenCoinParticleStartFromWorldHandler_1089ad4
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
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
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 uStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined1 auStack_a8 [28];
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 uStack_7c;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pcVar7 = (char *)(_UNK_0109a21c + 0x1099afc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a220 + 0x1099b14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a224 + 0x1099b20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a228 + 0x1099b2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a22c + 0x1099b38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a230 + 0x1099b44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a234 + 0x1099b50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a238 + 0x1099b5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a23c + 0x1099b68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a240 + 0x1099b74));
    *pcVar7 = '\x01';
  }
  uStack_3c = 0;
  uStack_40 = 0;
  iStack_44 = 0;
  FUN_00f88e5c(auStack_a8,100);
  iVar1 = UnityEngine_Camera__get_main_35aede4(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Camera__WorldToScreenPoint_35aea00(&uStack_110,iVar1,param_2,param_3,param_4,0);
  uVar12 = uStack_10c;
  uVar3 = uStack_110;
  if (*(int *)(**(int **)(_UNK_0109a244 + 0x1099bd4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Extensions__RectTransform_fc1bd0(param_1,0);
  if (*(int *)(**(int **)(_UNK_0109a248 + 0x1099c0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_39a69c8
            (uVar2,uVar3,uVar12,0,&uStack_40,0);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__TransformPoint_3616968(&uStack_110,iVar1,uStack_40,uStack_3c,0,0);
  uVar13 = uStack_108;
  uVar2 = uStack_10c;
  uVar12 = uStack_110;
  pcVar7 = (char *)(_UNK_0109a24c + 0x1099c9c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109a250 + 0x1099cbc));
    *pcVar7 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_0109a254 + 0x1099cd4) + 0x5c);
  uVar8 = *puVar4;
  uVar11 = puVar4[1];
  uVar10 = puVar4[2];
  uVar9 = puVar4[3];
  uVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_0109a258 + 0x1099cfc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__Instantiate_object__14d51e0
                    (uVar3,uVar12,uVar2,uVar13,uVar8,uVar11,uVar10,uVar9,uVar5,
                     **(undefined4 **)(_UNK_0109a25c + 0x1099d20));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = UnityEngine_Component__TryGetComponent_object__14402fc
                    (iVar1,&iStack_44,**(undefined4 **)(_UNK_0109a260 + 0x1099d64));
  if (iVar6 != 0) {
    if (iStack_44 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iStack_44 + 0x1c) = 0;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar1 + 0x2fdc);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109a264 + 0x1099dc0));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar3,param_1,**(undefined4 **)(_UNK_0109a268 + 0x1099de4),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar6,uVar3,0);
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_369036c
            (&uStack_110,0x3f800000,0x3f800000,0x3f800000,0x3f800000,0);
  *(undefined4 *)(iVar1 + 0x174) = uStack_f0;
  *(undefined4 *)(iVar1 + 0x178) = uStack_ec;
  *(undefined4 *)(iVar1 + 0x17c) = uStack_e8;
  *(ulonglong *)(iVar1 + 0x154) = CONCAT44(uStack_10c,uStack_110);
  *(ulonglong *)(iVar1 + 0x15c) = CONCAT44(uStack_104,uStack_108);
  *(ulonglong *)(iVar1 + 0x164) = CONCAT44(uStack_fc,uStack_100);
  *(undefined8 *)(iVar1 + 0x16c) = uStack_f8;
  thunk_FUN_00ec5080(iVar1 + 0x158,0);
  *(undefined4 *)(iVar1 + 0xe8) = 0x3dcccccd;
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit_368feac(&uStack_110,0x3f400000,0);
  *(undefined4 *)(iVar1 + 400) = uStack_100;
  *(undefined4 *)(iVar1 + 0x194) = uStack_fc;
  *(ulonglong *)(iVar1 + 0x180) = CONCAT44(uStack_10c,uStack_110);
  *(ulonglong *)(iVar1 + 0x188) = CONCAT44(uStack_104,uStack_108);
  thunk_FUN_00ec5080(iVar1 + 0x188,0);
  UnityEngine_ParticleSystem_MinMaxCurve__op_Implicit_368feac(&uStack_110,0x3f800000,0);
  *(undefined4 *)(iVar1 + 0x1ac) = uStack_fc;
  *(undefined4 *)(iVar1 + 0x1a8) = uStack_100;
  *(ulonglong *)(iVar1 + 0x198) = CONCAT44(uStack_10c,uStack_110);
  *(ulonglong *)(iVar1 + 0x1a0) = CONCAT44(uStack_104,uStack_108);
  thunk_FUN_00ec5080(iVar1 + 0x1a0,0);
  FUN_00f88e5c(&uStack_110,100);
  AssetKits_ParticleImage_SeparatedMinMaxCurve___ctor_2cda638(&uStack_110,0x42200000,0,1,0);
  thunk_FUN_00f95db8(iVar1 + 0xf0,&uStack_110,100);
  thunk_FUN_00ec5080(iVar1 + 0xfc,0);
  *(undefined4 *)(iVar1 + 0xb8) = 0;
  *(undefined4 *)(iVar1 + 0xbc) = 1;
  *(undefined4 *)(iVar1 + 0x2ef8) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0xc0) = 0;
  AssetKits_ParticleImage_ParticleImage__set_sprite_2cd935c(iVar1,param_5,0);
  UnityEngine_ParticleSystem_MinMaxGradient__op_Implicit_36903d4
            (&uStack_140,*(undefined4 *)(param_1 + 0x24),0);
  *(undefined4 *)(iVar1 + 0x1d0) = uStack_120;
  *(undefined4 *)(iVar1 + 0x1d4) = uStack_11c;
  *(undefined4 *)(iVar1 + 0x1d8) = uStack_118;
  *(ulonglong *)(iVar1 + 0x1b0) = CONCAT44(uStack_13c,uStack_140);
  *(ulonglong *)(iVar1 + 0x1b8) = CONCAT44(uStack_134,uStack_138);
  *(ulonglong *)(iVar1 + 0x1c0) = CONCAT44(uStack_12c,uStack_130);
  *(undefined8 *)(iVar1 + 0x1c8) = uStack_128;
  thunk_FUN_00ec5080(iVar1 + 0x1b4,0);
  AssetKits_ParticleImage_ParticleImage__set_attractorEnabled_2ccf278(iVar1,1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(param_1 + 0x10),0,**(undefined4 **)(_UNK_0109a26c + 0x1099fd0));
  *(undefined4 *)(iVar1 + 0x44c) = uVar3;
  thunk_FUN_00ec5080();
  uVar3 = 0;
  uVar12 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uVar2 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uVar13 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_140 = 0;
  uStack_130 = 0;
  uStack_12c = 0;
  uStack_13c = uVar12;
  uStack_138 = uVar2;
  uStack_134 = uVar13;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fc9c
            (&uStack_140,0x3f800000,*(undefined4 *)(param_1 + 0x30),0);
  *(undefined4 *)(iVar1 + 0x460) = uStack_130;
  *(undefined4 *)(iVar1 + 0x464) = uStack_12c;
  *(ulonglong *)(iVar1 + 0x450) = CONCAT44(uStack_13c,uStack_140);
  *(ulonglong *)(iVar1 + 0x458) = CONCAT44(uStack_134,uStack_138);
  thunk_FUN_00ec5080(iVar1 + 0x458,0);
  AssetKits_ParticleImage_ParticleImage__set_noiseEnabled_2ccf2f4(iVar1,0,0);
  AssetKits_ParticleImage_ParticleImage__set_velocityEnabled_2ccf30c(iVar1,1,0);
  *(undefined4 *)(iVar1 + 0x470) = 1;
  thunk_FUN_00f95db8(auStack_a8,iVar1 + 0x474,100);
  uStack_144 = 0;
  uStack_148 = 0;
  uStack_158 = uVar3;
  uStack_154 = uVar12;
  uStack_150 = uVar2;
  uStack_14c = uVar13;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fc5c(&uStack_158,0,0);
  uStack_8c = CONCAT44(uStack_154,uStack_158);
  uStack_84 = CONCAT44(uStack_14c,uStack_150);
  uStack_7c = CONCAT44(uStack_144,uStack_148);
  thunk_FUN_00ec5080(&uStack_84,0);
  uStack_160 = 0;
  uStack_15c = 0;
  uStack_170 = uVar3;
  uStack_16c = uVar12;
  uStack_168 = uVar2;
  uStack_164 = uVar13;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fc5c(&uStack_170,0xc0a00000,0);
  uStack_74 = CONCAT44(uStack_16c,uStack_170);
  uStack_6c = CONCAT44(uStack_164,uStack_168);
  uStack_64 = CONCAT44(uStack_15c,uStack_160);
  thunk_FUN_00ec5080(&uStack_6c,0);
  uStack_174 = 0;
  uStack_178 = 0;
  uStack_188 = uVar3;
  uStack_184 = uVar12;
  uStack_180 = uVar2;
  uStack_17c = uVar13;
  UnityEngine_ParticleSystem_MinMaxCurve___ctor_368fc5c(&uStack_188,0,0);
  uStack_5c = CONCAT44(uStack_184,uStack_188);
  uStack_54 = CONCAT44(uStack_17c,uStack_180);
  uStack_4c = CONCAT44(uStack_174,uStack_178);
  thunk_FUN_00ec5080(&uStack_54,0);
  thunk_FUN_00f95db8(iVar1 + 0x474,auStack_a8,100);
  thunk_FUN_00ec5080(iVar1 + 0x480,0);
  AssetKits_ParticleImage_ParticleImage__set_gravityEnabled_2ccf2fc(iVar1,0,0);
  AssetKits_ParticleImage_ParticleImage__set_vortexEnabled_2ccf304(iVar1,0,0);
  puVar4 = *(undefined4 **)(_UNK_0109a270 + 0x109a198);
  *(undefined1 *)(iVar1 + 0xe4) = 0;
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_108dbe8(iVar6,0x18,0x3f800000);
  uVar3 = UnityEngine_Component__get_gameObject_35fe360(iVar1,0);
  if (*(int *)(**(int **)(_UNK_0109a274 + 0x109a1dc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Object__Destroy_36096ec(uVar3,0x40400000,0);
  AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(iVar1,0);
  return;
}

