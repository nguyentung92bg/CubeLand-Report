/* IL2CPP: Rotatelab.Networking.SatoriAdsConfigFlag.InterstitialConfig$$GetTimerSeconds
int32_t Rotatelab_Networking_SatoriAdsConfigFlag_InterstitialConfig__GetTimerSeconds (Rotatelab_Networking_SatoriAdsConfigFlag_InterstitialConfig_o* __this, int64_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.SatoriAdsConfigFlag.InterstitialConfig$$GetTimerSeconds
   int32_t Rotatelab_Networking_SatoriAdsConfigFlag_InterstitialConfig__GetTimerSeconds
   (Rotatelab_Networking_SatoriAdsConfigFlag_InterstitialConfig_o* __this, int64_t level, const
   MethodInfo* method); */

undefined4
Rotatelab_Networking_SatoriAdsConfigFlag_InterstitialConfig__GetTimerSeconds_fe719c
          (int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = 0;
  iVar3 = 0;
  while( true ) {
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar7 + 0xc) <= (int)uVar5) {
      if (iVar3 != 0) {
        param_1 = iVar3;
      }
      return *(undefined4 *)(param_1 + 0xc);
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = *(int *)(iVar7 + 0x10 + uVar5 * 4);
    if (iVar6 == 0) break;
    uVar2 = *(uint *)(iVar6 + 8);
    iVar1 = (int)uVar2 >> 0x1f;
    iVar4 = iVar3;
    if ((((int)(param_4 - (iVar1 + (uint)(param_3 < uVar2))) < 0 ==
          (SBORROW4(param_4,iVar1) != SBORROW4(param_4 - iVar1,(uint)(param_3 < uVar2)))) &&
        (iVar4 = iVar6, iVar3 != 0)) && (iVar4 = iVar3, *(int *)(iVar3 + 8) < (int)uVar2)) {
      iVar4 = iVar6;
    }
    uVar5 = uVar5 + 1;
    iVar3 = iVar4;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

