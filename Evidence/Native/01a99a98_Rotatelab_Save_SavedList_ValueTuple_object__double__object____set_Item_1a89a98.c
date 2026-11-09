/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$set_Item
void Rotatelab_Save_SavedList_ValueTuple_object__double__object____set_Item (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index, System_ValueTuple_object__double__object__o value, const MethodInfo_1A89A98* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$set_Item
   void Rotatelab_Save_SavedList_ValueTuple_object__double__object____set_Item
   (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index,
   System_ValueTuple_object__double__object__o value, const MethodInfo_1A89A98* method); */

void Rotatelab_Save_SavedList_ValueTuple_object__double__object____set_Item_1a89a98
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iStack_28;
  
  iStack_28 = param_2;
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
  iVar2 = System_Index__get_IsFromEnd_2b69200(&iStack_28,0);
  iVar3 = iStack_28;
  if (iVar2 != 0) {
    iVar3 = iVar4 + iStack_28 + 1;
  }
  System_Collections_Generic_List_ValueTuple_object__double__object____set_Item_25c843c
            (iVar1,iVar3,param_3,param_4,param_5,param_6,param_7,param_8,
             *(undefined4 *)(*(int *)(*(int *)(param_9 + 0x10) + 0x60) + 0x14));
  return;
}

