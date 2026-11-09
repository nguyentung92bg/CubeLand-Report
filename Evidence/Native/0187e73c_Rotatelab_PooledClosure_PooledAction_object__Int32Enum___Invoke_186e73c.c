/* IL2CPP: Rotatelab.PooledClosure.PooledAction<object, Int32Enum>$$Invoke
void Rotatelab_PooledClosure_PooledAction_object__Int32Enum___Invoke (Rotatelab_PooledClosure_PooledAction_P1__P2__o* __this, const MethodInfo_186E73C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.PooledClosure.PooledAction<object, Int32Enum>$$Invoke
   void Rotatelab_PooledClosure_PooledAction_object__Int32Enum___Invoke
   (Rotatelab_PooledClosure_PooledAction_P1__P2__o* __this, const MethodInfo_186E73C* method); */

void Rotatelab_PooledClosure_PooledAction_object__Int32Enum___Invoke_186e73c
               (int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar2 = (int *)(param_1 + 8);
  iVar3 = *piVar2;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x10);
  *piVar2 = 0;
  thunk_FUN_00ec5080(piVar2,0);
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Stack_object___Push_1b04f08
            (**(int **)(iVar1 + 0x5c),param_1,
             *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x28));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x0187e808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 0xc))
            (*(undefined4 *)(iVar3 + 0x20),uVar4,uVar5,*(undefined4 *)(iVar3 + 0x14));
  return;
}

