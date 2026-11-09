/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$get_Item
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___get_Item (Rotatelab_Save_SavedList_T__o* __this, int32_t index, const MethodInfo_1A8A5F0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$get_Item
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___get_Item
   (Rotatelab_Save_SavedList_T__o* __this, int32_t index, const MethodInfo_1A8A5F0* method); */

void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___get_Item_1a8a5f0
               (int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  int aiStack_40 [2];
  undefined4 *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01a9a6fc + 0x1a9a614);
  puVar2 = *(undefined4 **)(*(int *)(param_4 + 0x10) + 0x60);
  iVar7 = *(int *)(puVar2[4] + 0x84);
  iVar1 = -(iVar7 + 7U & 0xfffffff8);
  iVar6 = (int)&puStack_38 + iVar1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar2 = (undefined4 *)*puVar2;
  uVar3 = *puVar2;
  pcVar5 = (code *)puVar2[2];
  *(undefined4 ***)((int)aiStack_40 + iVar1) = &puStack_38;
  (*pcVar5)(uVar3,puVar2,param_1,0);
  puVar2 = puStack_38;
  if (puStack_38 != (undefined4 *)0x0) {
    puStack_38 = &uStack_30;
    puVar4 = *(undefined4 **)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0xc);
    uVar3 = *puVar4;
    pcVar5 = (code *)puVar4[2];
    iStack_34 = iVar6;
    uStack_30 = param_2;
    *(int *)((int)aiStack_40 + iVar1) = iVar6;
    (*pcVar5)(uVar3,puVar4,puVar2,&puStack_38);
    thunk_FUN_00f95db8(param_3,iVar6,iVar7);
    if (**(int **)(_UNK_01a9a700 + 0x1a9a6e8) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

