/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$SetCurrentLevel
void Rotatelab_Ads_Debugging_AdModuleTestSceneController__SetCurrentLevel (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$SetCurrentLevel
   void Rotatelab_Ads_Debugging_AdModuleTestSceneController__SetCurrentLevel
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, int32_t level, const MethodInfo*
   method); */

void Rotatelab_Ads_Debugging_AdModuleTestSceneController__SetCurrentLevel_10fa060
               (int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_0110a134 + 0x110a07c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a138 + 0x110a090));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a13c + 0x110a09c));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(_UNK_0110a140 + 0x110a0b4);
  piVar4 = *(int **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  uStack_14 = param_2;
  uVar2 = FUN_00ec393c(*(undefined4 *)(iVar1 + 0x24),&uStack_14);
  uVar2 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_0110a144 + 0x110a0d8),uVar2,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar4 + 0x2f8))(piVar4,uVar2,*(undefined4 *)(*piVar4 + 0x2fc));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110a148 + 0x110a110));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(param_1 + 0x2c);
  return;
}

