/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$ToString
System_String_o* Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___ToString (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8CA4C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$ToString
   System_String_o* Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___ToString
   (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8CA4C* method); */

void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___ToString_1a8ca4c
               (undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int aiStack_40 [2];
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01a9cb80 + 0x1a9ca6c);
  iVar5 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  iVar8 = *(int *)(*(int *)(iVar5 + 8) + 0x84);
  iVar1 = iVar8;
  if ((*(ushort *)(*(int *)(iVar5 + 8) + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
    iVar1 = *(int *)(iVar1 + 0x84);
    iVar5 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  }
  uVar2 = iVar8 + 7U & 0xfffffff8;
  iVar7 = (int)(auStack_38 + -(iVar1 + 0xfU & 0xfffffff8)) - uVar2;
  iVar9 = iVar7 - uVar2;
  FUN_00f88e5c(iVar9,iVar8);
  puVar4 = *(undefined4 **)(iVar5 + 0x30);
  uVar3 = *puVar4;
  pcVar6 = (code *)puVar4[2];
  iStack_34 = iVar7;
  *(int *)(iVar9 + -8) = iVar7;
  (*pcVar6)(uVar3,puVar4,param_1,&iStack_34);
  thunk_FUN_00f95db8(iVar9,iVar7,iVar8);
  iVar8 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  iVar5 = *(int *)(iVar8 + 8);
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768();
    iVar8 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  }
  uVar3 = *(undefined4 *)(iVar8 + 0x40);
  *(undefined4 *)(iVar9 + -8) = 0;
  *(undefined4 **)(iVar9 + -4) = &uStack_30;
  func_0x00ec4794(iVar5,uVar3,auStack_38 + -(iVar1 + 0xfU & 0xfffffff8),iVar9);
  if (**(int **)(_UNK_01a9cb84 + 0x1a9cb6c) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_30);
  }
  return;
}

