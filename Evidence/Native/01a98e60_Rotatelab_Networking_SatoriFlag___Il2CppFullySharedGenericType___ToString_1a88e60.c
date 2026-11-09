/* IL2CPP: Rotatelab.Networking.SatoriFlag<__Il2CppFullySharedGenericType>$$ToString
System_String_o* Rotatelab_Networking_SatoriFlag___Il2CppFullySharedGenericType___ToString (Rotatelab_Networking_SatoriFlag_T__o* __this, const MethodInfo_1A88E60* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.SatoriFlag<__Il2CppFullySharedGenericType>$$ToString
   System_String_o* Rotatelab_Networking_SatoriFlag___Il2CppFullySharedGenericType___ToString
   (Rotatelab_Networking_SatoriFlag_T__o* __this, const MethodInfo_1A88E60* method); */

void Rotatelab_Networking_SatoriFlag___Il2CppFullySharedGenericType___ToString_1a88e60
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
  int iVar9;
  int aiStack_48 [2];
  undefined1 auStack_40 [4];
  undefined1 *puStack_3c;
  int iStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01a98fec + 0x1a98e7c);
  iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x10) + 0x60) + 8);
  iVar7 = *(int *)(iVar1 + 0x84);
  iVar2 = iVar7;
  iStack_38 = param_2;
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
    iVar2 = *(int *)(iVar2 + 0x84);
  }
  puStack_3c = auStack_40 + -(iVar2 + 0xfU & 0xfffffff8);
  uVar3 = iVar7 + 7U & 0xfffffff8;
  iVar1 = (int)puStack_3c - uVar3;
  iVar9 = iVar1 - uVar3;
  iVar5 = iVar9 - uVar3;
  iVar8 = iVar5 - uVar3;
  FUN_00f88e5c(iVar8,iVar7);
  iVar2 = *(int *)(*param_1 + 0xe4);
  uVar4 = *(undefined4 *)(iVar2 + 4);
  pcVar6 = *(code **)(iVar2 + 8);
  iStack_34 = iVar1;
  *(int *)(iVar8 + -8) = iVar1;
  (*pcVar6)(uVar4,iVar2,param_1,&iStack_34);
  thunk_FUN_00f95db8(iVar5,iVar1,iVar7);
  thunk_FUN_00f95db8(iVar9,iVar1,iVar7);
  iVar2 = iStack_38;
  iVar1 = func_0x00ec3a20(*(undefined4 *)(*(int *)(*(int *)(iStack_38 + 0x10) + 0x60) + 8),iVar9);
  uVar4 = 0;
  if (iVar1 != 0) {
    thunk_FUN_00f95db8(iVar8,iVar5,iVar7);
    iVar7 = *(int *)(*(int *)(iVar2 + 0x10) + 0x60);
    iVar1 = *(int *)(iVar7 + 8);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768();
      iVar7 = *(int *)(*(int *)(iVar2 + 0x10) + 0x60);
    }
    uVar4 = *(undefined4 *)(iVar7 + 0xc);
    *(undefined4 *)(iVar8 + -8) = 0;
    *(undefined4 **)(iVar8 + -4) = &uStack_30;
    func_0x00ec4794(iVar1,uVar4,puStack_3c,iVar8);
    uVar4 = uStack_30;
  }
  if (**(int **)(_UNK_01a98ff0 + 0x1a98fd8) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

