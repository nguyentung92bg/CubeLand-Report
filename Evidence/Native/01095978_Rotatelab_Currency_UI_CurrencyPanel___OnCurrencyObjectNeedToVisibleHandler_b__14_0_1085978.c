/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<OnCurrencyObjectNeedToVisibleHandler>b__14_0
void Rotatelab_Currency_UI_CurrencyPanel___OnCurrencyObjectNeedToVisibleHandler_b__14_0 (Rotatelab_Currency_UI_CurrencyPanel_o* __this, DG_Tweening_Sequence_o* sequence, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$<OnCurrencyObjectNeedToVisibleHandler>b__14_0
   void Rotatelab_Currency_UI_CurrencyPanel___OnCurrencyObjectNeedToVisibleHandler_b__14_0
   (Rotatelab_Currency_UI_CurrencyPanel_o* __this, DG_Tweening_Sequence_o* sequence, const
   MethodInfo* method); */

int Rotatelab_Currency_UI_CurrencyPanel___OnCurrencyObjectNeedToVisibleHandler_b__14_0_1085978
              (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  
  pcVar4 = (char *)(_UNK_01095bb8 + 0x1095994);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095bbc + 0x10959a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095bc0 + 0x10959b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095bc4 + 0x10959c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095bc8 + 0x10959cc));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01095bcc + 0x10959e0);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar3[2];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar7 = *puVar3;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01095bd0 + 0x1095a28));
    DG_Tweening_TweenCallback___ctor_11657e8
              (iVar6,uVar7,**(undefined4 **)(_UNK_01095bd4 + 0x1095a48),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 8);
    *piVar5 = iVar6;
    thunk_FUN_00ec5080(piVar5,iVar6);
  }
  uVar7 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(param_2,iVar6,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  uVar2 = DG_Tweening_ShortcutExtensions__DOShakePosition_116bbe8
                    (uVar2,0x3f000000,0x41700000,10,0x42b40000,0,1,0,0);
  uVar7 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar7,uVar2,0);
  uVar7 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar7,0x3f800000,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  uVar2 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar2,0,0x3e4ccccd,0);
  uVar7 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar7,uVar2,0);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01095bd8 + 0x1095b38));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar2,param_1,**(undefined4 **)(_UNK_01095bdc + 0x1095b54),0);
  iVar1 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar7,uVar2,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
  uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar7,0x3f800000,0x3e4ccccd,0);
  iVar6 = DG_Tweening_TweenSettingsExtensions__ValidateAddToSequence_116cf94(iVar1,uVar7,0);
  if (iVar6 != 0) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    DG_Tweening_Sequence__DoInsert_116959c(iVar1,uVar7,*(undefined4 *)(iVar1 + 0x60));
  }
  return iVar1;
}

