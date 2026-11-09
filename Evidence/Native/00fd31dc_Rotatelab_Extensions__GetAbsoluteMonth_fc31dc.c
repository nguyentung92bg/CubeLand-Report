/* IL2CPP: Rotatelab.Extensions$$GetAbsoluteMonth
int32_t Rotatelab_Extensions__GetAbsoluteMonth (System_DateTime_o time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$GetAbsoluteMonth
   int32_t Rotatelab_Extensions__GetAbsoluteMonth (System_DateTime_o time, const MethodInfo*
   method); */

int Rotatelab_Extensions__GetAbsoluteMonth_fc31dc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar3 = (char *)(_UNK_00fd3260 + 0xfd31f4);
  uStack_18 = param_1;
  uStack_14 = param_2;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd3264 + 0xfd320c));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_00fd3268 + 0xfd3220) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = System_DateTime__get_Year_2b4a408(&uStack_18,0);
  iVar2 = System_DateTime__get_Month_2b4a0bc(&uStack_18,0);
  return iVar2 + iVar1 * 0xc;
}

