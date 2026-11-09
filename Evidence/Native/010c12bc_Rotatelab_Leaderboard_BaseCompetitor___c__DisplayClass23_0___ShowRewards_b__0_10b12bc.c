/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor.<>c__DisplayClass23_0$$<ShowRewards>b__0
void Rotatelab_Leaderboard_BaseCompetitor___c__DisplayClass23_0___ShowRewards_b__0 (Rotatelab_Leaderboard_BaseCompetitor___c__DisplayClass23_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor.<>c__DisplayClass23_0$$<ShowRewards>b__0
   void Rotatelab_Leaderboard_BaseCompetitor___c__DisplayClass23_0___ShowRewards_b__0
   (Rotatelab_Leaderboard_BaseCompetitor___c__DisplayClass23_0_o* __this, const MethodInfo* method);
    */

void Rotatelab_Leaderboard_BaseCompetitor___c__DisplayClass23_0___ShowRewards_b__0_10b12bc
               (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_010c0cd0 + 0x10c0c1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0cd4 + 0x10c0c30));
    *pcVar3 = '\x01';
  }
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  if (*(int *)(**(int **)(_UNK_010c0cd8 + 0x10c0c48) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_28,uVar2,0,0x3e19999a,0,0,0,0,0,1,0,0x3fc00000,0,0,0);
  *(undefined8 *)(iVar1 + 0x58) = uStack_28;
  *(undefined8 *)(iVar1 + 0x60) = uStack_20;
  thunk_FUN_00ec5080(iVar1 + 0x60,0);
  return;
}

