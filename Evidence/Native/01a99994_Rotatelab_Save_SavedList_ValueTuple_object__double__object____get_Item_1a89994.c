/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$get_Item
System_ValueTuple_object__double__object__o Rotatelab_Save_SavedList_ValueTuple_object__double__object____get_Item (Rotatelab_Save_SavedList_T__o* __this, int32_t index, const MethodInfo_1A89994* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<ValueTuple<object, double, object>>$$get_Item
   System_ValueTuple_object__double__object__o
   Rotatelab_Save_SavedList_ValueTuple_object__double__object____get_Item
   (Rotatelab_Save_SavedList_T__o* __this, int32_t index, const MethodInfo_1A89994* method); */

void Rotatelab_Save_SavedList_ValueTuple_object__double__object____get_Item_1a89994
               (undefined8 *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_ValueTuple_object__double__object____get_Item_25c83d8
            (&uStack_30,iVar1,param_3,
             *(undefined4 *)(*(int *)(*(int *)(param_4 + 0x10) + 0x60) + 0xc));
  *param_1 = uStack_30;
  param_1[1] = uStack_28;
  param_1[2] = uStack_20;
  return;
}

