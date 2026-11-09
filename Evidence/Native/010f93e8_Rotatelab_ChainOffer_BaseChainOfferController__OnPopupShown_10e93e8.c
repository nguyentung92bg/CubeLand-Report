/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$OnPopupShown
void Rotatelab_ChainOffer_BaseChainOfferController__OnPopupShown (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$OnPopupShown
   void Rotatelab_ChainOffer_BaseChainOfferController__OnPopupShown
   (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_BaseChainOfferController__OnPopupShown_10e93e8(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010f9480 + 0x10f93fc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f9484 + 0x10f9410));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f9488 + 0x10f941c));
    *pcVar3 = '\x01';
  }
  Rotatelab_UI_PopupController__OnPopupShown_1124dbc(param_1,0);
  piVar2 = *(int **)(_UNK_010f948c + 0x10f943c);
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

