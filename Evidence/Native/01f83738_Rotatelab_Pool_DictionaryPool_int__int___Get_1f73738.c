/* IL2CPP: Rotatelab.Pool.DictionaryPool<int, int>$$Get
Rotatelab_Pool_PooledObject_Dictionary_T__Y___o Rotatelab_Pool_DictionaryPool_int__int___Get (System_Collections_Generic_Dictionary_T__Y__o** value, const MethodInfo_1F73738* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.DictionaryPool<int, int>$$Get
   Rotatelab_Pool_PooledObject_Dictionary_T__Y___o Rotatelab_Pool_DictionaryPool_int__int___Get
   (System_Collections_Generic_Dictionary_T__Y__o** value, const MethodInfo_1F73738* method); */

void Rotatelab_Pool_DictionaryPool_int__int___Get_1f73738
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

