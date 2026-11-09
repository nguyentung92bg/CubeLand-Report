/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$ScheduleNotifications
void Rotatelab_Networking_LocalNotificationManager__ScheduleNotifications (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$ScheduleNotifications
   void Rotatelab_Networking_LocalNotificationManager__ScheduleNotifications (const MethodInfo*
   method); */

void Rotatelab_Networking_LocalNotificationManager__ScheduleNotifications_11624b8(void)

{
  int iVar1;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 uVar2;
  undefined4 extraout_r1_04;
  char *pcVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_01172644 + 0x11724cc);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172648 + 0x11724e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117264c + 0x11724ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172650 + 0x11724f8));
    *pcVar3 = '\x01';
  }
  piVar5 = *(int **)(_UNK_01172654 + 0x117250c);
  iVar1 = *(int *)(*piVar5 + 0x74);
  if (iVar1 == 0) {
    FUN_00ec3934();
    iVar1 = extraout_r1;
  }
  System_TimeSpan__FromDays_2b89ef8(&uStack_18,iVar1,0,0x3ff00000,0);
  puVar4 = *(undefined4 **)(_UNK_01172658 + 0x1172548);
  Rotatelab_Networking_LocalNotificationManager__ScheduleNotification_1162660
            (*puVar4,extraout_r1_00,uStack_18,uStack_14,0);
  System_TimeSpan__FromDays_2b89ef8(&uStack_18,extraout_r1_01,0,0x40080000,0);
  Rotatelab_Networking_LocalNotificationManager__ScheduleNotification_1162660
            (*puVar4,extraout_r1_02,uStack_18,uStack_14,0);
  System_TimeSpan__FromDays_2b89ef8(&uStack_18,extraout_r1_03,0,0x401c0000,0);
  Rotatelab_Networking_LocalNotificationManager__ScheduleNotification_1162660
            (*puVar4,1,uStack_18,uStack_14,1);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_ObservableEnergy__get_SecondsToFull_fb3834(*(int *)(iVar1 + 0x58),0);
  iVar1 = (int)((ulonglong)uVar6 >> 0x20);
  if ((int)(uint)((int)uVar6 == 0) <= iVar1) {
    if (*(int *)(*piVar5 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar6 = FUN_00f88328((int)uVar6,iVar1);
    uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
    System_TimeSpan__FromSeconds_2b8a42c(&uStack_18,uVar2,(int)uVar6,uVar2,0);
    Rotatelab_Networking_LocalNotificationManager__ScheduleNotification_1162660
              (**(undefined4 **)(_UNK_0117265c + 0x1172634),extraout_r1_04,uStack_18,uStack_14,0);
  }
  return;
}

