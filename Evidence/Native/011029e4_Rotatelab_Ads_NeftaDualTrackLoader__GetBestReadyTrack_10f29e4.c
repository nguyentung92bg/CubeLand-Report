/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$GetBestReadyTrack
Rotatelab_Ads_NeftaDualTrackLoader_Track_o* Rotatelab_Ads_NeftaDualTrackLoader__GetBestReadyTrack (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$GetBestReadyTrack
   Rotatelab_Ads_NeftaDualTrackLoader_Track_o* Rotatelab_Ads_NeftaDualTrackLoader__GetBestReadyTrack
   (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method); */

int Rotatelab_Ads_NeftaDualTrackLoader__GetBestReadyTrack_10f29e4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 8);
  uVar2 = 0;
  iVar4 = 0;
  while( true ) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar6 + 0xc) <= (int)uVar2) {
      return iVar4;
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar1 = *(int *)(iVar6 + 0x10 + uVar2 * 4);
    if (iVar1 == 0) break;
    iVar5 = iVar4;
    if (*(int *)(iVar1 + 0x14) == 2) {
      iVar3 = *(int *)(param_1 + 0x14);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar1 + 8),
                         *(undefined4 *)(iVar3 + 0x14));
      if ((iVar3 != 0) && (iVar5 = iVar1, iVar4 != 0)) {
        if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar4 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar5 = iVar4;
        if (*(double *)(*(int *)(iVar4 + 0x1c) + 0x20) < *(double *)(*(int *)(iVar1 + 0x1c) + 0x20))
        {
          iVar5 = iVar1;
        }
      }
    }
    uVar2 = uVar2 + 1;
    iVar4 = iVar5;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

