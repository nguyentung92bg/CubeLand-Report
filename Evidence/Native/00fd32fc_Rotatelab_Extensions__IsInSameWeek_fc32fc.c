/* IL2CPP: Rotatelab.Extensions$$IsInSameWeek
bool Rotatelab_Extensions__IsInSameWeek (System_DateTime_o time, System_DateTime_o other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$IsInSameWeek
   bool Rotatelab_Extensions__IsInSameWeek (System_DateTime_o time, System_DateTime_o other, const
   MethodInfo* method); */

bool Rotatelab_Extensions__IsInSameWeek_fc32fc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_00fd3380 + 0xfd3318);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd3384 + 0xfd3330));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fd3388 + 0xfd3344) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__GetAbsoluteWeek_fc315c(param_1,param_2);
  iVar2 = Rotatelab_Extensions__GetAbsoluteWeek_fc315c(param_3,param_4);
  return iVar1 == iVar2;
}

