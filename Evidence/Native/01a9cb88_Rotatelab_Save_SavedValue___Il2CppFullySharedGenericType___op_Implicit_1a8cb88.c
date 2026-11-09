/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$op_Implicit
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___op_Implicit (Rotatelab_Save_SavedValue_T__o* instance, const MethodInfo_1A8CB88* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$op_Implicit
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___op_Implicit
   (Rotatelab_Save_SavedValue_T__o* instance, const MethodInfo_1A8CB88* method); */

void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___op_Implicit_1a8cb88
               (int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  int aiStack_38 [2];
  undefined1 auStack_30 [4];
  undefined1 *puStack_2c;
  int iStack_28;
  
  iStack_28 = **(int **)(_UNK_01a9cc90 + 0x1a9cbac);
  iVar2 = *(int *)(param_3 + 0x10);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  iVar7 = *(int *)(*(int *)(*(int *)(iVar2 + 0x60) + 8) + 0x84);
  iVar2 = -(iVar7 + 7U & 0xfffffff8);
  puVar8 = auStack_30 + iVar2;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_3 + 0x10);
  uVar1 = *(ushort *)(iVar3 + 0xbd);
  iVar4 = iVar3;
  if ((uVar1 & 1) == 0) {
    iVar4 = FUN_00efd768();
    iVar3 = *(int *)(param_3 + 0x10);
    uVar1 = *(ushort *)(iVar3 + 0xbd);
  }
  uVar5 = **(undefined4 **)(*(int *)(iVar4 + 0x60) + 0x30);
  if ((uVar1 & 1) == 0) {
    iVar3 = FUN_00efd768();
  }
  iVar4 = *(int *)(*(int *)(iVar3 + 0x60) + 0x30);
  pcVar6 = *(code **)(iVar4 + 8);
  puStack_2c = puVar8;
  *(undefined1 **)((int)aiStack_38 + iVar2) = puVar8;
  (*pcVar6)(uVar5,iVar4,param_1,&puStack_2c);
  thunk_FUN_00f95db8(param_2,puVar8,iVar7);
  if (**(int **)(_UNK_01a9cc94 + 0x1a9cc7c) == iStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

