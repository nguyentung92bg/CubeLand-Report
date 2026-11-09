/* IL2CPP: Rotatelab.Ads.AdManager.<>c__DisplayClass49_0$$<InitializeNeftaCoroutine>b__0
bool Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_b__0 (Rotatelab_Ads_AdManager___c__DisplayClass49_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager.<>c__DisplayClass49_0$$<InitializeNeftaCoroutine>b__0
   bool Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_b__0
   (Rotatelab_Ads_AdManager___c__DisplayClass49_0_o* __this, const MethodInfo* method); */

undefined1
Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_b__0_10f6834(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_011068d4 + 0x1106848);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011068d8 + 0x110685c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011068dc + 0x1106868));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Networking_SatoriFlag_object___get_HasRemoteValue_1a88c20
                    (*(int *)(param_1 + 8),**(undefined4 **)(_UNK_011068e0 + 0x110688c));
  uVar1 = 1;
  if (iVar2 == 0) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_011068e4 + 0x11068b0));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = 0;
    if (*(char *)(iVar2 + 0x91) != '\0') {
      uVar1 = 1;
    }
  }
  return uVar1;
}

