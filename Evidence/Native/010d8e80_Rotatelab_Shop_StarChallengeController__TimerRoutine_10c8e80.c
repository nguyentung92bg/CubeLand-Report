/* IL2CPP: Rotatelab.Shop.StarChallengeController$$TimerRoutine
System_Collections_IEnumerator_o* Rotatelab_Shop_StarChallengeController__TimerRoutine (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$TimerRoutine
   System_Collections_IEnumerator_o* Rotatelab_Shop_StarChallengeController__TimerRoutine
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_StarChallengeController__TimerRoutine_10c8e80(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010d8eec + 0x10d8e94);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8ef0 + 0x10d8ea8));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d8ef4 + 0x10d8ebc));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  return iVar1;
}

