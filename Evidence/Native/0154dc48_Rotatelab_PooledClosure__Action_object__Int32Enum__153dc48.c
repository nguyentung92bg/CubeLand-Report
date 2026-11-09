/* IL2CPP: Rotatelab.PooledClosure$$Action<object, Int32Enum>
System_Action_o* Rotatelab_PooledClosure__Action_object__Int32Enum_ (Il2CppObject* parameter1, int32_t parameter2, System_Action_P1__P2__o* callback, const MethodInfo_153DC48* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.PooledClosure$$Action<object, Int32Enum>
   System_Action_o* Rotatelab_PooledClosure__Action_object__Int32Enum_ (Il2CppObject* parameter1,
   int32_t parameter2, System_Action_P1__P2__o* callback, const MethodInfo_153DC48* method); */

undefined4
Rotatelab_PooledClosure__Action_object__Int32Enum__153dc48
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_4 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(param_4);
    iVar1 = *(int *)(param_4 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
  iVar1 = *(int *)(iVar3 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = *(int *)(iVar3 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((*(ushort *)(*(int *)(iVar3 + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  iVar2 = *(int *)(iVar3 + 0x10);
  if (*(int *)(iVar1 + 0xc) < 1) {
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    if ((*(ushort *)(*(int *)(*(int *)(iVar2 + 0x60) + 4) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iVar1 = thunk_FUN_00f00cdc();
    iVar3 = *(int *)(iVar3 + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    Rotatelab_PooledClosure_PooledAction_object__Int32Enum____ctor_186e4cc
              (iVar1,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x14));
  }
  else {
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar2 + 0x60) + 0xc);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = *(int *)(iVar3 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar3 + 0x10);
    if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    iVar1 = System_Collections_Generic_Stack_object___Pop_1b04e0c
                      (iVar1,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x18));
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_3);
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0xc),param_1);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  return *(undefined4 *)(iVar1 + 0x14);
}

