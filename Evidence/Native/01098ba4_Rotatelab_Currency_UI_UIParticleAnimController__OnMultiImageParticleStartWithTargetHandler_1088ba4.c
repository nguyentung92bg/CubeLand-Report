/* IL2CPP: Rotatelab.Currency.UI.UIParticleAnimController$$OnMultiImageParticleStartWithTargetHandler
void Rotatelab_Currency_UI_UIParticleAnimController__OnMultiImageParticleStartWithTargetHandler (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_RectTransform_o* insRect, UnityEngine_Sprite_o* sprite, UnityEngine_RectTransform_o* targetPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Currency.UI.UIParticleAnimController$$OnMultiImageParticleStartWithTargetHandler
   void Rotatelab_Currency_UI_UIParticleAnimController__OnMultiImageParticleStartWithTargetHandler
   (Rotatelab_Currency_UI_UIParticleAnimController_o* __this, UnityEngine_RectTransform_o* insRect,
   UnityEngine_Sprite_o* sprite, UnityEngine_RectTransform_o* targetPos, const MethodInfo* method);
    */

void Rotatelab_Currency_UI_UIParticleAnimController__OnMultiImageParticleStartWithTargetHandler_1088ba4
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_01098d50 + 0x1098bc8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01098d54 + 0x1098bdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01098d58 + 0x1098be8));
    *pcVar6 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_transform_35fe190(param_2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_position_36149b0(&uStack_30,iVar2,0);
  pcVar6 = (char *)(_UNK_01098d5c + 0x1098c40);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01098d60 + 0x1098c5c));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_01098d64 + 0x1098c74) + 0x5c);
  uVar5 = *puVar3;
  uVar7 = puVar3[1];
  uVar8 = puVar3[2];
  uVar9 = puVar3[3];
  uVar4 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_01098d68 + 0x1098c94) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__Instantiate_object__14d51e0
                    (uVar1,uStack_30,uStack_2c,uStack_28,uVar5,uVar7,uVar8,uVar9,uVar4,
                     **(undefined4 **)(_UNK_01098d6c + 0x1098cbc));
  if (iVar2 != 0) {
    AssetKits_ParticleImage_ParticleImage__set_sprite_2cd935c(iVar2,param_3,0);
    *(undefined4 *)(iVar2 + 0x44c) = param_4;
    thunk_FUN_00ec5080();
    *(undefined1 *)(iVar2 + 0xe4) = 0;
    AssetKits_ParticleImage_ParticleImage__Play_2cd02c4(iVar2,0);
    uVar1 = UnityEngine_Component__get_gameObject_35fe360(iVar2,0);
    UnityEngine_Object__Destroy_36096ec(uVar1,0x40400000,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

