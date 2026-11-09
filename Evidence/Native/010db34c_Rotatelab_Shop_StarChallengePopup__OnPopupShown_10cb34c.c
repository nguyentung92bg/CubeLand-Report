/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$OnPopupShown
void Rotatelab_Shop_StarChallengePopup__OnPopupShown (Rotatelab_Shop_StarChallengePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$OnPopupShown
   void Rotatelab_Shop_StarChallengePopup__OnPopupShown (Rotatelab_Shop_StarChallengePopup_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengePopup__OnPopupShown_10cb34c(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_010db47c + 0x10db364);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db480 + 0x10db378));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db484 + 0x10db384));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db488 + 0x10db390));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db48c + 0x10db39c));
    *pcVar3 = '\x01';
  }
  Rotatelab_UI_PopupController__OnPopupShown_1124dbc(param_1,0);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_010db490 + 0x10db3c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar4,0xc53b8000,0);
  uVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPosY_f9ec34
                    (*(undefined4 *)(param_1 + 0x1c),0,0x3eb33333,0,0);
  DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
            (uVar4,0x1b,**(undefined4 **)(_UNK_010db494 + 0x10db410));
  Rotatelab_Shop_StarChallengePopup__FocusOnCurrentChallenge_10cb4a0(param_1);
  Rotatelab_Shop_StarChallengePopup__SetCompleteStatus_10cb610(param_1);
  piVar2 = *(int **)(_UNK_010db498 + 0x10db434);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14));
  return;
}

