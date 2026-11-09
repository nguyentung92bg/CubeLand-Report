/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ChangeCrownTournamentTheme
void Rotatelab_Debugging_CreativeCanvasController__ChangeCrownTournamentTheme (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.CreativeCanvasController$$ChangeCrownTournamentTheme
   void Rotatelab_Debugging_CreativeCanvasController__ChangeCrownTournamentTheme
   (Rotatelab_Debugging_CreativeCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_CreativeCanvasController__ChangeCrownTournamentTheme_110e640(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_0111e6a0 + 0x111e654);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111e6a4 + 0x111e668));
    *pcVar6 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0111e6a8 + 0x111e67c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Leaderboard_MidGameLeaderboardManager__CycleThemeOverride_10b7d6c(0);
  pcVar6 = (char *)(_UNK_0111d078 + 0x111cf64);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d07c + 0x111cf78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d080 + 0x111cf84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d084 + 0x111cf90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d088 + 0x111cf9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d08c + 0x111cfa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111d090 + 0x111cfb4));
    *pcVar6 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0111d094 + 0x111cfc8);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_int___get_Value_1a8b7e4
                    (iVar1,**(undefined4 **)(_UNK_0111d098 + 0x111cffc));
  puVar3 = *(undefined4 **)(_UNK_0111d0a0 + 0x111d01c);
  if (iVar1 == 2) {
    puVar3 = *(undefined4 **)(_UNK_0111d09c + 0x111d014);
  }
  puVar5 = *(undefined4 **)(_UNK_0111d0a8 + 0x111d034);
  if (iVar1 != 1) {
    puVar5 = puVar3;
  }
  piVar4 = *(int **)(param_1 + 0x8c);
  uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_0111d0a4 + 0x111d02c),*puVar5,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0111d074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar4 + 0x2b0))(piVar4,uVar2,*(undefined4 *)(*piVar4 + 0x2b4));
  return;
}

