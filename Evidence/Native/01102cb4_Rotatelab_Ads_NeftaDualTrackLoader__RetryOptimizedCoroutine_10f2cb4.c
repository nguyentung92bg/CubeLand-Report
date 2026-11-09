/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$RetryOptimizedCoroutine
System_Collections_IEnumerator_o* Rotatelab_Ads_NeftaDualTrackLoader__RetryOptimizedCoroutine (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, Rotatelab_Ads_NeftaDualTrackLoader_Track_o* track, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$RetryOptimizedCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Ads_NeftaDualTrackLoader__RetryOptimizedCoroutine
   (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, Rotatelab_Ads_NeftaDualTrackLoader_Track_o* track,
   const MethodInfo* method); */

int Rotatelab_Ads_NeftaDualTrackLoader__RetryOptimizedCoroutine_10f2cb4
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_01102d34 + 0x1102ccc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01102d38 + 0x1102ce0));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01102d3c + 0x1102cf4));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_2);
  return iVar1;
}

