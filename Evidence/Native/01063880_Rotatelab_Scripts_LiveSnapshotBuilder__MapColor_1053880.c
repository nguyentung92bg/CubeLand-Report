/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$MapColor
int32_t Rotatelab_Scripts_LiveSnapshotBuilder__MapColor (int32_t live, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LiveSnapshotBuilder$$MapColor
   int32_t Rotatelab_Scripts_LiveSnapshotBuilder__MapColor (int32_t live, const MethodInfo* method);
    */

undefined4 Rotatelab_Scripts_LiveSnapshotBuilder__MapColor_1053880(uint param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_01063900 + 0x1063894);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01063904 + 0x10638a8));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_01063908 + 0x10638bc);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return *(undefined4 *)(iVar1 + param_1 * 4 + 0x10);
}

