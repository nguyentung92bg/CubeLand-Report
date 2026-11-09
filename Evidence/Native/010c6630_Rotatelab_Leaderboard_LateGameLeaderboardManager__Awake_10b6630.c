/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$Awake
void Rotatelab_Leaderboard_LateGameLeaderboardManager__Awake (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LateGameLeaderboardManager$$Awake
   void Rotatelab_Leaderboard_LateGameLeaderboardManager__Awake
   (Rotatelab_Leaderboard_LateGameLeaderboardManager_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LateGameLeaderboardManager__Awake_10b6630(int *param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  
  pcVar5 = (char *)(_UNK_010c677c + 0x10c6644);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6780 + 0x10c6658));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6784 + 0x10c6664));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6788 + 0x10c6670));
    *pcVar5 = '\x01';
  }
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___Awake_1dde2b8
            (param_1,**(undefined4 **)(_UNK_010c678c + 0x10c6684));
  iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 8) == 0) {
    iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((*(int *)(iVar3 + 0xc) == 0) &&
       (iVar3 = (**(code **)(*param_1 + 0x140))(param_1,*(undefined4 *)(*param_1 + 0x144)),
       iVar3 == 0)) {
      iVar3 = Rotatelab_Save_SaveManager__GetBool_107f0d4
                        (**(undefined4 **)(_UNK_010c6790 + 0x10c6720),0,0);
      if (iVar3 == 0) {
        return;
      }
      iVar3 = (**(code **)(*param_1 + 0x150))(param_1,*(undefined4 *)(*param_1 + 0x154));
      uVar4 = Rotatelab_Leaderboard_BaseLeaderboardManager_object___GenerateNewData_1ddef0c
                        (param_1,**(undefined4 **)(_UNK_010c6794 + 0x10c6750));
      if (iVar3 != 0) {
        puVar6 = (undefined4 *)(iVar3 + 0xc);
        *puVar6 = uVar4;
        if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
          puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar6 >> 0x11) * 4 + 0xf547cc);
          do {
            bVar1 = (bool)hasExclusiveAccess(puVar2);
          } while (!bVar1);
          *puVar2 = *puVar2 | 1 << (((uint)puVar6 & 0x1ffff) >> 0xc);
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  return;
}

