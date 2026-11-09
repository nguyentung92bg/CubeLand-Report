/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntry$$Initialize
void Rotatelab_Networking_UI_HiroRewardUIEntry__Initialize (Rotatelab_Networking_UI_HiroRewardUIEntry_o* __this, Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data_o* data, int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Networking.UI.HiroRewardUIEntry$$Initialize
   void Rotatelab_Networking_UI_HiroRewardUIEntry__Initialize
   (Rotatelab_Networking_UI_HiroRewardUIEntry_o* __this,
   Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data_o* data, int64_t amount, const MethodInfo*
   method); */

void Rotatelab_Networking_UI_HiroRewardUIEntry__Initialize_ff0794
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int *piVar2;
  
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
  piVar2 = *(int **)(param_1 + 0x14);
  uVar1 = Rotatelab_Networking_UI_HiroRewardUIConfiguration_Data__GetLabel_ff0228
                    (param_2,extraout_r1,param_3,param_4);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0100081c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x2b0))(piVar2,uVar1,*(undefined4 *)(*piVar2 + 0x2b4));
  return;
}

