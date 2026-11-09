/* IL2CPP: Rotatelab.Extensions$$Find<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Extensions__Find___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o* selector, const MethodInfo_1486DC4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Find<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Extensions__Find___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o*
   selector, const MethodInfo_1486DC4* method); */

void Rotatelab_Extensions__Find___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__1486dc4
               (undefined4 param_1,undefined4 ****param_2,int param_3,undefined4 param_4,int param_5
               )

{
  undefined4 uVar1;
  undefined4 ****ppppuVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int aiStack_58 [2];
  int aiStack_50 [3];
  undefined4 ***pppuStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  char cStack_2d;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01496f48 + 0x1496df0);
  iVar10 = *(int *)(param_5 + 0x1c);
  aiStack_50[0] = param_3;
  aiStack_50[1] = param_1;
  aiStack_50[2] = param_4;
  pppuStack_44 = param_2;
  if (iVar10 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01496f4c + 0x1496e14));
    iVar10 = *(int *)(param_5 + 0x1c);
    if (iVar10 == 0) {
      FUN_00efd7c4(param_5);
      iVar10 = *(int *)(param_5 + 0x1c);
    }
  }
  iVar6 = *(int *)(iVar10 + 4);
  iVar9 = *(int *)(iVar6 + 0x84);
  iVar8 = *(int *)(*(int *)(iVar10 + 0x14) + 0x84);
  piVar5 = (int *)((int)aiStack_50 - (iVar9 + 7U & 0xfffffff8));
  iVar4 = (int)piVar5 - (iVar8 + 7U & 0xfffffff8);
  FUN_00f88e5c(iVar4,iVar8);
  iVar6 = *(int *)(iVar6 + 0x14);
  ppppuVar2 = &pppuStack_44;
  if (iVar6 < 0) {
    ppppuVar2 = param_2;
  }
  thunk_FUN_00f95db8(piVar5,ppppuVar2,iVar9);
  if (*(int *)(**(int **)(_UNK_01496f50 + 0x1496e90) + 0x74) == 0) {
    FUN_00ec3934();
    iVar10 = *(int *)(param_5 + 0x1c);
    iVar6 = *(int *)(*(int *)(iVar10 + 4) + 0x14);
  }
  puVar3 = *(undefined4 **)(iVar10 + 0xc);
  if (-1 < iVar6) {
    piVar5 = (int *)*piVar5;
  }
  uVar1 = *puVar3;
  iStack_38 = aiStack_50[0];
  pcVar7 = (code *)puVar3[2];
  uStack_40 = aiStack_50[1];
  iStack_3c = (int)piVar5;
  iStack_34 = iVar4;
  *(char **)(iVar4 + -8) = &cStack_2d;
  (*pcVar7)(uVar1,puVar3,0,&uStack_40);
  if (cStack_2d == '\0') {
    FUN_00f88e5c(aiStack_50[2],iVar8);
  }
  else {
    thunk_FUN_00f95db8(aiStack_50[2],iVar4,iVar8);
  }
  if (**(int **)(_UNK_01496f54 + 0x1496f34) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

