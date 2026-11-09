/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$IsAnyBoosterActive
bool Rotatelab_Boosters_BaseBoosterController__IsAnyBoosterActive (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BaseBoosterController$$IsAnyBoosterActive
   bool Rotatelab_Boosters_BaseBoosterController__IsAnyBoosterActive (const MethodInfo* method); */

bool Rotatelab_Boosters_BaseBoosterController__IsAnyBoosterActive_113256c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_011425ec + 0x114257c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011425f0 + 0x1142590));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011425f4 + 0x114259c));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_011425f8 + 0x11425b0);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return 0 < *(int *)(**(int **)(iVar1 + 0x5c) + 0xc);
}

