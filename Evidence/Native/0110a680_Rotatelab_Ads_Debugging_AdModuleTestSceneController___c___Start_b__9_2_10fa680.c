/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController.<>c$$<Start>b__9_2
void Rotatelab_Ads_Debugging_AdModuleTestSceneController___c___Start_b__9_2 (Rotatelab_Ads_Debugging_AdModuleTestSceneController___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController.<>c$$<Start>b__9_2
   void Rotatelab_Ads_Debugging_AdModuleTestSceneController___c___Start_b__9_2
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController___c_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_Debugging_AdModuleTestSceneController___c___Start_b__9_2_10fa680(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  pcVar2 = (char *)(_UNK_0110a730 + 0x110a690);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a734 + 0x110a6a4));
    *pcVar2 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_0110a738 + 0x110a6b8);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Ads_InterstitialAdFormat__IsAdReady_10f0d60(*(int *)(iVar1 + 0x48),1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(iVar1 + 0x48);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0110a72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xf8))(piVar3,*(undefined4 *)(*piVar3 + 0xfc));
  return;
}

