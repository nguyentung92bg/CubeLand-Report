/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$remove_OnValueChanged
void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___remove_OnValueChanged (Rotatelab_ObservableValue_T__o* __this, System_Action_T__o* value, const MethodInfo_185DF9C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.ObservableValue<__Il2CppFullySharedGenericType>$$remove_OnValueChanged
   void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___remove_OnValueChanged
   (Rotatelab_ObservableValue_T__o* __this, System_Action_T__o* value, const MethodInfo_185DF9C*
   method); */

void Rotatelab_ObservableValue___Il2CppFullySharedGenericType___remove_OnValueChanged_185df9c
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  piVar1 = (int *)thunk_FUN_00f1b490(param_1,*(int *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60) +
                                                     0x40) + 0x14);
  iVar2 = *piVar1;
  while( true ) {
    iVar3 = System_Delegate__Remove_2bbcc8c(iVar2,param_2,0);
    iVar6 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x18);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768(iVar6);
    }
    iVar5 = 0;
    if ((iVar3 != 0) && (iVar5 = thunk_FUN_00f00bc8(iVar3,iVar6), iVar5 == 0)) break;
    uVar4 = thunk_FUN_00f1b490(param_1,*(int *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60) + 0x40)
                                       + 0x14);
    iVar3 = FUN_00efd180(uVar4,iVar5,iVar2);
    bVar7 = iVar3 == iVar2;
    iVar2 = iVar3;
    if (bVar7) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00ec3e28(iVar3,iVar6);
}

