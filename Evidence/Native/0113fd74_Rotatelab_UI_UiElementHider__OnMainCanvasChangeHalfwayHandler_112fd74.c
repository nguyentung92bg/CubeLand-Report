/* IL2CPP: Rotatelab.UI.UiElementHider$$OnMainCanvasChangeHalfwayHandler
void Rotatelab_UI_UiElementHider__OnMainCanvasChangeHalfwayHandler (Rotatelab_UI_UiElementHider_o* __this, int32_t mainCanvasType, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UiElementHider$$OnMainCanvasChangeHalfwayHandler
   void Rotatelab_UI_UiElementHider__OnMainCanvasChangeHalfwayHandler
   (Rotatelab_UI_UiElementHider_o* __this, int32_t mainCanvasType, bool isActive, const MethodInfo*
   method); */

void Rotatelab_UI_UiElementHider__OnMainCanvasChangeHalfwayHandler_112fd74
               (int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  pcVar8 = (char *)(_UNK_0113f02c + 0x113ec7c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113f030 + 0x113ec90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113f034 + 0x113ec9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113f038 + 0x113eca8));
    *pcVar8 = '\x01';
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
              (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),0
              );
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_anchorMax_3613400
              (*(int *)(param_1 + 0x18),*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18),
               0);
    uVar7 = *(undefined4 *)(iVar3 + 0x24);
    uVar4 = *(undefined4 *)(iVar3 + 0x28);
    uVar11 = *(undefined4 *)(param_1 + 0x1c);
    uVar10 = *(undefined4 *)(param_1 + 0x18);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
    uVar2 = uStack_40;
    uVar1 = uStack_44;
    uVar12 = uStack_48;
    uVar6 = uStack_4c;
    uVar5 = uStack_50;
    if (*(int *)(**(int **)(_UNK_0113f03c + 0x113ed6c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIAnchoredPosition_2ce6e40
              (&uStack_50,uVar10,uVar7,uVar4,uVar11,uVar5,uVar6,uVar12,uVar1,uVar2,1,0,0,0,0,0);
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
      puVar9 = *(undefined4 **)(_UNK_0113f040 + 0x113ee30);
      uVar5 = UnityEngine_Component__GetComponent_object__143f3b0(iVar3,*puVar9);
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
      uVar6 = UnityEngine_Component__GetComponent_object__143f3b0(iVar3,*puVar9);
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
      uVar10 = *(undefined4 *)(param_1 + 0x1c);
      iVar3 = *(int *)(*(int *)(iVar3 + 0x34) + 0x10);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
      uVar7 = uStack_40;
      uVar4 = uStack_44;
      uVar2 = uStack_48;
      uVar1 = uStack_4c;
      uVar12 = uStack_50;
      puVar9 = (undefined4 *)&UNK_0113f01c;
      if (iVar3 == 3) {
        puVar9 = (undefined4 *)&UNK_0113f020;
      }
      uVar11 = *puVar9;
      if (*(int *)(**(int **)(_UNK_0113f048 + 0x113eee8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
                (&uStack_50,uVar5,uVar11,uVar10,uVar12,uVar1,uVar2,uVar4,uVar7,1,0,0,0,0,0);
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
      uVar5 = *(undefined4 *)(param_1 + 0x1c);
      PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_50,(int)*(char *)(param_1 + 0x20),0);
      puVar9 = (undefined4 *)&UNK_0113f024;
      if (iVar3 == 3) {
        puVar9 = (undefined4 *)&UNK_0113f028;
      }
      uVar12 = *puVar9;
      if (*(int *)(**(int **)(_UNK_0113f050 + 0x113efb8) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
                (&uStack_50,uVar6,uVar12,uVar5,uStack_50,uStack_4c,uStack_48,uStack_44,uStack_40,1,0
                 ,0,0,0,0);
    }
  }
  return;
}

