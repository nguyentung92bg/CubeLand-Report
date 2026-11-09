/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$OnPurchaseSucceededHandler
void Rotatelab_Shop_StarterBundleOfferButton__OnPurchaseSucceededHandler (Rotatelab_Shop_StarterBundleOfferButton_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$OnPurchaseSucceededHandler
   void Rotatelab_Shop_StarterBundleOfferButton__OnPurchaseSucceededHandler
   (Rotatelab_Shop_StarterBundleOfferButton_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const
   MethodInfo* method); */

void Rotatelab_Shop_StarterBundleOfferButton__OnPurchaseSucceededHandler_10d22b8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_010e237c + 0x10e22cc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2380 + 0x10e22e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2384 + 0x10e22ec));
    *pcVar5 = '\x01';
  }
  (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144));
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar1 + 0x34),0);
  if (iVar1 == 0) {
    return;
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e2388 + 0x10e2340));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar2,param_1,**(undefined4 **)(_UNK_010e238c + 0x10e235c),0);
  pcVar5 = (char *)(_UNK_01178688 + 0x11785dc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar2,1,0,unaff_r4,unaff_r5);
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
  uVar2 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                    (uVar3,uVar2,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
  iVar1 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                    (uVar2,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
  uVar4 = **(uint **)(_UNK_011786a8 + 0x117867c);
  if (iVar1 != 0) {
    uVar4 = (uint)*(byte *)(iVar1 + 0x94);
  }
  if (iVar1 != 0 && uVar4 != 0) {
    if (*(char *)(iVar1 + 0xa4) == '\0') {
      *(undefined1 *)(iVar1 + 0x5c) = 1;
    }
    return;
  }
  return;
}

