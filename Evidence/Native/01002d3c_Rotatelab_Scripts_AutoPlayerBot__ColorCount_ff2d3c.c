/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$ColorCount
int32_t Rotatelab_Scripts_AutoPlayerBot__ColorCount (Rotatelab_Scripts_AutoPlayerBot_o* __this, int32_t color, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$ColorCount
   int32_t Rotatelab_Scripts_AutoPlayerBot__ColorCount (Rotatelab_Scripts_AutoPlayerBot_o* __this,
   int32_t color, const MethodInfo* method); */

undefined4 Rotatelab_Scripts_AutoPlayerBot__ColorCount_ff2d3c(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (-1 < (int)param_2) {
    if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)param_2 < *(int *)(*(int *)(param_1 + 0x3c) + 0xc)) {
      iVar2 = *(int *)(param_1 + 0x3c);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar2 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      uVar1 = *(undefined4 *)(iVar2 + param_2 * 4 + 0x10);
    }
  }
  return uVar1;
}

