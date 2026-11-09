/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_5
void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_5 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_ScissorsController_o* scissors, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010568dc) */
/* WARNING: Removing unreachable block (ram,0x01056908) */
/* WARNING: Removing unreachable block (ram,0x01056914) */
/* WARNING: Removing unreachable block (ram,0x01056918) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_5
   void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_5
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_ScissorsController_o*
   scissors, const MethodInfo* method); */

void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_5_104b664
               (undefined4 param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(_UNK_01056944 + 0x105686c);
    if (*pcVar1 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01056948 + 0x1056880));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0105694c + 0x105688c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01056950 + 0x1056898));
      *pcVar1 = '\x01';
    }
    if (*(int *)(param_2 + 0x6c) != 1) {
      *(undefined4 *)(param_2 + 0x6c) = 1;
      Rotatelab_Scripts_BasePlaceableController__PlayAnimation_1030550
                (param_2,**(undefined4 **)(_UNK_01056954 + 0x10568dc),1,0x3e4ccccd,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

