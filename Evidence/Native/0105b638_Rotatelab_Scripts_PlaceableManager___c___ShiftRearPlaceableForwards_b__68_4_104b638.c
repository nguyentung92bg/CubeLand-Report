/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_4
void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_4 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_LockController_o* lock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0104e804) */
/* WARNING: Removing unreachable block (ram,0x0104e828) */
/* WARNING: Removing unreachable block (ram,0x0104e834) */
/* WARNING: Removing unreachable block (ram,0x0104e838) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_4
   void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_4
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_LockController_o* lock,
   const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_4_104b638
               (undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(_UNK_0104e864 + 0x104e79c);
    if (*pcVar1 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0104e868 + 0x104e7b0),1,1,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0104e86c + 0x104e7bc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0104e870 + 0x104e7c8));
      *pcVar1 = '\x01';
    }
    if (*(int *)(param_2 + 0x40) != 1) {
      *(undefined4 *)(param_2 + 0x40) = 1;
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_2,**(undefined4 **)(_UNK_0104e874 + 0x104e804),1,0x3d4ccccd);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

