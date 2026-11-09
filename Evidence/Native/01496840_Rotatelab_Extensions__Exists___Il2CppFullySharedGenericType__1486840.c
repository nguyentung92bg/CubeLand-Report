/* IL2CPP: Rotatelab.Extensions$$Exists<__Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__Exists___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* match, const MethodInfo_1486840* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Exists<__Il2CppFullySharedGenericType>
   bool Rotatelab_Extensions__Exists___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* match, const
   MethodInfo_1486840* method); */

void Rotatelab_Extensions__Exists___Il2CppFullySharedGenericType__1486840
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_28 [4];
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_01496918 + 0x1496864);
  iVar2 = *(int *)(param_3 + 0x1c);
  if (iVar2 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0149691c + 0x1496884));
    iVar2 = *(int *)(param_3 + 0x1c);
    if (iVar2 == 0) {
      FUN_00efd7c4(param_3);
      iVar2 = *(int *)(param_3 + 0x1c);
    }
  }
  iVar1 = *(int *)(*(int *)(iVar2 + 0x10) + 0x84);
  FUN_00f88e5c(auStack_28 + -(iVar1 + 7U & 0xfffffff8));
  if (*(int *)(**(int **)(_UNK_01496920 + 0x14968c8) + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *(int *)(param_3 + 0x1c);
  }
  (*(code *)**(undefined4 **)(iVar2 + 8))(param_1,param_2,auStack_28 + -(iVar1 + 7U & 0xfffffff8));
  if (**(int **)(_UNK_01496924 + 0x1496904) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

