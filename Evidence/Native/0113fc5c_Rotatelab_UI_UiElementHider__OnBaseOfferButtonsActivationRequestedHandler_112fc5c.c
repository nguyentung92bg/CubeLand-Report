/* IL2CPP: Rotatelab.UI.UiElementHider$$OnBaseOfferButtonsActivationRequestedHandler
void Rotatelab_UI_UiElementHider__OnBaseOfferButtonsActivationRequestedHandler (Rotatelab_UI_UiElementHider_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UiElementHider$$OnBaseOfferButtonsActivationRequestedHandler
   void Rotatelab_UI_UiElementHider__OnBaseOfferButtonsActivationRequestedHandler
   (Rotatelab_UI_UiElementHider_o* __this, bool isActive, const MethodInfo* method); */

void Rotatelab_UI_UiElementHider__OnBaseOfferButtonsActivationRequestedHandler_112fc5c
               (int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 in_stack_ffffffc8;
  
  pcVar7 = (char *)(_UNK_0113fd34 + 0x113fc74);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113fd38 + 0x113fc88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113fd3c + 0x113fc94));
    *pcVar7 = '\x01';
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    return;
  }
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0113fd40 + 0x113fcb8));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar5 + 0x34) + 0x10) != 1) {
    return;
  }
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0113fd44 + 0x113fcf4));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(char *)(iVar5 + 0x56) == '\0') && (param_2 != 0)) {
    pcVar7 = (char *)(_UNK_0113f02c + 0x113ec7c);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0113f030 + 0x113ec90));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0113f034 + 0x113ec9c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0113f038 + 0x113eca8));
      *pcVar7 = '\x01';
    }
    if ((*(int *)(param_1 + 0x10) != 2) || (*(char *)(param_1 + 0x28) == '\0')) {
      iVar5 = Rotatelab_UI_UiElementHider__GetAnchorData_112ff4c(param_1);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__set_anchorMin_36131f0
                (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10)
                 ,0);
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__set_anchorMax_3613400
                (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar5 + 0x14),
                 *(undefined4 *)(iVar5 + 0x18),0);
      uVar6 = *(undefined4 *)(iVar5 + 0x24);
      uVar2 = *(undefined4 *)(iVar5 + 0x28);
      uVar11 = *(undefined4 *)(param_1 + 0x1c);
      uVar9 = *(undefined4 *)(param_1 + 0x18);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
      uVar10 = uStack_40;
      uVar1 = uStack_44;
      uVar12 = uStack_48;
      uVar4 = uStack_4c;
      uVar3 = uStack_50;
      if (*(int *)(**(int **)(_UNK_0113f03c + 0x113ed6c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__UIAnchoredPosition_2ce6e40
                (&uStack_50,uVar9,uVar6,uVar2,uVar11,uVar3,uVar4,uVar12,uVar1,uVar10,1,0,0,0,0,0);
      if (*(int *)(param_1 + 0x10) == 1) {
        iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = UnityEngine_Transform__GetChild_3617760(iVar5,0,0);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar8 = *(undefined4 **)(_UNK_0113f040 + 0x113ee30);
        uVar3 = UnityEngine_Component__GetComponent_object__143f3b0(iVar5,*puVar8);
        iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = UnityEngine_Transform__GetChild_3617760(iVar5,1,0);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = UnityEngine_Component__GetComponent_object__143f3b0(iVar5,*puVar8);
        iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0113f044 + 0x113ee90));
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar5 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar9 = *(undefined4 *)(param_1 + 0x1c);
        iVar5 = *(int *)(*(int *)(iVar5 + 0x34) + 0x10);
        PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
        uVar6 = uStack_40;
        uVar2 = uStack_44;
        uVar10 = uStack_48;
        uVar1 = uStack_4c;
        uVar12 = uStack_50;
        puVar8 = (undefined4 *)&UNK_0113f01c;
        if (iVar5 == 3) {
          puVar8 = (undefined4 *)&UNK_0113f020;
        }
        uVar11 = *puVar8;
        if (*(int *)(**(int **)(_UNK_0113f048 + 0x113eee8) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
                  (&uStack_50,uVar3,uVar11,uVar9,uVar12,uVar1,uVar10,uVar2,uVar6,1,0,0,0,0,0);
        iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0113f04c + 0x113ef5c));
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar5 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = *(int *)(*(int *)(iVar5 + 0x34) + 0x10);
        uVar3 = *(undefined4 *)(param_1 + 0x1c);
        PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
        puVar8 = (undefined4 *)&UNK_0113f024;
        if (iVar5 == 3) {
          puVar8 = (undefined4 *)&UNK_0113f028;
        }
        uVar12 = *puVar8;
        if (*(int *)(**(int **)(_UNK_0113f050 + 0x113efb8) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
                  (&uStack_50,uVar4,uVar12,uVar3,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,1
                   ,0,0,0,0,0);
      }
    }
    return;
  }
  pcVar7 = (char *)(_UNK_0113fae8 + 0x113f838);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113faec + 0x113f84c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113faf0 + 0x113f858));
    *pcVar7 = '\x01';
  }
  iVar5 = Rotatelab_UI_UiElementHider__GetAnchorData_112ff4c(param_1);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchorMin_36131f0
            (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar5 + 0xc),*(undefined4 *)(iVar5 + 0x10),0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchorMax_3613400
            (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar5 + 0x14),*(undefined4 *)(iVar5 + 0x18),0)
  ;
  uStack_50 = *(undefined4 *)(iVar5 + 0x1c);
  uStack_4c = *(undefined4 *)(iVar5 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar10 = *(undefined4 *)(param_1 + 0x18);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,(int)*(char *)(param_1 + 0x20),0);
  uVar1 = uStack_3c;
  uVar12 = uStack_40;
  uVar4 = uStack_44;
  uVar3 = uStack_48;
  if (*(int *)(**(int **)(_UNK_0113faf4 + 0x113f908) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_48,uVar10,uStack_50,uStack_4c,uVar2,uVar3,uVar4,uVar12,uVar1,in_stack_ffffffc8,
             1,0,0,0,0,0);
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Transform__GetChild_3617760(iVar5,0,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar8 = *(undefined4 **)(_UNK_0113faf8 + 0x113f9b8);
    uStack_4c = UnityEngine_Component__GetComponent_object__143f3b0(iVar5,*puVar8);
    iVar5 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = UnityEngine_Transform__GetChild_3617760(iVar5,1,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_50 = UnityEngine_Component__GetComponent_object__143f3b0(iVar5,*puVar8);
    uVar10 = *(undefined4 *)(param_1 + 0x1c);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,(int)*(char *)(param_1 + 0x20),0);
    uVar1 = uStack_3c;
    uVar12 = uStack_40;
    uVar4 = uStack_44;
    uVar3 = uStack_48;
    if (*(int *)(**(int **)(_UNK_0113fafc + 0x113fa34) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
              (&uStack_48,uStack_4c,0xc32a0000,uVar10,uVar3,uVar4,uVar12,uVar1,in_stack_ffffffc8,1,0
               ,0,0,0,0);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,(int)*(char *)(param_1 + 0x20),0);
    PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
              (&uStack_48,uStack_50,0x43000000,uVar3,uStack_48,uStack_44,uStack_40,uStack_3c,
               in_stack_ffffffc8,1,0,0,0,0,0);
  }
  return;
}

