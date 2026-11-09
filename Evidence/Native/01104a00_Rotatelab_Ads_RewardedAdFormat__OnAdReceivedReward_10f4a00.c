/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$OnAdReceivedReward
void Rotatelab_Ads_RewardedAdFormat__OnAdReceivedReward (Rotatelab_Ads_RewardedAdFormat_o* __this, System_String_o* adUnitId, MaxSdkBase_Reward_o reward, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.RewardedAdFormat$$OnAdReceivedReward
   void Rotatelab_Ads_RewardedAdFormat__OnAdReceivedReward (Rotatelab_Ads_RewardedAdFormat_o*
   __this, System_String_o* adUnitId, MaxSdkBase_Reward_o reward, MaxSdkBase_AdInfo_o* adInfo, const
   MethodInfo* method); */

void Rotatelab_Ads_RewardedAdFormat__OnAdReceivedReward_10f4a00
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_01104ad4 + 0x1104a20);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01104ad8 + 0x1104a34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01104adc + 0x1104a40));
    *pcVar2 = '\x01';
  }
  pcVar2 = (char *)(param_1 + 0x44);
  if (*pcVar2 == '\0') {
    iVar1 = *(int *)(param_1 + 0x3c);
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),param_3,param_4,param_5,*(undefined4 *)(iVar1 + 0x14)
                );
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x40);
    if (iVar1 != 0) {
      System_Nullable_RewardedAdFormat_CustomReward___get_Value_17e3764
                (&uStack_24,pcVar2,**(undefined4 **)(_UNK_01104ae0 + 0x1104a74));
      (**(code **)(iVar1 + 0xc))
                (*(undefined4 *)(iVar1 + 0x20),uStack_24,uStack_20,uStack_1c,
                 *(undefined4 *)(iVar1 + 0x14));
    }
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4)
    ;
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8)
    ;
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc)
    ;
  }
  return;
}

