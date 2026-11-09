/* IL2CPP: Rotatelab.Extensions$$GetStartOfWeek
System_DateTime_o Rotatelab_Extensions__GetStartOfWeek (System_DateTime_o time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$GetStartOfWeek
   System_DateTime_o Rotatelab_Extensions__GetStartOfWeek (System_DateTime_o time, const MethodInfo*
   method); */

void Rotatelab_Extensions__GetStartOfWeek_fc341c
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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
  
  pcVar3 = (char *)(_UNK_00fd34f8 + 0xfd3438);
  uStack_20 = param_3;
  uStack_1c = param_4;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd34fc + 0xfd3450));
    *pcVar3 = '\x01';
  }
  uStack_24 = 0;
  uStack_28 = 0;
  if (*(int *)(**(int **)(_UNK_00fd3500 + 0xfd3468) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = System_DateTime__get_DayOfWeek_2b49d48(&uStack_20,0);
  System_DateTime__get_Date_2b49a20(&uStack_28,&uStack_20,0);
  uVar2 = iVar1 + 6;
  iVar1 = (int)(((ulonglong)uVar2 << 0x20) + (longlong)(int)uVar2 * -0x6db6db6d >> 0x20);
  uVar4 = VectorSignedToFloat(((iVar1 >> 2) - (iVar1 >> 0x1f)) * 7 - uVar2,
                              (byte)(in_fpscr >> 0x16) & 3);
  System_DateTime__AddDays_2b48944
            (&uStack_30,&uStack_28,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20),0);
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}

