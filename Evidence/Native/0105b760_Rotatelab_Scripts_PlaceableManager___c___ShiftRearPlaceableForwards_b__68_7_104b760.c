/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_7
void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_7 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_HammerController_o* hammer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0104d384) */
/* WARNING: Removing unreachable block (ram,0x0104d3a8) */
/* WARNING: Removing unreachable block (ram,0x0104d3b4) */
/* WARNING: Removing unreachable block (ram,0x0104d3b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_7
   void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_7
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_HammerController_o* hammer,
   const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_7_104b760
               (undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(_UNK_0104d3e4 + 0x104d31c);
    if (*pcVar1 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0104d3e8 + 0x104d330),1,1,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0104d3ec + 0x104d33c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0104d3f0 + 0x104d348));
      *pcVar1 = '\x01';
    }
    if (*(int *)(param_2 + 0x80) != 1) {
      *(undefined4 *)(param_2 + 0x80) = 1;
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_2,**(undefined4 **)(_UNK_0104d3f4 + 0x104d384),1,0x3d4ccccd);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

