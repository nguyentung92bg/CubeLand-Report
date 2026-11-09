/* IL2CPP: Rotatelab.Extensions$$RemoveAtAndReturn<object>
Il2CppObject* Rotatelab_Extensions__RemoveAtAndReturn_object_ (System_Collections_Generic_List_T__o* list, int32_t index, const MethodInfo_1488144* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$RemoveAtAndReturn<object>
   Il2CppObject* Rotatelab_Extensions__RemoveAtAndReturn_object_
   (System_Collections_Generic_List_T__o* list, int32_t index, const MethodInfo_1488144* method); */

undefined4
Rotatelab_Extensions__RemoveAtAndReturn_object__1488144(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00efd7c4(param_3);
  }
  if (param_1 != 0) {
    uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (param_1,param_2,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 4));
    System_Collections_Generic_List_object___RemoveAt_267f3f8
              (param_1,param_2,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 0xc));
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

