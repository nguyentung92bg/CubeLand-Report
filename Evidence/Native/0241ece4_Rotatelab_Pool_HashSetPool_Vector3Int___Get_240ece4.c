/* IL2CPP: Rotatelab.Pool.HashSetPool<Vector3Int>$$Get
Rotatelab_Pool_PooledObject_HashSet_T___o Rotatelab_Pool_HashSetPool_Vector3Int___Get (System_Collections_Generic_HashSet_T__o** value, const MethodInfo_240ECE4* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.HashSetPool<Vector3Int>$$Get
   Rotatelab_Pool_PooledObject_HashSet_T___o Rotatelab_Pool_HashSetPool_Vector3Int___Get
   (System_Collections_Generic_HashSet_T__o** value, const MethodInfo_240ECE4* method); */

void Rotatelab_Pool_HashSetPool_Vector3Int___Get_240ece4
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  Rotatelab_Pool_CollectionPool_object___Get_1e89fe0
            (&uStack_20,iVar1,param_2,*(undefined4 *)(*(int *)(iVar2 + 0x60) + 0x10));
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  return;
}

