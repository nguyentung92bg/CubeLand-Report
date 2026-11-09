/* IL2CPP: Rotatelab.UI.UiElementHider$$OnDailyDeliveryActivatedHandler
void Rotatelab_UI_UiElementHider__OnDailyDeliveryActivatedHandler (Rotatelab_UI_UiElementHider_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UiElementHider$$OnDailyDeliveryActivatedHandler
   void Rotatelab_UI_UiElementHider__OnDailyDeliveryActivatedHandler (Rotatelab_UI_UiElementHider_o*
   __this, bool isActive, const MethodInfo* method); */

void Rotatelab_UI_UiElementHider__OnDailyDeliveryActivatedHandler_112f808(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
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
  
  if (param_2 == 0) {
    pcVar5 = (char *)(_UNK_0113f02c + 0x113ec7c);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0113f030 + 0x113ec90));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0113f034 + 0x113ec9c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0113f038 + 0x113eca8));
      *pcVar5 = '\x01';
    }
    if ((*(int *)(param_1 + 0x10) != 2) || (*(char *)(param_1 + 0x28) == '\0')) {
      iVar3 = Rotatelab_UI_UiElementHider__GetAnchorData_112ff4c(param_1);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__set_anchorMin_36131f0
                (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10)
                 ,0);
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__set_anchorMax_3613400
                (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 0x14),
                 *(undefined4 *)(iVar3 + 0x18),0);
      uVar4 = *(undefined4 *)(iVar3 + 0x24);
      uVar11 = *(undefined4 *)(iVar3 + 0x28);
      uVar10 = *(undefined4 *)(param_1 + 0x1c);
      uVar8 = *(undefined4 *)(param_1 + 0x18);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
      uVar9 = uStack_40;
      uVar1 = uStack_44;
      uVar12 = uStack_48;
      uVar2 = uStack_4c;
      uVar6 = uStack_50;
      if (*(int *)(**(int **)(_UNK_0113f03c + 0x113ed6c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__UIAnchoredPosition_2ce6e40
                (&uStack_50,uVar8,uVar4,uVar11,uVar10,uVar6,uVar2,uVar12,uVar1,uVar9,1,0,0,0,0,0);
      if (*(int *)(param_1 + 0x10) == 1) {
        iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = UnityEngine_Transform__GetChild_3617760(iVar3,0,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar7 = *(undefined4 **)(_UNK_0113f040 + 0x113ee30);
        uVar6 = UnityEngine_Component__GetComponent_object__143f3b0(iVar3,*puVar7);
        iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = UnityEngine_Transform__GetChild_3617760(iVar3,1,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = UnityEngine_Component__GetComponent_object__143f3b0(iVar3,*puVar7);
        iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0113f044 + 0x113ee90));
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar3 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar8 = *(undefined4 *)(param_1 + 0x1c);
        iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 0x10);
        PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
        uVar4 = uStack_40;
        uVar11 = uStack_44;
        uVar9 = uStack_48;
        uVar1 = uStack_4c;
        uVar12 = uStack_50;
        puVar7 = (undefined4 *)&UNK_0113f01c;
        if (iVar3 == 3) {
          puVar7 = (undefined4 *)&UNK_0113f020;
        }
        uVar10 = *puVar7;
        if (*(int *)(**(int **)(_UNK_0113f048 + 0x113eee8) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
                  (&uStack_50,uVar6,uVar10,uVar8,uVar12,uVar1,uVar9,uVar11,uVar4,1,0,0,0,0,0);
        iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0113f04c + 0x113ef5c));
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar3 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 0x10);
        uVar6 = *(undefined4 *)(param_1 + 0x1c);
        PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
        puVar7 = (undefined4 *)&UNK_0113f024;
        if (iVar3 == 3) {
          puVar7 = (undefined4 *)&UNK_0113f028;
        }
        uVar12 = *puVar7;
        if (*(int *)(**(int **)(_UNK_0113f050 + 0x113efb8) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
                  (&uStack_50,uVar2,uVar12,uVar6,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,1
                   ,0,0,0,0,0);
      }
    }
    return;
  }
  pcVar5 = (char *)(_UNK_0113fae8 + 0x113f838);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113faec + 0x113f84c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113faf0 + 0x113f858));
    *pcVar5 = '\x01';
  }
  iVar3 = Rotatelab_UI_UiElementHider__GetAnchorData_112ff4c(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchorMin_36131f0
            (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchorMax_3613400
            (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18),0)
  ;
  uStack_50 = *(undefined4 *)(iVar3 + 0x1c);
  uStack_4c = *(undefined4 *)(iVar3 + 0x20);
  uVar11 = *(undefined4 *)(param_1 + 0x1c);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,(int)*(char *)(param_1 + 0x20),0);
  uVar1 = uStack_3c;
  uVar12 = uStack_40;
  uVar2 = uStack_44;
  uVar6 = uStack_48;
  if (*(int *)(**(int **)(_UNK_0113faf4 + 0x113f908) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_48,uVar9,uStack_50,uStack_4c,uVar11,uVar6,uVar2,uVar12,uVar1,in_stack_ffffffc8,
             1,0,0,0,0,0);
  if (*(int *)(param_1 + 0x10) == 1) {
    iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Transform__GetChild_3617760(iVar3,0,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar7 = *(undefined4 **)(_UNK_0113faf8 + 0x113f9b8);
    uStack_4c = UnityEngine_Component__GetComponent_object__143f3b0(iVar3,*puVar7);
    iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Transform__GetChild_3617760(iVar3,1,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_50 = UnityEngine_Component__GetComponent_object__143f3b0(iVar3,*puVar7);
    uVar9 = *(undefined4 *)(param_1 + 0x1c);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,(int)*(char *)(param_1 + 0x20),0);
    uVar1 = uStack_3c;
    uVar12 = uStack_40;
    uVar2 = uStack_44;
    uVar6 = uStack_48;
    if (*(int *)(**(int **)(_UNK_0113fafc + 0x113fa34) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
              (&uStack_48,uStack_4c,0xc32a0000,uVar9,uVar6,uVar2,uVar12,uVar1,in_stack_ffffffc8,1,0,
               0,0,0,0);
    uVar6 = *(undefined4 *)(param_1 + 0x1c);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,(int)*(char *)(param_1 + 0x20),0);
    PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
              (&uStack_48,uStack_50,0x43000000,uVar6,uStack_48,uStack_44,uStack_40,uStack_3c,
               in_stack_ffffffc8,1,0,0,0,0,0);
  }
  return;
}

