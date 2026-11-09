/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_1
void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_1 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_1
   void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_1
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BlasterController_o*
   blaster, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_1_104b3f4
               (undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_2,0);
  uVar2 = 2;
  if (iVar1 == 0) {
    uVar2 = 4;
  }
  (**(code **)(*param_2 + 0x150))(param_2,uVar2,*(undefined4 *)(*param_2 + 0x154));
  iVar1 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_2,0);
  if (0 < iVar1) {
    iVar1 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_2,0);
    if (2 < iVar1) {
      return;
    }
    if (*(char *)((int)param_2 + 0xc2) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0105b4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x110))(param_2,0,*(undefined4 *)(*param_2 + 0x114));
      return;
    }
  }
  return;
}

