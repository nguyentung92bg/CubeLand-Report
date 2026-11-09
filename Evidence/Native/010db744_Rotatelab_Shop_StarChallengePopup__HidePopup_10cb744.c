/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$HidePopup
void Rotatelab_Shop_StarChallengePopup__HidePopup (Rotatelab_Shop_StarChallengePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$HidePopup
   void Rotatelab_Shop_StarChallengePopup__HidePopup (Rotatelab_Shop_StarChallengePopup_o* __this,
   const MethodInfo* method); */

int Rotatelab_Shop_StarChallengePopup__HidePopup_10cb744(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  
  pcVar5 = (char *)(_UNK_010db8c8 + 0x10db75c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db8cc + 0x10db770));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db8d0 + 0x10db77c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db8d4 + 0x10db788));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db8d8 + 0x10db794));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db8dc + 0x10db7a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db8e0 + 0x10db7ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010db8e4 + 0x10db7b8));
    *pcVar5 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010db8e8 + 0x10db7cc));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_HomePageCoordinator__NotifyClosed_107a584(iVar2,0x14,0);
  piVar6 = *(int **)(_UNK_010db8ec + 0x10db7fc);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x114);
  if (iVar2 != 0) {
    Rotatelab_GameAction_bool___Raise_23a280c(iVar2,1,**(undefined4 **)(_UNK_010db8f0 + 0x10db834));
    uVar3 = DG_Tweening_DOTweenModuleUI__DOAnchorPosY_f9ec34
                      (*(undefined4 *)(param_1 + 0x1c),0xc53b8000,0x3eb33333,0,0);
    iVar2 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                      (uVar3,0x1a,**(undefined4 **)(_UNK_010db8f4 + 0x10db86c));
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010db8f8 + 0x10db884));
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar3,param_1,**(undefined4 **)(_UNK_010db8fc + 0x10db8a0),0);
    uVar4 = **(undefined4 **)(_UNK_010db900 + 0x10db8b8);
    cVar1 = '\0';
    if (iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0x94);
    }
    if (iVar2 != 0 && cVar1 != '\0') {
      *(undefined4 *)(iVar2 + 0x4c) = uVar3;
      thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x4c),uVar3,uVar4);
    }
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

