/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$ToString
System_String_o* Rotatelab_ObservableValue___Il2CppFullySharedGenericType___ToString (Rotatelab_ObservableValue_T__o* __this, const MethodInfo_185E538* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$ToString
   System_String_o* Rotatelab_ObservableValue___Il2CppFullySharedGenericType___ToString
   (Rotatelab_ObservableValue_T__o* __this, const MethodInfo_185E538* method); */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___ToString_185e538
               (int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int iVar8;
  int aiStack_40 [2];
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0186e668 + 0x186e558);
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 4);
  iVar8 = *(int *)(iVar1 + 0x84);
  iVar2 = iVar8;
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
    iVar2 = *(int *)(iVar2 + 0x84);
  }
  uVar3 = iVar8 + 7U & 0xfffffff8;
  iVar5 = (int)(auStack_38 + -(iVar2 + 0xfU & 0xfffffff8)) - uVar3;
  iVar7 = iVar5 - uVar3;
  FUN_00f88e5c(iVar7,iVar8);
  iVar1 = *(int *)(*param_1 + 0xf4);
  uVar4 = *(undefined4 *)(iVar1 + 4);
  pcVar6 = *(code **)(iVar1 + 8);
  iStack_34 = iVar5;
  *(int *)(iVar7 + -8) = iVar5;
  (*pcVar6)(uVar4,iVar1,param_1,&iStack_34);
  thunk_FUN_00f95db8(iVar7,iVar5,iVar8);
  iVar8 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  iVar1 = *(int *)(iVar8 + 4);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = FUN_00efd768();
    iVar8 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
  }
  uVar4 = *(undefined4 *)(iVar8 + 0x30);
  *(undefined4 *)(iVar7 + -8) = 0;
  *(undefined4 **)(iVar7 + -4) = &uStack_30;
  func_0x00ec4794(iVar1,uVar4,auStack_38 + -(iVar2 + 0xfU & 0xfffffff8),iVar7);
  if (**(int **)(_UNK_0186e66c + 0x186e654) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_30);
  }
  return;
}

