/* IL2CPP: Rotatelab.Extensions$$PickRandom<object>
Il2CppObject* Rotatelab_Extensions__PickRandom_object_ (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* selector, const MethodInfo_1487D4C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$PickRandom<object>
   Il2CppObject* Rotatelab_Extensions__PickRandom_object_ (System_Collections_Generic_IList_T__o*
   list, System_Predicate_T__o* selector, const MethodInfo_1487D4C* method); */

undefined4
Rotatelab_Extensions__PickRandom_object__1487d4c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_14;
  
  if ((*(int *)(param_3 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01497e18 + 0x1497d78)), *(int *)(param_3 + 0x1c) == 0)) {
    FUN_00efd7c4(param_3);
  }
  uStack_14 = 0;
  if (*(int *)(**(int **)(_UNK_01497e1c + 0x1497d9c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryPickRandom_object__148bf30
                    (param_1,param_2,&uStack_14,*(undefined4 *)(*(int *)(param_3 + 0x1c) + 8));
  if (iVar1 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01497e20 + 0x1497de4));
    uVar2 = thunk_FUN_00f00cdc();
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01497e24 + 0x1497df8));
    System_Exception___ctor_2bad064(uVar2,uVar3,0);
    func_0x00ec3920(uVar2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  return uStack_14;
}

