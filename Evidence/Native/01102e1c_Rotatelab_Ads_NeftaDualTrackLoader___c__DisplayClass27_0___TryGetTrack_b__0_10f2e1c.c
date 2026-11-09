/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<>c__DisplayClass27_0$$<TryGetTrack>b__0
bool Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass27_0___TryGetTrack_b__0 (Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass27_0_o* __this, Rotatelab_Ads_NeftaDualTrackLoader_Track_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader.<>c__DisplayClass27_0$$<TryGetTrack>b__0
   bool Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass27_0___TryGetTrack_b__0
   (Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass27_0_o* __this,
   Rotatelab_Ads_NeftaDualTrackLoader_Track_o* t, const MethodInfo* method); */

undefined4
Rotatelab_Ads_NeftaDualTrackLoader___c__DisplayClass27_0___TryGetTrack_b__0_10f2e1c
          (int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == iVar2) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if ((iVar1 != 0 && iVar2 != 0) && (uVar4 = *(uint *)(iVar1 + 8), uVar4 == *(uint *)(iVar2 + 8)))
    {
      uVar3 = System_SpanHelpers__SequenceEqual_2b865c4
                        (iVar1 + 0xc,iVar2 + 0xc,uVar4 << 1,
                         ((int)uVar4 >> 0x1f) << 1 | uVar4 >> 0x1f,0);
      return uVar3;
    }
  }
  return uVar3;
}

