/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$OnPopupHidden
void Rotatelab_ChainOffer_BaseChainOfferController__OnPopupHidden (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$OnPopupHidden
   void Rotatelab_ChainOffer_BaseChainOfferController__OnPopupHidden
   (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_BaseChainOfferController__OnPopupHidden_10e9494(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010f95a0 + 0x10f94a8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f95a4 + 0x10f94bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f95a8 + 0x10f94c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f95ac + 0x10f94d4));
    *pcVar2 = '\x01';
  }
  Rotatelab_UI_PopupController__OnPopupHidden_1124dc0(param_1,0);
  piVar3 = *(int **)(_UNK_010f95b0 + 0x10f94f4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,**(undefined4 **)(_UNK_010f95b4 + 0x10f952c));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010f95b8 + 0x10f9540));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_HomePageCoordinator__NotifyClosed_107a584(iVar1,0xb,0);
  iVar1 = *(int *)(param_1 + 0x4c);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x4c) = 0;
    thunk_FUN_00ec5080((int *)(param_1 + 0x4c),0);
                    /* WARNING: Could not recover jumptable at 0x010f9598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar1 + 0xc))
              (*(undefined4 *)(iVar1 + 0x20),*(undefined1 *)(param_1 + 0x50),
               *(undefined4 *)(iVar1 + 0x14));
    return;
  }
  return;
}

