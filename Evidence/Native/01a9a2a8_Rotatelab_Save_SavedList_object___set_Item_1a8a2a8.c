/* IL2CPP: Rotatelab.Save.SavedList<object>$$set_Item
void Rotatelab_Save_SavedList_object___set_Item (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index, Il2CppObject* value, const MethodInfo_1A8A2A8* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<object>$$set_Item
   void Rotatelab_Save_SavedList_object___set_Item (Rotatelab_Save_SavedList_T__o* __this,
   System_Index_o index, Il2CppObject* value, const MethodInfo_1A8A2A8* method); */

void Rotatelab_Save_SavedList_object___set_Item_1a8a2a8
               (int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_1c;
  
  iStack_1c = param_2;
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
  iVar2 = System_Index__get_IsFromEnd_2b69200(&iStack_1c,0);
  iVar3 = iStack_1c;
  if (iVar2 != 0) {
    iVar3 = iVar4 + iStack_1c + 1;
  }
  System_Collections_Generic_List_object___set_Item_267d860
            (iVar1,iVar3,param_3,*(undefined4 *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0x14));
  return;
}

