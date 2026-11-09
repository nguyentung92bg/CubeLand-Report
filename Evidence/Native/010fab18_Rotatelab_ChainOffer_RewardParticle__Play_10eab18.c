/* IL2CPP: Rotatelab.ChainOffer.RewardParticle$$Play
void Rotatelab_ChainOffer_RewardParticle__Play (Rotatelab_ChainOffer_RewardParticle_o* __this, UnityEngine_Sprite_o* rewardIcon, System_String_o* rewardInfo, UnityEngine_Vector3_o spawnPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.RewardParticle$$Play
   void Rotatelab_ChainOffer_RewardParticle__Play (Rotatelab_ChainOffer_RewardParticle_o* __this,
   UnityEngine_Sprite_o* rewardIcon, System_String_o* rewardInfo, UnityEngine_Vector3_o
   spawnPosition, const MethodInfo* method); */

void Rotatelab_ChainOffer_RewardParticle__Play_10eab18
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar8 = (char *)(_UNK_010faf3c + 0x10fab40);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faf40 + 0x10fab58));
    *pcVar8 = '\x01';
  }
  fStack_3c = *(float *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x10),param_2,0);
  piVar9 = *(int **)(param_1 + 0x14);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar9 + 0x2b0))(piVar9,param_3,*(undefined4 *)(*piVar9 + 0x2b4));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  pcVar8 = (char *)(_UNK_010faf44 + 0x10fabe0);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010faf48 + 0x10fabf4));
    *pcVar8 = '\x01';
  }
  puVar5 = *(undefined4 **)(**(int **)(_UNK_010faf4c + 0x10fac0c) + 0x5c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar4,*puVar5,puVar5[1],puVar5[2],0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_position_3614acc(iVar4,param_4,param_5,param_6,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),0x3f800000,0);
  PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x30),0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_50,1,0,1,0,0,0);
  uStack_40 = uStack_50;
  fStack_3c = (float)uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  uVar10 = *(undefined4 *)(param_1 + 0x1c);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_68,0x1b,0);
  uVar3 = uStack_5c;
  uVar2 = uStack_60;
  uVar1 = uStack_64;
  uVar7 = uStack_68;
  if (*(int *)(**(int **)(_UNK_010faf50 + 0x10fad38) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_68,uVar6,0x3fe00000,uVar10,uVar7,uVar1,uVar2,uVar3,uStack_58,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_68,&uStack_40,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  uStack_40 = uStack_68;
  fStack_3c = (float)uStack_64;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_78,&uStack_40,*(undefined4 *)(param_1 + 0x20),0);
  uStack_40 = uStack_78;
  fStack_3c = (float)uStack_74;
  uStack_38 = uStack_70;
  uStack_34 = uStack_6c;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__get_localPosition_3613b6c(&uStack_88,iVar4,0);
  PrimeTween_Tween__LocalPositionY_2ce58fc
            (&uStack_88,uVar7,fStack_84 + *(float *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28)
             ,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_88,&uStack_40,uStack_88,fStack_84,uStack_80,uStack_7c,0);
  uStack_40 = uStack_88;
  fStack_3c = fStack_84;
  uStack_38 = uStack_80;
  uStack_34 = uStack_7c;
  PrimeTween_Tween__Alpha_2ce7b44
            (&uStack_98,*(undefined4 *)(param_1 + 0x18),0,*(undefined4 *)(param_1 + 0x2c),0,0,0,0,0,
             1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_98,&uStack_40,uStack_98,uStack_94,uStack_90,uStack_8c,0);
  *(undefined4 *)(param_1 + 0x30) = uStack_98;
  *(undefined4 *)(param_1 + 0x34) = uStack_94;
  *(undefined4 *)(param_1 + 0x38) = uStack_90;
  *(undefined4 *)(param_1 + 0x3c) = uStack_8c;
  thunk_FUN_00ec5080(param_1 + 0x38,0);
  return;
}

