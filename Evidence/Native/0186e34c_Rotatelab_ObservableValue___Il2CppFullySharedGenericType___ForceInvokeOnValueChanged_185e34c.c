/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$ForceInvokeOnValueChanged
void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___ForceInvokeOnValueChanged (Rotatelab_ObservableValue_T__o* __this, const MethodInfo_185E34C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$ForceInvokeOnValueChanged
   void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___ForceInvokeOnValueChanged
   (Rotatelab_ObservableValue_T__o* __this, const MethodInfo_185E34C* method); */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___ForceInvokeOnValueChanged_185e34c
               (int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int aiStack_38 [3];
  int *piStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_0186e444 + 0x186e36c);
  piVar2 = *(int **)(*(int *)(param_2 + 0x10) + 0x60);
  iVar1 = -(*(int *)(piVar2[1] + 0x84) + 7U & 0xfffffff8);
  piVar7 = (int *)((int)aiStack_38 + iVar1 + 8);
  piVar2 = (int *)thunk_FUN_00f1b490(param_1,*(int *)(*piVar2 + 0x40) + 0x14);
  iVar6 = *piVar2;
  if (iVar6 != 0) {
    iVar4 = *(int *)(*param_1 + 0xf4);
    uVar3 = *(undefined4 *)(iVar4 + 4);
    pcVar8 = *(code **)(iVar4 + 8);
    piStack_2c = piVar7;
    *(int **)((int)aiStack_38 + iVar1) = piVar7;
    (*pcVar8)(uVar3,iVar4,param_1,&piStack_2c);
    iVar4 = *(int *)(*(int *)(param_2 + 0x10) + 0x60);
    puVar5 = *(undefined4 **)(iVar4 + 0x20);
    uVar3 = *puVar5;
    pcVar8 = (code *)puVar5[2];
    if (-1 < *(int *)(*(int *)(iVar4 + 4) + 0x14)) {
      piVar7 = (int *)*piVar7;
    }
    iStack_28 = (int)piVar7;
    *(int **)((int)aiStack_38 + iVar1) = piVar7;
    (*pcVar8)(uVar3,puVar5,iVar6,&iStack_28);
  }
  if (**(int **)(_UNK_0186e448 + 0x186e430) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

