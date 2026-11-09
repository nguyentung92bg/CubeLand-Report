/* IL2CPP: Rotatelab.Extensions$$GetAbsoluteWeek
int32_t Rotatelab_Extensions__GetAbsoluteWeek (System_DateTime_o time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$GetAbsoluteWeek
   int32_t Rotatelab_Extensions__GetAbsoluteWeek (System_DateTime_o time, const MethodInfo* method);
    */

int Rotatelab_Extensions__GetAbsoluteWeek_fc315c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_00fd31d0 + 0xfd3174);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd31d4 + 0xfd3188));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fd31d8 + 0xfd319c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Extensions__GetAbsoluteDay_fc30d8(param_1,param_2);
  iVar2 = (int)(((ulonglong)uVar1 << 0x20) + (longlong)(int)uVar1 * -0x6db6db6d >> 0x20);
  return (iVar2 >> 2) - (iVar2 >> 0x1f);
}

