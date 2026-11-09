/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<TryUseKey>b__70_0
bool Rotatelab_Scripts_PlaceableManager___c___TryUseKey_b__70_0 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_LockController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<TryUseKey>b__70_0
   bool Rotatelab_Scripts_PlaceableManager___c___TryUseKey_b__70_0
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_LockController_o* e, const
   MethodInfo* method); */

bool Rotatelab_Scripts_PlaceableManager___c___TryUseKey_b__70_0_104bac0
               (undefined4 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  if (param_2 != 0) {
    bVar2 = false;
    iVar1 = Rotatelab_Scripts_BasePlaceableController__get_Row_10303f8(param_2,0);
    if (iVar1 == 0) {
      bVar2 = *(char *)(param_2 + 0x44) == '\0';
    }
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

