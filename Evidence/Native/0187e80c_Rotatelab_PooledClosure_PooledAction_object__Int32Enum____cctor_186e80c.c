/* IL2CPP: Rotatelab.PooledClosure.PooledAction<object, Int32Enum>$$.cctor
void Rotatelab_PooledClosure_PooledAction_object__Int32Enum____cctor (const MethodInfo_186E80C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PooledClosure.PooledAction<object, Int32Enum>$$.cctor
   void Rotatelab_PooledClosure_PooledAction_object__Int32Enum____cctor (const MethodInfo_186E80C*
   method); */

void Rotatelab_PooledClosure_PooledAction_object__Int32Enum____cctor_186e80c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  if ((*(ushort *)(*(int *)(*(int *)(iVar3 + 0x60) + 8) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar4 = thunk_FUN_00f00cdc();
  iVar3 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  System_Collections_Generic_Stack_object____ctor_1b04850
            (uVar4,0x10,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x30));
  iVar3 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 0xc);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  iVar5 = *(int *)(param_1 + 0x10);
  **(undefined4 **)(iVar3 + 0x5c) = uVar4;
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768();
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 0xc);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + (*(uint *)(iVar3 + 0x5c) >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << ((*(uint *)(iVar3 + 0x5c) & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

