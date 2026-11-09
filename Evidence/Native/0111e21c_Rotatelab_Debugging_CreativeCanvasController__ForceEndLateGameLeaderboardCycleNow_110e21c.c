/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ForceEndLateGameLeaderboardCycleNow
void Rotatelab_Debugging_CreativeCanvasController__ForceEndLateGameLeaderboardCycleNow (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ForceEndLateGameLeaderboardCycleNow
   void Rotatelab_Debugging_CreativeCanvasController__ForceEndLateGameLeaderboardCycleNow
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__ForceEndLateGameLeaderboardCycleNow_110e21c
               (undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_0111e298 + 0x111e230);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e29c + 0x111e244));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e2a0 + 0x111e250));
    *pcVar4 = '\x01';
  }
  Rotatelab_Debugging_CreativeCanvasController__HideCreativePanelAndSettings_110d508(param_1);
  piVar1 = (int *)Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_0111e2a4 + 0x111e26c));
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = **(int **)(_UNK_0111e2a8 + 0x111e28c);
  pcVar4 = (char *)(_UNK_01deee38 + 0x1deed6c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01deee3c + 0x1deed80));
    *pcVar4 = '\x01';
  }
  iVar2 = (**(code **)(*piVar1 + 0x150))(piVar1,*(undefined4 *)(*piVar1 + 0x154));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 8) != 0) {
    iVar2 = (**(code **)(*piVar1 + 0x150))(piVar1,*(undefined4 *)(*piVar1 + 0x154));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar2 + 8);
    if (*(int *)(**(int **)(_UNK_01deee40 + 0x1deede8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    System_DateTime__get_Now_2b4a124(&uStack_20,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar2 + 0x10) = uStack_20;
    *(undefined4 *)(iVar2 + 0x14) = uStack_1c;
    Rotatelab_Leaderboard_BaseLeaderboardManager_object___Refresh_1dde7b4
              (piVar1,*(undefined4 *)(*(int *)(*(int *)(iVar3 + 0x10) + 0x60) + 0x24));
  }
  return;
}

