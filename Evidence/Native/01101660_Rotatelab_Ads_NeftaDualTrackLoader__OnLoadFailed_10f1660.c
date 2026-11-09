/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$OnLoadFailed
void Rotatelab_Ads_NeftaDualTrackLoader__OnLoadFailed (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, System_String_o* adUnitId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$OnLoadFailed
   void Rotatelab_Ads_NeftaDualTrackLoader__OnLoadFailed (Rotatelab_Ads_NeftaDualTrackLoader_o*
   __this, System_String_o* adUnitId, const MethodInfo* method); */

void Rotatelab_Ads_NeftaDualTrackLoader__OnLoadFailed_10f1660(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_011017b8 + 0x110167c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011017bc + 0x1101690));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011017c0 + 0x110169c));
    *pcVar4 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrack_10f2ad0(param_1,param_2,&iStack_24);
  if (iVar1 != 0) {
    puVar6 = *(undefined4 **)(_UNK_011017c4 + 0x11016d0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
    iVar1 = iStack_24;
    if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = *(undefined4 *)(iStack_24 + 8);
    uVar3 = *(undefined4 *)(iStack_24 + 0x18);
    if (*(int *)(**(int **)(_UNK_011017c8 + 0x1101704) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = NeftaCustomAdapter_NeftaAdapterEvents__GetRetryDelayInSeconds_2c2d610(uVar3,uVar5,0);
    uVar3 = Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine_10f2948(param_1,iVar1,uVar3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar2,uVar3,0);
    if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iStack_24 + 0x10) != '\0') {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
      uVar3 = Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine_10f2bf4(param_1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar1,uVar3,0);
    }
  }
  return;
}

