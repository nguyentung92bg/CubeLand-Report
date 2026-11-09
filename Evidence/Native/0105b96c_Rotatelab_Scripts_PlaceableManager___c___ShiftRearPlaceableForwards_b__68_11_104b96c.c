/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_11
void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_11 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_PropellerController_o* propeller, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x01056afc) */
/* WARNING: Removing unreachable block (ram,0x01056b28) */
/* WARNING: Removing unreachable block (ram,0x01056b34) */
/* WARNING: Removing unreachable block (ram,0x01056b38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_11
   void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_11
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_PropellerController_o*
   propeller, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_11_104b96c
               (undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(_UNK_01056b64 + 0x1056a8c);
    if (*pcVar1 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01056b68 + 0x1056aa0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01056b6c + 0x1056aac));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01056b70 + 0x1056ab8));
      *pcVar1 = '\x01';
    }
    if (*(int *)(param_2 + 0x54) != 1) {
      *(undefined4 *)(param_2 + 0x54) = 1;
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_2,**(undefined4 **)(_UNK_01056b74 + 0x1056afc),1,0x3e19999a,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

