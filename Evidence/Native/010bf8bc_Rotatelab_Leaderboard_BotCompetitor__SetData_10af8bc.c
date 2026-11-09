/* IL2CPP: Rotatelab.Leaderboard.BotCompetitor$$SetData
void Rotatelab_Leaderboard_BotCompetitor__SetData (Rotatelab_Leaderboard_BotCompetitor_o* __this, Rotatelab_Leaderboard_BotData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Leaderboard.BotCompetitor$$SetData
   void Rotatelab_Leaderboard_BotCompetitor__SetData (Rotatelab_Leaderboard_BotCompetitor_o* __this,
   Rotatelab_Leaderboard_BotData_o* data, const MethodInfo* method); */

void Rotatelab_Leaderboard_BotCompetitor__SetData_10af8bc(int param_1,int param_2)

{
  *(int *)(param_1 + 0x68) = param_2;
  thunk_FUN_00ec5080();
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Leaderboard_BaseCompetitor__SetData_10b115c
            (param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
             *(undefined4 *)(param_2 + 0x10));
  return;
}

