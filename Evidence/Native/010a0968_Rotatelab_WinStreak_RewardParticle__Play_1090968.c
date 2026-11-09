/* IL2CPP: Rotatelab.WinStreak.RewardParticle$$Play
void Rotatelab_WinStreak_RewardParticle__Play (Rotatelab_WinStreak_RewardParticle_o* __this, ShopBundleSO_BundleOfferDetails_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.RewardParticle$$Play
   void Rotatelab_WinStreak_RewardParticle__Play (Rotatelab_WinStreak_RewardParticle_o* __this,
   ShopBundleSO_BundleOfferDetails_o* data, const MethodInfo* method); */

void Rotatelab_WinStreak_RewardParticle__Play_1090968(int param_1,int param_2)

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
  undefined4 uStack_74;
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
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = (char *)(_UNK_010a0cc0 + 0x10a0984);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0cc4 + 0x10a0998));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localPosition_3613c6c
            (iVar1,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
             *(undefined4 *)(param_1 + 0x24),0);
  iVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  pcVar4 = (char *)(_UNK_010a0cc8 + 0x10a0a0c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0ccc + 0x10a0a20));
    *pcVar4 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010a0cd0 + 0x10a0a38) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0xc),0);
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))
            (piVar5,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(*piVar5 + 0x2b4));
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),0x3f800000,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (*(int *)(**(int **)(_UNK_010a0cd4 + 0x10a0b30) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_58,uVar3,0x3f800000,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_68,&uStack_38,0x3e800000,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  PrimeTween_Tween__LocalPositionY_2ce58fc
            (&uStack_78,uVar3,*(float *)(param_1 + 0x20) + _UNK_010a0cbc,0x3f800000,0,0,0,0,0,1,0,0,
             0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_78,&uStack_38,uStack_78,uStack_74,uStack_70,uStack_6c,0);
  uStack_38 = uStack_78;
  uStack_34 = uStack_74;
  uStack_30 = uStack_70;
  uStack_2c = uStack_6c;
  PrimeTween_Tween__Alpha_2ce7b44
            (&uStack_88,*(undefined4 *)(param_1 + 0x18),0,0x3e800000,0,0,0,0,0,1,0,0x3f000000,0,0,0)
  ;
  PrimeTween_Sequence__Group_2cef730
            (&uStack_88,&uStack_38,uStack_88,uStack_84,uStack_80,uStack_7c,0);
  return;
}

