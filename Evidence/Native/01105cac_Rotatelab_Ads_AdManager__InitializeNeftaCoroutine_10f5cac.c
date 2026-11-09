/* IL2CPP: Rotatelab.Ads.AdManager$$InitializeNeftaCoroutine
System_Collections_IEnumerator_o* Rotatelab_Ads_AdManager__InitializeNeftaCoroutine (Rotatelab_Ads_AdManager_o* __this, Rotatelab_Ads_AdConfig_PlatformSpecificData_o platformData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$InitializeNeftaCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Ads_AdManager__InitializeNeftaCoroutine
   (Rotatelab_Ads_AdManager_o* __this, Rotatelab_Ads_AdConfig_PlatformSpecificData_o platformData,
   const MethodInfo* method); */

int Rotatelab_Ads_AdManager__InitializeNeftaCoroutine_10f5cac
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01105d6c + 0x1105ccc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105d70 + 0x1105cec));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01105d74 + 0x1105d00));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x28) = param_7;
  *(undefined4 *)(iVar1 + 0x2c) = param_8;
  *(undefined4 *)(iVar1 + 0x30) = param_9;
  *(undefined4 *)(iVar1 + 0x14) = param_2;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  *(undefined4 *)(iVar1 + 0x20) = param_5;
  *(undefined4 *)(iVar1 + 0x24) = param_6;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),0);
  return iVar1;
}

