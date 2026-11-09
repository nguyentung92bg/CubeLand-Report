/* IL2CPP: Rotatelab.Shop.NoAdsBundleOfferButton$$OnPurchaseSucceededHandler
void Rotatelab_Shop_NoAdsBundleOfferButton__OnPurchaseSucceededHandler (Rotatelab_Shop_NoAdsBundleOfferButton_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.NoAdsBundleOfferButton$$OnPurchaseSucceededHandler
   void Rotatelab_Shop_NoAdsBundleOfferButton__OnPurchaseSucceededHandler
   (Rotatelab_Shop_NoAdsBundleOfferButton_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const
   MethodInfo* method); */

void Rotatelab_Shop_NoAdsBundleOfferButton__OnPurchaseSucceededHandler_10cf40c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_010df4e4 + 0x10df420);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df4e8 + 0x10df434));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df4ec + 0x10df440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010df4f0 + 0x10df44c));
    *pcVar5 = '\x01';
  }
  (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144));
  if (*(int *)(**(int **)(_UNK_010df4f4 + 0x10df474) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
  iVar2 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar1,0);
  if (iVar2 != 0) {
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010df4f8 + 0x10df4a8));
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar1,param_1,**(undefined4 **)(_UNK_010df4fc + 0x10df4c4),0);
    pcVar5 = (char *)(_UNK_01178688 + 0x11785dc);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar1,1,0,unaff_r4,unaff_r5);
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
      *pcVar5 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = DG_Tweening_DOTween__Sequence_1167c00();
    uVar3 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar3,0x3e800000);
    uVar1 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                      (uVar3,uVar1,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
    iVar2 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                      (uVar1,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
    uVar4 = **(uint **)(_UNK_011786a8 + 0x117867c);
    if (iVar2 != 0) {
      uVar4 = (uint)*(byte *)(iVar2 + 0x94);
    }
    if (iVar2 != 0 && uVar4 != 0) {
      if (*(char *)(iVar2 + 0xa4) == '\0') {
        *(undefined1 *)(iVar2 + 0x5c) = 1;
      }
      return;
    }
    return;
  }
  return;
}

