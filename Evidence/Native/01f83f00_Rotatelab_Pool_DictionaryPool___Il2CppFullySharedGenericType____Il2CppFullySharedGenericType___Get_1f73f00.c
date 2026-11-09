/* IL2CPP: Rotatelab.Pool.DictionaryPool<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Get
Rotatelab_Pool_PooledObject_Dictionary_T__Y___o Rotatelab_Pool_DictionaryPool___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Get (System_Collections_Generic_Dictionary_T__Y__o** value, const MethodInfo_1F73F00* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.DictionaryPool<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>$$Get
   Rotatelab_Pool_PooledObject_Dictionary_T__Y___o
   Rotatelab_Pool_DictionaryPool___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Get
   (System_Collections_Generic_Dictionary_T__Y__o** value, const MethodInfo_1F73F00* method); */

void Rotatelab_Pool_DictionaryPool___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Get_1f73f00
               (undefined4 *param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar2 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_3 + 0x10);
    uVar1 = *(ushort *)(iVar3 + 0xbd);
    iVar4 = iVar3;
    if ((uVar1 & 1) == 0) {
      iVar4 = FUN_00efd768();
      iVar3 = *(int *)(param_3 + 0x10);
      uVar1 = *(ushort *)(iVar3 + 0xbd);
    }
    pcVar5 = (code *)**(undefined4 **)(*(int *)(iVar4 + 0x60) + 0x10);
    if ((uVar1 & 1) == 0) {
      iVar3 = FUN_00efd768();
    }
    (*pcVar5)(&uStack_20,iVar2,param_2,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x10));
    *param_1 = uStack_20;
    param_1[1] = uStack_1c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

