/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_13
void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_13 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_MacheteController_o* machete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0104ea3c) */
/* WARNING: Removing unreachable block (ram,0x0104ea60) */
/* WARNING: Removing unreachable block (ram,0x0104ea6c) */
/* WARNING: Removing unreachable block (ram,0x0104ea70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_13
   void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_13
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_MacheteController_o*
   machete, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_13_104ba00
               (undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(_UNK_0104ea9c + 0x104e9d4);
    if (*pcVar1 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0104eaa0 + 0x104e9e8),0,1,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0104eaa4 + 0x104e9f4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0104eaa8 + 0x104ea00));
      *pcVar1 = '\x01';
    }
    if (*(int *)(param_2 + 0x70) != 0) {
      *(undefined4 *)(param_2 + 0x70) = 0;
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_2,**(undefined4 **)(_UNK_0104eaac + 0x104ea3c),1,0x3d4ccccd);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

