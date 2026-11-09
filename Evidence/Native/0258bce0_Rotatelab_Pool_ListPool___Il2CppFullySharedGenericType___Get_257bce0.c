/* IL2CPP: Rotatelab.Pool.ListPool<__Il2CppFullySharedGenericType>$$Get
Rotatelab_Pool_PooledObject_List_T___o Rotatelab_Pool_ListPool___Il2CppFullySharedGenericType___Get (System_Collections_Generic_List_T__o** value, const MethodInfo_257BCE0* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.ListPool<__Il2CppFullySharedGenericType>$$Get
   Rotatelab_Pool_PooledObject_List_T___o
   Rotatelab_Pool_ListPool___Il2CppFullySharedGenericType___Get
   (System_Collections_Generic_List_T__o** value, const MethodInfo_257BCE0* method); */

void Rotatelab_Pool_ListPool___Il2CppFullySharedGenericType___Get_257bce0
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

