/* IL2CPP: Rotatelab.SeasonPassTutorialController$$ButtonClicked
void Rotatelab_SeasonPassTutorialController__ButtonClicked (Rotatelab_SeasonPassTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassTutorialController$$ButtonClicked
   void Rotatelab_SeasonPassTutorialController__ButtonClicked
   (Rotatelab_SeasonPassTutorialController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPassTutorialController__ButtonClicked_fc5e48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_00fd61cc + 0xfd5e60);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61d0 + 0xfd5e74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61d4 + 0xfd5e80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61d8 + 0xfd5e8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61dc + 0xfd5e98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61e0 + 0xfd5ea4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61e4 + 0xfd5eb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61e8 + 0xfd5ebc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61ec + 0xfd5ec8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61f0 + 0xfd5ed4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61f4 + 0xfd5ee0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd61f8 + 0xfd5eec));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (*(undefined4 *)(param_1 + 0x24),**(undefined4 **)(_UNK_00fd61fc + 0xfd5f08));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar6 = *(undefined4 **)(_UNK_00fd6200 + 0xfd5f48);
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x10),0,*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_CanvasGroup__get_alpha_39a366c(iVar1,0);
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd6204 + 0xfd5f7c));
    System_Action_float____ctor_1f12930(uVar3,param_1,**(undefined4 **)(_UNK_00fd6208 + 0xfd5f98),0)
    ;
    if (*(int *)(**(int **)(_UNK_00fd620c + 0xfd5fac) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Custom_2ce885c(&uStack_40,uVar2,0,0x3dcccccd,uVar3,0,0,0,0,0,1,0,0,0,0,0);
    uStack_30 = uStack_40;
    uStack_2c = uStack_3c;
    uStack_28 = uStack_38;
    uStack_24 = uStack_34;
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd6210 + 0xfd601c));
    System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_00fd6214 + 0xfd603c),0);
    PrimeTween_Tween__OnComplete_2ceddf8(auStack_50,&uStack_30,uVar2,0,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x10),0,*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(iVar1,0,0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x10),0,*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_interactable_39a3940(iVar1,0,0);
  }
  piVar5 = *(int **)(param_1 + 0x14);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x188))(piVar5,0,*(undefined4 *)(*piVar5 + 0x18c));
  Rotatelab_SeasonPassTutorialController__CheckStep_fc5bc4(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fd6218 + 0xfd6124));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x48);
  if (*(int *)(**(int **)(_UNK_00fd621c + 0xfd6144) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_40,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_DateTime___set_Value_1a8b3bc
            (iVar1,extraout_r1,uStack_40,uStack_3c,**(undefined4 **)(_UNK_00fd6220 + 0xfd618c));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fd6224 + 0xfd61a4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Shop_ShopPanelController__RefreshShopVisibility_10c1480(iVar1,0);
  return;
}

