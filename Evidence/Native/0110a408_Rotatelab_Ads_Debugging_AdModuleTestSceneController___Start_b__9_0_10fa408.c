/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$<Start>b__9_0
void Rotatelab_Ads_Debugging_AdModuleTestSceneController___Start_b__9_0 (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$<Start>b__9_0
   void Rotatelab_Ads_Debugging_AdModuleTestSceneController___Start_b__9_0
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_Debugging_AdModuleTestSceneController___Start_b__9_0_10fa408(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  int iStack_14;
  
  pcVar5 = (char *)(_UNK_0110a478 + 0x110a41c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a47c + 0x110a430));
    *pcVar5 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110a480 + 0x110a444));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x48) != 0) {
    Rotatelab_Ads_InterstitialAdFormat__OnCurrentLevelEnded_10f1198();
  }
  iVar3 = *(int *)(param_1 + 0x2c) + 1;
  pcVar5 = (char *)(_UNK_0110a134 + 0x110a07c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a138 + 0x110a090));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a13c + 0x110a09c));
    *pcVar5 = '\x01';
  }
  iVar1 = *(int *)(_UNK_0110a140 + 0x110a0b4);
  piVar4 = *(int **)(param_1 + 0x28);
  *(int *)(param_1 + 0x2c) = iVar3;
  iStack_14 = iVar3;
  uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&iStack_14);
  uVar2 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_0110a144 + 0x110a0d8),uVar2,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar4 + 0x2f8))(piVar4,uVar2,*(undefined4 *)(*piVar4 + 0x2fc));
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110a148 + 0x110a110));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar3 + 0x50) = *(undefined4 *)(param_1 + 0x2c);
  return;
}

