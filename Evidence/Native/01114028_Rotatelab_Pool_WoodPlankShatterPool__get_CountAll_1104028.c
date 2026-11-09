/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$get_CountAll
int32_t Rotatelab_Pool_WoodPlankShatterPool__get_CountAll (Rotatelab_Pool_WoodPlankShatterPool_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.WoodPlankShatterPool$$get_CountAll
   int32_t Rotatelab_Pool_WoodPlankShatterPool__get_CountAll (Rotatelab_Pool_WoodPlankShatterPool_o*
   __this, const MethodInfo* method); */

int Rotatelab_Pool_WoodPlankShatterPool__get_CountAll_1104028(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_01114088 + 0x111403c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111408c + 0x1114050));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(int *)(*(int *)(param_1 + 0x24) + 0xc) + *(int *)(*(int *)(param_1 + 0x20) + 0xc);
}

