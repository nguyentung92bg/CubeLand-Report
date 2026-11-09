/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ConsumeBulletsOfQueuedBlastersExternally>b__84_0
int32_t Rotatelab_Scripts_PlaceableManager___c___ConsumeBulletsOfQueuedBlastersExternally_b__84_0 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BlasterController_o* a, Rotatelab_Scripts_BlasterController_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ConsumeBulletsOfQueuedBlastersExternally>b__84_0
   int32_t Rotatelab_Scripts_PlaceableManager___c___ConsumeBulletsOfQueuedBlastersExternally_b__84_0
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_BlasterController_o* a,
   Rotatelab_Scripts_BlasterController_o* b, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ConsumeBulletsOfQueuedBlastersExternally_b__84_0_104bbbc
               (undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uStack_14;
  
  uStack_14 = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_14 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_3,0);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_2,0);
  System_Int32__CompareTo_2b6b964(&uStack_14,uVar1,0);
  return;
}

