/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseHammer
bool Rotatelab_Scripts_PlaceableManager__TryUseHammer (Rotatelab_Scripts_PlaceableManager_o* __this, Rotatelab_Scripts_HammerController_o* hammer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PlaceableManager$$TryUseHammer
   bool Rotatelab_Scripts_PlaceableManager__TryUseHammer (Rotatelab_Scripts_PlaceableManager_o*
   __this, Rotatelab_Scripts_HammerController_o* hammer, const MethodInfo* method); */

uint Rotatelab_Scripts_PlaceableManager__TryUseHammer_10477f8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_010578d0 + 0x1057810);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010578d4 + 0x1057824));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010578d8 + 0x1057830));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010578dc + 0x1057844));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Scripts_ObjectManager__GetClosestWall_102d958(iVar1,0);
  if (*(int *)(**(int **)(_UNK_010578e0 + 0x1057874) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = UnityEngine_Object__op_Equality_36033f4(uVar2,0,0);
  if (uVar3 == 0) {
    Rotatelab_Scripts_PlaceableManager__RemovePlaceableFromQueue_10478e4(param_1,param_2);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Scripts_HammerController__AnimateHit_103d400(param_2,uVar2,0);
  }
  return uVar3 ^ 1;
}

