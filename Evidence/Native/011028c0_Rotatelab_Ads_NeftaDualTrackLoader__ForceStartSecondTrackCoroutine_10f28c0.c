/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$ForceStartSecondTrackCoroutine
System_Collections_IEnumerator_o* Rotatelab_Ads_NeftaDualTrackLoader__ForceStartSecondTrackCoroutine (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$ForceStartSecondTrackCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_Ads_NeftaDualTrackLoader__ForceStartSecondTrackCoroutine
   (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, float delay, const MethodInfo* method); */

int Rotatelab_Ads_NeftaDualTrackLoader__ForceStartSecondTrackCoroutine_10f28c0
              (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0110293c + 0x11028dc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01102940 + 0x11028f0));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01102944 + 0x1102904));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  return iVar1;
}

