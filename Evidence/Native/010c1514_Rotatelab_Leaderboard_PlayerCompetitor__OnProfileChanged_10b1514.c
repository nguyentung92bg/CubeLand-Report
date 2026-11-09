/* IL2CPP: Rotatelab.Leaderboard.PlayerCompetitor$$OnProfileChanged
void Rotatelab_Leaderboard_PlayerCompetitor__OnProfileChanged (Rotatelab_Leaderboard_PlayerCompetitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.PlayerCompetitor$$OnProfileChanged
   void Rotatelab_Leaderboard_PlayerCompetitor__OnProfileChanged
   (Rotatelab_Leaderboard_PlayerCompetitor_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_PlayerCompetitor__OnProfileChanged_10b1514(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  uVar3 = *(undefined4 *)(param_1 + 0x68);
  pcVar4 = (char *)(_UNK_010bf9f4 + 0x10bf914);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf9f8 + 0x10bf928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bf9fc + 0x10bf934));
    *pcVar4 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x68),uVar3);
  puVar6 = *(undefined4 **)(_UNK_010bfa00 + 0x10bf958);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_UI_ProfileManager__get_Username_1113454(iVar1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(iVar1 + 0x40),0,**(undefined4 **)(_UNK_010bfa04 + 0x10bf9d0));
  Rotatelab_Leaderboard_BaseCompetitor__SetData_10b115c(param_1,uVar3,uVar5,uVar2);
  return;
}

