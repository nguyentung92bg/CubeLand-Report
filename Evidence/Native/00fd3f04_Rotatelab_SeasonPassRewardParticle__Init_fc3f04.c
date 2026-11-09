/* IL2CPP: Rotatelab.SeasonPassRewardParticle$$Init
void Rotatelab_SeasonPassRewardParticle__Init (Rotatelab_SeasonPassRewardParticle_o* __this, Rotatelab_SeasonPass_SeasonPassSo_SeasonReward_o* rewardData, UnityEngine_Vector3_o rewardPos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassRewardParticle$$Init
   void Rotatelab_SeasonPassRewardParticle__Init (Rotatelab_SeasonPassRewardParticle_o* __this,
   Rotatelab_SeasonPass_SeasonPassSo_SeasonReward_o* rewardData, UnityEngine_Vector3_o rewardPos,
   const MethodInfo* method); */

void Rotatelab_SeasonPassRewardParticle__Init_fc3f04
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  float fStack_74;
  undefined4 uStack_70;
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
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_00fd4364 + 0xfd3f24);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4368 + 0xfd3f3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd436c + 0xfd3f48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4370 + 0xfd3f54));
    *pcVar4 = '\x01';
  }
  fStack_34 = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10),0);
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))
            (piVar5,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(*piVar5 + 0x2b4));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  pcVar4 = (char *)(_UNK_00fd4374 + 0xfd3ff0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd4378 + 0xfd4004));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_00fd437c + 0xfd401c) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc(iVar1,param_3,param_4,param_5,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),0x3f800000,0);
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x20),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  fStack_34 = (float)uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (*(int *)(**(int **)(_UNK_00fd4380 + 0xfd412c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_58,uVar3,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  uStack_38 = uStack_58;
  fStack_34 = (float)uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_68,&uStack_38,0x3dcccccd,0);
  uStack_38 = uStack_68;
  fStack_34 = (float)uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_78,iVar1,0);
  PrimeTween_Tween__LocalPositionY_2ce58fc
            (&uStack_78,uVar3,fStack_74 + _UNK_00fd4360,0x3f400000,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_78,&uStack_38,uStack_78,fStack_74,uStack_70,uStack_6c,0);
  uStack_38 = uStack_78;
  fStack_34 = fStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd4384 + 0xfd42b8));
  System_Action_float____ctor_1f12930(uVar3,param_1,**(undefined4 **)(_UNK_00fd4388 + 0xfd42d8),0);
  PrimeTween_Tween__Custom_2ce885c(&uStack_88,0x3f800000,0,0x3e800000,uVar3,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_88,&uStack_38,uStack_88,uStack_84,uStack_80,uStack_7c,0);
  *(undefined4 *)(param_1 + 0x20) = uStack_88;
  *(undefined4 *)(param_1 + 0x24) = uStack_84;
  *(undefined4 *)(param_1 + 0x28) = uStack_80;
  *(undefined4 *)(param_1 + 0x2c) = uStack_7c;
  thunk_FUN_00ec5080(param_1 + 0x28,0);
  return;
}

