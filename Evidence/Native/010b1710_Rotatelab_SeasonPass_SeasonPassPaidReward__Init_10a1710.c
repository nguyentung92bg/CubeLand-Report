/* IL2CPP: Rotatelab.SeasonPass.SeasonPassPaidReward$$Init
void Rotatelab_SeasonPass_SeasonPassPaidReward__Init (Rotatelab_SeasonPass_SeasonPassPaidReward_o* __this, Rotatelab_SeasonPass_SeasonPassSo_SeasonPassRewardData_o* rewardData, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassPaidReward$$Init
   void Rotatelab_SeasonPass_SeasonPassPaidReward__Init
   (Rotatelab_SeasonPass_SeasonPassPaidReward_o* __this,
   Rotatelab_SeasonPass_SeasonPassSo_SeasonPassRewardData_o* rewardData, int32_t index, const
   MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassPaidReward__Init_10a1710
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar3;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar4;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_010b17c0 + 0x10b172c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b17c4 + 0x10b1740));
    *pcVar4 = '\x01';
  }
  Rotatelab_SeasonPass_SeasonPassRewardBase__Init_10a0a3c(param_1,param_2,param_3);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b17c8 + 0x10b1764));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_1 + 0x30);
  uVar2 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar1 + 0x30),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),uVar2 ^ 1,0,extraout_r3,unaff_r4,
                       unaff_r5,unaff_r6,unaff_lr);
    *pcVar4 = '\x01';
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar3 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,uVar2 ^ 1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

