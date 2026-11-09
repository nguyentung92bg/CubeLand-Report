/* IL2CPP: Rotatelab.Extensions$$IsInSameDay
bool Rotatelab_Extensions__IsInSameDay (System_DateTime_o time, System_DateTime_o other, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$IsInSameDay
   bool Rotatelab_Extensions__IsInSameDay (System_DateTime_o time, System_DateTime_o other, const
   MethodInfo* method); */

bool Rotatelab_Extensions__IsInSameDay_fc326c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_00fd32f0 + 0xfd3288);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd32f4 + 0xfd32a0));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fd32f8 + 0xfd32b4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__GetAbsoluteDay_fc30d8(param_1,param_2);
  iVar2 = Rotatelab_Extensions__GetAbsoluteDay_fc30d8(param_3,param_4);
  return iVar1 == iVar2;
}

