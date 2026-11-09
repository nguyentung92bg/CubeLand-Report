/* IL2CPP: Rotatelab.Pool.CollectionPool<object>$$Release
void Rotatelab_Pool_CollectionPool_object___Release (Rotatelab_Pool_CollectionPool_T__o* __this, Il2CppObject* element, const MethodInfo_1E8A048* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.CollectionPool<object>$$Release
   void Rotatelab_Pool_CollectionPool_object___Release (Rotatelab_Pool_CollectionPool_T__o* __this,
   Il2CppObject* element, const MethodInfo_1E8A048* method); */

void Rotatelab_Pool_CollectionPool_object___Release_1e8a048
               (int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),param_2,*(undefined4 *)(iVar2 + 0x14));
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar2 + 8);
  uVar4 = *(uint *)(iVar2 + 0xc);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar4 < *(uint *)(iVar5 + 0xc)) {
    puVar1 = (undefined4 *)(iVar5 + uVar4 * 4 + 0x10);
    *puVar1 = param_2;
    thunk_FUN_00ec5080(puVar1,param_2);
    *(uint *)(iVar2 + 0xc) = uVar4 + 1;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    return;
  }
  piVar3 = (int *)(iVar2 + 8);
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar3 + 0xc) == 0) {
    iVar5 = 4;
  }
  else {
    if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*piVar3 + 0xc) << 1;
  }
  System_Array__Resize_object__138a144
            (piVar3,iVar5,
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_3 +
                                                                                      0x10) + 0x60)
                                                                    + 0x34) + 0x10) + 0x60) + 0x34)
                                + 0x10) + 0x60) + 0x38));
  iVar5 = *(int *)(iVar2 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) <= *(uint *)(iVar2 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar1 = (undefined4 *)(iVar5 + *(uint *)(iVar2 + 0xc) * 4 + 0x10);
  *puVar1 = param_2;
  thunk_FUN_00ec5080(puVar1,param_2);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  return;
}

