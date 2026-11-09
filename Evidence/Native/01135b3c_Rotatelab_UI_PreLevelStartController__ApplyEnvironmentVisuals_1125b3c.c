/* IL2CPP: Rotatelab.UI.PreLevelStartController$$ApplyEnvironmentVisuals
void Rotatelab_UI_PreLevelStartController__ApplyEnvironmentVisuals (Rotatelab_UI_PreLevelStartController_o* __this, Rotatelab_Scripts_EnvironmentData_o environmentData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.UI.PreLevelStartController$$ApplyEnvironmentVisuals
   void Rotatelab_UI_PreLevelStartController__ApplyEnvironmentVisuals
   (Rotatelab_UI_PreLevelStartController_o* __this, Rotatelab_Scripts_EnvironmentData_o
   environmentData, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__ApplyEnvironmentVisuals_1125b3c(int param_1)

{
  int *piVar1;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x28),in_stack_0000003c,0);
  piVar1 = *(int **)(param_1 + 0x2c);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar1 + 0x178))
            (piVar1,in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034,
             *(undefined4 *)(*piVar1 + 0x17c));
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x30),in_stack_00000040,0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x40),in_stack_00000044,0);
  return;
}

