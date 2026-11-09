/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$get_Item
System_ValueTuple_object__double__object__o Rotatelab_Save_SavedList_ValueTuple_object__double__object____get_Item (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index, const MethodInfo_1A89A08* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$get_Item
   System_ValueTuple_object__double__object__o
   Rotatelab_Save_SavedList_ValueTuple_object__double__object____get_Item
   (Rotatelab_Save_SavedList_T__o* __this, System_Index_o index, const MethodInfo_1A89A08* method);
    */

void Rotatelab_Save_SavedList_ValueTuple_object__double__object____get_Item_1a89a08
               (undefined8 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  int iStack_1c;
  
  iStack_1c = param_3;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_2);
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
  System_Collections_Generic_List_ValueTuple_object__double__object____get_Item_25c83d8
            (&uStack_38,iVar1,iVar3,*(undefined4 *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0xc)
            );
  *param_1 = uStack_38;
  param_1[1] = uStack_30;
  param_1[2] = uStack_28;
  return;
}

