/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<ContinueOptimizedCoroutine>d__31$$MoveNext
bool Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine_d__31__MoveNext (Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine_d__31_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<ContinueOptimizedCoroutine>d__31$$MoveNext
   bool Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine_d__31__MoveNext
   (Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine_d__31_o* __this, const
   MethodInfo* method); */

bool Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine_d__31__MoveNext_10f31c0
               (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  
  pcVar3 = (char *)(_UNK_0110334c + 0x11031d4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103350 + 0x11031e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103354 + 0x11031f4));
    *pcVar3 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar7 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar4 + 8);
    *(undefined1 *)(iVar4 + 0x1e) = 1;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0x10) + 0x14) == 0) {
      iVar1 = *(int *)(iVar4 + 8);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      Rotatelab_Ads_NeftaDualTrackLoader__LoadTrack_10f26b4(iVar4,*(undefined4 *)(iVar1 + 0x10));
    }
    piVar6 = *(int **)(_UNK_01103358 + 0x11032e0);
    iVar1 = *piVar6;
    *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + 1;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    uVar5 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x20);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110335c + 0x1103310));
    UnityEngine_WaitForSecondsRealtime___ctor_360c850(uVar2,uVar5,0);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar7 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar4 + 0x20) + -1;
    *(int *)(iVar4 + 0x20) = iVar1;
    if (iVar1 < 1) {
      *(undefined4 *)(iVar4 + 0x20) = 0;
      Rotatelab_Ads_NeftaDualTrackLoader__ContinueLoading_10f2538(iVar4);
    }
  }
  return iVar7 == 0;
}

