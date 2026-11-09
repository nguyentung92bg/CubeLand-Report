/* IL2CPP: Rotatelab.PooledClosure.PooledAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Get
System_Action_o* Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Get (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter1, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter2, System_Action_P1__P2__o* callback, const MethodInfo_186E980* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PooledClosure.PooledAction<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>$$Get
   System_Action_o*
   Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Get
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter1,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter2, System_Action_P1__P2__o*
   callback, const MethodInfo_186E980* method); */

void Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Get_186e980
               (undefined4 ****param_1,undefined4 ****param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 ****ppppuVar6;
  ushort uVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  int aiStack_58 [2];
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined4 ***pppuStack_40;
  int iStack_3c;
  undefined4 ***pppuStack_38;
  undefined4 ***pppuStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0187ee18 + 0x187e9a8);
  iVar1 = *(int *)(param_4 + 0x10);
  uVar7 = *(ushort *)(iVar1 + 0xbd);
  iVar2 = iVar1;
  uStack_48 = param_3;
  pppuStack_40 = param_1;
  pppuStack_38 = param_2;
  pppuStack_34 = param_1;
  if ((uVar7 & 1) == 0) {
    iVar2 = FUN_00efd768();
    iVar1 = *(int *)(param_4 + 0x10);
    uVar7 = *(ushort *)(iVar1 + 0xbd);
  }
  iVar8 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x20) + 0x84);
  iVar2 = iVar1;
  if ((uVar7 & 1) == 0) {
    iVar2 = FUN_00efd768();
    iVar1 = *(int *)(param_4 + 0x10);
    uVar7 = *(ushort *)(iVar1 + 0xbd);
  }
  iVar12 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 0x24) + 0x84);
  puVar11 = auStack_50 + -(iVar8 + 7U & 0xfffffff8);
  iVar2 = (int)puVar11 - (iVar12 + 7U & 0xfffffff8);
  if ((uVar7 & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = *(int *)(param_4 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
  puStack_44 = puVar11;
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_4 + 0x10);
  uVar7 = *(ushort *)(iVar3 + 0xbd);
  iVar4 = iVar3;
  iStack_3c = iVar8;
  if ((uVar7 & 1) == 0) {
    iVar4 = FUN_00efd768();
    iVar3 = *(int *)(param_4 + 0x10);
    uVar7 = *(ushort *)(iVar3 + 0xbd);
  }
  pcVar9 = (code *)**(undefined4 **)(*(int *)(iVar4 + 0x60) + 0x10);
  if ((uVar7 & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  iVar1 = (*pcVar9)(iVar1,*(undefined4 *)(*(int *)(iVar3 + 0x60) + 0x10));
  puVar11 = puStack_44;
  iVar8 = *(int *)(param_4 + 0x10);
  if (iVar1 < 1) {
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768();
    }
    if ((*(ushort *)(*(int *)(*(int *)(iVar8 + 0x60) + 4) + 0xbd) & 1) == 0) {
      FUN_00efd768();
    }
    iVar8 = thunk_FUN_00f00cdc();
    iVar4 = *(int *)(param_4 + 0x10);
    uVar7 = *(ushort *)(iVar4 + 0xbd);
    iVar1 = iVar4;
    if ((uVar7 & 1) == 0) {
      iVar1 = FUN_00efd768();
      iVar4 = *(int *)(param_4 + 0x10);
      uVar7 = *(ushort *)(iVar4 + 0xbd);
    }
    pcVar9 = (code *)**(undefined4 **)(*(int *)(iVar1 + 0x60) + 0x14);
    if ((uVar7 & 1) == 0) {
      iVar4 = FUN_00efd768();
    }
    (*pcVar9)(iVar8,*(undefined4 *)(*(int *)(iVar4 + 0x60) + 0x14));
  }
  else {
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar8 + 0x60) + 0xc);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar1 = *(int *)(param_4 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x60) + 0xc);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    iVar1 = **(int **)(iVar1 + 0x5c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(param_4 + 0x10);
    uVar7 = *(ushort *)(iVar4 + 0xbd);
    iVar8 = iVar4;
    iStack_4c = iVar2;
    if ((uVar7 & 1) == 0) {
      iVar8 = FUN_00efd768();
      iVar4 = *(int *)(param_4 + 0x10);
      uVar7 = *(ushort *)(iVar4 + 0xbd);
    }
    uVar10 = **(undefined4 **)(*(int *)(iVar8 + 0x60) + 0x18);
    if ((uVar7 & 1) == 0) {
      iVar4 = FUN_00efd768();
    }
    iVar8 = *(int *)(*(int *)(iVar4 + 0x60) + 0x18);
    pcVar9 = *(code **)(iVar8 + 8);
    *(int **)(iVar2 + -8) = &iStack_30;
    (*pcVar9)(uVar10,iVar8,iVar1,0);
    iVar2 = iStack_4c;
    puVar11 = puStack_44;
    iVar8 = iStack_30;
  }
  iVar1 = iStack_3c;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(param_4 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  func_0x00b8fd54(iVar8,*(int *)(*(int *)(*(int *)(iVar4 + 0x60) + 4) + 0x40) + 0x14,uStack_48);
  iVar4 = *(int *)(param_4 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  ppppuVar6 = &pppuStack_34;
  if (*(int *)(*(int *)(*(int *)(iVar4 + 0x60) + 0x20) + 0x14) < 0) {
    ppppuVar6 = (undefined4 ****)pppuStack_40;
  }
  thunk_FUN_00f95db8(puVar11,ppppuVar6,iVar1);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(param_4 + 0x10);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  func_0x00ec37e8(iVar8,*(int *)(*(int *)(*(int *)(iVar4 + 0x60) + 4) + 0x40) + 0x28,puVar11,iVar1);
  iVar1 = *(int *)(param_4 + 0x10);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  ppppuVar6 = &pppuStack_38;
  if (*(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 0x24) + 0x14) < 0) {
    ppppuVar6 = param_2;
  }
  thunk_FUN_00f95db8(iVar2,ppppuVar6,iVar12);
  if (iVar8 != 0) {
    iVar1 = *(int *)(param_4 + 0x10);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
    }
    func_0x00ec37e8(iVar8,*(int *)(*(int *)(*(int *)(iVar1 + 0x60) + 4) + 0x40) + 0x3c,iVar2,iVar12)
    ;
    iVar2 = *(int *)(param_4 + 0x10);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768();
    }
    puVar5 = (undefined4 *)
             thunk_FUN_00f1b490(iVar8,*(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 4) + 0x40) + 0x50);
    if (**(int **)(_UNK_0187ee1c + 0x187ee04) == iStack_2c) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(*puVar5);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

