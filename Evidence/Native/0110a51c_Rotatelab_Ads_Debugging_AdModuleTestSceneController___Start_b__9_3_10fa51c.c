/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$<Start>b__9_3
void Rotatelab_Ads_Debugging_AdModuleTestSceneController___Start_b__9_3 (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$<Start>b__9_3
   void Rotatelab_Ads_Debugging_AdModuleTestSceneController___Start_b__9_3
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_Debugging_AdModuleTestSceneController___Start_b__9_3_10fa51c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_0110a5f8 + 0x110a530);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a5fc + 0x110a544));
    *pcVar5 = '\x01';
  }
  puVar6 = *(undefined4 **)(_UNK_0110a600 + 0x110a558);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  cVar1 = *(char *)(*(int *)(iVar3 + 0x44) + 0x40);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (cVar1 == '\0') {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar2 = *(int **)(iVar3 + 0x44);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar2 + 0xf8))(piVar2,*(undefined4 *)(*piVar2 + 0xfc));
  }
  else {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Ads_BannerAdFormat__Hide_10eedb0(*(int *)(iVar3 + 0x44));
  }
  pcVar5 = (char *)(_UNK_0110a244 + 0x110a160);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a248 + 0x110a174));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a24c + 0x110a180));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a250 + 0x110a18c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a254 + 0x110a198));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)UnityEngine_Component__GetComponentInChildren_object__143f57c
                            (*(int *)(param_1 + 0x20),**(undefined4 **)(_UNK_0110a258 + 0x110a1bc));
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110a25c + 0x110a1d4));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = **(undefined4 **)(_UNK_0110a260 + 0x110a208);
  if (*(char *)(*(int *)(iVar3 + 0x44) + 0x40) == '\0') {
    uVar4 = **(undefined4 **)(_UNK_0110a264 + 0x110a214);
  }
                    /* WARNING: Could not recover jumptable at 0x0110a240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x2f8))(piVar2,uVar4,*(undefined4 *)(*piVar2 + 0x2fc));
  return;
}

