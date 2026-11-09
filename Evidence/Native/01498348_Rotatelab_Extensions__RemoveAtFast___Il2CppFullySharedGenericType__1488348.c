/* IL2CPP: Rotatelab.Extensions$$RemoveAtFast<__Il2CppFullySharedGenericType>
void Rotatelab_Extensions__RemoveAtFast___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* list, int32_t index, const MethodInfo_1488348* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$RemoveAtFast<__Il2CppFullySharedGenericType>
   void Rotatelab_Extensions__RemoveAtFast___Il2CppFullySharedGenericType_
   (System_Collections_Generic_List_T__o* list, int32_t index, const MethodInfo_1488348* method); */

void Rotatelab_Extensions__RemoveAtFast___Il2CppFullySharedGenericType__1488348
               (int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  code *pcVar6;
  int aiStack_40 [2];
  int *apiStack_38 [2];
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_014984a4 + 0x149836c);
  iVar2 = *(int *)(param_3 + 0x1c);
  if (iVar2 == 0) {
    FUN_00efd7c4(param_3);
    iVar2 = *(int *)(param_3 + 0x1c);
  }
  iVar1 = -(*(int *)(*(int *)(iVar2 + 0xc) + 0x84) + 7U & 0xfffffff8);
  piVar5 = (int *)((int)apiStack_38 + iVar1);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = (*(code *)**(undefined4 **)(iVar2 + 4))(param_1);
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(*(int *)(param_3 + 0x1c) + 8);
  uVar3 = *puVar4;
  pcVar6 = (code *)puVar4[2];
  apiStack_38[0] = &iStack_30;
  apiStack_38[1] = piVar5;
  iStack_30 = iVar2 + -1;
  *(int **)((int)aiStack_40 + iVar1) = piVar5;
  (*pcVar6)(uVar3,puVar4,param_1,apiStack_38);
  if (param_1 != 0) {
    puVar4 = *(undefined4 **)(*(int *)(param_3 + 0x1c) + 0x10);
    uVar3 = *puVar4;
    iStack_30 = param_2;
    if (-1 < *(int *)(*(int *)(*(int *)(param_3 + 0x1c) + 0xc) + 0x14)) {
      piVar5 = (int *)*piVar5;
    }
    pcVar6 = (code *)puVar4[2];
    apiStack_38[0] = &iStack_30;
    apiStack_38[1] = piVar5;
    *(int **)((int)aiStack_40 + iVar1) = piVar5;
    (*pcVar6)(uVar3,puVar4,param_1,apiStack_38);
    if (param_1 != 0) {
      (*(code *)**(undefined4 **)(*(int *)(param_3 + 0x1c) + 0x14))(param_1,iVar2 + -1);
      if (**(int **)(_UNK_014984a8 + 0x1498490) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

