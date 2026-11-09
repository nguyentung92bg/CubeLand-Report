/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$get_DefaultValue
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___get_DefaultValue (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8C154* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$get_DefaultValue
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___get_DefaultValue
   (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8C154* method); */

void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___get_DefaultValue_1a8c154
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int aiStack_30 [2];
  int iStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_01a9c284 + 0x1a9c178);
  piVar2 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
  iVar6 = *(int *)(piVar2[2] + 0x84);
  iVar1 = -(iVar6 + 7U & 0xfffffff8);
  iVar7 = (int)&iStack_28 + iVar1;
  piVar2 = (int *)thunk_FUN_00f1b490(param_1,*(int *)(*piVar2 + 0x40) + 0x28);
  iVar3 = *(int *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60) + 0x40);
  if (*piVar2 == 0) {
    uVar4 = thunk_FUN_00f1b490(param_1,iVar3 + 0x14);
    thunk_FUN_00f95db8(iVar7,uVar4,iVar6);
    thunk_FUN_00f95dc8(param_2,uVar4,iVar6);
  }
  else {
    piVar2 = (int *)thunk_FUN_00f1b490(param_1,iVar3 + 0x28);
    iVar3 = *piVar2;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar5 = *(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0xc);
    uVar4 = *puVar5;
    pcVar8 = (code *)puVar5[2];
    iStack_28 = iVar7;
    *(int *)((int)aiStack_30 + iVar1) = iVar7;
    (*pcVar8)(uVar4,puVar5,iVar3,&iStack_28);
    thunk_FUN_00f95db8(param_2,iVar7,iVar6);
  }
  if (**(int **)(_UNK_01a9c288 + 0x1a9c270) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

