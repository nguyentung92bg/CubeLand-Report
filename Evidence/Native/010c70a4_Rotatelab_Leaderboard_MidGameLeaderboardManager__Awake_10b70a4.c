/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$Awake
void Rotatelab_Leaderboard_MidGameLeaderboardManager__Awake (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.MidGameLeaderboardManager$$Awake
   void Rotatelab_Leaderboard_MidGameLeaderboardManager__Awake
   (Rotatelab_Leaderboard_MidGameLeaderboardManager_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_MidGameLeaderboardManager__Awake_10b70a4(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  pcVar6 = (char *)(_UNK_010c72a8 + 0x10c70b8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c72ac + 0x10c70cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c72b0 + 0x10c70d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c72b4 + 0x10c70e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c72b8 + 0x10c70f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c72bc + 0x10c70fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c72c0 + 0x10c7108));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c72c4 + 0x10c7114));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c72c8 + 0x10c7120));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c72cc + 0x10c712c));
    *pcVar6 = '\x01';
  }
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___Awake_1dde2b8
            (param_1,**(undefined4 **)(_UNK_010c72d0 + 0x10c7140));
  piVar9 = *(int **)(_UNK_010c72d4 + 0x10c7154);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  puVar10 = *(undefined4 **)(_UNK_010c72d8 + 0x10c7178);
  uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 8);
  uVar4 = thunk_FUN_00f00cdc(*puVar10);
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010c72dc + 0x10c7198),0);
  uVar4 = Rotatelab_GameAction__op_Addition_fbfed8(uVar7,uVar4,0);
  *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 8) = uVar4;
  thunk_FUN_00ec5080();
  piVar9 = *(int **)(_UNK_010c72e0 + 0x10c71d0);
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  iVar3 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(iVar3 + 0x5c),**(undefined4 **)(_UNK_010c72e4 + 0x10c71f4));
  if (iVar3 != 0) {
    iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar3 + 0xb4) = 0;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010c72e8 + 0x10c7230));
  piVar9 = *(int **)(_UNK_010c72ec + 0x10c7244);
  iVar5 = *piVar9;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar9;
  }
  uVar7 = **(undefined4 **)(iVar5 + 0x5c);
  uVar4 = thunk_FUN_00f00cdc(*puVar10);
  System_Action___ctor_2b10bac(uVar4,uVar7,**(undefined4 **)(_UNK_010c72f0 + 0x10c7280),0);
  if (iVar3 != 0) {
    pcVar6 = (char *)(_UNK_01083be4 + 0x1083b68);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01083be8 + 0x1083b7c),uVar4,0);
      *pcVar6 = '\x01';
    }
    piVar9 = *(int **)(_UNK_01083bec + 0x1083b94);
    iVar5 = *(int *)(iVar3 + 0x98);
    while( true ) {
      piVar1 = (int *)System_Delegate__Combine_2bbca94(iVar5,uVar4,0);
      piVar8 = (int *)0x0;
      if ((piVar1 != (int *)0x0) && (piVar8 = piVar1, *piVar1 != *piVar9)) break;
      iVar2 = FUN_00efd180((int *)(iVar3 + 0x98),piVar8,iVar5);
      bVar11 = iVar2 == iVar5;
      iVar5 = iVar2;
      if (bVar11) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

