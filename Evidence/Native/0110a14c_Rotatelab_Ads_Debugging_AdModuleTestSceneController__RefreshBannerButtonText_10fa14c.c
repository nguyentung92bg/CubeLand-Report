/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$RefreshBannerButtonText
void Rotatelab_Ads_Debugging_AdModuleTestSceneController__RefreshBannerButtonText (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$RefreshBannerButtonText
   void Rotatelab_Ads_Debugging_AdModuleTestSceneController__RefreshBannerButtonText
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_Debugging_AdModuleTestSceneController__RefreshBannerButtonText_10fa14c
               (int param_1)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  pcVar3 = (char *)(_UNK_0110a244 + 0x110a160);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a248 + 0x110a174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a24c + 0x110a180));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a250 + 0x110a18c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a254 + 0x110a198));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)UnityEngine_Component__GetComponentInChildren_object__143f57c
                            (*(int *)(param_1 + 0x20),**(undefined4 **)(_UNK_0110a258 + 0x110a1bc));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110a25c + 0x110a1d4));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = **(undefined4 **)(_UNK_0110a260 + 0x110a208);
  if (*(char *)(*(int *)(iVar2 + 0x44) + 0x40) == '\0') {
    uVar4 = **(undefined4 **)(_UNK_0110a264 + 0x110a214);
  }
                    /* WARNING: Could not recover jumptable at 0x0110a240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x2f8))(piVar1,uVar4,*(undefined4 *)(*piVar1 + 0x2fc));
  return;
}

