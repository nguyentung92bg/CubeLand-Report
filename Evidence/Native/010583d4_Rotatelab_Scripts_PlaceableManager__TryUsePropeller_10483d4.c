/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUsePropeller
bool Rotatelab_Scripts_PlaceableManager__TryUsePropeller (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_PropellerController_o* propeller, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUsePropeller
   bool Rotatelab_Scripts_PlaceableManager__TryUsePropeller (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_Scripts_PropellerController_o* propeller, const MethodInfo* method); */

uint Rotatelab_Scripts_PlaceableManager__TryUsePropeller_10483d4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010584a8 + 0x10583ec);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010584ac + 0x1058400));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010584b0 + 0x105840c));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010584b4 + 0x1058420));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_ObjectManager__GetClosestVoxel_102db40(iVar1,0);
  if (*(int *)(**(int **)(_UNK_010584b8 + 0x1058450) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0);
  if (uVar3 == 0) {
    Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4(param_1,param_2);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_PropellerController__AnimateHit_10484bc(param_2,uVar2);
  }
  return uVar3 ^ 1;
}

