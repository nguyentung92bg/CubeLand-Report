/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$add_OnValueChanged
void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___add_OnValueChanged (Rotatelab_Save_SavedValue_T__o* __this, System_Action_T__o* value, const MethodInfo_1A8C28C* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$add_OnValueChanged
   void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___add_OnValueChanged
   (Rotatelab_Save_SavedValue_T__o* __this, System_Action_T__o* value, const MethodInfo_1A8C28C*
   method); */

void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___add_OnValueChanged_1a8c28c
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
                                                     0x40) + 0x50);
  iVar2 = *piVar1;
  while( true ) {
    iVar3 = System_Delegate__Combine_2bbca94(iVar2,param_2,0);
    iVar6 = *(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x10);
    if ((*(ushort *)(iVar6 + 0xbd) & 1) == 0) {
      iVar6 = FUN_00efd768(iVar6);
    }
    iVar5 = 0;
    if ((iVar3 != 0) && (iVar5 = thunk_FUN_00f00bc8(iVar3,iVar6), iVar5 == 0)) break;
    uVar4 = thunk_FUN_00f1b490(param_1,*(int *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60) + 0x40)
                                       + 0x50);
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

