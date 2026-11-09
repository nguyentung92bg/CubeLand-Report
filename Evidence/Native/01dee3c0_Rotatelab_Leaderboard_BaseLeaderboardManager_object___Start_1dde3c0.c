/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$Start
void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Start (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDE3C0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardManager<object>$$Start
   void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Start
   (Rotatelab_Leaderboard_BaseLeaderboardManager_T__o* __this, const MethodInfo_1DDE3C0* method); */

void Rotatelab_Leaderboard_BaseLeaderboardManager_object___Start_1dde3c0(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  
  pcVar3 = (char *)(_UNK_01dee6bc + 0x1dee3dc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01dee6c0 + 0x1dee3f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01dee6c4 + 0x1dee3fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01dee6c8 + 0x1dee408));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01dee6cc + 0x1dee414));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01dee6d0 + 0x1dee420));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01dee6d4 + 0x1dee42c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01dee6d8 + 0x1dee438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01dee6dc + 0x1dee444));
    *pcVar3 = '\x01';
  }
  Rotatelab_Leaderboard_BaseLeaderboardManager_object___Refresh_1dde7b4
            (param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x24));
  uVar1 = Rotatelab_Leaderboard_BaseLeaderboardManager_object___RefreshRemainingTimeRegularlyCoroutine_1ddeea0
                    (param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x28));
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar1,0);
  if (param_1[8] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(param_1[8] + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01dee6e0 + 0x1dee4b0));
  UnityEngine_Events_UnityAction___ctor_361afc4(uVar1,param_1,*(undefined4 *)(*param_1 + 0x134),0);
  if (iVar5 != 0) {
    UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar1,0);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01dee6e4 + 0x1dee4fc));
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(_UNK_01dee6e8 + 0x1dee51c);
    piVar7 = (int *)(iVar5 + 0x20);
    iVar5 = *piVar7;
    uVar1 = thunk_FUN_00f00cdc(*piVar8);
    System_Action___ctor_2b10bac
              (uVar1,param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x30),0);
    piVar2 = (int *)System_Delegate__Combine_2bbca94(iVar5,uVar1,0);
    if (piVar2 == (int *)0x0) {
      *piVar7 = 0;
      piVar2 = (int *)0x0;
    }
    else {
      iVar5 = *piVar8;
      if (*piVar2 != iVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar2);
      }
      *piVar7 = (int)piVar2;
      if (*piVar2 != iVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar2);
      }
    }
    thunk_FUN_00ec5080(piVar7,piVar2);
    piVar2 = *(int **)(_UNK_01dee6ec + 0x1dee5d0);
    iVar5 = *piVar2;
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      iVar5 = *piVar2;
    }
    uVar4 = *(undefined4 *)(*(int *)(iVar5 + 0x5c) + 0x118);
    uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01dee6f0 + 0x1dee5f4));
    System_Action_Int32Enum__bool____ctor_1f185a4
              (uVar1,param_1,*(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x34),0);
    uVar1 = Rotatelab_GameAction_Int32Enum__bool___op_Addition_23a438c
                      (uVar4,uVar1,**(undefined4 **)(_UNK_01dee6f4 + 0x1dee62c));
    *(undefined4 *)(*(int *)(*piVar2 + 0x5c) + 0x118) = uVar1;
    thunk_FUN_00ec5080();
    iVar6 = param_1[8];
    iVar5 = *(int *)(*(int *)(*piVar2 + 0x5c) + 0xd8);
    if (*(int *)(**(int **)(_UNK_01dee6f8 + 0x1dee658) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = Rotatelab_Extensions__RectTransform_fc1bd0(iVar6,0);
    if (iVar5 != 0) {
      Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
                (iVar5,uVar1,0,1,**(undefined4 **)(_UNK_01dee6fc + 0x1dee6a8));
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

