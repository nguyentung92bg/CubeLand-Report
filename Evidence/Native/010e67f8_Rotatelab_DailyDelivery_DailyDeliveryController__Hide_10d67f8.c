/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$Hide
void Rotatelab_DailyDelivery_DailyDeliveryController__Hide (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryController$$Hide
   void Rotatelab_DailyDelivery_DailyDeliveryController__Hide
   (Rotatelab_DailyDelivery_DailyDeliveryController_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryController__Hide_10d67f8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int extraout_r1;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
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
  
  pcVar6 = (char *)(_UNK_010e6bcc + 0x10e6810);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6bd0 + 0x10e6824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6bd4 + 0x10e6830));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6bd8 + 0x10e683c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6bdc + 0x10e6848));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6be0 + 0x10e6854));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6be4 + 0x10e6860));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6be8 + 0x10e686c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6bec + 0x10e6878));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6bf0 + 0x10e6884));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6bf4 + 0x10e6890));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e6bf8 + 0x10e689c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e6bfc + 0x10e68b8));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,6,0);
  piVar7 = *(int **)(_UNK_010e6c00 + 0x10e68ec);
  iVar3 = *piVar7;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x18c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar3,0,**(undefined4 **)(_UNK_010e6c04 + 0x10e6928));
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar11 = *(undefined4 *)(param_1 + 0x14);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1c,0);
  uVar2 = uStack_54;
  uVar1 = uStack_58;
  uVar8 = uStack_5c;
  uVar9 = uStack_60;
  if (*(int *)(**(int **)(_UNK_010e6c08 + 0x10e6980) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_60,uVar11,0,0x453b8000,0x3e99999a,uVar9,uVar8,uVar1,uVar2,uStack_50,1,0,0,0,0,0
            );
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  piVar7 = *(int **)(_UNK_010e6c0c + 0x10e6a1c);
  uVar9 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = *piVar7;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar5 = *(undefined4 **)(iVar3 + 0x5c);
  iVar10 = puVar5[2];
  if (iVar10 == 0) {
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar8 = *puVar5;
    iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e6c10 + 0x10e6a74));
    System_Action_object____ctor_1f11414
              (iVar10,uVar8,**(undefined4 **)(_UNK_010e6c14 + 0x10e6a94),0);
    piVar4 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
    *piVar4 = iVar10;
    thunk_FUN_00ec5080(piVar4,iVar10);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_60,&uStack_38,uVar9,iVar10,0,**(undefined4 **)(_UNK_010e6c18 + 0x10e6ac4));
  iVar3 = *piVar7;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar7;
  }
  puVar5 = *(undefined4 **)(iVar3 + 0x5c);
  iVar10 = puVar5[3];
  if (iVar10 == 0) {
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar9 = *puVar5;
    iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e6c1c + 0x10e6b2c));
    System_Action___ctor_2b10bac(iVar10,uVar9,**(undefined4 **)(_UNK_010e6c20 + 0x10e6b4c),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 0xc);
    *piVar7 = iVar10;
    thunk_FUN_00ec5080(piVar7,iVar10);
  }
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_60,&uStack_38,iVar10,0,0);
  iVar3 = *(int *)(**(int **)(_UNK_010e6c24 + 0x10e6b94) + 0x74);
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar3 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_60,iVar3,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  return;
}

