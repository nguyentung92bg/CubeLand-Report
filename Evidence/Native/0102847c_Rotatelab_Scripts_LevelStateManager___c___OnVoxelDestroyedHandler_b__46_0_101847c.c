/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<>c$$<OnVoxelDestroyedHandler>b__46_0
void Rotatelab_Scripts_LevelStateManager___c___OnVoxelDestroyedHandler_b__46_0 (Rotatelab_Scripts_LevelStateManager___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<>c$$<OnVoxelDestroyedHandler>b__46_0
   void Rotatelab_Scripts_LevelStateManager___c___OnVoxelDestroyedHandler_b__46_0
   (Rotatelab_Scripts_LevelStateManager___c_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelStateManager___c___OnVoxelDestroyedHandler_b__46_0_101847c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010284ec + 0x102848c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010284f0 + 0x10284a0));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_010284f4 + 0x10284b4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x74);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}

