/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<RetryOptimizedCoroutine>d__33$$MoveNext
bool Rotatelab_Ads_NeftaDualTrackLoader__RetryOptimizedCoroutine_d__33__MoveNext (Rotatelab_Ads_NeftaDualTrackLoader__RetryOptimizedCoroutine_d__33_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<RetryOptimizedCoroutine>d__33$$MoveNext
   bool Rotatelab_Ads_NeftaDualTrackLoader__RetryOptimizedCoroutine_d__33__MoveNext
   (Rotatelab_Ads_NeftaDualTrackLoader__RetryOptimizedCoroutine_d__33_o* __this, const MethodInfo*
   method); */

bool Rotatelab_Ads_NeftaDualTrackLoader__RetryOptimizedCoroutine_d__33__MoveNext_10f35f8
               (int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  pcVar1 = (char *)(_UNK_0110372c + 0x110360c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103730 + 0x1103620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103734 + 0x110362c));
    *pcVar1 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = *(undefined4 *)(iVar2 + 8);
    uVar4 = *(undefined4 *)(iVar2 + 0x18);
    if (*(int *)(**(int **)(_UNK_01103738 + 0x11036b8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = NeftaCustomAdapter_NeftaAdapterEvents__GetRetryDelayInSeconds_2c2d610(uVar4,uVar3,0);
    uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110373c + 0x11036f0));
    UnityEngine_WaitForSecondsRealtime___ctor_360c850(uVar4,uVar3,0);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar4);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar5 == 1) {
    iVar2 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = 0;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Ads_NeftaDualTrackLoader__ContinueLoading_10f2538(iVar2);
  }
  return iVar5 == 0;
}

