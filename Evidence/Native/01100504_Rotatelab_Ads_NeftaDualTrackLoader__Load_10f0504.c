/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$Load
MaxSdkBase_AdInfo_o* Rotatelab_Ads_NeftaDualTrackLoader__Load (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$Load
   MaxSdkBase_AdInfo_o* Rotatelab_Ads_NeftaDualTrackLoader__Load
   (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Ads_NeftaDualTrackLoader__Load_10f0504(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  pcVar3 = (char *)(_UNK_011007ac + 0x1100520);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011007b0 + 0x1100534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011007b4 + 0x1100540));
    *pcVar3 = '\x01';
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    iVar7 = *(int *)(param_1 + 8);
    uVar6 = 0;
    iVar4 = 0;
    while( true ) {
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar6) break;
      if (*(uint *)(iVar7 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar8 = *(int *)(iVar7 + 0x10 + uVar6 * 4);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = iVar4;
      if (((*(int *)(iVar8 + 0x14) == 2) && (*(char *)(iVar8 + 0x20) != '\0')) &&
         (iVar9 = iVar8, iVar4 != 0)) {
        if (*(int *)(iVar8 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar4 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = iVar4;
        if (*(double *)(*(int *)(iVar4 + 0x1c) + 0x20) < *(double *)(*(int *)(iVar8 + 0x1c) + 0x20))
        {
          iVar9 = iVar8;
        }
      }
      uVar6 = uVar6 + 1;
      iVar4 = iVar9;
    }
    *(bool *)(param_1 + 0x1d) = iVar4 == 0;
    Rotatelab_Ads_NeftaDualTrackLoader__ContinueLoading_10f2538(param_1);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0x20) = 0;
      return *(undefined4 *)(iVar4 + 0x1c);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
    *(undefined2 *)(param_1 + 0x1c) = 0x100;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar4 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    Rotatelab_Ads_NeftaDualTrackLoader__LoadTrack_10f26b4(param_1,*(undefined4 *)(iVar4 + 0x14));
    fVar1 = (float)Rotatelab_Ads_NeftaDualTrackLoader__get_FirstResponseTimeout_10f2460(param_1);
    if (0.0 < fVar1) {
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_011007b8 + 0x11005b0));
      uVar2 = Rotatelab_Ads_NeftaDualTrackLoader__ForceStartSecondTrackCoroutine_10f28c0
                        (param_1,fVar1);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar4,uVar2,0);
    }
    piVar5 = *(int **)(_UNK_011007bc + 0x11005f0);
    iVar4 = *piVar5;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar5;
    }
    fVar1 = *(float *)(*(int *)(iVar4 + 0x5c) + 0x24);
    if (fVar1 != 0.0) {
      if (fVar1 <= 0.0) {
        return 0;
      }
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_011007c0 + 0x110074c));
      iVar7 = *(int *)(param_1 + 8);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar7 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar2 = Rotatelab_Ads_NeftaDualTrackLoader__WaitDelayCoroutine_10f2948
                        (param_1,*(undefined4 *)(iVar7 + 0x10),fVar1);
      if (iVar4 != 0) {
        UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar4,uVar2,0);
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(param_1 + 8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    Rotatelab_Ads_NeftaDualTrackLoader__LoadTrack_10f26b4(param_1,*(undefined4 *)(iVar4 + 0x10));
  }
  return 0;
}

