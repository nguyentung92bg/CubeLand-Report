/* IL2CPP: Rotatelab.SeasonPass.SeasonPassFreeReward$$Claim
void Rotatelab_SeasonPass_SeasonPassFreeReward__Claim (Rotatelab_SeasonPass_SeasonPassFreeReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassFreeReward$$Claim
   void Rotatelab_SeasonPass_SeasonPassFreeReward__Claim
   (Rotatelab_SeasonPass_SeasonPassFreeReward_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassFreeReward__Claim_10a0c10(int *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010b0c9c + 0x10b0c24);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b0ca0 + 0x10b0c38));
    *pcVar2 = '\x01';
  }
  Rotatelab_SeasonPass_SeasonPassRewardBase__Claim_10a0ca8(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b0ca4 + 0x10b0c54));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassController__UpdateClaimedRewards_10a0ee8(iVar1,param_1[9],1);
                    /* WARNING: Could not recover jumptable at 0x010b0c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xf0))(param_1,1,*(undefined4 *)(*param_1 + 0xf4));
  return;
}

