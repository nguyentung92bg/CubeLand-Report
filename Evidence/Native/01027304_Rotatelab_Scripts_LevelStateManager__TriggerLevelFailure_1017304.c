/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$TriggerLevelFailure
void Rotatelab_Scripts_LevelStateManager__TriggerLevelFailure (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$TriggerLevelFailure
   void Rotatelab_Scripts_LevelStateManager__TriggerLevelFailure
   (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelStateManager__TriggerLevelFailure_1017304(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_01027380 + 0x1027318);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01027384 + 0x102732c));
    *pcVar3 = '\x01';
  }
  Rotatelab_Scripts_LevelStateManager__StopCheckingLevelState_1016b14(param_1);
  piVar2 = *(int **)(_UNK_01027388 + 0x1027348);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x7c);
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

