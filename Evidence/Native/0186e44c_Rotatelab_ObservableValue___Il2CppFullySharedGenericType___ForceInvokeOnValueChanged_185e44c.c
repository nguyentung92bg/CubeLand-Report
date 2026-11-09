/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$ForceInvokeOnValueChanged
void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___ForceInvokeOnValueChanged (Rotatelab_ObservableValue_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_185E44C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$ForceInvokeOnValueChanged
   void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___ForceInvokeOnValueChanged
   (Rotatelab_ObservableValue_T__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   value, const MethodInfo_185E44C* method); */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___ForceInvokeOnValueChanged_185e44c
               (undefined4 param_1,undefined4 ****param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 ****ppppuVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int aiStack_38 [2];
  undefined4 ***pppuStack_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_28 = **(int **)(_UNK_0186e530 + 0x186e46c);
  piVar3 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
  iVar9 = *(int *)(piVar3[1] + 0x84);
  iVar1 = -(iVar9 + 7U & 0xfffffff8);
  piVar6 = (int *)((int)&pppuStack_30 + iVar1);
  pppuStack_30 = param_2;
  piVar3 = (int *)thunk_FUN_00f1b490(param_1,*(int *)(*piVar3 + 0x40) + 0x14);
  iVar11 = *piVar3;
  if (iVar11 != 0) {
    iVar7 = *(int *)(*(int *)(param_3 + 0x10) + 0x60);
    iVar8 = *(int *)(*(int *)(iVar7 + 4) + 0x14);
    ppppuVar4 = &pppuStack_30;
    if (iVar8 < 0) {
      ppppuVar4 = param_2;
    }
    thunk_FUN_00f95db8(piVar6,ppppuVar4,iVar9);
    puVar5 = *(undefined4 **)(iVar7 + 0x20);
    if (-1 < iVar8) {
      piVar6 = (int *)*piVar6;
    }
    uVar2 = *puVar5;
    pcVar10 = (code *)puVar5[2];
    iStack_2c = (int)piVar6;
    *(int **)((int)aiStack_38 + iVar1) = piVar6;
    (*pcVar10)(uVar2,puVar5,iVar11,&iStack_2c);
  }
  if (**(int **)(_UNK_0186e534 + 0x186e51c) != iStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

