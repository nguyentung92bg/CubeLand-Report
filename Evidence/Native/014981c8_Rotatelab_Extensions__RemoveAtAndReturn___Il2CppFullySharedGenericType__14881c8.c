/* IL2CPP: Rotatelab.Extensions$$RemoveAtAndReturn<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Extensions__RemoveAtAndReturn___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* list, int32_t index, const MethodInfo_14881C8* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$RemoveAtAndReturn<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Extensions__RemoveAtAndReturn___Il2CppFullySharedGenericType_
   (System_Collections_Generic_List_T__o* list, int32_t index, const MethodInfo_14881C8* method); */

void Rotatelab_Extensions__RemoveAtAndReturn___Il2CppFullySharedGenericType__14881c8
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int aiStack_40 [2];
  undefined4 *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_014982c4 + 0x14981ec);
  iVar2 = *(int *)(param_4 + 0x1c);
  if (iVar2 == 0) {
    FUN_00efd7c4(param_4);
    iVar2 = *(int *)(param_4 + 0x1c);
  }
  iVar7 = *(int *)(*(int *)(iVar2 + 8) + 0x84);
  iVar1 = -(iVar7 + 7U & 0xfffffff8);
  iVar6 = (int)&puStack_38 + iVar1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(iVar2 + 4);
  puStack_38 = &uStack_30;
  uVar3 = *puVar4;
  pcVar5 = (code *)puVar4[2];
  iStack_34 = iVar6;
  uStack_30 = param_2;
  *(int *)((int)aiStack_40 + iVar1) = iVar6;
  (*pcVar5)(uVar3,puVar4,param_1,&puStack_38);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (*(code *)**(undefined4 **)(*(int *)(param_4 + 0x1c) + 0xc))(param_1,param_2);
  thunk_FUN_00f95db8(param_3,iVar6,iVar7);
  if (**(int **)(_UNK_014982c8 + 0x14982b0) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

