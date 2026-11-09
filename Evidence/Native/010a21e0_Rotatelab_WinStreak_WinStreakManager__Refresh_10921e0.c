/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$Refresh
void Rotatelab_WinStreak_WinStreakManager__Refresh (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$Refresh
   void Rotatelab_WinStreak_WinStreakManager__Refresh (Rotatelab_WinStreak_WinStreakManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__Refresh_10921e0(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar7 = (char *)(_UNK_010a26ac + 0x10a21f8);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26b0 + 0x10a220c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26b4 + 0x10a2218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26b8 + 0x10a2224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26bc + 0x10a2230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26c0 + 0x10a223c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26c4 + 0x10a2248));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26c8 + 0x10a2254));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26cc + 0x10a2260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26d0 + 0x10a226c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a26d4 + 0x10a2278));
    *pcVar7 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010a26d8 + 0x10a228c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_30,0);
  uVar6 = uStack_2c;
  uVar5 = uStack_30;
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar9 = *(undefined4 *)(param_1 + 0x18);
  if (*(int *)(**(int **)(_UNK_010a26dc + 0x10a22c0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Extensions__IsBetweenDays_fc3504(uVar5,uVar6,uVar8,uVar9,0);
  iVar2 = Rotatelab_Extensions__IsBetweenDays_fc3504
                    (uVar5,uVar6,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),0);
  piVar11 = (int *)(param_1 + 0x48);
  if (*piVar11 != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*piVar11,0);
    *(undefined4 *)(param_1 + 0x48) = 0;
    thunk_FUN_00ec5080(piVar11,0);
  }
  if (*(int *)(**(int **)(_UNK_010a26e0 + 0x10a2344) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar8 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar8,0);
  piVar10 = *(int **)(_UNK_010a26e4 + 0x10a2374);
  iVar4 = *piVar10;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar10;
  }
  if ((iVar3 < *(int *)(*(int *)(iVar4 + 0x5c) + 0xc)) || (uVar1 == 0 && iVar2 == 0)) {
    *(undefined1 *)(param_1 + 0x44) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x44) = 1;
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(**(int **)(_UNK_010a26e8 + 0x10a23cc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = Rotatelab_Extensions__GetAbsoluteWeek_fc315c(uVar5,uVar6,0);
    if (*(int *)(**(int **)(_UNK_010a26ec + 0x10a2408) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar12 = Rotatelab_Utilities__TryChangeValue_int__1663db8
                       (iVar2 + 0x98,iVar3 << 1 | uVar1 ^ 1,
                        **(undefined4 **)(_UNK_010a26f0 + 0x10a2428));
    uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 != 0) {
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(iVar2 + 0x9c) = 0;
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(iVar2 + 0xa0) = 0;
      uVar12 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84();
      uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
      if ((int)uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)((int)uVar12 + 0xa4) = 0xffffffff;
    }
    iVar2 = 0x20;
    if (uVar1 != 0) {
      iVar2 = 0x18;
    }
    Rotatelab_WinStreak_WinStreakManager__GetCycleEndTime_109270c
              (&uStack_30,uVar8,uVar5,uVar6,*(undefined4 *)(param_1 + iVar2));
    uVar5 = Rotatelab_WinStreak_WinStreakManager__RefreshRemainingTimeRegularlyCoroutine_10927fc
                      (param_1,extraout_r1,uStack_30,uStack_2c);
    uVar5 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar5,0);
    *(undefined4 *)(param_1 + 0x48) = uVar5;
    thunk_FUN_00ec5080(piVar11,uVar5);
    Rotatelab_WinStreak_WinStreakManager__RefreshProgressOfShowButton_1092884(param_1);
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar2 + 0xa8) == '\0') {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010a26f4 + 0x10a2604));
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a26f8 + 0x10a2618));
      System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_010a26fc + 0x10a2634),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = 9;
    }
    else {
      iVar3 = *(int *)(param_1 + 0x10);
      iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc
                        (iVar3,*(undefined4 *)(iVar2 + 0xa0));
      iVar4 = *(int *)(param_1 + 0x10);
      iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc
                        (iVar4,*(undefined4 *)(iVar3 + 0x9c));
      if (iVar2 == iVar3) goto LAB_010a265c;
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010a2700 + 0x10a259c));
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a2704 + 0x10a25b0));
      System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_010a2708 + 0x10a25cc),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = 10;
    }
    Rotatelab_HomePageCoordinator__Request_107a508(iVar2,uVar6,uVar5,0);
  }
LAB_010a265c:
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x2c),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,*(char *)(param_1 + 0x44) != '\0',0);
  return;
}

