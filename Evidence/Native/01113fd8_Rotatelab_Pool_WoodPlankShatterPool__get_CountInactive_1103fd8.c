/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$get_CountInactive
int32_t Rotatelab_Pool_WoodPlankShatterPool__get_CountInactive (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$get_CountInactive
   int32_t Rotatelab_Pool_WoodPlankShatterPool__get_CountInactive
   (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Pool_WoodPlankShatterPool__get_CountInactive_1103fd8(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01114020 + 0x1113fec);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01114024 + 0x1114000));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(*(int *)(param_1 + 0x24) + 0xc);
}

