/* IL2CPP: Rotatelab.PooledClosure.PooledAction<object, Int32Enum>$$Get
System_Action_o* Rotatelab_PooledClosure_PooledAction_object__Int32Enum___Get (Il2CppObject* parameter1, int32_t parameter2, System_Action_P1__P2__o* callback, const MethodInfo_186E55C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.PooledClosure.PooledAction<object, Int32Enum>$$Get
   System_Action_o* Rotatelab_PooledClosure_PooledAction_object__Int32Enum___Get (Il2CppObject*
   parameter1, int32_t parameter2, System_Action_P1__P2__o* callback, const MethodInfo_186E55C*
   method); */

undefined4
Rotatelab_PooledClosure_PooledAction_object__Int32Enum___Get_186e55c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_4 + 0x10);
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
  iVar1 = *(int *)(param_4 + 0x10);
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
  if ((*(ushort *)(*(int *)(param_4 + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  iVar2 = *(int *)(param_4 + 0x10);
  if (*(int *)(iVar1 + 0xc) < 1) {
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    if ((*(ushort *)(*(int *)(*(int *)(iVar2 + 0x60) + 4) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iVar1 = thunk_FUN_00f00cdc();
    iVar2 = *(int *)(param_4 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    Rotatelab_PooledClosure_PooledAction_object__Int32Enum____ctor_186e4cc
              (iVar1,*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x14));
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
    iVar1 = *(int *)(param_4 + 0x10);
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
    iVar2 = *(int *)(param_4 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    iVar1 = System_Collections_Generic_Stack_object___Pop_1b04e0c
                      (iVar1,*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x18));
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

