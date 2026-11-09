/* IL2CPP: Rotatelab.Networking.SatoriAdsConfigFlag.RewardedConfig$$GetDailyCap
int32_t Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__GetDailyCap (Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig_o* __this, int64_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.SatoriAdsConfigFlag.RewardedConfig$$GetDailyCap
   int32_t Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__GetDailyCap
   (Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig_o* __this, int64_t level, const
   MethodInfo* method); */

undefined4
Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__GetDailyCap_fe7244
          (int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 0x10);
  uVar6 = 0;
  iVar4 = 0;
  while( true ) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar8 + 0xc) <= (int)uVar6) {
      puVar3 = (undefined4 *)(iVar4 + 0xc);
      if (iVar4 == 0) {
        puVar3 = (undefined4 *)(param_1 + 8);
      }
      return *puVar3;
    }
    if (*(uint *)(iVar8 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar7 = *(int *)(iVar8 + 0x10 + uVar6 * 4);
    if (iVar7 == 0) break;
    uVar2 = *(uint *)(iVar7 + 8);
    iVar1 = (int)uVar2 >> 0x1f;
    iVar5 = iVar4;
    if ((((int)(param_4 - (iVar1 + (uint)(param_3 < uVar2))) < 0 ==
          (SBORROW4(param_4,iVar1) != SBORROW4(param_4 - iVar1,(uint)(param_3 < uVar2)))) &&
        (iVar5 = iVar7, iVar4 != 0)) && (iVar5 = iVar4, *(int *)(iVar4 + 8) < (int)uVar2)) {
      iVar5 = iVar7;
    }
    uVar6 = uVar6 + 1;
    iVar4 = iVar5;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

