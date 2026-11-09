/* IL2CPP: Rotatelab.Shop.IapOfferButton$$OnBundleOfferNotificationRequestedHandler
void Rotatelab_Shop_IapOfferButton__OnBundleOfferNotificationRequestedHandler (Rotatelab_Shop_IapOfferButton_o* __this, int32_t bundleOfferType, float popupOpenDelay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.IapOfferButton$$OnBundleOfferNotificationRequestedHandler
   void Rotatelab_Shop_IapOfferButton__OnBundleOfferNotificationRequestedHandler
   (Rotatelab_Shop_IapOfferButton_o* __this, int32_t bundleOfferType, float popupOpenDelay, const
   MethodInfo* method); */

void Rotatelab_Shop_IapOfferButton__OnBundleOfferNotificationRequestedHandler_10cea10
               (int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_010deacc + 0x10dea2c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dead0 + 0x10dea40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dead4 + 0x10dea4c));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x3c) != param_2) {
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*(int *)(param_1 + 0x18),1,0);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dead8 + 0x10dea8c));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar1,param_1,**(undefined4 **)(_UNK_010deadc + 0x10deaa8),0);
  pcVar5 = (char *)(_UNK_01178688 + 0x11785dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar1,1,0,unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7,unaff_r11,unaff_lr);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = DG_Tweening_DOTween__Sequence_1167c00();
  uVar2 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar2,param_3);
  uVar1 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                    (uVar2,uVar1,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
  iVar3 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                    (uVar1,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
  uVar4 = **(uint **)(_UNK_011786a8 + 0x117867c);
  if (iVar3 != 0) {
    uVar4 = (uint)*(byte *)(iVar3 + 0x94);
  }
  if (iVar3 != 0 && uVar4 != 0) {
    if (*(char *)(iVar3 + 0xa4) == '\0') {
      *(undefined1 *)(iVar3 + 0x5c) = 1;
    }
    return;
  }
  return;
}

