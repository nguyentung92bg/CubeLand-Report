/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$GetRandomSeed
int32_t Rotatelab_Leaderboard_BaseLeaderboardManager_object___GetRandomSeed (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDF920* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$GetRandomSeed
   int32_t Rotatelab_Leaderboard_BaseLeaderboardManager_object___GetRandomSeed
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDF920* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___GetRandomSeed_1ddf920(void)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  fVar1 = (float)UnityEngine_Random__get_value_35f8bbc(0);
  if (0.5 <= fVar1) {
    uVar2 = 0x80000000;
    uVar3 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    uVar3 = 0x7fffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_03608b5c + 0x3608b2c);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03608b60 + 0x3608b3c);
    *(code **)(_UNK_03608b64 + 0x3608b4c) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x03608b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar3);
  return;
}

