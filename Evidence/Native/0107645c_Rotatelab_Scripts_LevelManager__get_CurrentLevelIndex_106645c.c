/* IL2CPP: Rotatelab.Scripts.LevelManager$$get_CurrentLevelIndex
int32_t Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$get_CurrentLevelIndex
   int32_t Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex (Rotatelab_Scripts_LevelManager_o*
   __this, const MethodInfo* method); */

int Rotatelab_Scripts_LevelManager__get_CurrentLevelIndex_106645c(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_01076558 + 0x107646c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107655c + 0x1076480));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_01076560 + 0x1076494);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68();
  iVar2 = *(int *)(*piVar4 + 0x74);
  if (iVar1 != 0) {
    if (iVar2 == 0) {
      FUN_00ec3934();
    }
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x18),0);
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar2 + 0x1c),0);
    return iVar1 + iVar2 + -2;
  }
  if (iVar2 == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(*(undefined4 *)(iVar1 + 0x18),0);
  return iVar1 + -1;
}

