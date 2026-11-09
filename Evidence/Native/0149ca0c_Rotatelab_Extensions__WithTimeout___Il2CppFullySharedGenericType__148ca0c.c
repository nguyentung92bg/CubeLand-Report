/* IL2CPP: Rotatelab.Extensions$$WithTimeout<__Il2CppFullySharedGenericType>
System_Threading_Tasks_Task_T__o* Rotatelab_Extensions__WithTimeout___Il2CppFullySharedGenericType_ (System_Threading_Tasks_Task_T__o* task, System_TimeSpan_o timeout, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o fallback, const MethodInfo_148CA0C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$WithTimeout<__Il2CppFullySharedGenericType>
   System_Threading_Tasks_Task_T__o*
   Rotatelab_Extensions__WithTimeout___Il2CppFullySharedGenericType_
   (System_Threading_Tasks_Task_T__o* task, System_TimeSpan_o timeout,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o fallback, const MethodInfo_148CA0C*
   method); */

void Rotatelab_Extensions__WithTimeout___Il2CppFullySharedGenericType__148ca0c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 *param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 auStack_48 [2];
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iVar1 = param_6;
  puStack_3c = param_5;
  iStack_2c = **(int **)(_UNK_0149cc14 + 0x149ca3c);
  iVar6 = *(int *)(param_6 + 0x1c);
  uStack_40 = param_4;
  if (iVar6 == 0) {
    FUN_00efd7c4(param_6);
    iVar6 = *(int *)(iVar1 + 0x1c);
  }
  iVar7 = *(int *)(*(int *)(iVar6 + 0x14) + 0x84);
  iVar4 = (int)&uStack_40 - (iVar7 + 7U & 0xfffffff8);
  iVar3 = iVar4 - (*(int *)(*(int *)(iVar6 + 0xc) + 0x84) + 7U & 0xfffffff8);
  FUN_00f88e5c(iVar3);
  iVar6 = *(int *)(iVar6 + 4);
  if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
    iVar6 = FUN_00efd768();
  }
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  (**(code **)**(undefined4 **)(iVar1 + 0x1c))(&uStack_38);
  iVar6 = *(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40);
  *(undefined4 *)(iVar3 + -8) = uStack_30;
  func_0x00b94b44(iVar3,iVar6 + 0x14,uStack_38,uStack_34);
  func_0x00b8fd54(iVar3,*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40) + 0x28,param_1);
  func_0x00b94b94(iVar3,*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40) + 0x3c,param_3,
                  uStack_40);
  iVar6 = *(int *)(iVar1 + 0x1c);
  if (*(int *)(*(int *)(iVar6 + 0x14) + 0x14) < 0) {
    register0x00000054 = (BADSPACEBASE *)puStack_3c;
  }
  thunk_FUN_00f95db8(iVar4,register0x00000054,iVar7);
  func_0x00ec37e8(iVar3,*(int *)(*(int *)(iVar6 + 0xc) + 0x40) + 0x50,iVar4,iVar7);
  func_0x00b904cc(iVar3,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40),0xffffffff);
  pcVar5 = (code *)**(undefined4 **)(*(int *)(iVar1 + 0x1c) + 0x18);
  uVar2 = thunk_FUN_00f1b490(iVar3,*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40) + 0x14);
  (*pcVar5)(uVar2,iVar3,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x18));
  pcVar5 = (code *)**(undefined4 **)(*(int *)(iVar1 + 0x1c) + 0x20);
  uVar2 = thunk_FUN_00f1b490(iVar3,*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40) + 0x14);
  (*pcVar5)(uVar2,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x20));
  if (**(int **)(_UNK_0149cc18 + 0x149cc00) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

