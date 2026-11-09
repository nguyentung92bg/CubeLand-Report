/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$get_Value
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___get_Value (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8C42C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedValue<__Il2CppFullySharedGenericType>$$get_Value
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___get_Value
   (Rotatelab_Save_SavedValue_T__o* __this, const MethodInfo_1A8C42C* method); */

void Rotatelab_Save_SavedValue___Il2CppFullySharedGenericType___get_Value_1a8c42c
               (int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  code *pcVar8;
  int aiStack_38 [2];
  undefined1 auStack_30 [4];
  undefined1 *puStack_2c;
  int iStack_28;
  
  iStack_28 = **(int **)(_UNK_01a9c56c + 0x1a9c450);
  piVar2 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
  iVar7 = *(int *)(piVar2[2] + 0x84);
  iVar1 = -(iVar7 + 7U & 0xfffffff8);
  puVar6 = auStack_30 + iVar1;
  pcVar3 = (char *)thunk_FUN_00f1b490(param_1,*(int *)(*piVar2 + 0x40) + 100);
  if (*pcVar3 == '\0') {
    iVar5 = *(int *)(*param_1 + 0xe4);
    uVar4 = *(undefined4 *)(iVar5 + 4);
    pcVar8 = *(code **)(iVar5 + 8);
    puStack_2c = puVar6;
    *(undefined1 **)((int)aiStack_38 + iVar1) = puVar6;
    (*pcVar8)(uVar4,iVar5,param_1,&puStack_2c);
    func_0x00ec37e8(param_1,*(int *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60) + 0x40) + 0x78,
                    puVar6,iVar7);
    func_0x00b8fd04(param_1,*(int *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60) + 0x40) + 100,1);
  }
  uVar4 = thunk_FUN_00f1b490(param_1,*(int *)(**(int **)(*(int *)(param_3 + 0x10) + 0x60) + 0x40) +
                                     0x78);
  thunk_FUN_00f95db8(puVar6,uVar4,iVar7);
  thunk_FUN_00f95dc8(param_2,uVar4,iVar7);
  if (**(int **)(_UNK_01a9c570 + 0x1a9c558) != iStack_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

