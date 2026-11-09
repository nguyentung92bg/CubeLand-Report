/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$OnDestroy
void Rotatelab_Leaderboard_MidGameLeaderboardManager__OnDestroy (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$OnDestroy
   void Rotatelab_Leaderboard_MidGameLeaderboardManager__OnDestroy
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameLeaderboardManager__OnDestroy_10b72f4(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  int *piVar9;
  bool bVar10;
  
  pcVar6 = (char *)(_UNK_010c73d0 + 0x10c7304);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c73d4 + 0x10c7318));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c73d8 + 0x10c7324));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c73dc + 0x10c7330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c73e0 + 0x10c733c));
    *pcVar6 = '\x01';
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010c73e4 + 0x10c7350));
  piVar7 = *(int **)(_UNK_010c73e8 + 0x10c7364);
  iVar4 = *piVar7;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar7;
  }
  uVar8 = **(undefined4 **)(iVar4 + 0x5c);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c73ec + 0x10c7388));
  System_Action___ctor_2b10bac(uVar5,uVar8,**(undefined4 **)(_UNK_010c73f0 + 0x10c73a8),0);
  if (iVar3 != 0) {
    pcVar6 = (char *)(_UNK_01083c84 + 0x1083c08);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01083c88 + 0x1083c1c),uVar5,0);
      *pcVar6 = '\x01';
    }
    piVar7 = *(int **)(_UNK_01083c8c + 0x1083c34);
    iVar4 = *(int *)(iVar3 + 0x98);
    while( true ) {
      piVar1 = (int *)System_Delegate__Remove_2bbcc8c(iVar4,uVar5,0);
      piVar9 = (int *)0x0;
      if ((piVar1 != (int *)0x0) && (piVar9 = piVar1, *piVar1 != *piVar7)) break;
      iVar2 = FUN_00efd180((int *)(iVar3 + 0x98),piVar9,iVar4);
      bVar10 = iVar2 == iVar4;
      iVar4 = iVar2;
      if (bVar10) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

