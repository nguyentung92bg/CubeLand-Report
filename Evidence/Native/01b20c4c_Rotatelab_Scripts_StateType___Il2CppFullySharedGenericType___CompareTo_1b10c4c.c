/* IL2CPP: Rotatelab.Scripts.StateType<__Il2CppFullySharedGenericType>$$CompareTo
int32_t Rotatelab_Scripts_StateType___Il2CppFullySharedGenericType___CompareTo (Rotatelab_Scripts_StateType_T__o* __this, Il2CppObject* other, const MethodInfo_1B10C4C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Scripts.StateType<__Il2CppFullySharedGenericType>$$CompareTo
   int32_t Rotatelab_Scripts_StateType___Il2CppFullySharedGenericType___CompareTo
   (Rotatelab_Scripts_StateType_T__o* __this, Il2CppObject* other, const MethodInfo_1B10C4C*
   method); */

void Rotatelab_Scripts_StateType___Il2CppFullySharedGenericType___CompareTo_1b10c4c
               (undefined4 param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uStack_1c;
  
  uStack_1c = 0;
  uStack_1c = (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x14))();
  iVar3 = **(int **)(*(int *)(param_3 + 0x10) + 0x60);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768(iVar3);
  }
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (((uint)*(byte *)(*param_2 + 0xb8) < (uint)*(byte *)(iVar3 + 0xb8)) ||
     (*(int *)(*(int *)(*param_2 + 100) + (uint)*(byte *)(iVar3 + 0xb8) * 4 + -4) != iVar3)) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3e28(param_2);
  }
  piVar1 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
  iVar3 = *piVar1;
  pcVar4 = *(code **)piVar1[5];
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768(iVar3);
  }
  piVar1 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    if (((uint)*(byte *)(*param_2 + 0xb8) < (uint)*(byte *)(iVar3 + 0xb8)) ||
       (piVar1 = param_2,
       *(int *)(*(int *)(*param_2 + 100) + (uint)*(byte *)(iVar3 + 0xb8) * 4 + -4) != iVar3)) {
                    /* WARNING: Subroutine does not return */
      FUN_00ec3e28(param_2);
    }
  }
  uVar2 = (*pcVar4)(piVar1,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x14));
  System_Int32__CompareTo_2b6b964(&uStack_1c,uVar2,0);
  return;
}

