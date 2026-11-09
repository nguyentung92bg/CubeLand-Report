/* IL2CPP: Rotatelab.Extensions$$PickRandom<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Extensions__PickRandom___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* selector, const MethodInfo_1487E28* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$PickRandom<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Extensions__PickRandom___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* selector, const
   MethodInfo_1487E28* method); */

void Rotatelab_Extensions__PickRandom___Il2CppFullySharedGenericType__1487e28
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01497f60 + 0x1497e4c);
  iVar5 = *(int *)(param_4 + 0x1c);
  if (iVar5 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01497f64 + 0x1497e70));
    iVar5 = *(int *)(param_4 + 0x1c);
    if (iVar5 == 0) {
      FUN_00efd7c4(param_4);
      iVar5 = *(int *)(param_4 + 0x1c);
    }
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x10) + 0x84);
  puVar4 = auStack_30 + -(iVar3 + 7U & 0xfffffff8);
  FUN_00f88e5c(puVar4,iVar3);
  if (*(int *)(**(int **)(_UNK_01497f68 + 0x1497eb8) + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *(int *)(param_4 + 0x1c);
  }
  iVar5 = (*(code *)**(undefined4 **)(iVar5 + 8))(param_1,param_2,puVar4);
  if (iVar5 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01497f70 + 0x1497f2c));
    uVar1 = thunk_FUN_00f00cdc();
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_01497f74 + 0x1497f40));
    System_Exception___ctor_2bad064(uVar1,uVar2,0);
    func_0x00ec3920(uVar1,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760();
  }
  thunk_FUN_00f95db8(param_3,puVar4,iVar3);
  if (**(int **)(_UNK_01497f6c + 0x1497f0c) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

