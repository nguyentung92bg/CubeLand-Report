/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$GetCycleEndTime
System_DateTime_o Rotatelab_WinStreak_WinStreakManager__GetCycleEndTime (Rotatelab_WinStreak_WinStreakManager_o* __this, System_DateTime_o now, int32_t endDay, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$GetCycleEndTime
   System_DateTime_o Rotatelab_WinStreak_WinStreakManager__GetCycleEndTime
   (Rotatelab_WinStreak_WinStreakManager_o* __this, System_DateTime_o now, int32_t endDay, const
   MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__GetCycleEndTime_109270c
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint in_fpscr;
  undefined8 uVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_010a27f0 + 0x10a2728);
  uStack_20 = param_3;
  uStack_1c = param_4;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a27f4 + 0x10a2740));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  if (*(int *)(**(int **)(_UNK_010a27f8 + 0x10a275c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Date_2b49a20(&uStack_28,&uStack_20,0);
  iVar1 = System_DateTime__get_DayOfWeek_2b49d48(&uStack_20,0);
  uVar2 = (param_5 - iVar1) + 7;
  iVar1 = (int)(((ulonglong)uVar2 << 0x20) + (longlong)(int)uVar2 * -0x6db6db6d >> 0x20);
  uVar4 = VectorSignedToFloat(uVar2 + ((iVar1 >> 2) - (iVar1 >> 0x1f)) * -7 + 1,
                              (byte)(in_fpscr >> 0x16) & 3);
  System_DateTime__AddDays_2b48944
            (&uStack_30,&uStack_28,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}

