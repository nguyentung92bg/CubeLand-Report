/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$ShowPopup
void Rotatelab_SeasonPass_SeasonPassManager__ShowPopup (Rotatelab_SeasonPass_SeasonPassManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassManager$$ShowPopup
   void Rotatelab_SeasonPass_SeasonPassManager__ShowPopup (Rotatelab_SeasonPass_SeasonPassManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassManager__ShowPopup_10a76fc(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uStack_78;
  undefined4 *puStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar9 = (char *)(_UNK_010b7cec + 0x10b7714);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7cf0 + 0x10b7728));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7cf4 + 0x10b7734));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7cf8 + 0x10b7740));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7cfc + 0x10b774c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7d00 + 0x10b7758));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7d04 + 0x10b7764));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7d08 + 0x10b7770));
    *pcVar9 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_3c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  piStack_4c = (int *)0x0;
  uStack_48 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = iStack_3c;
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  if (*(int *)(param_1 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_GameObject__get_gameObject_3602cac(*(int *)(param_1 + 0x68),0);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar2 + 0x30),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,uVar3 ^ 1,0);
  iVar1 = *(int *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar2 + 0x30),0);
  if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_78,*(int *)(param_1 + 0x70),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = 0xc39b4000;
  if (iVar2 != 0) {
    uVar8 = 0;
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar1,uVar8,puStack_74,0);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x34);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar10 = *(undefined4 **)(_UNK_010b7d0c + 0x10b78f4);
  uVar8 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(iVar1,*puVar10);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x7c) + 0x38);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4(iVar1,*puVar10);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_78,*(int *)(param_1 + 0x3c),**(undefined4 **)(_UNK_010b7d10 + 0x10b794c));
  uStack_48 = uStack_78;
  uStack_44 = puStack_74;
  uStack_40 = uStack_70;
  iStack_3c = iStack_6c;
  uStack_78 = 0;
  puVar10 = *(undefined4 **)(_UNK_010b7d14 + 0x10b7978);
  puVar11 = *(undefined4 **)(_UNK_010b7d18 + 0x10b7980);
  puStack_74 = &uStack_48;
  while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_48,*puVar10), iVar1 != 0) {
    if (iStack_3c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__TryGetComponent_object__14402fc(iStack_3c,&piStack_4c,*puVar11);
    if (iVar1 != 0) {
      if (piStack_4c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piStack_4c + 0xe8))
                (piStack_4c,piStack_4c[0xd],piStack_4c[0xe],*(undefined4 *)(*piStack_4c + 0xec));
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_48,**(undefined4 **)(_UNK_010b7d1c + 0x10b79f8));
  if (*(int *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassBonusBank__CheckStatus_109ffac(*(int *)(param_1 + 0x78));
  if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x58),1,0);
  iVar1 = *(int *)(param_1 + 100);
  uVar5 = Rotatelab_SeasonPass_SeasonPassManager__GetCurrentTopBarTarget_10a6ed0(param_1,uVar8);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x7c) + 0x3c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4
                    (iVar2,**(undefined4 **)(_UNK_010b7d24 + 0x10b7a7c));
  uVar7 = Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankPhase_10a6fb4(param_1,uVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassTargetBar__SetTarget_10a7024(iVar1,uVar5,uVar6,uVar7);
  iVar1 = *(int *)(param_1 + 100);
  uVar3 = Rotatelab_SeasonPass_SeasonPassManager__IsBonusBankCapReached_10a7254(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassTargetBar__SetVisible_10a72ec(iVar1,uVar3 ^ 1);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x48),0);
  Rotatelab_SeasonPass_SeasonPassManager__CalculateScrollFor_10a7d2c(&uStack_78,param_1,uVar8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar1,uStack_78,puStack_74,0);
  if (*(int *)(param_1 + 0x7c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassController__HideNotification_10a56b0(*(int *)(param_1 + 0x7c));
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x44),0,0xc53b8000,0);
  Rotatelab_Shop_BaseOfferButton__ShowPopup_10cc820(param_1,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  uVar7 = *(undefined4 *)(param_1 + 0x44);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_78,0x1c,0);
  iVar1 = iStack_6c;
  uVar6 = uStack_70;
  puVar10 = puStack_74;
  uVar5 = uStack_78;
  if (*(int *)(**(int **)(_UNK_010b7d28 + 0x10b7bdc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_78,uVar7,0,0xc47f0000,0x3eb33333,uVar5,puVar10,uVar6,iVar1,uStack_68,1,0,
             0x3eb33333,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_78,&uStack_38,uStack_78,puStack_74,uStack_70,iStack_6c,0);
  Rotatelab_SeasonPass_SeasonPassManager__BuildFillSequence_10a7f9c
            (param_1,uStack_2c,uStack_38,uStack_34,uStack_30,uStack_2c,uVar8,uVar4);
  return;
}

