/* IL2CPP: Rotatelab.Shop.RewardInfo$$SetUI
void Rotatelab_Shop_RewardInfo__SetUI (Rotatelab_Shop_RewardInfo_o* __this, UnityEngine_Sprite_o* rewardSprite, int32_t rewardAmount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Shop.RewardInfo$$SetUI
   void Rotatelab_Shop_RewardInfo__SetUI (Rotatelab_Shop_RewardInfo_o* __this, UnityEngine_Sprite_o*
   rewardSprite, int32_t rewardAmount, const MethodInfo* method); */

void Rotatelab_Shop_RewardInfo__SetUI_10d354c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uStack_14;
  
  uStack_14 = param_3;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x10),param_2,0);
  piVar2 = *(int **)(param_1 + 0x14);
  uVar1 = System_Int32__ToString_2b6b9ec(&uStack_14,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar2 + 0x2b0))(piVar2,uVar1,*(undefined4 *)(*piVar2 + 0x2b4));
  return;
}

