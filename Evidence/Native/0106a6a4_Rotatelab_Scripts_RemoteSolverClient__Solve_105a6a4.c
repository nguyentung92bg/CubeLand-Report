/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient$$Solve
System_Collections_IEnumerator_o* Rotatelab_Scripts_RemoteSolverClient__Solve (Rotatelab_Scripts_LevelDataWire_o* level, System_Collections_Generic_List_int____o* shootableCells, int32_t seed, System_Action_SolveStreamEvent__o* onProgress, System_Action_SolveResult__o* onResult, System_Action_string__o* onError, System_Action_UnityWebRequest__o* onRequestStarted, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.RemoteSolverClient$$Solve
   System_Collections_IEnumerator_o* Rotatelab_Scripts_RemoteSolverClient__Solve
   (Rotatelab_Scripts_LevelDataWire_o* level, System_Collections_Generic_List_int____o*
   shootableCells, int32_t seed, System_Action_SolveStreamEvent__o* onProgress,
   System_Action_SolveResult__o* onResult, System_Action_string__o* onError,
   System_Action_UnityWebRequest__o* onRequestStarted, const MethodInfo* method); */

int Rotatelab_Scripts_RemoteSolverClient__Solve_105a6a4
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_0106a78c + 0x106a6c4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0106a790 + 0x106a6dc));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0106a794 + 0x106a6f8));
  Rotatelab_Scripts_RemoteSolverClient__Solve_d__5___ctor_105b42c(iVar1,0,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 0x14) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x14),param_1);
  *(undefined4 *)(iVar1 + 0x1c) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x1c),param_2);
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_4);
  *(undefined4 *)(iVar1 + 0x2c) = param_5;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x2c),param_5);
  *(undefined4 *)(iVar1 + 0x24) = param_6;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x24),param_6);
  *(undefined4 *)(iVar1 + 0x20) = param_7;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x20),param_7);
  return iVar1;
}

