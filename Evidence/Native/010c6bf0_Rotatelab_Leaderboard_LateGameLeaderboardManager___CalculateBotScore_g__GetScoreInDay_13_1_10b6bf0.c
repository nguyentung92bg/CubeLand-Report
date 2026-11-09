/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$<CalculateBotScore>g__GetScoreInDay|13_1
int32_t Rotatelab_Leaderboard_LateGameLeaderboardManager___CalculateBotScore_g__GetScoreInDay_13_1 (float dayElapsedAmount, Rotatelab_Leaderboard_LateGameLeaderboardManager___c__DisplayClass13_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Leaderboard.LateGameLeaderboardManager$$<CalculateBotScore>g__GetScoreInDay|13_1
   int32_t
   Rotatelab_Leaderboard_LateGameLeaderboardManager___CalculateBotScore_g__GetScoreInDay_13_1 (float
   dayElapsedAmount, Rotatelab_Leaderboard_LateGameLeaderboardManager___c__DisplayClass13_0_o* ,
   const MethodInfo* method); */

undefined4
Rotatelab_Leaderboard_LateGameLeaderboardManager___CalculateBotScore_g__GetScoreInDay_13_1_10b6bf0
          (float param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  double dStack_30;
  
  iVar5 = *param_2;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x10),(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = (float)UnityEngine_Random__get_value_35f8bbc(0);
  pcVar4 = (char *)(_UNK_010c6d50 + 0x10c6c58);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6d54 + 0x10c6c6c));
    *pcVar4 = '\x01';
  }
  param_1 = (fVar8 + fVar1 * (fVar6 - fVar8)) * param_1;
  if (*(int *)(**(int **)(_UNK_010c6d58 + 0x10c6c84) + 0x74) == 0) {
    FUN_00ec3934();
  }
  dVar7 = (double)param_1;
  dVar9 = (double)modf(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),&dStack_30);
  if (0.0 <= param_1) {
    if (dVar9 != 0.5) {
      dVar7 = (double)floor(SUB84(dVar7 + 0.5,0),(int)((ulonglong)(dVar7 + 0.5) >> 0x20));
      goto LAB_010c6d20;
    }
    dVar7 = 1.0;
  }
  else {
    if (dVar9 != -0.5) {
      dVar7 = (double)ceil(SUB84(dVar7 + -0.5,0),(int)((ulonglong)(dVar7 + -0.5) >> 0x20));
      goto LAB_010c6d20;
    }
    dVar7 = -1.0;
  }
  uVar2 = FUN_00f88224(SUB84(dStack_30,0),(int)((ulonglong)dStack_30 >> 0x20));
  dVar7 = dStack_30 + dVar7;
  if ((uVar2 & 1) == 0) {
    dVar7 = dStack_30;
  }
LAB_010c6d20:
  uVar3 = (undefined4)(longlong)dVar7;
  if (dVar7 == _UNK_010c6d48) {
    uVar3 = 0x80000000;
  }
  return uVar3;
}

