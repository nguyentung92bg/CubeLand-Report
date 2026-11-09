/* IL2CPP: Rotatelab.Shop.RewardUIAnimationController$$StartRewardUIAnim
void Rotatelab_Shop_RewardUIAnimationController__StartRewardUIAnim (Rotatelab_Shop_RewardUIAnimationController_o* __this, UnityEngine_RectTransform_array* rewardInfos, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.RewardUIAnimationController$$StartRewardUIAnim
   void Rotatelab_Shop_RewardUIAnimationController__StartRewardUIAnim
   (Rotatelab_Shop_RewardUIAnimationController_o* __this, UnityEngine_RectTransform_array*
   rewardInfos, const MethodInfo* method); */

void Rotatelab_Shop_RewardUIAnimationController__StartRewardUIAnim_10d3a3c(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  
  pcVar5 = (char *)(_UNK_010e3de0 + 0x10e3a58);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3de4 + 0x10e3a6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3de8 + 0x10e3a78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3dec + 0x10e3a84));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(param_1 + 0x10),0);
  if (*(char *)(_UNK_010e3df0 + 0x10e3ab8) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3df4 + 0x10e3acc));
    *(undefined1 *)(_UNK_010e3df8 + 0x10e3adc) = 1;
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010e3dfc + 0x10e3aec) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(param_1 + 0x14),0);
  if (*(char *)(_UNK_010e3e00 + 0x10e3b48) == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e3e04 + 0x10e3b5c));
    *(undefined1 *)(_UNK_010e3e08 + 0x10e3b6c) = 1;
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_010e3e0c + 0x10e3b80) + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
  uVar7 = 0;
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(param_2 + 0xc) <= (int)uVar7) {
      if (*(int *)(**(int **)(_UNK_010e3e20 + 0x10e3c7c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar3 = DG_Tweening_DOTween__Sequence_1167c00(0);
      uVar4 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
      uVar3 = DG_Tweening_TweenSettingsExtensions__SetLink_object__15da040
                        (uVar3,uVar4,**(undefined4 **)(_UNK_010e3e24 + 0x10e3cb8));
      uVar3 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar3,0x3f000000,0);
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x10),0);
      uVar4 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar4,0x3f800000,0x3e800000,0);
      puVar2 = *(undefined4 **)(_UNK_010e3e28 + 0x10e3d0c);
      uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,0x1e,*puVar2);
      uVar3 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar3,uVar4,0);
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = 0;
      uVar4 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x14),0);
      uVar4 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar4,0x3f800000,0x3e800000,0);
      uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,0x1e,*puVar2);
      uVar3 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar3,uVar4,0);
      uVar3 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar3,0,0);
      uVar7 = *(uint *)(param_2 + 0xc);
      if (0 < (int)uVar7) {
        do {
          if (uVar7 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          uVar4 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                            (*(undefined4 *)(param_2 + 0x10 + uVar6 * 4),0x3f800000,0x3e800000,0);
          uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,0x1e,*puVar2);
          DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar3,uVar4,0);
          uVar7 = *(uint *)(param_2 + 0xc);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar7);
      }
      return;
    }
    if (*(uint *)(param_2 + 0xc) <= uVar7) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar1 = *(int *)(param_2 + 0x10 + uVar7 * 4);
    if (iVar1 == 0) break;
    iVar1 = UnityEngine_Component__get_transform_35fe190(iVar1,0);
    if (*(char *)(_UNK_010e3e10 + 0x10e3c08) == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010e3e14 + 0x10e3c1c));
      *(undefined1 *)(_UNK_010e3e18 + 0x10e3c2c) = 1;
    }
    puVar2 = *(undefined4 **)(**(int **)(_UNK_010e3e1c + 0x10e3c3c) + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
    uVar7 = uVar7 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

