/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$ScheduleNotification
void Rotatelab_Networking_LocalNotificationManager__ScheduleNotification (System_String_o* text, System_TimeSpan_o delay, bool repeats, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$ScheduleNotification
   void Rotatelab_Networking_LocalNotificationManager__ScheduleNotification (System_String_o* text,
   System_TimeSpan_o delay, bool repeats, const MethodInfo* method); */

void Rotatelab_Networking_LocalNotificationManager__ScheduleNotification_1162660
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 auStack_198 [28];
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 auStack_110 [28];
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 auStack_98 [2];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  puVar5 = auStack_198;
  pcVar7 = (char *)(_UNK_0117286c + 0x1172680);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172870 + 0x1172694));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172874 + 0x11726a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172878 + 0x11726ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117287c + 0x11726b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172880 + 0x11726c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172884 + 0x11726d0));
    *pcVar7 = '\x01';
  }
  FUN_00f88e5c(&uStack_a0,0x80);
  uStack_a0 = **(undefined4 **)(_UNK_01172888 + 0x11726f8);
  thunk_FUN_00ec5080(&uStack_a0);
  uStack_9c = param_1;
  thunk_FUN_00ec5080((uint)&uStack_a0 | 4,param_1);
  auStack_98[0] = **(undefined4 **)(_UNK_0117288c + 0x1172720);
  thunk_FUN_00ec5080(auStack_98);
  if (*(int *)(**(int **)(_UNK_01172890 + 0x1172738) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_120,0);
  auStack_198[2] = 0;
  auStack_198[0] = param_3;
  auStack_198[1] = param_4;
  System_DateTime__op_Addition_2b4bdf0(&uStack_120,extraout_r1,uStack_120,uStack_11c);
  uStack_8c = uStack_11c;
  uStack_90 = uStack_120;
  auStack_198[0] = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  if (param_5 != 0) {
    uStack_11c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
    uStack_118 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
    uStack_114 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
    uStack_120 = 0;
    auStack_198[0] = **(undefined4 **)(_UNK_01172894 + 0x11727bc);
    System_Nullable_TimeSpan____ctor_17df740(&uStack_120,8,param_3,param_4);
    auStack_198[0] = uStack_118;
    uVar2 = uStack_114;
    uVar3 = uStack_120;
    uVar4 = uStack_11c;
  }
  auStack_198[2] = 0;
  auStack_198[1] = uVar2;
  Unity_Notifications_Android_AndroidNotification__set_RepeatInterval_32808fc
            (&uStack_a0,uVar2,uVar3,uVar4);
  Unity_Notifications_Android_AndroidNotification__set_ShowInForeground_3280c60(&uStack_a0,0,0);
  thunk_FUN_00f95db8(&uStack_120,&uStack_a0,0x80);
  if (*(int *)(**(int **)(_UNK_01172898 + 0x1172818) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = uStack_114;
  uVar4 = uStack_118;
  uVar3 = uStack_11c;
  uVar2 = uStack_120;
  uStack_128 = **(undefined4 **)(_UNK_0117289c + 0x1172840);
  uStack_124 = 0;
  puVar8 = auStack_110;
  iVar6 = 0x70;
  do {
    uVar9 = *puVar8;
    uVar10 = puVar8[1];
    puVar8 = puVar8 + 2;
    iVar6 = iVar6 + -8;
    *puVar5 = uVar9;
    puVar5[1] = uVar10;
    puVar5 = puVar5 + 2;
  } while (iVar6 != 0);
  Unity_Notifications_Android_AndroidNotificationCenter__SendNotification_3286d10
            (uVar2,uVar3,uVar4,uVar1);
  return;
}

