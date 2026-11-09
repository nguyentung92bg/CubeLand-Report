/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$set_Item
void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___set_Item (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_1A8A860* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$set_Item
   void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___set_Item
   (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o value, const MethodInfo_1A8A860* method);
    */

void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___set_Item_1a8a860
               (int param_1,int param_2,undefined4 *****param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *****pppppuVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int aiStack_58 [5];
  undefined4 ****ppppuStack_44;
  undefined4 ****ppppuStack_40;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01a9a9ec + 0x1a9a880);
  puVar3 = *(undefined4 **)(*(int *)(param_4 + 0x10) + 0x60);
  aiStack_58[4] = *(int *)(puVar3[4] + 0x84);
  iVar1 = -(aiStack_58[4] + 7U & 0xfffffff8);
  piVar7 = (int *)((int)aiStack_58 + iVar1 + 8);
  ppppuStack_44 = param_3;
  ppppuStack_40 = param_3;
  iStack_3c = param_2;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar3 = (undefined4 *)*puVar3;
  uVar4 = *puVar3;
  pcVar8 = (code *)puVar3[2];
  *(int ***)((int)aiStack_58 + iVar1) = &piStack_38;
  (*pcVar8)(uVar4,puVar3,param_1,0);
  piVar2 = piStack_38;
  if (piStack_38 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = (*(code *)**(undefined4 **)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 8))(piStack_38);
  aiStack_58[3] = System_Index__get_IsFromEnd_2b69200(&iStack_3c,0);
  iStack_30 = iStack_3c;
  iVar10 = *(int *)(*(int *)(param_4 + 0x10) + 0x60);
  iVar9 = *(int *)(*(int *)(iVar10 + 0x10) + 0x14);
  pppppuVar6 = &ppppuStack_40;
  if (iVar9 < 0) {
    pppppuVar6 = (undefined4 *****)ppppuStack_44;
  }
  thunk_FUN_00f95db8(piVar7,pppppuVar6,aiStack_58[4]);
  if (piStack_38 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar3 = *(undefined4 **)(iVar10 + 0x14);
  if (-1 < iVar9) {
    piVar7 = (int *)*piVar7;
  }
  uVar4 = *puVar3;
  if (aiStack_58[3] != 0) {
    iStack_30 = iVar5 + iStack_30 + 1;
  }
  piStack_38 = &iStack_30;
  pcVar8 = (code *)puVar3[2];
  iStack_34 = (int)piVar7;
  *(int **)((int)aiStack_58 + iVar1) = piVar7;
  (*pcVar8)(uVar4,puVar3,piVar2,&piStack_38);
  if (**(int **)(_UNK_01a9a9f0 + 0x1a9a9d8) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

