/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$ContinueOptimizedCoroutine
System_Collections_IEnumerator_o* Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$ContinueOptimizedCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine
   (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method); */

int Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine_10f2bf4(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01102c60 + 0x1102c08);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01102c64 + 0x1102c1c));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01102c68 + 0x1102c30));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

