/* IL2CPP: Rotatelab.UI.PageButtonBase$$SetPageEnable
bool Rotatelab_UI_PageButtonBase__SetPageEnable (Rotatelab_UI_PageButtonBase_o* __this, bool enable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PageButtonBase$$SetPageEnable
   bool Rotatelab_UI_PageButtonBase__SetPageEnable (Rotatelab_UI_PageButtonBase_o* __this, bool
   enable, const MethodInfo* method); */

int Rotatelab_UI_PageButtonBase__SetPageEnable_1128454(int param_1,uint param_2)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  pcVar7 = (char *)(_UNK_01138934 + 0x1138478);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138938 + 0x113848c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113893c + 0x1138498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138940 + 0x11384a4));
    *pcVar7 = '\x01';
  }
  uStack_5c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_58 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  iVar3 = Rotatelab_UI_PageButtonBase__get_IsUnlocked_112d1d4(param_1);
  if (iVar3 == 0) {
    if (param_2 != 0) {
      iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01138944 + 0x11388e8));
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar6 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_UI_AlertTextController__Show_1116128(*(int *)(iVar6 + 0x2c),0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x14),param_2 ^ 1,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*(int *)(param_1 + 0x18),param_2,0);
    fVar1 = _UNK_011388d0;
    fVar11 = _UNK_011388d0;
    if (param_2 != 0) {
      fVar11 = 1.0;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),fVar11,0);
    PrimeTween_Sequence__Create_2cef1e0(&uStack_70,1,0,1,0,0,0);
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    uStack_58 = uStack_68;
    uStack_54 = uStack_64;
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar12 = fVar1;
    if (param_2 != 0) {
      fVar12 = _UNK_0113892c;
    }
    uVar4 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x20),0);
    fVar9 = *(float *)(param_1 + 0x34);
    fVar10 = *(float *)(param_1 + 0x38);
    if (*(int *)(**(int **)(_UNK_01138948 + 0x11385d4) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIAnchoredPosition_2ce6e40
              (&uStack_70,uVar4,fVar9 + fVar1,fVar12 + fVar10,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Group_2cef730
              (&uStack_70,&uStack_60,uStack_70,uStack_6c,uStack_68,uStack_64,0);
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    uStack_58 = uStack_68;
    uStack_54 = uStack_64;
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = _UNK_01138930;
    if (param_2 != 0) {
      uVar4 = 0x3f800000;
    }
    uVar5 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x20),0);
    piVar8 = *(int **)(_UNK_0113894c + 0x113869c);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(&uStack_70,uVar5,uVar4,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Group_2cef730
              (&uStack_70,&uStack_60,uStack_70,uStack_6c,uStack_68,uStack_64,0);
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    uStack_58 = uStack_68;
    uStack_54 = uStack_64;
    if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(param_1 + 0x24),0);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(&uStack_70,uVar4,fVar11,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
    PrimeTween_Sequence__Group_2cef730
              (&uStack_50,&uStack_60,uStack_70,uStack_6c,uStack_68,uStack_64,0);
    if (param_2 != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x1c);
      if (*(int *)(**(int **)(_UNK_01138950 + 0x11387dc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar6 = Rotatelab_Extensions__RectTransform_fc1bd0(param_1,0);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_70,iVar6,0);
      Rotatelab_Extensions__WithY_fc17a0(&uStack_70,uStack_70,uStack_6c,0xc0a00000,0);
      uVar2 = uStack_6c;
      uVar5 = uStack_70;
      if (*(int *)(**(int **)(_UNK_01138954 + 0x1138848) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__UIAnchoredPosition_2ce6e40
                (&uStack_70,uVar4,uVar5,uVar2,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
      PrimeTween_Sequence__Group_2cef730
                (&uStack_70,&uStack_50,uStack_70,uStack_6c,uStack_68,uStack_64,0);
    }
  }
  return iVar3;
}

