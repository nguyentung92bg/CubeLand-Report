/* IL2CPP: Rotatelab.Extensions$$TryFind<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__TryFind___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o* selector, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_1489D88* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$TryFind<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>
   bool 
   Rotatelab_Extensions__TryFind___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o*
   selector, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const
   MethodInfo_1489D88* method); */

void Rotatelab_Extensions__TryFind___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__1489d88
               (undefined4 param_1,undefined4 *****param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *****pppppuVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int iVar8;
  int aiStack_50 [3];
  undefined4 ****ppppuStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_2d;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01499eb4 + 0x1499dac);
  iVar5 = *(int *)(param_5 + 0x1c);
  ppppuStack_44 = param_2;
  if (iVar5 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01499eb8 + 0x1499dd8));
    iVar5 = *(int *)(param_5 + 0x1c);
    if (iVar5 == 0) {
      FUN_00efd7c4(param_5);
      iVar5 = *(int *)(param_5 + 0x1c);
    }
  }
  iVar1 = -(*(int *)(*(int *)(iVar5 + 4) + 0x84) + 7U & 0xfffffff8);
  piVar6 = (int *)((int)aiStack_50 + iVar1 + 8);
  iVar8 = *(int *)(*(int *)(iVar5 + 4) + 0x14);
  pppppuVar3 = &ppppuStack_44;
  if (iVar8 < 0) {
    pppppuVar3 = param_2;
  }
  thunk_FUN_00f95db8(piVar6,pppppuVar3);
  if (*(int *)(**(int **)(_UNK_01499ebc + 0x1499e2c) + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *(int *)(param_5 + 0x1c);
    iVar8 = *(int *)(*(int *)(iVar5 + 4) + 0x14);
  }
  puVar4 = *(undefined4 **)(iVar5 + 0x10);
  if (-1 < iVar8) {
    piVar6 = (int *)*piVar6;
  }
  uVar2 = *puVar4;
  pcVar7 = (code *)puVar4[2];
  uStack_40 = param_1;
  iStack_3c = (int)piVar6;
  uStack_38 = param_3;
  uStack_34 = param_4;
  *(undefined1 **)((int)aiStack_50 + iVar1) = &uStack_2d;
  (*pcVar7)(uVar2,puVar4,0,&uStack_40);
  if (**(int **)(_UNK_01499ec0 + 0x1499ea0) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_2d);
  }
  return;
}

