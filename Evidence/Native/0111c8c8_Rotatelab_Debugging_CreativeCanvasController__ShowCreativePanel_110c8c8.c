/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ShowCreativePanel
void Rotatelab_Debugging_CreativeCanvasController__ShowCreativePanel (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ShowCreativePanel
   void Rotatelab_Debugging_CreativeCanvasController__ShowCreativePanel
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__ShowCreativePanel_110c8c8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_28 [16];
  
  pcVar3 = (char *)(_UNK_0111cd90 + 0x111c8e0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cd94 + 0x111c8f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cd98 + 0x111c900));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cd9c + 0x111c90c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cda0 + 0x111c918));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cda4 + 0x111c924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cda8 + 0x111c930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cdac + 0x111c93c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cdb0 + 0x111c948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cdb4 + 0x111c954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cdb8 + 0x111c960));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cdbc + 0x111c96c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111cdc0 + 0x111c978));
    *pcVar3 = '\x01';
  }
  uVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111cdc4 + 0x111c98c));
  *(undefined4 *)(param_1 + 0x50) = uVar1;
  thunk_FUN_00ec5080();
  piVar4 = *(int **)(_UNK_0111cdc8 + 0x111c9ac);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x148);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,0,**(undefined4 **)(_UNK_0111cdcc + 0x111c9e4));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_0111cdd0 + 0x111ca3c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__ScaleX_2ce6950(auStack_28,uVar1,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  iVar2 = *(int *)(param_1 + 0x20);
  piVar4 = *(int **)(param_1 + 0x14);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = System_String__Concat_2a0bdec
                    (*(undefined4 *)(iVar2 + 0xc),**(undefined4 **)(_UNK_0111cdd8 + 0x111cad4),
                     *(undefined4 *)(iVar2 + 0x10),**(undefined4 **)(_UNK_0111cdd4 + 0x111cac8),0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar4 + 0x2b0))(piVar4,uVar1,*(undefined4 *)(*piVar4 + 0x2b4));
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_Text__SetText_35004d0(*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x68),0);
  iVar5 = *(int *)(param_1 + 0x24);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111cddc + 0x111cb40));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = (int *)Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar2,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = (**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_InputField__set_text_34eb818(iVar5,uVar1,0);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_0111cde0 + 0x111cbb0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar4 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = (**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_InputField__set_text_34eb818(iVar2,uVar1,0);
  iVar2 = *(int *)(param_1 + 0x90);
  if (*(int *)(**(int **)(_UNK_0111cde4 + 0x111cc1c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
  uVar1 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar1,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Toggle__SetIsOnWithoutNotify_39c80a0(iVar2,uVar1,0);
  iVar5 = *(int *)(param_1 + 0x94);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0111cde8 + 0x111cc70));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_SeasonPass_SeasonPassController__get_IsSeasonPassPurchased_10a01b8(iVar2,0);
  uVar1 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar1,0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Toggle__SetIsOnWithoutNotify_39c80a0(iVar5,uVar1,0);
  iVar5 = *(int *)(param_1 + 0x98);
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_ObservableBool__get_Value_fb2b74(*(int *)(iVar2 + 0x34),0);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Toggle__SetIsOnWithoutNotify_39c80a0(iVar5,uVar1,0);
  piVar4 = *(int **)(_UNK_0111cdec + 0x111cd1c);
  iVar5 = *(int *)(param_1 + 0x9c);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  uVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(iVar2 + 0x5c),**(undefined4 **)(_UNK_0111cdf0 + 0x111cd44));
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Toggle__SetIsOnWithoutNotify_39c80a0(iVar5,uVar1,0);
  Rotatelab_Debugging_CreativeCanvasController__SetChainOfferModeText_110cdf4(param_1);
  Rotatelab_Debugging_CreativeCanvasController__SetCrownTournamentThemeText_110cf50(param_1);
  Rotatelab_Debugging_CreativeCanvasController__SetTab_110d0ac(param_1);
  return;
}

