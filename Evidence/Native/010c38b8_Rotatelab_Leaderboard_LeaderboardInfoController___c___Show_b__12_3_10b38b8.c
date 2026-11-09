/* IL2CPP: Rotatelab.Leaderboard.LeaderboardInfoController.<>c$$<Show>b__12_3
void Rotatelab_Leaderboard_LeaderboardInfoController___c___Show_b__12_3 (Rotatelab_Leaderboard_LeaderboardInfoController___c_o* __this, UnityEngine_Animator_o* rewardAnimator, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardInfoController.<>c$$<Show>b__12_3
   void Rotatelab_Leaderboard_LeaderboardInfoController___c___Show_b__12_3
   (Rotatelab_Leaderboard_LeaderboardInfoController___c_o* __this, UnityEngine_Animator_o*
   rewardAnimator, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardInfoController___c___Show_b__12_3_10b38b8
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010c3910 + 0x10c38cc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3914 + 0x10c38e0));
    *pcVar2 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Animator__StringToHash_3591078
                    (**(undefined4 **)(_UNK_010c3918 + 0x10c3904),
                     **(undefined4 **)(_UNK_010c3918 + 0x10c3904),0);
  UnityEngine_Animator__Play_35915e4(param_2,uVar1,0xffffffff,0xff800000);
  return;
}

