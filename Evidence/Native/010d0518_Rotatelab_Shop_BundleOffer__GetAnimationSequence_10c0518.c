/* IL2CPP: Rotatelab.Shop.BundleOffer$$GetAnimationSequence
DG_Tweening_Sequence_o* Rotatelab_Shop_BundleOffer__GetAnimationSequence (Rotatelab_Shop_BundleOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.BundleOffer$$GetAnimationSequence
   DG_Tweening_Sequence_o* Rotatelab_Shop_BundleOffer__GetAnimationSequence
   (Rotatelab_Shop_BundleOffer_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_BundleOffer__GetAnimationSequence_10c0518(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_010d0778 + 0x10d0530);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d077c + 0x10d0544));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0780 + 0x10d0550));
    *pcVar7 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
  pcVar7 = (char *)(_UNK_010d0784 + 0x10d0584);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0788 + 0x10d0598));
    *pcVar7 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010d078c + 0x10d05b0) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localRotation_361507c(iVar1,*puVar2,puVar2[1],puVar2[2],puVar2[3],0);
  if (*(int *)(**(int **)(_UNK_010d0790 + 0x10d05f0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1167c00(0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
  uVar4 = DG_Tweening_ShortcutExtensions__DOLocalRotate_116b650(uVar4,0,0,0xc1700000,0x3dcccccd,0,0)
  ;
  puVar2 = *(undefined4 **)(_UNK_010d0794 + 0x10d0664);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,1,*puVar2);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar3,uVar4,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
  uVar4 = DG_Tweening_ShortcutExtensions__DOLocalRotate_116b650(uVar4,0,0,0x41700000,0x3e4ccccd,0,0)
  ;
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,1,*puVar2);
  iVar1 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar3,uVar4,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x10),0);
  pcVar7 = (char *)(_UNK_010d0798 + 0x10d0710);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d079c + 0x10d0724));
    *pcVar7 = '\x01';
  }
  puVar5 = *(undefined4 **)(**(int **)(_UNK_010d07a0 + 0x10d0738) + 0x5c);
  uVar3 = DG_Tweening_ShortcutExtensions__DOLocalRotate_116b650
                    (uVar3,*puVar5,puVar5[1],puVar5[2],0x3dcccccd,0,0);
  uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar3,1,*puVar2);
  iVar6 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_116cf94(iVar1,uVar3,0);
  if (iVar6 != 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    DG_Tweening_Sequence__DoInsert_116959c(iVar1,uVar3,*(undefined4 *)(iVar1 + 0x60));
  }
  return iVar1;
}

