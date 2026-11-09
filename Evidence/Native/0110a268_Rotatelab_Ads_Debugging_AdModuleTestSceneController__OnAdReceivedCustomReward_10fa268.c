/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$OnAdReceivedCustomReward
void Rotatelab_Ads_Debugging_AdModuleTestSceneController__OnAdReceivedCustomReward (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, Rotatelab_Ads_RewardedAdFormat_CustomReward_o customReward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$OnAdReceivedCustomReward
   void Rotatelab_Ads_Debugging_AdModuleTestSceneController__OnAdReceivedCustomReward
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this,
   Rotatelab_Ads_RewardedAdFormat_CustomReward_o customReward, const MethodInfo* method); */

void Rotatelab_Ads_Debugging_AdModuleTestSceneController__OnAdReceivedCustomReward_10fa268
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_0110a32c + 0x110a288);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a330 + 0x110a29c));
    *pcVar4 = '\x01';
  }
  if (param_2 == *(int *)(param_1 + 0x30)) {
    iVar3 = *(int *)(param_1 + 0x18);
    iStack_1c = System_Int32__Parse_2b6bda0(param_4,0);
    iStack_1c = iStack_1c + iVar3;
    *(int *)(param_1 + 0x18) = iStack_1c;
    piVar2 = *(int **)(param_1 + 0x14);
    uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_0110a334 + 0x110a2d8) + 0x24),&iStack_1c);
    uVar1 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_0110a338 + 0x110a2f8),uVar1,0);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar2 + 0x2f8))(piVar2,uVar1,*(undefined4 *)(*piVar2 + 0x2fc));
  }
  return;
}

