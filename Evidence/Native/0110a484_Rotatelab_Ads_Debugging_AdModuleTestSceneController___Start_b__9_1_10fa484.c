/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$<Start>b__9_1
void Rotatelab_Ads_Debugging_AdModuleTestSceneController___Start_b__9_1 (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$<Start>b__9_1
   void Rotatelab_Ads_Debugging_AdModuleTestSceneController___Start_b__9_1
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_Debugging_AdModuleTestSceneController___Start_b__9_1_10fa484(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0110a510 + 0x110a49c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a514 + 0x110a4b0));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0110a518 + 0x110a4c4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Ads_RewardedAdFormat__Show_10f4674
            (*(int *)(iVar1 + 0x4c),*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x34),
             *(undefined4 *)(param_1 + 0x38));
  return;
}

