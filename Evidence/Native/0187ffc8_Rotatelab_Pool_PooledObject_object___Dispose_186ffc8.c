/* IL2CPP: Rotatelab.Pool.PooledObject<object>$$Dispose
void Rotatelab_Pool_PooledObject_object___Dispose (Rotatelab_Pool_PooledObject_T__o __this, const MethodInfo_186FFC8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Pool.PooledObject<object>$$Dispose
   void Rotatelab_Pool_PooledObject_object___Dispose (Rotatelab_Pool_PooledObject_T__o __this, const
   MethodInfo_186FFC8* method); */

void Rotatelab_Pool_PooledObject_object___Dispose_186ffc8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = *param_1;
  iVar6 = param_1[1];
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar3 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
  iVar1 = *(int *)(iVar6 + 0xc);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),uVar4,*(undefined4 *)(iVar1 + 0x14));
  }
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar6 + 8);
  uVar7 = *(uint *)(iVar6 + 0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar7 < *(uint *)(iVar1 + 0xc)) {
    puVar2 = (undefined4 *)(iVar1 + uVar7 * 4 + 0x10);
    *puVar2 = uVar4;
    thunk_FUN_00ec5080(puVar2,uVar4);
    *(uint *)(iVar6 + 0xc) = uVar7 + 1;
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    return;
  }
  piVar5 = (int *)(iVar6 + 8);
  if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar5 + 0xc) == 0) {
    iVar1 = 4;
  }
  else {
    if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*piVar5 + 0xc) << 1;
  }
  System_Array__Resize_object__138a144
            (piVar5,iVar1,
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar3 + 0x10)
                                                                             + 0x60) + 0x34) + 0x10)
                                                  + 0x60) + 0x34) + 0x10) + 0x60) + 0x38));
  iVar1 = *(int *)(iVar6 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= *(uint *)(iVar6 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  puVar2 = (undefined4 *)(iVar1 + *(uint *)(iVar6 + 0xc) * 4 + 0x10);
  *puVar2 = uVar4;
  thunk_FUN_00ec5080(puVar2,uVar4);
  *(int *)(iVar6 + 0xc) = *(int *)(iVar6 + 0xc) + 1;
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  return;
}

