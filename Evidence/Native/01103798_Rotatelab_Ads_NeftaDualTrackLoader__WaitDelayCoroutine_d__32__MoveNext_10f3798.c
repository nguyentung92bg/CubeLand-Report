/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<WaitDelayCoroutine>d__32$$MoveNext
bool Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine_d__32__MoveNext (Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine_d__32_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<WaitDelayCoroutine>d__32$$MoveNext
   bool Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine_d__32__MoveNext
   (Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine_d__32_o* __this, const MethodInfo*
   method); */

bool Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine_d__32__MoveNext_10f3798(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  pcVar3 = (char *)(_UNK_01103880 + 0x11037ac);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01103884 + 0x11037c0));
    *pcVar3 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 8);
  if (iVar6 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar1 = *(undefined4 **)(_UNK_01103888 + 0x1103840);
    uVar5 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = 4;
    uVar2 = thunk_FUN_00f00cdc(*puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_360c850(uVar2,uVar5,0);
    *(undefined4 *)(param_1 + 0xc) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar6 == 1) {
    iVar4 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14) = 0;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Ads_NeftaDualTrackLoader__ContinueLoading_10f2538(iVar4);
  }
  return iVar6 == 0;
}

