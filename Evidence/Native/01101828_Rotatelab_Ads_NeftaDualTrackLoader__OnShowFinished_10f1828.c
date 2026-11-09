/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$OnShowFinished
void Rotatelab_Ads_NeftaDualTrackLoader__OnShowFinished (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, System_String_o* adUnitId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$OnShowFinished
   void Rotatelab_Ads_NeftaDualTrackLoader__OnShowFinished (Rotatelab_Ads_NeftaDualTrackLoader_o*
   __this, System_String_o* adUnitId, const MethodInfo* method); */

void Rotatelab_Ads_NeftaDualTrackLoader__OnShowFinished_10f1828
               (undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iStack_c;
  
  iStack_c = 0;
  iVar1 = Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrack_10f2ad0(param_1,param_2,&iStack_c);
  if (iVar1 != 0) {
    if (iStack_c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iStack_c + 0x14) = 0;
  }
  return;
}

