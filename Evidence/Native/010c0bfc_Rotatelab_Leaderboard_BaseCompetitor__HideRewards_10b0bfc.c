/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor$$HideRewards
void Rotatelab_Leaderboard_BaseCompetitor__HideRewards (Rotatelab_Leaderboard_BaseCompetitor_o* __this, float delay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor$$HideRewards
   void Rotatelab_Leaderboard_BaseCompetitor__HideRewards (Rotatelab_Leaderboard_BaseCompetitor_o*
   __this, float delay, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseCompetitor__HideRewards_10b0bfc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pcVar2 = (char *)(_UNK_010c0cd0 + 0x10c0c1c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c0cd4 + 0x10c0c30));
    *pcVar2 = '\x01';
  }
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  if (*(int *)(**(int **)(_UNK_010c0cd8 + 0x10c0c48) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684(&uStack_28,uVar1,0,0x3e19999a,0,0,0,0,0,1,0,param_2,0,0,0);
  *(undefined8 *)(param_1 + 0x58) = uStack_28;
  *(undefined8 *)(param_1 + 0x60) = uStack_20;
  thunk_FUN_00ec5080(param_1 + 0x60,0);
  return;
}

