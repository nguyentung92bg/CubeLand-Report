/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$<Show>b__12_0
void Rotatelab_Leaderboard_LeaderboardTutorialController___Show_b__12_0 (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardTutorialController$$<Show>b__12_0
   void Rotatelab_Leaderboard_LeaderboardTutorialController___Show_b__12_0
   (Rotatelab_Leaderboard_LeaderboardTutorialController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardTutorialController___Show_b__12_0_10b6380(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int *piVar10;
  
  pcVar9 = (char *)(_UNK_010c6494 + 0x10c6394);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c6498 + 0x10c63a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c649c + 0x10c63b4));
    *pcVar9 = '\x01';
  }
  piVar10 = *(int **)(param_1 + 0x1c);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *piVar10;
  uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar7[-1] == **(int **)(_UNK_010c64a0 + 0x10c63dc)) {
        puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 200);
        goto LAB_010c6424;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_010c64a0 + 0x10c63dc),1);
LAB_010c6424:
  iVar1 = (*(code *)*puVar2)(piVar10,puVar2[1]);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 8) != 0) {
    pcVar9 = (char *)(_UNK_010c585c + 0x10c57ac);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c5860 + 0x10c57c0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c5864 + 0x10c57cc));
      *pcVar9 = '\x01';
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar1 != 0) {
      UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
      Rotatelab_Leaderboard_LeaderboardTutorialController__StartStep_10b5870(param_1,0);
      piVar10 = *(int **)(_UNK_010c5868 + 0x10c5818);
      iVar1 = *piVar10;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar10;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar1 + 8);
        if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),0,*(undefined4 *)(iVar1 + 0x14));
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010c64a4 + 0x10c6468));
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_0108a5f4 + 0x108a59c);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),iVar8,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
    *pcVar9 = '\x01';
  }
  pcVar9 = (char *)(iVar1 + 0x14);
  if ((*pcVar9 != '\0') && (*(int *)(iVar1 + 0x18) == iVar8)) {
    *(undefined4 *)(iVar1 + 0x18) = 0;
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
  }
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    iVar8 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar1);
    if (iVar8 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
      uVar4 = thunk_FUN_00f00cdc();
      uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar4,uVar5,0);
    }
    else {
      iVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar3 != 0) {
        pcVar9 = (char *)(iRam036143f4 + 0x3614380);
        if (*pcVar9 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
          *pcVar9 = '\x01';
        }
        if (iVar1 != 0) {
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
          }
          UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
            *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar1,iVar8);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar4 = thunk_FUN_00f00cdc();
      uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar4,uVar5,0);
    }
    uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar4,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
  return;
}

