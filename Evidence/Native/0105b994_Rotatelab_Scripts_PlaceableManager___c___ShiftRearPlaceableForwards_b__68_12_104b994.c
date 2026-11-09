/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_12
void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_12 (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_PropellerController_o* propeller, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager.<>c$$<ShiftRearPlaceableForwards>b__68_12
   void Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_12
   (Rotatelab_Scripts_PlaceableManager___c_o* __this, Rotatelab_Scripts_PropellerController_o*
   propeller, const MethodInfo* method); */

uint Rotatelab_Scripts_PlaceableManager___c___ShiftRearPlaceableForwards_b__68_12_104b994
               (undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 uVar5;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0105b9f4 + 0x105b9a8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0105b9f8 + 0x105b9bc));
    *pcVar6 = '\x01';
  }
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0105b9fc + 0x105b9d0));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_010584a8 + 0x10583ec);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010584ac + 0x1058400));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010584b0 + 0x105840c));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010584b4 + 0x1058420));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_ObjectManager__GetClosestVoxel_102db40(iVar1,0);
  uVar5 = extraout_r3;
  if (*(int *)(**(int **)(_UNK_010584b8 + 0x1058450) + 0x74) == 0) {
    FUN_00ec3934();
    uVar5 = extraout_r3_00;
  }
  uVar3 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0,uVar5,unaff_r4,unaff_r5);
  if (uVar3 == 0) {
    Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4(iVar4,param_2);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_PropellerController__AnimateHit_10484bc(param_2,uVar2);
  }
  return uVar3 ^ 1;
}

