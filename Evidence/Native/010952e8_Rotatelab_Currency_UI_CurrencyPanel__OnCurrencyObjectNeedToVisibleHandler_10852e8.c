/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$OnCurrencyObjectNeedToVisibleHandler
void Rotatelab_Currency_UI_CurrencyPanel__OnCurrencyObjectNeedToVisibleHandler (Rotatelab_Currency_UI_CurrencyPanel_o* __this, int32_t target, bool isVisible, bool isWarning, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.CurrencyPanel$$OnCurrencyObjectNeedToVisibleHandler
   void Rotatelab_Currency_UI_CurrencyPanel__OnCurrencyObjectNeedToVisibleHandler
   (Rotatelab_Currency_UI_CurrencyPanel_o* __this, int32_t target, bool isVisible, bool isWarning,
   const MethodInfo* method); */

uint Rotatelab_Currency_UI_CurrencyPanel__OnCurrencyObjectNeedToVisibleHandler_10852e8
               (int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  byte *pbVar7;
  char *pcVar8;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  pbVar7 = (byte *)(_UNK_0109566c + 0x1095308);
  uVar2 = (uint)*pbVar7;
  if (uVar2 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095670 + 0x1095320));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095674 + 0x109532c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095678 + 0x1095338));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109567c + 0x1095344));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095680 + 0x1095350));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095684 + 0x109535c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095688 + 0x1095368));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109568c + 0x1095374));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01095690 + 0x1095380));
    uVar2 = 1;
    *pbVar7 = 1;
  }
  if (param_2 != 0) {
    return uVar2;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Canvas__set_overrideSorting_39a7fa8(*(int *)(param_1 + 0x18),param_3,0);
  if (param_3 == 0) {
    if (*(int *)(**(int **)(_UNK_010956b4 + 0x1095530) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
    uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010956b8 + 0x1095558));
    DG_Tweening_TweenCallback_object____ctor_1bf9720
              (uVar6,param_1,**(undefined4 **)(_UNK_010956bc + 0x1095574),0);
    if (*(int *)(**(int **)(_UNK_010956c0 + 0x1095588) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = Rotatelab_Extensions__Conditional_object__1484e9c
                      (uVar5,param_4,uVar6,**(undefined4 **)(_UNK_010956c4 + 0x10955ac));
    uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010956c8 + 0x10955c4));
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar6,param_1,**(undefined4 **)(_UNK_010956cc + 0x10955e0),0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar5,uVar6,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
    uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar6,0x3f800000,0x3e4ccccd,0);
    uVar2 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
    pcVar8 = (char *)(_UNK_01095694 + 0x10953ec);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01095698 + 0x1095400));
      *pcVar8 = '\x01';
    }
    puVar4 = *(undefined4 **)(**(int **)(_UNK_0109569c + 0x1095418) + 0x5c);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc(iVar3,*puVar4,puVar4[1],puVar4[2],0);
    if (*(int *)(**(int **)(_UNK_010956a0 + 0x1095458) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x10),0);
    uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar6,0x3f800000,0x3e4ccccd,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
    uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010956a4 + 0x10954c4));
    DG_Tweening_TweenCallback_object____ctor_1bf9720
              (uVar6,param_1,**(undefined4 **)(_UNK_010956a8 + 0x10954e0),0);
    if (*(int *)(**(int **)(_UNK_010956ac + 0x10954f4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar2 = Rotatelab_Extensions__Conditional_object__1484e9c
                      (uVar5,param_4,uVar6,**(undefined4 **)(_UNK_010956b0 + 0x1095518));
  }
  uVar5 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  pcVar8 = (char *)(_UNK_015ea138 + 0x15ea058);
  cVar1 = *pcVar8;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_015ea13c + 0x15ea06c),uVar5,
                 **(undefined4 **)(_UNK_010956d0 + 0x109565c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_015ea140 + 0x15ea078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_015ea144 + 0x15ea084));
    cVar1 = '\x01';
    *pcVar8 = '\x01';
  }
  if (uVar2 != 0) {
    cVar1 = *(char *)(uVar2 + 0x94);
  }
  if ((uVar2 != 0 && cVar1 != '\0') && (*(char *)(uVar2 + 0x95) == '\0')) {
    if (*(int *)(**(int **)(_UNK_015ea148 + 0x15ea0bc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__op_Equality_36033f4(uVar5,0,0);
    if (iVar3 == 0) {
      uVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_015ea14c + 0x15ea0f0));
      DG_Tweening_Core_TweenLink___ctor_11815bc(uVar6,uVar5,6,0,unaff_r4,unaff_r5,unaff_r6,unaff_lr)
      ;
      if (*(int *)(**(int **)(_UNK_015ea150 + 0x15ea114) + 0x74) == 0) {
        FUN_00ec3934();
      }
      DG_Tweening_Core_TweenManager__AddTweenLink_11833dc(uVar2,uVar6,0);
    }
  }
  return uVar2;
}

