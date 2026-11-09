/* IL2CPP: Rotatelab.BetterWaitForSeconds$$Wait
UnityEngine_CustomYieldInstruction_o* Rotatelab_BetterWaitForSeconds__Wait (float seconds, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.BetterWaitForSeconds$$Wait
   UnityEngine_CustomYieldInstruction_o* Rotatelab_BetterWaitForSeconds__Wait (float seconds, const
   MethodInfo* method); */

int Rotatelab_BetterWaitForSeconds__Wait_107c5ac(float param_1)

{
  int iVar1;
  float fVar2;
  char *pcVar3;
  int *piVar4;
  
  pcVar3 = (char *)(_UNK_0108c6d8 + 0x108c5c4);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c6dc + 0x108c5d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c6e0 + 0x108c5e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c6e4 + 0x108c5f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108c6e8 + 0x108c5fc));
    *pcVar3 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0108c6ec + 0x108c610);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(**(int **)(iVar1 + 0x5c) + 0xc) < 1) {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0108c6f4 + 0x108c698));
    UnityEngine_CustomYieldInstruction___ctor_35ff10c(iVar1,0);
  }
  else {
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_Stack_object___Pop_1b04e0c
                      (**(int **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0108c6f0 + 0x108c67c));
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar2 = (float)UnityEngine_Time__get_time_3610900(0);
  *(float *)(iVar1 + 8) = fVar2 + param_1;
  return iVar1;
}

