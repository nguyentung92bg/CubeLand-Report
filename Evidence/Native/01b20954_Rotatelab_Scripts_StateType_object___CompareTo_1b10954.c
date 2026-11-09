/* IL2CPP: Rotatelab.Scripts.StateType<object>$$CompareTo
int32_t Rotatelab_Scripts_StateType_object___CompareTo (Rotatelab_Scripts_StateType_T__o* __this, Il2CppObject* other, const MethodInfo_1B10954* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.StateType<object>$$CompareTo
   int32_t Rotatelab_Scripts_StateType_object___CompareTo (Rotatelab_Scripts_StateType_T__o* __this,
   Il2CppObject* other, const MethodInfo_1B10954* method); */

void Rotatelab_Scripts_StateType_object___CompareTo_1b10954(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uStack_14;
  
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  iVar1 = **(int **)(*(int *)(param_3 + 0x10) + 0x60);
  if ((*(byte *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768(iVar1);
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (((uint)*(byte *)(*param_2 + 0xb8) < (uint)*(byte *)(iVar1 + 0xb8)) ||
     (*(int *)(*(int *)(*param_2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) != iVar1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(param_2);
  }
  iVar1 = **(int **)(*(int *)(param_3 + 0x10) + 0x60);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768(iVar1);
  }
  if (((uint)*(byte *)(iVar1 + 0xb8) <= (uint)*(byte *)(*param_2 + 0xb8)) &&
     (*(int *)(*(int *)(*param_2 + 100) + (uint)*(byte *)(iVar1 + 0xb8) * 4 + -4) == iVar1)) {
    System_Int32__CompareTo_2b6b964(&uStack_14,param_2[3],0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(param_2);
}

