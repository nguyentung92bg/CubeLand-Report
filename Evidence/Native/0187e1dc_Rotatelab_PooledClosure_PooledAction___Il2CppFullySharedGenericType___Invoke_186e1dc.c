/* IL2CPP: Rotatelab.PooledClosure.PooledAction<__Il2CppFullySharedGenericType>$$Invoke
void Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType___Invoke (Rotatelab_PooledClosure_PooledAction_P1__o* __this, const MethodInfo_186E1DC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PooledClosure.PooledAction<__Il2CppFullySharedGenericType>$$Invoke
   void Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType___Invoke
   (Rotatelab_PooledClosure_PooledAction_P1__o* __this, const MethodInfo_186E1DC* method); */

void Rotatelab_PooledClosure_PooledAction___Il2CppFullySharedGenericType___Invoke_186e1dc
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int aiStack_40 [2];
  int aiStack_38 [5];
  
  aiStack_38[3] = **(int **)(_UNK_0187e3c4 + 0x187e1fc);
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  iVar10 = *(int *)(*(int *)(iVar1 + 0x20) + 0x84);
  uVar4 = iVar10 + 7U & 0xfffffff8;
  piVar8 = (int *)((int)aiStack_38 - uVar4);
  iVar7 = (int)piVar8 - uVar4;
  piVar2 = (int *)thunk_FUN_00f1b490(param_1,*(int *)(*(int *)(iVar1 + 4) + 0x40) + 0x14);
  iVar9 = *piVar2;
  uVar3 = thunk_FUN_00f1b490(param_1,*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4
                                                      ) + 0x40) + 0x28);
  aiStack_38[0] = iVar7;
  thunk_FUN_00f95db8(iVar7,uVar3,iVar10);
  func_0x00b8fd54(param_1,*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4) + 0x40) +
                          0x14,0);
  uVar3 = thunk_FUN_00f1b490(param_1,*(int *)(*(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4
                                                      ) + 0x40) + 0x28);
  FUN_00f88e5c(uVar3,iVar10);
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0xc);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 0x24);
  uVar3 = *puVar5;
  pcVar6 = (code *)puVar5[2];
  aiStack_38[1] = param_1;
  *(undefined4 *)(iVar7 + -8) = param_1;
  (*pcVar6)(uVar3,puVar5,iVar1,aiStack_38 + 1);
  thunk_FUN_00f95db8(piVar8,aiStack_38[0],iVar10);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  puVar5 = *(undefined4 **)(iVar1 + 0x28);
  uVar3 = *puVar5;
  pcVar6 = (code *)puVar5[2];
  if (-1 < *(int *)(*(int *)(iVar1 + 0x20) + 0x14)) {
    piVar8 = (int *)*piVar8;
  }
  aiStack_38[2] = (int)piVar8;
  *(int **)(iVar7 + -8) = piVar8;
  (*pcVar6)(uVar3,puVar5,iVar9,aiStack_38 + 2);
  if (**(int **)(_UNK_0187e3c8 + 0x187e3b0) != aiStack_38[3]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

