/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$get_CountActive
int32_t Rotatelab_Pool_WoodPlankShatterPool__get_CountActive (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$get_CountActive
   int32_t Rotatelab_Pool_WoodPlankShatterPool__get_CountActive
   (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Pool_WoodPlankShatterPool__get_CountActive_1103f88(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01113fd0 + 0x1113f9c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01113fd4 + 0x1113fb0));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc);
}

