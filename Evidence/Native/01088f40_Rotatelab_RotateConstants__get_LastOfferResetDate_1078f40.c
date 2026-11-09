/* IL2CPP: Rotatelab.RotateConstants$$get_LastOfferResetDate
System_DateTime_o Rotatelab_RotateConstants__get_LastOfferResetDate (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RotateConstants$$get_LastOfferResetDate
   System_DateTime_o Rotatelab_RotateConstants__get_LastOfferResetDate (const MethodInfo* method);
    */

void Rotatelab_RotateConstants__get_LastOfferResetDate_1078f40(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_0108908c + 0x1088f58);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089090 + 0x1088f6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089094 + 0x1088f78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01089098 + 0x1088f84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108909c + 0x1088f90));
    *pcVar3 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  if (*(int *)(**(int **)(_UNK_010890a0 + 0x1088fa8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_20,0);
  System_DateTime__AddDays_2b48944(&uStack_28,&uStack_20,0,0xbff00000,0);
  uStack_1c = uStack_24;
  uStack_20 = uStack_28;
  if (*(int *)(**(int **)(_UNK_010890a4 + 0x1088ff4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  puVar4 = *(undefined4 **)(_UNK_010890a8 + 0x1089038);
  uVar1 = System_DateTime__ToString_2b4b634(&uStack_20,*puVar4,uVar1,0);
  uVar1 = UnityEngine_PlayerPrefs__GetString_35f70c4
                    (**(undefined4 **)(_UNK_010890ac + 0x1089050),uVar1,0);
  uVar2 = System_Globalization_CultureInfo__get_InvariantCulture_2aca358(0);
  System_DateTime__ParseExact_2b4a968(&uStack_28,uVar1,*puVar4,uVar2,0);
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

