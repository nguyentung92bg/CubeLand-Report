/* IL2CPP: Rotatelab.Extensions$$RemoveFast<object>
bool Rotatelab_Extensions__RemoveFast_object_ (System_Collections_Generic_List_T__o* list, Il2CppObject* element, const MethodInfo_14884AC* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$RemoveFast<object>
   bool Rotatelab_Extensions__RemoveFast_object_ (System_Collections_Generic_List_T__o* list,
   Il2CppObject* element, const MethodInfo_14884AC* method); */

uint Rotatelab_Extensions__RemoveFast_object__14884ac(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01498550 + 0x14984d4));
    if (*(int *)(param_3 + 0x1c) == 0) {
      FUN_00efd7c4(param_3);
    }
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = System_Collections_Generic_List_object___IndexOf_267e86c
                    (param_1,param_2,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 8));
  if (-1 < (int)uVar1) {
    if (*(int *)(**(int **)(_UNK_01498554 + 0x1498520) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Extensions__RemoveAtFast_object__14882cc
              (param_1,uVar1,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 0xc));
  }
  return ~uVar1 >> 0x1f;
}

