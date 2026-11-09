/* IL2CPP: Rotatelab.Extensions$$WithTimeout<__Il2CppFullySharedGenericType>
Cysharp_Threading_Tasks_UniTask_T__o Rotatelab_Extensions__WithTimeout___Il2CppFullySharedGenericType_ (Cysharp_Threading_Tasks_UniTask_T__o task, System_TimeSpan_o timeout, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o fallback, const MethodInfo_148CC1C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$WithTimeout<__Il2CppFullySharedGenericType>
   Cysharp_Threading_Tasks_UniTask_T__o
   Rotatelab_Extensions__WithTimeout___Il2CppFullySharedGenericType_
   (Cysharp_Threading_Tasks_UniTask_T__o task, System_TimeSpan_o timeout,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o fallback, const MethodInfo_148CC1C*
   method); */

void Rotatelab_Extensions__WithTimeout___Il2CppFullySharedGenericType__148cc1c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined1 *param_5,undefined4 param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int aiStack_58 [2];
  int iStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iVar1 = param_7;
  puStack_3c = param_5;
  iStack_2c = **(int **)(_UNK_0149ce8c + 0x149cc4c);
  puVar9 = *(undefined4 **)(param_7 + 0x1c);
  uStack_4c = param_1;
  uStack_44 = param_3;
  uStack_40 = param_4;
  if (puVar9 == (undefined4 *)0x0) {
    FUN_00efd7c4(param_7);
    puVar9 = *(undefined4 **)(iVar1 + 0x1c);
  }
  iVar12 = *(int *)(puVar9[2] + 0x84);
  iStack_48 = *(int *)(puVar9[5] + 0x84);
  iVar11 = *(int *)(puVar9[4] + 0x84);
  iStack_50 = (int)&iStack_50 - (iStack_48 + 7U & 0xfffffff8);
  iVar7 = iStack_50 - (iVar12 + 7U & 0xfffffff8);
  uVar2 = iVar11 + 7U & 0xfffffff8;
  iVar6 = iVar7 - uVar2;
  iStack_38 = iVar6 - uVar2;
  iVar5 = iStack_38 - (*(int *)(puVar9[3] + 0x84) + 7U & 0xfffffff8);
  FUN_00f88e5c(iVar5);
  puVar9 = (undefined4 *)*puVar9;
  uVar3 = *puVar9;
  pcVar10 = (code *)puVar9[2];
  iStack_34 = iVar7;
  *(int *)(iVar5 + -8) = iVar7;
  (*pcVar10)(uVar3,puVar9,0,&iStack_34);
  func_0x00ec37e8(iVar5,*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40) + 0x14,iVar7,iVar12)
  ;
  thunk_FUN_00f95db8(iVar6,uStack_4c,iVar11);
  func_0x00ec37e8(iVar5,*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40) + 0x28,iVar6,iVar11)
  ;
  func_0x00b94b94(iVar5,*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40) + 0x3c,uStack_44,
                  uStack_40);
  iVar7 = iStack_48;
  iVar6 = iStack_50;
  iVar12 = *(int *)(iVar1 + 0x1c);
  puVar4 = (undefined1 *)register0x00000054;
  if (*(int *)(*(int *)(iVar12 + 0x14) + 0x14) < 0) {
    puVar4 = puStack_3c;
  }
  thunk_FUN_00f95db8(iStack_50,puVar4,iStack_48);
  func_0x00ec37e8(iVar5,*(int *)(*(int *)(iVar12 + 0xc) + 0x40) + 0x50,iVar6,iVar7);
  func_0x00b904cc(iVar5,*(undefined4 *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40),0xffffffff);
  pcVar10 = (code *)**(undefined4 **)(*(int *)(iVar1 + 0x1c) + 0x18);
  uVar3 = thunk_FUN_00f1b490(iVar5,*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40) + 0x14);
  (*pcVar10)(uVar3,iVar5,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0x18));
  puVar9 = *(undefined4 **)(*(int *)(iVar1 + 0x1c) + 0x20);
  uVar8 = *puVar9;
  uVar3 = thunk_FUN_00f1b490(iVar5,*(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + 0xc) + 0x40) + 0x14);
  iVar1 = iStack_38;
  pcVar10 = (code *)puVar9[2];
  iStack_30 = iStack_38;
  *(int *)(iVar5 + -8) = iStack_38;
  (*pcVar10)(uVar8,puVar9,uVar3,&iStack_30);
  thunk_FUN_00f95db8(param_6,iVar1,iVar11);
  if (**(int **)(_UNK_0149ce90 + 0x149ce78) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

