/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedRect$$Apply
void Rotatelab_Leaderboard_MidGameThemedRect__Apply (Rotatelab_Leaderboard_MidGameThemedRect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameThemedRect$$Apply
   void Rotatelab_Leaderboard_MidGameThemedRect__Apply (Rotatelab_Leaderboard_MidGameThemedRect_o*
   __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameThemedRect__Apply_10b8d4c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  
  pcVar5 = (char *)(_UNK_010c8e44 + 0x10c8d60);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c8e48 + 0x10c8d74));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010c8e4c + 0x10c8d88));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Leaderboard_MidGameLeaderboardManager__get_CurrentTheme_10b81a8(iVar1);
  if (iVar1 == 1) {
    fVar6 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x18);
  }
  else {
    fVar6 = *(float *)(param_1 + 0x24);
    fVar7 = *(float *)(param_1 + 0x28);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x10),fVar6,fVar7,0);
    iVar2 = 0x30;
    iVar3 = 0x2c;
    if (iVar1 == 1) {
      iVar2 = 0x20;
      iVar3 = 0x1c;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar1 != 0) {
      pcVar5 = (char *)(iRam036238b8 + 0x362383c);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036238bc + 0x3623854),
                           *(undefined4 *)(param_1 + iVar3),*(undefined4 *)(param_1 + iVar2),0);
        *pcVar5 = '\x01';
      }
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
        }
        pcVar4 = *(code **)(_UNK_036238c0 + 0x3623880);
        if (pcVar4 == (code *)0x0) {
          pcVar4 = (code *)thunk_FUN_00ec3774(_UNK_036238c4 + 0x3623890);
          *(code **)(_UNK_036238c8 + 0x36238a0) = pcVar4;
        }
        (*pcVar4)(iVar1,&stack0xffffffe8);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

