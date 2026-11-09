/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$OnMainCanvasChangeHalfwayHandler
void Rotatelab_Currency_UI_CurrencyPanel__OnMainCanvasChangeHalfwayHandler (Rotatelab_Currency_UI_CurrencyPanel_o* __this, int32_t mainCanvasType, bool arg2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$OnMainCanvasChangeHalfwayHandler
   void Rotatelab_Currency_UI_CurrencyPanel__OnMainCanvasChangeHalfwayHandler
   (Rotatelab_Currency_UI_CurrencyPanel_o* __this, int32_t mainCanvasType, bool arg2, const
   MethodInfo* method); */

void Rotatelab_Currency_UI_CurrencyPanel__OnMainCanvasChangeHalfwayHandler_10856d4
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010957ac + 0x10956f0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010957b0 + 0x1095704));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010957b4 + 0x1095710));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010957b8 + 0x109571c));
    *pcVar6 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010957bc + 0x1095730));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_1);
  puVar2 = *(undefined4 **)(_UNK_010957c0 + 0x1095768);
  *(undefined4 *)(iVar1 + 0xc) = param_2;
  uVar3 = thunk_FUN_00f00cdc(*puVar2);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar3,iVar1,**(undefined4 **)(_UNK_010957c4 + 0x1095788),0);
  pcVar6 = (char *)(_UNK_01178688 + 0x11785dc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar3,1,0,unaff_r4,unaff_r5,unaff_r6);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1167c00();
  uVar4 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar4,0x3dcccccd);
  uVar3 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                    (uVar4,uVar3,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
  iVar1 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                    (uVar3,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
  uVar5 = **(uint **)(_UNK_011786a8 + 0x117867c);
  if (iVar1 != 0) {
    uVar5 = (uint)*(byte *)(iVar1 + 0x94);
  }
  if (iVar1 != 0 && uVar5 != 0) {
    if (*(char *)(iVar1 + 0xa4) == '\0') {
      *(undefined1 *)(iVar1 + 0x5c) = 1;
    }
    return;
  }
  return;
}

