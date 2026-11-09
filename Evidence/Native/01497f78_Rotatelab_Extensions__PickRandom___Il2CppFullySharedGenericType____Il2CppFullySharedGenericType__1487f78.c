/* IL2CPP: Rotatelab.Extensions$$PickRandom<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Extensions__PickRandom___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o* selector, const MethodInfo_1487F78* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$PickRandom<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Extensions__PickRandom___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o*
   selector, const MethodInfo_1487F78* method); */

void Rotatelab_Extensions__PickRandom___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__1487f78
               (undefined4 param_1,undefined4 ****param_2,undefined4 param_3,int param_4,int param_5
               )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ****ppppuVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  int aiStack_58 [2];
  int aiStack_50 [3];
  undefined4 ***pppuStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  char cStack_2d;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0149812c + 0x1497fa4);
  iVar11 = *(int *)(param_5 + 0x1c);
  aiStack_50[0] = param_4;
  aiStack_50[1] = param_3;
  aiStack_50[2] = param_1;
  pppuStack_44 = param_2;
  if (iVar11 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01498130 + 0x1497fc8));
    iVar11 = *(int *)(param_5 + 0x1c);
    if (iVar11 == 0) {
      FUN_00efd7c4(param_5);
      iVar11 = *(int *)(param_5 + 0x1c);
    }
  }
  iVar8 = *(int *)(iVar11 + 4);
  iVar10 = *(int *)(iVar8 + 0x84);
  iVar5 = *(int *)(*(int *)(iVar11 + 0x14) + 0x84);
  piVar7 = (int *)((int)aiStack_50 - (iVar10 + 7U & 0xfffffff8));
  iVar6 = (int)piVar7 - (iVar5 + 7U & 0xfffffff8);
  FUN_00f88e5c(iVar6,iVar5);
  iVar8 = *(int *)(iVar8 + 0x14);
  ppppuVar3 = &pppuStack_44;
  if (iVar8 < 0) {
    ppppuVar3 = param_2;
  }
  thunk_FUN_00f95db8(piVar7,ppppuVar3,iVar10);
  if (*(int *)(**(int **)(_UNK_01498134 + 0x1498044) + 0x74) == 0) {
    FUN_00ec3934();
    iVar11 = *(int *)(param_5 + 0x1c);
    iVar8 = *(int *)(*(int *)(iVar11 + 4) + 0x14);
  }
  puVar4 = *(undefined4 **)(iVar11 + 0xc);
  if (-1 < iVar8) {
    piVar7 = (int *)*piVar7;
  }
  uVar1 = *puVar4;
  uStack_38 = aiStack_50[1];
  pcVar9 = (code *)puVar4[2];
  uStack_40 = aiStack_50[2];
  iStack_3c = (int)piVar7;
  iStack_34 = iVar6;
  *(char **)(iVar6 + -8) = &cStack_2d;
  (*pcVar9)(uVar1,puVar4,0,&uStack_40);
  if (cStack_2d == '\0') {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0149813c + 0x14980f8));
    uVar1 = thunk_FUN_00f00cdc();
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01498140 + 0x149810c));
    System_Exception___ctor_2bad064(uVar1,uVar2,0);
    func_0x00ec3920(uVar1,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  thunk_FUN_00f95db8(aiStack_50[0],iVar6,iVar5);
  if (**(int **)(_UNK_01498138 + 0x14980d8) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

