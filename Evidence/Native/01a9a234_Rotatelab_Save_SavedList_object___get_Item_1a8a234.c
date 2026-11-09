/* IL2CPP: Rotatelab.Save.SavedList<object>$$get_Item
Il2CppObject* Rotatelab_Save_SavedList_object___get_Item (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index, const MethodInfo_1A8A234* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<object>$$get_Item
   Il2CppObject* Rotatelab_Save_SavedList_object___get_Item (Rotatelab_Save_SavedList_T__o* __this,
   System_Index_o index, const MethodInfo_1A8A234* method); */

void Rotatelab_Save_SavedList_object___get_Item_1a8a234(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_14;
  
  iStack_14 = param_2;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar1 + 0xc);
  iVar2 = System_Index__get_IsFromEnd_2b69200(&iStack_14,0);
  iVar3 = iStack_14;
  if (iVar2 != 0) {
    iVar3 = iVar4 + iStack_14 + 1;
  }
  System_Collections_Generic_List_object___get_Item_267d814
            (iVar1,iVar3,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0xc));
  return;
}

