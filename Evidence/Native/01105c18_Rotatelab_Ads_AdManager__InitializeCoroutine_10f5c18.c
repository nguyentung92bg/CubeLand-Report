/* IL2CPP: Rotatelab.Ads.AdManager$$InitializeCoroutine
System_Collections_IEnumerator_o* Rotatelab_Ads_AdManager__InitializeCoroutine (Rotatelab_Ads_AdManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager$$InitializeCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Ads_AdManager__InitializeCoroutine
   (Rotatelab_Ads_AdManager_o* __this, const MethodInfo* method); */

int Rotatelab_Ads_AdManager__InitializeCoroutine_10f5c18(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01105c84 + 0x1105c2c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01105c88 + 0x1105c40));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01105c8c + 0x1105c54));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

