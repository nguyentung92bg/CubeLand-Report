/* IL2CPP: Rotatelab.UI.UiElementHider$$Hide
void Rotatelab_UI_UiElementHider__Hide (Rotatelab_UI_UiElementHider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UiElementHider$$Hide
   void Rotatelab_UI_UiElementHider__Hide (Rotatelab_UI_UiElementHider_o* __this, const MethodInfo*
   method); */

void Rotatelab_UI_UiElementHider__Hide_112f818(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  
  pcVar9 = (char *)(_UNK_0113fae8 + 0x113f838);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113faec + 0x113f84c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113faf0 + 0x113f858));
    *pcVar9 = '\x01';
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
  uVar8 = *(undefined4 *)(iVar5 + 0x1c);
  uVar6 = *(undefined4 *)(iVar5 + 0x20);
  uVar12 = *(undefined4 *)(param_1 + 0x1c);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,(int)*(char *)(param_1 + 0x20),0);
  uVar4 = uStack_38;
  uVar3 = uStack_3c;
  uVar2 = uStack_40;
  uVar1 = uStack_44;
  uVar7 = uStack_48;
  if (*(int *)(**(int **)(_UNK_0113faf4 + 0x113f908) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_48,uVar11,uVar8,uVar6,uVar12,uVar7,uVar1,uVar2,uVar3,uVar4,1,0,0,0,0,0);
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
    puVar10 = *(undefined4 **)(_UNK_0113faf8 + 0x113f9b8);
    uVar7 = UnityEngine_Component__GetComponent_object__143f3b0(iVar5,*puVar10);
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
    uVar8 = UnityEngine_Component__GetComponent_object__143f3b0(iVar5,*puVar10);
    uVar11 = *(undefined4 *)(param_1 + 0x1c);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,(int)*(char *)(param_1 + 0x20),0);
    uVar6 = uStack_38;
    uVar4 = uStack_3c;
    uVar3 = uStack_40;
    uVar2 = uStack_44;
    uVar1 = uStack_48;
    if (*(int *)(**(int **)(_UNK_0113fafc + 0x113fa34) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
              (&uStack_48,uVar7,0xc32a0000,uVar11,uVar1,uVar2,uVar3,uVar4,uVar6,1,0,0,0,0,0);
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
    PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_48,(int)*(char *)(param_1 + 0x20),0);
    PrimeTween_Tween__UIAnchoredPositionX_2ce74b8
              (&uStack_48,uVar8,0x43000000,uVar7,uStack_48,uStack_44,uStack_40,uStack_3c,uStack_38,1
               ,0,0,0,0,0);
  }
  return;
}

