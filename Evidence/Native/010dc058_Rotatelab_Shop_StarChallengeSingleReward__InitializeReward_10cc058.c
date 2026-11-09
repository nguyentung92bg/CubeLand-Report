/* IL2CPP: Rotatelab.Shop.StarChallengeSingleReward$$InitializeReward
void Rotatelab_Shop_StarChallengeSingleReward__InitializeReward (Rotatelab_Shop_StarChallengeSingleReward_o* __this, Rotatelab_Shop_StarChallengeSO_SingleReward_o* reward, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Shop.StarChallengeSingleReward$$InitializeReward
   void Rotatelab_Shop_StarChallengeSingleReward__InitializeReward
   (Rotatelab_Shop_StarChallengeSingleReward_o* __this,
   Rotatelab_Shop_StarChallengeSO_SingleReward_o* reward, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeSingleReward__InitializeReward_10cc058(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10),0);
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x010dc0c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x2b0))
            (piVar1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(*piVar1 + 0x2b4));
  return;
}

