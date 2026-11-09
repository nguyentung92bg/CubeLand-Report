/* IL2CPP: Rotatelab.BetterWaitForSeconds$$WaitRealtime
UnityEngine_CustomYieldInstruction_o* Rotatelab_BetterWaitForSeconds__WaitRealtime (float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.BetterWaitForSeconds$$WaitRealtime
   UnityEngine_CustomYieldInstruction_o* Rotatelab_BetterWaitForSeconds__WaitRealtime (float
   seconds, const MethodInfo* method); */

int Rotatelab_BetterWaitForSeconds__WaitRealtime_107c72c(float param_1)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_0108c858 + 0x108c744);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c85c + 0x108c758));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c860 + 0x108c764));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c864 + 0x108c770));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c868 + 0x108c77c));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0108c86c + 0x108c790);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xc) < 1) {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c874 + 0x108c818));
    UnityEngine_CustomYieldInstruction___ctor_35ff10c(iVar1,0);
  }
  else {
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_Stack_object___Pop_1b04e0c
                      (iVar1,**(undefined4 **)(_UNK_0108c870 + 0x108c7fc));
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
  *(float *)(iVar1 + 8) = fVar2 + param_1;
  return iVar1;
}

