/* IL2CPP: Rotatelab.Pool.HashSetPool.<>c<Vector3Int>$$.cctor
void Rotatelab_Pool_HashSetPool___c_Vector3Int____cctor (const MethodInfo_176743C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.HashSetPool.<>c<Vector3Int>$$.cctor
   void Rotatelab_Pool_HashSetPool___c_Vector3Int____cctor (const MethodInfo_176743C* method); */

void Rotatelab_Pool_HashSetPool___c_Vector3Int____cctor_176743c(int param_1)

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
  if ((*(ushort *)(**(int **)(iVar3 + 0x60) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  uVar4 = thunk_FUN_00f00cdc();
  if ((*(ushort *)(*(int *)(param_1 + 0x10) + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  System_Object___ctor_2bb93bc(uVar4,0);
  iVar3 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x60) + 8);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  iVar5 = *(int *)(param_1 + 0x10);
  **(undefined4 **)(iVar3 + 0x5c) = uVar4;
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768();
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x60) + 8);
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

