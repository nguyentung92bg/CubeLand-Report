/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$OnApplicationPause
void Rotatelab_Networking_LocalNotificationManager__OnApplicationPause (Rotatelab_Networking_LocalNotificationManager_o* __this, bool pauseStatus, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$OnApplicationPause
   void Rotatelab_Networking_LocalNotificationManager__OnApplicationPause
   (Rotatelab_Networking_LocalNotificationManager_o* __this, bool pauseStatus, const MethodInfo*
   method); */

void Rotatelab_Networking_LocalNotificationManager__OnApplicationPause_11623f0
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar4 = (char *)(_UNK_011724a4 + 0x1172404);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011724a8 + 0x1172418));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011724ac + 0x1172424));
    *pcVar4 = '\x01';
  }
  Rotatelab_Networking_LocalNotificationManager__CancelNotifications_1162390();
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(**(int **)(_UNK_011724b0 + 0x1172444) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  piVar5 = *(int **)(_UNK_011724b4 + 0x1172474);
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar5;
  }
  if (iVar2 < *(int *)(*(int *)(iVar3 + 0x5c) + 0x30)) {
    return;
  }
  pcVar4 = (char *)(_UNK_01172644 + 0x11724cc);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172648 + 0x11724e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117264c + 0x11724ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172650 + 0x11724f8));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01172654 + 0x117250c);
  iVar2 = *(int *)(*piVar5 + 0x74);
  if (iVar2 == 0) {
    FUN_00ec3934();
    iVar2 = extraout_r1;
  }
  System_TimeSpan__FromDays_2b89ef8(&uStack_18,iVar2,0,0x3ff00000,0);
  puVar6 = *(undefined4 **)(_UNK_01172658 + 0x1172548);
  Rotatelab_Networking_LocalNotificationManager__ScheduleNotification_1162660
            (*puVar6,extraout_r1_00,uStack_18,uStack_14,0);
  System_TimeSpan__FromDays_2b89ef8(&uStack_18,extraout_r1_01,0,0x40080000,0);
  Rotatelab_Networking_LocalNotificationManager__ScheduleNotification_1162660
            (*puVar6,extraout_r1_02,uStack_18,uStack_14,0);
  System_TimeSpan__FromDays_2b89ef8(&uStack_18,extraout_r1_03,0,0x401c0000,0);
  Rotatelab_Networking_LocalNotificationManager__ScheduleNotification_1162660
            (*puVar6,1,uStack_18,uStack_14,1);
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84();
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar2 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = Rotatelab_ObservableEnergy__get_SecondsToFull_fb3834(*(int *)(iVar2 + 0x58),0);
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  if ((int)(uint)((int)uVar7 == 0) <= iVar2) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = FUN_00f88328((int)uVar7,iVar2);
    uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
    System_TimeSpan__FromSeconds_2b8a42c(&uStack_18,uVar1,(int)uVar7,uVar1,0);
    Rotatelab_Networking_LocalNotificationManager__ScheduleNotification_1162660
              (**(undefined4 **)(_UNK_0117265c + 0x1172634),extraout_r1_04,uStack_18,uStack_14,0);
  }
  return;
}

