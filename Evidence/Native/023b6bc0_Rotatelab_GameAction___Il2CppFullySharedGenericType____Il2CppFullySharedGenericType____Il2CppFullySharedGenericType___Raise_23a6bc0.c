/* IL2CPP: Rotatelab.GameAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Raise
void Rotatelab_GameAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Raise (Rotatelab_GameAction_T1__T2__T3__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3, const MethodInfo_23A6BC0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>$$Raise
   void 
   Rotatelab_GameAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Raise
   (Rotatelab_GameAction_T1__T2__T3__o* __this,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg3, const MethodInfo_23A6BC0* method);
    */

void Rotatelab_GameAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Raise_23a6bc0
               (int param_1,undefined4 ****param_2,undefined4 ****param_3,undefined4 ****param_4,
               int param_5)

{
  undefined4 uVar1;
  undefined4 ****ppppuVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int aiStack_60 [2];
  undefined4 ***pppuStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 ***pppuStack_44;
  undefined4 ***pppuStack_40;
  undefined4 ***pppuStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_023b6d40 + 0x23b6be0);
  iVar9 = *(int *)(*(int *)(param_5 + 0x10) + 0x60);
  iStack_48 = *(int *)(iVar9 + 0xc);
  iVar11 = *(int *)(iVar9 + 0x10);
  iVar8 = *(int *)(iStack_48 + 0x84);
  iVar4 = *(int *)(iVar11 + 0x84);
  piVar5 = (int *)((int)&pppuStack_58 - (*(int *)(*(int *)(iVar9 + 8) + 0x84) + 7U & 0xfffffff8));
  piVar10 = (int *)((int)piVar5 - (iVar8 + 7U & 0xfffffff8));
  piVar7 = (int *)((int)piVar10 - (iVar4 + 7U & 0xfffffff8));
  pppuStack_44 = param_4;
  pppuStack_40 = param_3;
  pppuStack_3c = param_2;
  if (*(int *)(param_1 + 8) != 0) {
    iStack_50 = *(int *)(*(int *)(iVar9 + 8) + 0x14);
    ppppuVar2 = &pppuStack_3c;
    if (iStack_50 < 0) {
      ppppuVar2 = param_2;
    }
    pppuStack_58 = param_4;
    iStack_54 = iVar4;
    iStack_4c = *(int *)(param_1 + 8);
    thunk_FUN_00f95db8(piVar5,ppppuVar2);
    iStack_48 = *(int *)(iStack_48 + 0x14);
    ppppuVar2 = &pppuStack_40;
    if (iStack_48 < 0) {
      ppppuVar2 = param_3;
    }
    thunk_FUN_00f95db8(piVar10,ppppuVar2,iVar8);
    iVar4 = *(int *)(iVar11 + 0x14);
    ppppuVar2 = &pppuStack_44;
    if (iVar4 < 0) {
      ppppuVar2 = (undefined4 ****)pppuStack_58;
    }
    thunk_FUN_00f95db8(piVar7,ppppuVar2,iStack_54);
    iVar8 = iStack_4c;
    puVar3 = *(undefined4 **)(iVar9 + 0x14);
    if (-1 < iStack_50) {
      piVar5 = (int *)*piVar5;
    }
    uVar1 = *puVar3;
    if (-1 < iStack_48) {
      piVar10 = (int *)*piVar10;
    }
    iStack_30 = (int)piVar7;
    if (-1 < iVar4) {
      iStack_30 = *piVar7;
    }
    pcVar6 = (code *)puVar3[2];
    iStack_38 = (int)piVar5;
    iStack_34 = (int)piVar10;
    piVar7[-2] = iStack_30;
    (*pcVar6)(uVar1,puVar3,iVar8,&iStack_38);
  }
  if (**(int **)(_UNK_023b6d44 + 0x23b6d2c) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

