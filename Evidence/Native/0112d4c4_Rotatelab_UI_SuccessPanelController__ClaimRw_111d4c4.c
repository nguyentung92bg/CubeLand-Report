/* IL2CPP: Rotatelab.UI.SuccessPanelController$$ClaimRw
void Rotatelab_UI_SuccessPanelController__ClaimRw (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$ClaimRw
   void Rotatelab_UI_SuccessPanelController__ClaimRw (Rotatelab_UI_SuccessPanelController_o* __this,
   const MethodInfo* method); */

undefined4 Rotatelab_UI_SuccessPanelController__ClaimRw_111d4c4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 unaff_r6;
  
  pcVar5 = (char *)(_UNK_0112d588 + 0x112d4d8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d58c + 0x112d4ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d590 + 0x112d4f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d594 + 0x112d504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d598 + 0x112d510));
    *pcVar5 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112d59c + 0x112d524));
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112d5a0 + 0x112d538));
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_0112d5a4 + 0x112d554),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = **(undefined4 **)(_UNK_0112d5a8 + 0x112d57c);
  pcVar5 = (char *)(_UNK_00fbb428 + 0xfbb358);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbb42c + 0xfbb36c),uVar3,uVar4,0,unaff_r4,unaff_r5,unaff_r6)
    ;
    *pcVar5 = '\x01';
  }
  *(undefined4 *)(iVar2 + 0x14) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x14),uVar4);
  *(undefined4 *)(iVar2 + 0x10) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),uVar3);
  puVar6 = *(undefined4 **)(_UNK_00fbb430 + 0xfbb3a0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x4c) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = 0;
    iVar1 = Rotatelab_Ads_RewardedAdFormat__IsAdReady_10f4734(*(int *)(iVar1 + 0x4c),0);
    if (iVar1 == 0) {
      RotateAdLogicManager___TryShowRewarded_g__AdNotReady_14_0_fab5c8(iVar2);
    }
    else {
      RotateAdLogicManager__ShowRewarded_fab434(iVar2);
      uVar3 = 1;
    }
  }
  return uVar3;
}

