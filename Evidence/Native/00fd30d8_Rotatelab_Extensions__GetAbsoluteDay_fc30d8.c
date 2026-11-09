/* IL2CPP: Rotatelab.Extensions$$GetAbsoluteDay
int32_t Rotatelab_Extensions__GetAbsoluteDay (System_DateTime_o time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$GetAbsoluteDay
   int32_t Rotatelab_Extensions__GetAbsoluteDay (System_DateTime_o time, const MethodInfo* method);
    */

void Rotatelab_Extensions__GetAbsoluteDay_fc30d8(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  pcVar1 = (char *)(_UNK_00fd3150 + 0xfd30f0);
  uStack_10 = param_1;
  uStack_c = param_2;
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd3154 + 0xfd3108));
    *pcVar1 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fd3158 + 0xfd311c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = System_DateTime__get_Ticks_2b481bc(&uStack_10,0);
  FUN_00f88ac4((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x2a69c000,0xc9);
  return;
}

