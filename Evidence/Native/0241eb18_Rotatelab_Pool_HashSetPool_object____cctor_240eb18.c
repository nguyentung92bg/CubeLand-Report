/* IL2CPP: Rotatelab.Pool.HashSetPool<object>$$.cctor
void Rotatelab_Pool_HashSetPool_object____cctor (const MethodInfo_240EB18* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.HashSetPool<object>$$.cctor
   void Rotatelab_Pool_HashSetPool_object____cctor (const MethodInfo_240EB18* method); */

void Rotatelab_Pool_HashSetPool_object____cctor_240eb18(int param_1)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0x1c);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 0x1c);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar5 = *(int *)(param_1 + 0x10);
  uVar7 = **(undefined4 **)(iVar4 + 0x5c);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768();
  }
  if ((*(ushort *)(*(int *)(*(int *)(iVar5 + 0x60) + 0x24) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar6 = thunk_FUN_00f00cdc();
  iVar5 = *(int *)(param_1 + 0x10);
  uVar1 = *(ushort *)(iVar5 + 0xbd);
  iVar4 = iVar5;
  if ((uVar1 & 1) == 0) {
    iVar4 = FUN_00efd768();
    iVar5 = *(int *)(param_1 + 0x10);
    uVar1 = *(ushort *)(iVar5 + 0xbd);
  }
  uVar8 = *(undefined4 *)(*(int *)(iVar4 + 0x60) + 0x20);
  if ((uVar1 & 1) == 0) {
    iVar5 = FUN_00efd768();
  }
  System_Action_object____ctor_1f11414
            (uVar6,uVar7,uVar8,*(undefined4 *)(*(int *)(iVar5 + 0x60) + 0x28));
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  if ((*(ushort *)(*(int *)(*(int *)(iVar4 + 0x60) + 4) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar7 = thunk_FUN_00f00cdc();
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  Rotatelab_Pool_CollectionPool_object____ctor_1e89f04
            (uVar7,uVar6,*(undefined4 *)(*(int *)(iVar4 + 0x60) + 0x2c));
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar5 = *(int *)(param_1 + 0x10);
  **(undefined4 **)(iVar4 + 0x5c) = uVar7;
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  if (*(int *)(_UNK_00f30580 + 0xf30540) == 0) {
    return;
  }
  puVar3 = (uint *)(_UNK_00f30584 + (*(uint *)(iVar4 + 0x5c) >> 0x11) * 4 + 0xf547cc);
  do {
    bVar2 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar2);
  *puVar3 = *puVar3 | 1 << ((*(uint *)(iVar4 + 0x5c) & 0x1ffff) >> 0xc);
  return;
}

