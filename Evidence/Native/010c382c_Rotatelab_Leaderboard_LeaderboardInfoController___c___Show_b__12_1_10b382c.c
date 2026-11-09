/* IL2CPP: Rotatelab.Leaderboard.LeaderboardInfoController.<>c$$<Show>b__12_1
void Rotatelab_Leaderboard_LeaderboardInfoController___c___Show_b__12_1 (Rotatelab_Leaderboard_LeaderboardInfoController___c_o* __this, UnityEngine_Animator_o* leaderboardAnimator, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardInfoController.<>c$$<Show>b__12_1
   void Rotatelab_Leaderboard_LeaderboardInfoController___c___Show_b__12_1
   (Rotatelab_Leaderboard_LeaderboardInfoController___c_o* __this, UnityEngine_Animator_o*
   leaderboardAnimator, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardInfoController___c___Show_b__12_1_10b382c
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010c3884 + 0x10c3840);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3888 + 0x10c3854));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Animator__StringToHash_3591078
                    (**(undefined4 **)(_UNK_010c388c + 0x10c3878),
                     **(undefined4 **)(_UNK_010c388c + 0x10c3878),0);
  UnityEngine_Animator__Play_35915e4(param_2,uVar1,0xffffffff,0xff800000);
  return;
}

