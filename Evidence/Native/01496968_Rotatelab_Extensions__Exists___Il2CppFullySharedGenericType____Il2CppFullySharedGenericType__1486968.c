/* IL2CPP: Rotatelab.Extensions$$Exists<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__Exists___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o* match, const MethodInfo_1486968* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Exists<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>
   bool Rotatelab_Extensions__Exists___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o*
   match, const MethodInfo_1486968* method); */

void Rotatelab_Extensions__Exists___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__1486968
               (undefined4 param_1,undefined4 ****param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 ****ppppuVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int aiStack_58 [2];
  int aiStack_50 [3];
  undefined4 ***pppuStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 uStack_2d;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01496ac0 + 0x1496990);
  iVar9 = *(int *)(param_4 + 0x1c);
  aiStack_50[1] = param_3;
  aiStack_50[2] = param_1;
  pppuStack_44 = param_2;
  if (iVar9 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01496ac4 + 0x14969b4));
    iVar9 = *(int *)(param_4 + 0x1c);
    if (iVar9 == 0) {
      FUN_00efd7c4(param_4);
      iVar9 = *(int *)(param_4 + 0x1c);
    }
  }
  iVar4 = *(int *)(iVar9 + 4);
  iVar6 = *(int *)(iVar4 + 0x84);
  piVar7 = (int *)((int)aiStack_50 - (iVar6 + 7U & 0xfffffff8));
  iVar5 = (int)piVar7 - (*(int *)(*(int *)(iVar9 + 0x14) + 0x84) + 7U & 0xfffffff8);
  aiStack_50[0] = param_4;
  FUN_00f88e5c(iVar5);
  iVar4 = *(int *)(iVar4 + 0x14);
  ppppuVar2 = &pppuStack_44;
  if (iVar4 < 0) {
    ppppuVar2 = param_2;
  }
  thunk_FUN_00f95db8(piVar7,ppppuVar2,iVar6);
  if (*(int *)(**(int **)(_UNK_01496ac8 + 0x1496a30) + 0x74) == 0) {
    FUN_00ec3934();
    iVar9 = *(int *)(aiStack_50[0] + 0x1c);
    iVar4 = *(int *)(*(int *)(iVar9 + 4) + 0x14);
  }
  puVar3 = *(undefined4 **)(iVar9 + 0xc);
  if (-1 < iVar4) {
    piVar7 = (int *)*piVar7;
  }
  uVar1 = *puVar3;
  uStack_38 = aiStack_50[1];
  pcVar8 = (code *)puVar3[2];
  uStack_40 = aiStack_50[2];
  iStack_3c = (int)piVar7;
  iStack_34 = iVar5;
  *(undefined1 **)(iVar5 + -8) = &uStack_2d;
  (*pcVar8)(uVar1,puVar3,0,&uStack_40);
  if (**(int **)(_UNK_01496acc + 0x1496aac) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_2d);
  }
  return;
}

