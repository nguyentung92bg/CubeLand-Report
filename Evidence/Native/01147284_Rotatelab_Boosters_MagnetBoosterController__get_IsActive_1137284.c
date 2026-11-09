/* IL2CPP: Rotatelab.Boosters.MagnetBoosterController$$get_IsActive
bool Rotatelab_Boosters_MagnetBoosterController__get_IsActive (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.MagnetBoosterController$$get_IsActive
   bool Rotatelab_Boosters_MagnetBoosterController__get_IsActive (const MethodInfo* method); */

bool Rotatelab_Boosters_MagnetBoosterController__get_IsActive_1137284(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_011472d8 + 0x1147294);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011472dc + 0x11472a8));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011472e0 + 0x11472bc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar2 = (char *)(_UNK_01142558 + 0x11424e0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114255c + 0x11424f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01142560 + 0x1142500));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01142564 + 0x1142514);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar1 = System_Array__IndexOf_Int32Enum__1642b7c
                        (*(undefined4 *)(iVar1 + 8),1,0,*(int *)(iVar1 + 0xc),
                         *(undefined4 *)
                          (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_01142568 +
                                                                                  0x114254c) + 0x10)
                                                              + 0x60) + 100) + 0x10) + 0x60) + 0xa4)
                        );
      return iVar1 != -1;
    }
    return false;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

