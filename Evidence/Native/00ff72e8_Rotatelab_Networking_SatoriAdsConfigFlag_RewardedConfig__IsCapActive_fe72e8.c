/* IL2CPP: Rotatelab.Networking.SatoriAdsConfigFlag.RewardedConfig$$IsCapActive
bool Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__IsCapActive (Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig_o* __this, int64_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.SatoriAdsConfigFlag.RewardedConfig$$IsCapActive
   bool Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__IsCapActive
   (Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig_o* __this, int64_t level, const
   MethodInfo* method); */

undefined4
Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__IsCapActive_fe72e8
          (int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  uVar2 = 0;
  iVar1 = (int)uVar3 >> 0x1f;
  if ((int)(iVar1 - (param_4 + (uint)(uVar3 < param_3))) < 0 !=
      (SBORROW4(iVar1,param_4) != SBORROW4(iVar1 - param_4,(uint)(uVar3 < param_3)))) {
    uVar3 = Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__GetDailyCap_fe7244(param_1);
    uVar2 = 0;
    if (uVar3 < 0x80000000) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

