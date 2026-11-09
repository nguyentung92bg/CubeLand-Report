/* IL2CPP: Rotatelab.Scripts.LevelManager$$OnLevelCompleted
void Rotatelab_Scripts_LevelManager__OnLevelCompleted (Rotatelab_Scripts_LevelManager_o* __this, bool isLevelProgressChangedExternally, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$OnLevelCompleted
   void Rotatelab_Scripts_LevelManager__OnLevelCompleted (Rotatelab_Scripts_LevelManager_o* __this,
   bool isLevelProgressChangedExternally, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__OnLevelCompleted_1067228(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  longlong lVar5;
  
  pcVar4 = (char *)(_UNK_01077464 + 0x1077244);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077468 + 0x1077258));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107746c + 0x1077264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077470 + 0x1077270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077474 + 0x107727c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01077478 + 0x1077288));
    *pcVar4 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (param_2 == 0) {
    piVar3 = *(int **)(_UNK_0107747c + 0x10772c0);
    if (*(int *)(*piVar3 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = Rotatelab_Scripts_LevelManager__get_IsInRoundMode_105fc68();
    iVar2 = *(int *)(*piVar3 + 0x74);
    if (iVar1 == 0) {
      if (iVar2 == 0) {
        FUN_00ec3934();
      }
      iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar3 = *(int **)(iVar1 + 0x18);
    }
    else {
      if (iVar2 == 0) {
        FUN_00ec3934();
      }
      iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar3 = *(int **)(iVar1 + 0x1c);
    }
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    lVar5 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
    (**(code **)(*piVar3 + 0xf8))
              (piVar3,(int)((ulonglong)lVar5 >> 0x20),(int)(lVar5 + 1),
               (int)((ulonglong)(lVar5 + 1) >> 0x20),*(undefined4 *)(*piVar3 + 0xfc));
  }
  Rotatelab_Scripts_LevelManager__RefreshRoundMode_10685a0(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01077480 + 0x107738c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820
            (*(int *)(iVar1 + 0x1c),0,**(undefined4 **)(_UNK_01077484 + 0x10773c0));
  piVar3 = *(int **)(_UNK_01077488 + 0x10773d4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_bool___set_Value_1a8af9c
            (**(int **)(iVar1 + 0x5c),0,**(undefined4 **)(_UNK_0107748c + 0x107740c));
  Rotatelab_Scripts_LevelManager__RefreshCurrentLevel_1066138(param_1);
  piVar3 = *(int **)(_UNK_01077490 + 0x1077428);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x78);
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

