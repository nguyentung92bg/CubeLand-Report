/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$SetFailSearchState
void Rotatelab_Scripts_LevelStateManager__SetFailSearchState (Rotatelab_Scripts_LevelStateManager_o* __this, bool enabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$SetFailSearchState
   void Rotatelab_Scripts_LevelStateManager__SetFailSearchState
   (Rotatelab_Scripts_LevelStateManager_o* __this, bool enabled, const MethodInfo* method); */

void Rotatelab_Scripts_LevelStateManager__SetFailSearchState_1016a58(int param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01026b00 + 0x1026a70);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01026b04 + 0x1026a84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01026b08 + 0x1026a90));
    *pcVar2 = '\x01';
  }
  if ((*(char *)(param_1 + 0x11) != '\0') == param_2) {
    return;
  }
  piVar3 = *(int **)(_UNK_01026b0c + 0x1026ab8);
  *(char *)(param_1 + 0x11) = (char)param_2;
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x18);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),param_2,*(undefined4 *)(iVar1 + 0x14));
  return;
}

