/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_9
void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_9 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_SwordController_o* sword, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010569e8) */
/* WARNING: Removing unreachable block (ram,0x01056a14) */
/* WARNING: Removing unreachable block (ram,0x01056a20) */
/* WARNING: Removing unreachable block (ram,0x01056a24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_9
   void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_9
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_SwordController_o* sword,
   const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_9_104b868
               (undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(_UNK_01056a50 + 0x1056980);
    if (*pcVar1 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01056a54 + 0x1056994));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01056a58 + 0x10569a0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01056a5c + 0x10569ac));
      *pcVar1 = '\x01';
    }
    if (*(int *)(param_2 + 0x74) != 1) {
      *(undefined4 *)(param_2 + 0x74) = 1;
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_2,**(undefined4 **)(_UNK_01056a60 + 0x10569e8),1,0x3d4ccccd,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

