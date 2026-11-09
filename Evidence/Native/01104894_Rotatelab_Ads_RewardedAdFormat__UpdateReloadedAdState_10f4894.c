/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$UpdateReloadedAdState
void Rotatelab_Ads_RewardedAdFormat__UpdateReloadedAdState (Rotatelab_Ads_RewardedAdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* newAdInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$UpdateReloadedAdState
   void Rotatelab_Ads_RewardedAdFormat__UpdateReloadedAdState (Rotatelab_Ads_RewardedAdFormat_o*
   __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* newAdInfo, const MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat__UpdateReloadedAdState_10f4894
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  undefined4 uStack_20;
  int iStack_1c;
  
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == 0) {
    return;
  }
  pcVar4 = (char *)(_UNK_01101624 + 0x11014f8);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01101628 + 0x110150c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110162c + 0x1101518));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01101630 + 0x1101524));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01101634 + 0x1101530));
    *pcVar4 = '\x01';
  }
  iStack_1c = 0;
  iVar2 = Rotatelab_Ads_NeftaDualTrackLoader__TryGetTrack_10f2ad0(iVar2,param_2,&iStack_1c);
  if (iVar2 != 0) {
    piVar3 = *(int **)(_UNK_01101638 + 0x1101564);
    iVar2 = *piVar3;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar3;
    }
    if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x78) != '\0') {
      if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_20 = *(undefined4 *)(iStack_1c + 0x14);
      uVar1 = FUN_00ec393c(**(undefined4 **)(_UNK_0110163c + 0x11015a8),&uStack_20);
      uVar1 = System_String__Format_2a0c264
                        (**(undefined4 **)(_UNK_01101640 + 0x11015cc),param_2,uVar1,0);
      if (*(int *)(**(int **)(_UNK_01101644 + 0x11015e0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__Log_35b1c44(uVar1,0);
    }
    if (iStack_1c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iStack_1c + 0x1c) = param_3;
    thunk_FUN_00ec5080((undefined4 *)(iStack_1c + 0x1c),param_3);
  }
  return;
}

