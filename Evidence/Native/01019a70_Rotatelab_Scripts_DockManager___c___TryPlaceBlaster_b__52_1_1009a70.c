/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<TryPlaceBlaster>b__52_1
int32_t Rotatelab_Scripts_DockManager___c___TryPlaceBlaster_b__52_1 (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_BlasterController_o* e1, Rotatelab_Scripts_BlasterController_o* e2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<TryPlaceBlaster>b__52_1
   int32_t Rotatelab_Scripts_DockManager___c___TryPlaceBlaster_b__52_1
   (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_BlasterController_o* e1,
   Rotatelab_Scripts_BlasterController_o* e2, const MethodInfo* method); */

void Rotatelab_Scripts_DockManager___c___TryPlaceBlaster_b__52_1_1009a70
               (undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_14 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(param_2,0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_Scripts_BasePlaceableController__get_Column_1030400(param_3,0);
  iVar2 = System_Int32__CompareTo_2b6b964(&uStack_14,uVar1,0);
  if (iVar2 == 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_14 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_2,0);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
    System_Int32__CompareTo_2b6b964(&uStack_14,uVar1,0);
  }
  return;
}

