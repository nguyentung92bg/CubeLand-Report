/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<OnBlasterShiftingFrontCompletedHandler>b__70_0
bool Rotatelab_Scripts_DockManager___c___OnBlasterShiftingFrontCompletedHandler_b__70_0 (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_UtilityDockController_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.DockManager.<>c$$<OnBlasterShiftingFrontCompletedHandler>b__70_0
   bool Rotatelab_Scripts_DockManager___c___OnBlasterShiftingFrontCompletedHandler_b__70_0
   (Rotatelab_Scripts_DockManager___c_o* __this, Rotatelab_Scripts_UtilityDockController_o* e, const
   MethodInfo* method); */

bool Rotatelab_Scripts_DockManager___c___OnBlasterShiftingFrontCompletedHandler_b__70_0_1009d3c
               (undefined4 param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01019de4 + 0x1019d50);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019de8 + 0x1019d64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01019dec + 0x1019d70));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                            (param_2,**(undefined4 **)(_UNK_01019df0 + 0x1019d90));
  bVar1 = false;
  if (piVar2 != (int *)0x0) {
    uVar3 = (uint)*(byte *)(**(int **)(_UNK_01019df4 + 0x1019db4) + 0xb8);
    if (uVar3 <= *(byte *)(*piVar2 + 0xb8)) {
      bVar1 = *(int *)(*(int *)(*piVar2 + 100) + uVar3 * 4 + -4) ==
              **(int **)(_UNK_01019df4 + 0x1019db4);
    }
  }
  return bVar1;
}

