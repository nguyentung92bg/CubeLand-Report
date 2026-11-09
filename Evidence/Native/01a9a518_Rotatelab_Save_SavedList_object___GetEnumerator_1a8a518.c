/* IL2CPP: Rotatelab.Save.SavedList<object>$$GetEnumerator
System_Collections_Generic_List_Enumerator_T__o Rotatelab_Save_SavedList_object___GetEnumerator (Rotatelab_Save_SavedList_T__o* __this, const MethodInfo_1A8A518* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Save.SavedList<object>$$GetEnumerator
   System_Collections_Generic_List_Enumerator_T__o Rotatelab_Save_SavedList_object___GetEnumerator
   (Rotatelab_Save_SavedList_T__o* __this, const MethodInfo_1A8A518* method); */

void Rotatelab_Save_SavedList_object___GetEnumerator_1a8a518
               (undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c(param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_20,iVar1,*(undefined4 *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x38));
  *param_1 = uStack_20;
  param_1[1] = uStack_18;
  return;
}

