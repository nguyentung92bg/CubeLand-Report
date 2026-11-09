/* IL2CPP: Rotatelab.MetaProgressionSingleReward$$Init
void Rotatelab_MetaProgressionSingleReward__Init (Rotatelab_MetaProgressionSingleReward_o* __this, MetaProgressionSo_MetaProgressRewardData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.MetaProgressionSingleReward$$Init
   void Rotatelab_MetaProgressionSingleReward__Init (Rotatelab_MetaProgressionSingleReward_o*
   __this, MetaProgressionSo_MetaProgressRewardData_o* data, const MethodInfo* method); */

void Rotatelab_MetaProgressionSingleReward__Init_fbf9b0(int param_1,int param_2)

{
  int *piVar1;
  
  *(int *)(param_1 + 0x18) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x18));
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0xc),0);
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00fcfa28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x2b0))
            (piVar1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(*piVar1 + 0x2b4));
  return;
}

