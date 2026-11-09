/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$Start
System_Collections_IEnumerator_o* Rotatelab_Ads_Debugging_AdModuleTestSceneController__Start (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController$$Start
   System_Collections_IEnumerator_o* Rotatelab_Ads_Debugging_AdModuleTestSceneController__Start
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController_o* __this, const MethodInfo* method); */

int Rotatelab_Ads_Debugging_AdModuleTestSceneController__Start_10f9ef8(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01109f64 + 0x1109f0c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01109f68 + 0x1109f20));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01109f6c + 0x1109f34));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

