/* IL2CPP: Rotatelab.Scripts.PilotBlasterDockController$$get_DockedPlaceable
Rotatelab_Scripts_PilotBlasterController_o* Rotatelab_Scripts_PilotBlasterDockController__get_DockedPlaceable (Rotatelab_Scripts_PilotBlasterDockController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.PilotBlasterDockController$$get_DockedPlaceable
   Rotatelab_Scripts_PilotBlasterController_o*
   Rotatelab_Scripts_PilotBlasterDockController__get_DockedPlaceable
   (Rotatelab_Scripts_PilotBlasterDockController_o* __this, const MethodInfo* method); */

int * Rotatelab_Scripts_PilotBlasterDockController__get_DockedPlaceable_1008e44(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_01018ee8 + 0x1018e58);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018eec + 0x1018e6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01018ef0 + 0x1018e78));
    *pcVar4 = '\x01';
  }
  piVar1 = (int *)Rotatelab_Scripts_BaseDockController_object___get_DockedPlaceable_1b276a0
                            (param_1,**(undefined4 **)(_UNK_01018ef4 + 0x1018e8c));
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    uVar2 = (uint)*(byte *)(**(int **)(_UNK_01018ef8 + 0x1018eac) + 0xb8);
    if ((*(byte *)(*piVar1 + 0xb8) < uVar2) ||
       (piVar3 = piVar1,
       *(int *)(*(int *)(*piVar1 + 100) + uVar2 * 4 + -4) != **(int **)(_UNK_01018ef8 + 0x1018eac)))
    {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28();
    }
  }
  return piVar3;
}

