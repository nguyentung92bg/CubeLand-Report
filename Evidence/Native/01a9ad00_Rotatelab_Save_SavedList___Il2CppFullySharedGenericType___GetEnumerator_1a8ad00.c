/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$GetEnumerator
System_Collections_Generic_List_Enumerator_T__o Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___GetEnumerator (Rotatelab_Save_SavedList_T__o* __this, const MethodInfo_1A8AD00* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedList<__Il2CppFullySharedGenericType>$$GetEnumerator
   System_Collections_Generic_List_Enumerator_T__o
   Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___GetEnumerator
   (Rotatelab_Save_SavedList_T__o* __this, const MethodInfo_1A8AD00* method); */

void Rotatelab_Save_SavedList___Il2CppFullySharedGenericType___GetEnumerator_1a8ad00
               (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int aiStack_38 [2];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_28 = **(int **)(_UNK_01a9adfc + 0x1a9ad24);
  puVar2 = *(undefined4 **)(*(int *)(param_3 + 0x10) + 0x60);
  iVar6 = *(int *)(puVar2[0xf] + 0x84);
  iVar1 = -(iVar6 + 7U & 0xfffffff8);
  iVar5 = (int)&iStack_30 + iVar1;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar2 = (undefined4 *)*puVar2;
  uVar3 = *puVar2;
  pcVar4 = (code *)puVar2[2];
  *(int **)((int)aiStack_38 + iVar1) = &iStack_30;
  (*pcVar4)(uVar3,puVar2,param_1,0);
  if (iStack_30 != 0) {
    puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x38);
    uVar3 = *puVar2;
    pcVar4 = (code *)puVar2[2];
    iStack_2c = iVar5;
    *(int *)((int)aiStack_38 + iVar1) = iVar5;
    (*pcVar4)(uVar3,puVar2,iStack_30,&iStack_2c);
    thunk_FUN_00f95db8(param_2,iVar5,iVar6);
    if (**(int **)(_UNK_01a9ae00 + 0x1a9ade8) != iStack_28) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

