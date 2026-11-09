/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$WaitDelayCoroutine
System_Collections_IEnumerator_o* Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, Rotatelab_Ads_NeftaDualTrackLoader_Track_o* track, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$WaitDelayCoroutine
   System_Collections_IEnumerator_o* Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine
   (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, Rotatelab_Ads_NeftaDualTrackLoader_Track_o* track,
   float delay, const MethodInfo* method); */

int Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine_10f2948
              (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_011029d8 + 0x1102968);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011029dc + 0x110297c));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011029e0 + 0x1102990));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x18) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x18),param_1);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_2);
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  return iVar1;
}

