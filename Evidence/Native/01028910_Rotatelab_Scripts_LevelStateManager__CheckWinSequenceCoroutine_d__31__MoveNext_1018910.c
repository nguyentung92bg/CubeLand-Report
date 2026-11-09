/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<CheckWinSequenceCoroutine>d__31$$MoveNext
bool Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine_d__31__MoveNext (Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine_d__31_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager.<CheckWinSequenceCoroutine>d__31$$MoveNext
   bool Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine_d__31__MoveNext
   (Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine_d__31_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Scripts_LevelStateManager__CheckWinSequenceCoroutine_d__31__MoveNext_1018910(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)(_UNK_01028a18 + 0x1028924);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01028a1c + 0x1028938));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 1) {
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Scripts_LevelStateManager__CanCheckLevelState_1017774(iVar4);
    if ((iVar1 != 0) &&
       (iVar1 = Rotatelab_Scripts_LevelStateManager__IsEmptyDockCountSufficientForQueuedBlasters_1016dd0
                          (), iVar1 != 0)) {
      Rotatelab_Scripts_LevelStateManager__TriggerWinSequence_1016c90(iVar4);
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  if (*(int *)(**(int **)(_UNK_01028a20 + 0x10289d8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_BetterWaitForSeconds__Wait_107c5ac(0x3dcccccd,0);
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar2);
  *(undefined4 *)(param_1 + 8) = 1;
  return 1;
}

