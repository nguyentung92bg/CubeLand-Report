/* IL2CPP: Rotatelab.Networking.SatoriFailProofOfferConfigFlag$$RefreshBundle
void Rotatelab_Networking_SatoriFailProofOfferConfigFlag__RefreshBundle (Rotatelab_Networking_SatoriFailProofOfferConfigFlag_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriFailProofOfferConfigFlag$$RefreshBundle
   void Rotatelab_Networking_SatoriFailProofOfferConfigFlag__RefreshBundle
   (Rotatelab_Networking_SatoriFailProofOfferConfigFlag_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_SatoriFailProofOfferConfigFlag__RefreshBundle_fe80cc(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_00ff81bc + 0xff80e0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff81c0 + 0xff80f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff81c4 + 0xff8100));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00ff81c8 + 0xff8114));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar1 + 0x11) != '\0') {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_00ff81cc + 0xff8140));
    if (param_1[5] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_IAP_PurchasesListener__HasUnfinishedPurchase_1099f94
                      (iVar1,*(undefined4 *)(param_1[5] + 0xc),0);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (**(code **)(*param_1 + 0xf0))(param_1,*(undefined4 *)(*param_1 + 0xf4));
    if (iVar1 != param_1[6]) {
                    /* WARNING: Could not recover jumptable at 0x00ff81b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xf8))(param_1,*(undefined4 *)(*param_1 + 0xfc));
      return;
    }
  }
  return;
}

