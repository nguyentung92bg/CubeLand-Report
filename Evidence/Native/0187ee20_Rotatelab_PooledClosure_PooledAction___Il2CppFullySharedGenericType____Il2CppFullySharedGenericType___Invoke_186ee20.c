/* IL2CPP: Rotatelab.PooledClosure.PooledAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Invoke
void Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Invoke (Rotatelab_PooledClosure_PooledAction_P1__P2__o* __this, const MethodInfo_186EE20* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PooledClosure.PooledAction<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>$$Invoke
   void 
   Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Invoke
   (Rotatelab_PooledClosure_PooledAction_P1__P2__o* __this, const MethodInfo_186EE20* method); */

void Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Invoke_186ee20
               (int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int aiStack_58 [2];
  int aiStack_50 [2];
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int *piStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0187f0bc + 0x187ee40);
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  iVar9 = *(int *)(*(int *)(iVar1 + 0x24) + 0x84);
  iVar7 = *(int *)(*(int *)(iVar1 + 0x20) + 0x84);
  uVar4 = iVar7 + 7U & 0xfffffff8;
  piVar12 = (int *)((int)aiStack_50 - uVar4);
  uVar6 = iVar9 + 7U & 0xfffffff8;
  piStack_48 = (int *)((int)piVar12 - uVar6);
  iVar11 = (int)piStack_48 - uVar4;
  iVar10 = iVar11 - uVar6;
  piVar2 = (int *)thunk_FUN_00f1b490(param_1,*(int *)(*(int *)(iVar1 + 4) + 0x40) + 0x14);
  aiStack_50[1] = *piVar2;
  uVar3 = thunk_FUN_00f1b490(param_1,*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4
                                                      ) + 0x40) + 0x28);
  iStack_44 = iVar11;
  thunk_FUN_00f95db8(iVar11,uVar3,iVar7);
  uVar3 = thunk_FUN_00f1b490(param_1,*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4
                                                      ) + 0x40) + 0x3c);
  iStack_40 = iVar10;
  thunk_FUN_00f95db8(iVar10,uVar3,iVar9);
  func_0x00b8fd54(param_1,*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4) + 0x40) +
                          0x14,0);
  uVar3 = thunk_FUN_00f1b490(param_1,*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4
                                                      ) + 0x40) + 0x28);
  iStack_3c = iVar7;
  FUN_00f88e5c(uVar3,iVar7);
  uVar3 = thunk_FUN_00f1b490(param_1,*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4
                                                      ) + 0x40) + 0x3c);
  iStack_38 = iVar9;
  FUN_00f88e5c(uVar3,iVar9);
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = aiStack_50[1];
  iVar7 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0xc);
  if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
    iVar7 = FUN_00efd768();
  }
  iVar7 = **(int **)(iVar7 + 0x5c);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x28);
  uVar3 = *puVar5;
  pcVar8 = (code *)puVar5[2];
  iStack_34 = param_1;
  *(int *)(iVar10 + -8) = param_1;
  (*pcVar8)(uVar3,puVar5,iVar7,&iStack_34);
  thunk_FUN_00f95db8(piVar12,iStack_44,iStack_3c);
  piVar2 = piStack_48;
  thunk_FUN_00f95db8(piStack_48,iStack_40,iStack_38);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  puVar5 = *(undefined4 **)(iVar7 + 0x2c);
  pcVar8 = (code *)puVar5[2];
  if (-1 < *(int *)(*(int *)(iVar7 + 0x20) + 0x14)) {
    piVar12 = (int *)*piVar12;
  }
  uVar3 = *puVar5;
  if (-1 < *(int *)(*(int *)(iVar7 + 0x24) + 0x14)) {
    piVar2 = (int *)*piVar2;
  }
  iStack_34 = (int)piVar12;
  piStack_30 = piVar2;
  *(int **)(iVar10 + -8) = piVar2;
  (*pcVar8)(uVar3,puVar5,iVar1,&iStack_34);
  if (**(int **)(_UNK_0187f0c0 + 0x187f0a8) == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

