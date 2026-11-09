/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$ScheduleLoadRetry
void Rotatelab_Ads_InterstitialAdFormat__ScheduleLoadRetry (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_String_o* adUnitId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$ScheduleLoadRetry
   void Rotatelab_Ads_InterstitialAdFormat__ScheduleLoadRetry (Rotatelab_Ads_InterstitialAdFormat_o*
   __this, System_String_o* adUnitId, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat__ScheduleLoadRetry_10f1648(int param_1,undefined4 param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iStack_24;
  
  iVar5 = *(int *)(param_1 + 0x4c);
  if (iVar5 == 0) {
    pcVar7 = (char *)(_UNK_010fe25c + 0x10fe1d8);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010fe260 + 0x10fe1ec));
      *pcVar7 = '\x01';
    }
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010fe264 + 0x10fe200));
    iVar3 = *(int *)(param_1 + 0x20);
    if (5 < iVar3) {
      iVar3 = 6;
    }
    uVar6 = ldexpf(0x3f800000,iVar3);
    uVar6 = Rotatelab_Ads_AdFormat___ScheduleLoadRetry_g__RetryCoroutine_43_0_10ee268(param_1,uVar6)
    ;
    if (iVar5 != 0) {
      uVar6 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar5,uVar6,0);
      puVar9 = (undefined4 *)(param_1 + 0x28);
      *puVar9 = uVar6;
      if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
        puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar9 >> 0x11) * 4 + 0xf547cc);
        do {
          bVar1 = (bool)hasExclusiveAccess(puVar2);
        } while (!bVar1);
        *puVar2 = *puVar2 | 1 << (((uint)puVar9 & 0x1ffff) >> 0xc);
        return;
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_011017b8 + 0x110167c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011017bc + 0x1101690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011017c0 + 0x110169c));
    *pcVar7 = '\x01';
  }
  iStack_24 = 0;
  iVar3 = Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrack_10f2ad0(iVar5,param_2,&iStack_24);
  if (iVar3 != 0) {
    puVar9 = *(undefined4 **)(_UNK_011017c4 + 0x11016d0);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    iVar3 = iStack_24;
    if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(undefined4 *)(iStack_24 + 8);
    uVar6 = *(undefined4 *)(iStack_24 + 0x18);
    if (*(int *)(**(int **)(_UNK_011017c8 + 0x1101704) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar6 = NeftaCustomAdapter_NeftaAdapterEvents__GetRetryDelayInSeconds_2c2d610(uVar6,uVar8,0);
    uVar6 = Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine_10f2948(iVar5,iVar3,uVar6);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar4,uVar6,0);
    if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iStack_24 + 0x10) != '\0') {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
      uVar6 = Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine_10f2bf4(iVar5);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar3,uVar6,0);
    }
  }
  return;
}

