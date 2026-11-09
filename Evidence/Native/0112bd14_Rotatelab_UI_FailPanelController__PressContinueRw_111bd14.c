/* IL2CPP: Rotatelab.UI.FailPanelController$$PressContinueRw
void Rotatelab_UI_FailPanelController__PressContinueRw (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$PressContinueRw
   void Rotatelab_UI_FailPanelController__PressContinueRw (Rotatelab_UI_FailPanelController_o*
   __this, const MethodInfo* method); */

undefined4 Rotatelab_UI_FailPanelController__PressContinueRw_111bd14(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  int *piVar4;
  undefined4 uVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 unaff_r6;
  
  pcVar6 = (char *)(_UNK_0112be34 + 0x112bd28);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112be38 + 0x112bd3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112be3c + 0x112bd48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112be40 + 0x112bd54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112be44 + 0x112bd60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112be48 + 0x112bd6c));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112be4c + 0x112bd80));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,3,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112be50 + 0x112bdb0));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112be54 + 0x112bdc4));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_0112be58 + 0x112bde0),0);
  piVar4 = *(int **)(_UNK_0112be5c + 0x112bdf4);
  iVar3 = *piVar4;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar4;
  }
  uVar5 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_00fbb428 + 0xfbb358);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fbb42c + 0xfbb36c),uVar2,uVar5,0,unaff_r4,unaff_r5,unaff_r6)
    ;
    *pcVar6 = '\x01';
  }
  *(undefined4 *)(iVar1 + 0x14) = uVar5;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),uVar5);
  *(undefined4 *)(iVar1 + 0x10) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),uVar2);
  puVar7 = *(undefined4 **)(_UNK_00fbb430 + 0xfbb3a0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x4c) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = 0;
    iVar3 = Rotatelab_Ads_RewardedAdFormat__IsAdReady_10f4734(*(int *)(iVar3 + 0x4c),0);
    if (iVar3 == 0) {
      RotateAdLogicManager___TryShowRewarded_g__AdNotReady_14_0_fab5c8(iVar1);
    }
    else {
      RotateAdLogicManager__ShowRewarded_fab434(iVar1);
      uVar2 = 1;
    }
  }
  return uVar2;
}

