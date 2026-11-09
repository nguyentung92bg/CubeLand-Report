/* IL2CPP: Rotatelab.Pool.GenericPool<object>$$Release
void Rotatelab_Pool_GenericPool_object___Release (Il2CppObject* value, const MethodInfo_240597C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.GenericPool<object>$$Release
   void Rotatelab_Pool_GenericPool_object___Release (Il2CppObject* value, const MethodInfo_240597C*
   method); */

void Rotatelab_Pool_GenericPool_object___Release_240597c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  iVar2 = *(int *)(param_2 + 0x10);
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
  iVar2 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x60) + 8);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar2 = **(int **)(iVar2 + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar3 + 0x60) + 0x14);
  iVar3 = *(int *)(iVar2 + 0xc);
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),param_1,*(undefined4 *)(iVar3 + 0x14));
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar2 + 8);
  uVar6 = *(uint *)(iVar2 + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar6 < *(uint *)(iVar3 + 0xc)) {
    puVar1 = (undefined4 *)(iVar3 + uVar6 * 4 + 0x10);
    *puVar1 = param_1;
    thunk_FUN_00ec5080(puVar1,param_1);
    *(uint *)(iVar2 + 0xc) = uVar6 + 1;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    return;
  }
  piVar5 = (int *)(iVar2 + 8);
  if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar5 + 0xc) == 0) {
    iVar3 = 4;
  }
  else {
    if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*piVar5 + 0xc) << 1;
  }
  System_Array__Resize_object__138a144
            (piVar5,iVar3,
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar4 + 0x10)
                                                                             + 0x60) + 0x34) + 0x10)
                                                  + 0x60) + 0x34) + 0x10) + 0x60) + 0x38));
  iVar3 = *(int *)(iVar2 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar3 + 0xc) <= *(uint *)(iVar2 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar1 = (undefined4 *)(iVar3 + *(uint *)(iVar2 + 0xc) * 4 + 0x10);
  *puVar1 = param_1;
  thunk_FUN_00ec5080(puVar1,param_1);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  return;
}

