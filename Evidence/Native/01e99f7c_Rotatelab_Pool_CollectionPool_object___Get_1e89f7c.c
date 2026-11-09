/* IL2CPP: Rotatelab.Pool.CollectionPool<object>$$Get
Il2CppObject* Rotatelab_Pool_CollectionPool_object___Get (Rotatelab_Pool_CollectionPool_T__o* __this, const MethodInfo_1E89F7C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.CollectionPool<object>$$Get
   Il2CppObject* Rotatelab_Pool_CollectionPool_object___Get (Rotatelab_Pool_CollectionPool_T__o*
   __this, const MethodInfo_1E89F7C* method); */

uint Rotatelab_Pool_CollectionPool_object___Get_1e89f7c(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 8) + 0xc) < 1) {
    iVar7 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x14);
    puVar4 = *(undefined4 **)(iVar7 + 0x1c);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_00ec37c0(*(undefined4 *)(_UNK_013aafac + 0x13aae0c));
      puVar4 = *(undefined4 **)(iVar7 + 0x1c);
      if (puVar4 == (undefined4 *)0x0) {
        FUN_00efd7c4(iVar7);
        puVar4 = *(undefined4 **)(iVar7 + 0x1c);
      }
    }
    uStack_14 = 0;
    uVar5 = *puVar4;
    if (*(int *)(*(int *)(*(int *)(_UNK_013aafb0 + 0x13aae34) + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar1 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar5,0);
    if (piVar1 != (int *)0x0) {
      uVar9 = (uint)*(byte *)(**(int **)(_UNK_013aafb4 + 0x13aae70) + 0xb8);
      if ((uVar9 <= *(byte *)(*piVar1 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar1 + 100) + uVar9 * 4 + -4) ==
          **(int **)(_UNK_013aafb4 + 0x13aae70))) {
        iVar8 = System_Type__get_HasElementType_2b8c1cc(piVar1,0);
        if (iVar8 != 0) {
          uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013aafb8 + 0x13aaf70));
          uVar5 = System_Environment__GetResourceString_2bb93b4(uVar5,0);
          thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013aafbc + 0x13aaf88));
          uVar2 = thunk_FUN_00f00cdc();
          System_MissingMethodException___ctor_2b71e10(uVar2,uVar5,0);
          func_0x00ec3920(uVar2,iVar7);
                    /* WARNING: Subroutine does not return */
          FUN_00ec3760();
        }
        uStack_14 = 1;
        uVar9 = 0;
        iVar8 = System_RuntimeType__CreateInstanceDefaultCtor_2b9d98c(piVar1,1,1,1,1,&uStack_14,0);
        iVar7 = *(int *)(*(int *)(iVar7 + 0x1c) + 4);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = FUN_00efd768(iVar7);
        }
        if ((iVar8 != 0) && (uVar9 = thunk_FUN_00f00bc8(iVar8,iVar7), uVar9 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28(iVar8,iVar7);
        }
        return uVar9;
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar7 + 8);
  uVar9 = *(int *)(iVar7 + 0xc) - 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar9 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar7 + 0xc) = uVar9;
    puVar3 = (uint *)(iVar8 + uVar9 * 4 + 0x10);
    uVar9 = *puVar3;
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    *puVar3 = 0;
    thunk_FUN_00ec5080();
    return uVar9;
  }
  iVar7 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x1c) + 0x10) +
                  0x60);
  uVar12 = System_Collections_Generic_Stack_object___ThrowForEmptyStack_1b05140
                     (iVar7,*(undefined4 *)(iVar7 + 0x2c));
  puVar4 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
  iVar7 = (int)uVar12;
  iVar8 = *(int *)(iVar7 + 8);
  uVar9 = *(int *)(iVar7 + 0xc) - 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = *(uint *)(iVar8 + 0xc);
  if (uVar9 < uVar10) {
    iVar11 = iVar8 + uVar9 * 4;
    *(uint *)(iVar7 + 0xc) = uVar9;
    *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
    puVar6 = (undefined4 *)(iVar11 + 0x10);
    *puVar4 = *puVar6;
    thunk_FUN_00ec5080(puVar4);
    if (*(uint *)(iVar8 + 0xc) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *puVar6 = 0;
    thunk_FUN_00ec5080(iVar11 + 0x10,0);
  }
  else {
    *puVar4 = 0;
  }
  return (uint)(uVar9 < uVar10);
}

