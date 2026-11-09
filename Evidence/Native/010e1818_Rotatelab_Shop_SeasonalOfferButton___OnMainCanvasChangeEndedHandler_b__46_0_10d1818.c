/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$<OnMainCanvasChangeEndedHandler>b__46_0
void Rotatelab_Shop_SeasonalOfferButton___OnMainCanvasChangeEndedHandler_b__46_0 (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$<OnMainCanvasChangeEndedHandler>b__46_0
   void Rotatelab_Shop_SeasonalOfferButton___OnMainCanvasChangeEndedHandler_b__46_0
   (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton___OnMainCanvasChangeEndedHandler_b__46_0_10d1818
               (int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_010e18d8 + 0x10e182c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e18dc + 0x10e1840));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e18e0 + 0x10e184c));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_010e18e4 + 0x10e1860));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIInputBlocker__TrySetInputAllowed_1124020(iVar1,0,param_1,0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e18e8 + 0x10e1894));
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  DG_Tweening_TweenCallback___ctor_11657e8(uVar2,param_1,*(undefined4 *)(*param_1 + 0x13c),0);
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
  uVar3 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar3,0x3f800000);
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

