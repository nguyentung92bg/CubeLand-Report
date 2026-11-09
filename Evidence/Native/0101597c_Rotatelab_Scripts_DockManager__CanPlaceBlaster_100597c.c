/* IL2CPP: Rotatelab.Scripts.DockManager$$CanPlaceBlaster
bool Rotatelab_Scripts_DockManager__CanPlaceBlaster (Rotatelab_Scripts_DockManager_o* __this, Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager$$CanPlaceBlaster
   bool Rotatelab_Scripts_DockManager__CanPlaceBlaster (Rotatelab_Scripts_DockManager_o* __this,
   Rotatelab_Scripts_BlasterController_o* blaster, const MethodInfo* method); */

bool Rotatelab_Scripts_DockManager__CanPlaceBlaster_100597c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_01015a94 + 0x1015994);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01015a98 + 0x10159a8));
    *pcVar7 = '\x01';
  }
  if (param_2 != 0) {
    bVar6 = false;
    iVar1 = Rotatelab_Scripts_BlasterController__IsPlaceable_103561c(param_2,0);
    if (iVar1 != 0) {
      bVar6 = false;
      iVar1 = Rotatelab_Scripts_BlasterController__NeededPlaceableSpace_1035b1c(param_2,0);
      uVar2 = Rotatelab_Scripts_DockManager__GetTargetDocksForBlaster_1005aa0(param_1,param_2);
      iVar3 = Rotatelab_GameExtensions__EmptyDockCount_fb4c5c(uVar2,0);
      if (iVar1 <= iVar3) {
        if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar4 = *(int **)(param_2 + 0xb8);
        if (piVar4 != (int *)0x0) {
          uVar5 = (uint)*(byte *)(**(int **)(_UNK_01015a9c + 0x1015a48) + 0xb8);
          if ((uVar5 <= *(byte *)(*piVar4 + 0xb8)) &&
             (*(int *)(*(int *)(*piVar4 + 100) + uVar5 * 4 + -4) ==
              **(int **)(_UNK_01015a9c + 0x1015a48))) {
            iVar1 = Rotatelab_Scripts_BlasterGeneratorController__IsReadyToEject_103b824(piVar4,0);
            return iVar1 != 0;
          }
        }
        bVar6 = true;
      }
    }
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

