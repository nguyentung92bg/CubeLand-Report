/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$.ctor
void Rotatelab_Leaderboard_BaseLeaderboardPanelController___ctor (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$.ctor
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController___ctor
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, const MethodInfo* method); */

int Rotatelab_Leaderboard_BaseLeaderboardPanelController___ctor_10b0cdc(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010c0d64 + 0x10c0cf0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0d68 + 0x10c0d04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0d6c + 0x10c0d10));
    *pcVar2 = '\x01';
  }
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c0d70 + 0x10c0d24));
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar1,0x20,**(undefined4 **)(_UNK_010c0d74 + 0x10c0d3c));
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar1);
  pcVar2 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

