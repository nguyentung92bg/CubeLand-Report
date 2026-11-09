/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$OnLoaded
bool Rotatelab_Ads_NeftaDualTrackLoader__OnLoaded (Rotatelab_Ads_NeftaDualTrackLoader_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.NeftaDualTrackLoader$$OnLoaded
   bool Rotatelab_Ads_NeftaDualTrackLoader__OnLoaded (Rotatelab_Ads_NeftaDualTrackLoader_o* __this,
   System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

bool Rotatelab_Ads_NeftaDualTrackLoader__OnLoaded_10f1364
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  bool bVar5;
  int iStack_1c;
  
  pcVar4 = (char *)(_UNK_011014bc + 0x1101384);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011014c0 + 0x1101398));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar2 = Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrack_10f2ad0(param_1,param_2,&iStack_1c);
  bVar5 = true;
  if (iVar2 != 0) {
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iStack_1c + 0x18) = 0;
    thunk_FUN_00ec5080((undefined4 *)(iStack_1c + 0x18),0);
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iStack_1c + 0x1c) = param_3;
    thunk_FUN_00ec5080((undefined4 *)(iStack_1c + 0x1c),param_3);
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar1 = *(byte *)(param_1 + 0x1d);
    *(undefined4 *)(iStack_1c + 0x14) = 2;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    *(byte *)(iStack_1c + 0x20) = bVar1 ^ 1;
    bVar5 = bVar1 != 0;
    if (*(char *)(iStack_1c + 0x10) != '\0') {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_011014c4 + 0x110147c));
      uVar3 = Rotatelab_Ads_NeftaDualTrackLoader__ContinueOptimizedCoroutine_10f2bf4(param_1);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar2,uVar3,0);
    }
  }
  return bVar5;
}

