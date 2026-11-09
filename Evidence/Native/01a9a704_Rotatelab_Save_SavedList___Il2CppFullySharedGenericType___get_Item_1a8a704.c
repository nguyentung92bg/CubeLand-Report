/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$get_Item
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___get_Item (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index, const MethodInfo_1A8A704* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$get_Item
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___get_Item
   (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index, const MethodInfo_1A8A704* method);
    */

void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___get_Item_1a8a704
               (int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int aiStack_48 [2];
  undefined4 uStack_40;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01a9a858 + 0x1a9a728);
  puVar3 = *(undefined4 **)(*(int *)(param_4 + 0x10) + 0x60);
  iVar9 = *(int *)(puVar3[4] + 0x84);
  iVar1 = -(iVar9 + 7U & 0xfffffff8);
  iVar7 = (int)&uStack_40 + iVar1;
  uStack_40 = param_3;
  iStack_3c = param_2;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar3 = (undefined4 *)*puVar3;
  uVar4 = *puVar3;
  pcVar8 = (code *)puVar3[2];
  *(int ***)((int)aiStack_48 + iVar1) = &piStack_38;
  (*pcVar8)(uVar4,puVar3,param_1,0);
  piVar2 = piStack_38;
  if (piStack_38 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 8))(piStack_38);
  iVar6 = System_Index__get_IsFromEnd_2b69200(&iStack_3c,0);
  if (piStack_38 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iStack_30 = iStack_3c;
  if (iVar6 != 0) {
    iStack_30 = iVar5 + iStack_3c + 1;
  }
  piStack_38 = &iStack_30;
  puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0xc);
  uVar4 = *puVar3;
  pcVar8 = (code *)puVar3[2];
  iStack_34 = iVar7;
  *(int *)((int)aiStack_48 + iVar1) = iVar7;
  (*pcVar8)(uVar4,puVar3,piVar2,&piStack_38);
  thunk_FUN_00f95db8(uStack_40,iVar7,iVar9);
  if (**(int **)(_UNK_01a9a85c + 0x1a9a844) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

