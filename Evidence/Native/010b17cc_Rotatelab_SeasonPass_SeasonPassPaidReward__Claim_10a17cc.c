/* IL2CPP: Rotatelab.SeasonPass.SeasonPassPaidReward$$Claim
void Rotatelab_SeasonPass_SeasonPassPaidReward__Claim (Rotatelab_SeasonPass_SeasonPassPaidReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassPaidReward$$Claim
   void Rotatelab_SeasonPass_SeasonPassPaidReward__Claim
   (Rotatelab_SeasonPass_SeasonPassPaidReward_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassPaidReward__Claim_10a17cc(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010b1858 + 0x10b17e0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b185c + 0x10b17f4));
    *pcVar2 = '\x01';
  }
  Rotatelab_SeasonPass_SeasonPassRewardBase__Claim_10a0ca8(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b1860 + 0x10b1810));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassController__UpdateClaimedRewards_10a0ee8(iVar1,param_1[9],0);
                    /* WARNING: Could not recover jumptable at 0x010b1854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,1,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

