/* IL2CPP: Rotatelab.Pool.GenericPool<object>$$Get
Il2CppObject* Rotatelab_Pool_GenericPool_object___Get (const MethodInfo_24058D0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Pool.GenericPool<object>$$Get
   Il2CppObject* Rotatelab_Pool_GenericPool_object___Get (const MethodInfo_24058D0* method); */

uint Rotatelab_Pool_GenericPool_object___Get_24058d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uStack_14;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
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
  iVar4 = *(int *)(*(int *)(iVar4 + 0x60) + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar4 = **(int **)(iVar4 + 0x5c);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768();
  }
  iVar5 = *(int *)(*(int *)(iVar5 + 0x60) + 0xc);
  if (*(int *)(iVar4 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar4 + 8) + 0xc) < 1) {
    iVar4 = *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x14);
    puVar6 = *(undefined4 **)(iVar4 + 0x1c);
    if (puVar6 == (undefined4 *)0x0) {
      FUN_00ec37c0(*(undefined4 *)(_UNK_013aafac + 0x13aae0c));
      puVar6 = *(undefined4 **)(iVar4 + 0x1c);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_00efd7c4(iVar4);
        puVar6 = *(undefined4 **)(iVar4 + 0x1c);
      }
    }
    uStack_14 = 0;
    uVar7 = *puVar6;
    if (*(int *)(*(int *)(*(int *)(_UNK_013aafb0 + 0x13aae34) + 0x70) + 0x74) == 0) {
      FUN_00ec3934();
    }
    piVar1 = (int *)System_Type__GetTypeFromHandle_2b80928(uVar7,0);
    if (piVar1 != (int *)0x0) {
      uVar10 = (uint)*(byte *)(**(int **)(_UNK_013aafb4 + 0x13aae70) + 0xb8);
      if ((uVar10 <= *(byte *)(*piVar1 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar1 + 100) + uVar10 * 4 + -4) ==
          **(int **)(_UNK_013aafb4 + 0x13aae70))) {
        iVar5 = System_Type__get_HasElementType_2b8c1cc(piVar1,0);
        if (iVar5 != 0) {
          uVar7 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013aafb8 + 0x13aaf70));
          uVar7 = System_Environment__GetResourceString_2bb93b4(uVar7,0);
          thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_013aafbc + 0x13aaf88));
          uVar2 = thunk_FUN_00f00cdc();
          System_MissingMethodException___ctor_2b71e10(uVar2,uVar7,0);
          func_0x00ec3920(uVar2,iVar4);
                    /* WARNING: Subroutine does not return */
          FUN_00ec3760();
        }
        uStack_14 = 1;
        uVar10 = 0;
        iVar5 = System_RuntimeType__CreateInstanceDefaultCtor_2b9d98c(piVar1,1,1,1,1,&uStack_14,0);
        iVar4 = *(int *)(*(int *)(iVar4 + 0x1c) + 4);
        if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
          iVar4 = FUN_00efd768(iVar4);
        }
        if ((iVar5 != 0) && (uVar10 = thunk_FUN_00f00bc8(iVar5,iVar4), uVar10 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00ec3e28(iVar5,iVar4);
        }
        return uVar10;
      }
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *(int *)(iVar4 + 8);
  uVar10 = *(int *)(iVar4 + 0xc) - 1;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar10 < *(uint *)(iVar9 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar10;
    puVar3 = (uint *)(iVar9 + uVar10 * 4 + 0x10);
    uVar10 = *puVar3;
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    *puVar3 = 0;
    thunk_FUN_00ec5080();
    return uVar10;
  }
  iVar4 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x60) + 0x1c) + 0x10) + 0x60)
  ;
  uVar12 = System_Collections_Generic_Stack_object___ThrowForEmptyStack_1b05140
                     (iVar4,*(undefined4 *)(iVar4 + 0x2c));
  puVar6 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
  iVar4 = (int)uVar12;
  iVar5 = *(int *)(iVar4 + 8);
  uVar10 = *(int *)(iVar4 + 0xc) - 1;
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = *(uint *)(iVar5 + 0xc);
  if (uVar10 < uVar11) {
    iVar9 = iVar5 + uVar10 * 4;
    *(uint *)(iVar4 + 0xc) = uVar10;
    *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
    puVar8 = (undefined4 *)(iVar9 + 0x10);
    *puVar6 = *puVar8;
    thunk_FUN_00ec5080(puVar6);
    if (*(uint *)(iVar5 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *puVar8 = 0;
    thunk_FUN_00ec5080(iVar9 + 0x10,0);
  }
  else {
    *puVar6 = 0;
  }
  return (uint)(uVar10 < uVar11);
}

