/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$.ctor
void Rotatelab_Ads_Debugging_AdModuleTestSceneController___ctor (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$.ctor
   void Rotatelab_Ads_Debugging_AdModuleTestSceneController___ctor
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method); */

void Rotatelab_Ads_Debugging_AdModuleTestSceneController___ctor_10fa33c(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 auStack_18 [2];
  
  pcVar1 = (char *)(_UNK_0110a3f4 + 0x110a354);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a3f8 + 0x110a368));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110a3fc + 0x110a374));
    *pcVar1 = '\x01';
  }
  uVar2 = **(undefined4 **)(_UNK_0110a400 + 0x110a38c);
  uStack_1c = **(undefined4 **)(_UNK_0110a404 + 0x110a398);
  *(undefined4 *)(param_1 + 0x2c) = 1;
  uStack_20 = 0;
  auStack_18[0] = 0;
  thunk_FUN_00ec5080((uint)&uStack_20 | 4);
  auStack_18[0] = uVar2;
  thunk_FUN_00ec5080(auStack_18,uVar2);
  *(undefined4 *)(param_1 + 0x38) = auStack_18[0];
  *(ulonglong *)(param_1 + 0x30) = CONCAT44(uStack_1c,uStack_20);
  thunk_FUN_00ec5080(param_1 + 0x34,0);
  UnityEngine_MonoBehaviour___ctor_3605354(param_1,0);
  return;
}

