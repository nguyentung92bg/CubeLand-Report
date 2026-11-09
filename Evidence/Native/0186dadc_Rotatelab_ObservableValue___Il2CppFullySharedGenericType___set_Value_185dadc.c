/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$set_Value
void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___set_Value (Rotatelab_ObservableValue_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_185DADC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$set_Value
   void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___set_Value
   (Rotatelab_ObservableValue_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   value, const MethodInfo_185DADC* method); */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___set_Value_185dadc
               (int *param_1,undefined4 ****param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined4 ****ppppuVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  int iVar12;
  int aiStack_58 [2];
  undefined4 ***pppuStack_50;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  int *piStack_40;
  undefined4 ***pppuStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  char cStack_2d;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0186dd30 + 0x186db00);
  iVar2 = *(int *)(*(int *)(param_3 + 0x10) + 0x60);
  iVar12 = *(int *)(*(int *)(iVar2 + 4) + 0x84);
  uVar5 = iVar12 + 7U & 0xfffffff8;
  puVar8 = (undefined4 *)((int)&pppuStack_50 - uVar5);
  piVar9 = (int *)((int)puVar8 - uVar5);
  pppuStack_3c = param_2;
  piStack_40 = (int *)(*(code *)**(undefined4 **)(iVar2 + 8))();
  piStack_48 = param_1;
  uVar3 = thunk_FUN_00f1b490(param_1,*(undefined4 *)
                                      (**(int **)(*(int *)(param_3 + 0x10) + 0x60) + 0x40));
  thunk_FUN_00f95db8(puVar8,uVar3,iVar12);
  piVar1 = piStack_40;
  iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 4) + 0x14);
  ppppuVar6 = &pppuStack_3c;
  if (iVar2 < 0) {
    ppppuVar6 = param_2;
  }
  pppuStack_50 = param_2;
  iStack_4c = iVar12;
  iStack_44 = param_3;
  thunk_FUN_00f95db8(piVar9,ppppuVar6,iVar12);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puStack_38 = puVar8;
  iStack_34 = (int)piVar9;
  if (-1 < iVar2) {
    puStack_38 = (undefined4 *)*puVar8;
    iStack_34 = *piVar9;
  }
  iVar2 = *(int *)(*piVar1 + 0x104);
  uVar3 = *(undefined4 *)(iVar2 + 4);
  pcVar10 = *(code **)(iVar2 + 8);
  piVar9[-2] = (int)&cStack_2d;
  (*pcVar10)(uVar3,iVar2,piVar1,&puStack_38);
  iVar12 = iStack_44;
  iVar2 = iStack_4c;
  if (cStack_2d == '\0') {
    iVar11 = *(int *)(iStack_44 + 0x10);
    ppppuVar6 = &pppuStack_3c;
    if (*(int *)(*(int *)(*(int *)(iVar11 + 0x60) + 4) + 0x14) < 0) {
      ppppuVar6 = (undefined4 ****)pppuStack_50;
    }
    thunk_FUN_00f95db8(puVar8,ppppuVar6,iStack_4c);
    piVar1 = piStack_48;
    func_0x00ec37e8(piStack_48,*(undefined4 *)(**(int **)(iVar11 + 0x60) + 0x40),puVar8,iVar2);
    piVar4 = (int *)thunk_FUN_00f1b490(piVar1,*(int *)(**(int **)(*(int *)(iVar12 + 0x10) + 0x60) +
                                                      0x40) + 0x14);
    piVar1 = piStack_48;
    iVar2 = *piVar4;
    if (iVar2 != 0) {
      iVar12 = *(int *)(*piStack_48 + 0xf4);
      uVar3 = *(undefined4 *)(iVar12 + 4);
      pcVar10 = *(code **)(iVar12 + 8);
      puStack_38 = puVar8;
      piVar9[-2] = (int)puVar8;
      (*pcVar10)(uVar3,iVar12,piVar1,&puStack_38);
      iVar12 = *(int *)(*(int *)(iStack_44 + 0x10) + 0x60);
      puVar7 = *(undefined4 **)(iVar12 + 0x20);
      uVar3 = *puVar7;
      pcVar10 = (code *)puVar7[2];
      if (-1 < *(int *)(*(int *)(iVar12 + 4) + 0x14)) {
        puVar8 = (undefined4 *)*puVar8;
      }
      puStack_38 = puVar8;
      piVar9[-2] = (int)puVar8;
      (*pcVar10)(uVar3,puVar7,iVar2,&puStack_38);
    }
  }
  if (**(int **)(_UNK_0186dd34 + 0x186dd1c) == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

