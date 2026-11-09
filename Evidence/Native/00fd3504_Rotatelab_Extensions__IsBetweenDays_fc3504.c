/* IL2CPP: Rotatelab.Extensions$$IsBetweenDays
bool Rotatelab_Extensions__IsBetweenDays (System_DateTime_o time, int32_t start, int32_t end, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$IsBetweenDays
   bool Rotatelab_Extensions__IsBetweenDays (System_DateTime_o time, int32_t start, int32_t end,
   const MethodInfo* method); */

bool Rotatelab_Extensions__IsBetweenDays_fc3504
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_00fd35e0 + 0xfd3524);
  uStack_18 = param_1;
  uStack_14 = param_2;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd35e4 + 0xfd353c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd35e8 + 0xfd3548));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fd35ec + 0xfd355c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = System_DateTime__get_DayOfWeek_2b49d48(&uStack_18,0);
  if (*(int *)(**(int **)(_UNK_00fd35f0 + 0xfd3588) + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (param_4 < param_3) {
    bVar1 = param_3 <= iVar2 || iVar2 <= param_4;
  }
  else {
    bVar1 = param_3 <= iVar2 && iVar2 <= param_4;
  }
  return bVar1;
}

