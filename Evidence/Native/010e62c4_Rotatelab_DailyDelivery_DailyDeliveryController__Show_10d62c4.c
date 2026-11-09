/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$Show
void Rotatelab_DailyDelivery_DailyDeliveryController__Show (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$Show
   void Rotatelab_DailyDelivery_DailyDeliveryController__Show
   (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryController__Show_10d62c4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_r1;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_010e662c + 0x10e62dc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6630 + 0x10e62f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6634 + 0x10e62fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6638 + 0x10e6308));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e663c + 0x10e6314));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6640 + 0x10e6320));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6644 + 0x10e632c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6648 + 0x10e6338));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar8 = *(int **)(_UNK_010e664c + 0x10e6354);
  uStack_38 = 0;
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar8;
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x5c) + 0x18c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar5,1,**(undefined4 **)(_UNK_010e6650 + 0x10e6390));
  Rotatelab_DailyDelivery_DailyDeliveryController__BuildDays_10d6674(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Show_1124734(*(int *)(param_1 + 0x10),0,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x14),0,0xc53b8000,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_60,1,0,1,0,0,0);
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_48,&uStack_38,0x3dcccccd,0);
  piVar8 = *(int **)(_UNK_010e6654 + 0x10e6440);
  iVar5 = *piVar8;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar8;
  }
  puVar6 = *(undefined4 **)(iVar5 + 0x5c);
  iVar10 = puVar6[1];
  if (iVar10 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar6 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar9 = *puVar6;
    iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e6658 + 0x10e6490));
    System_Action___ctor_2b10bac(iVar10,uVar9,**(undefined4 **)(_UNK_010e665c + 0x10e64b0),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar10;
    thunk_FUN_00ec5080(piVar8,iVar10);
  }
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_48,&uStack_38,iVar10,0,0);
  uVar9 = *(undefined4 *)(param_1 + 0x14);
  pcVar7 = (char *)(_UNK_010e6660 + 0x10e64f8);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6664 + 0x10e6518));
    *pcVar7 = '\x01';
  }
  puVar6 = *(undefined4 **)(**(int **)(_UNK_010e6668 + 0x10e6538) + 0x5c);
  uVar11 = *puVar6;
  uVar12 = puVar6[1];
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1c,0);
  uVar4 = uStack_54;
  uVar3 = uStack_58;
  uVar2 = uStack_5c;
  uVar1 = uStack_60;
  if (*(int *)(**(int **)(_UNK_010e666c + 0x10e6558) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce70f0
            (&uStack_60,uVar9,0,0xc53b8000,uVar11,uVar12,0x3e99999a,uVar1,uVar2,uVar3,uVar4,
             uStack_50,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  iVar5 = *(int *)(**(int **)(_UNK_010e6670 + 0x10e65f4) + 0x74);
  if (iVar5 == 0) {
    FUN_00ec3934();
    iVar5 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_60,iVar5,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  return;
}

