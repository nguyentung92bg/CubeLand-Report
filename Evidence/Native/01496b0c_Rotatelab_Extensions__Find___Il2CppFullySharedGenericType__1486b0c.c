/* IL2CPP: Rotatelab.Extensions$$Find<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Extensions__Find___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, System_Predicate_T__o* selector, const MethodInfo_1486B0C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Find<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Extensions__Find___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, System_Predicate_T__o*
   selector, const MethodInfo_1486B0C* method); */

void Rotatelab_Extensions__Find___Il2CppFullySharedGenericType__1486b0c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int aiStack_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_01496bd0 + 0x1496b30);
  iVar2 = *(int *)(param_4 + 0x1c);
  if (iVar2 == 0) {
    FUN_00efd7c4(param_4);
    iVar2 = *(int *)(param_4 + 0x1c);
  }
  iVar7 = *(int *)(*(int *)(iVar2 + 0xc) + 0x84);
  iVar1 = -(iVar7 + 7U & 0xfffffff8);
  iVar5 = (int)&uStack_30 + iVar1;
  puVar4 = *(undefined4 **)(iVar2 + 8);
  uVar3 = *puVar4;
  pcVar6 = (code *)puVar4[2];
  uStack_30 = param_1;
  uStack_2c = param_2;
  iStack_28 = iVar5;
  *(int *)((int)aiStack_38 + iVar1) = iVar5;
  (*pcVar6)(uVar3,puVar4,0,&uStack_30);
  thunk_FUN_00f95db8(param_3,iVar5,iVar7);
  if (**(int **)(_UNK_01496bd4 + 0x1496bbc) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

