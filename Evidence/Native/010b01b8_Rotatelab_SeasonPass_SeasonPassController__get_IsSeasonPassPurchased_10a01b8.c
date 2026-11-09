/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$get_IsSeasonPassPurchased
Rotatelab_ObservableBool_o* Rotatelab_SeasonPass_SeasonPassController__get_IsSeasonPassPurchased (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$get_IsSeasonPassPurchased
   Rotatelab_ObservableBool_o* Rotatelab_SeasonPass_SeasonPassController__get_IsSeasonPassPurchased
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_SeasonPass_SeasonPassController__get_IsSeasonPassPurchased_10a01b8(void)

{
  int iVar1;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0x30);
}

