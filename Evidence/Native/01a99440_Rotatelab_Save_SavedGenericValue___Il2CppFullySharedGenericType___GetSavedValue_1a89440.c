/* IL2CPP: Rotatelab.Save.SavedGenericValue<__Il2CppFullySharedGenericType>$$GetSavedValue
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType___GetSavedValue (Rotatelab_Save_SavedGenericValue_T__o* __this, const MethodInfo_1A89440* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedGenericValue<__Il2CppFullySharedGenericType>$$GetSavedValue
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType___GetSavedValue
   (Rotatelab_Save_SavedGenericValue_T__o* __this, const MethodInfo_1A89440* method); */

void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType___GetSavedValue_1a89440
               (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  code *pcVar8;
  undefined1 *puVar9;
  int iVar10;
  int aiStack_48 [2];
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  int iStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_01a996c8 + 0x1a99464);
  iStack_2c = **(int **)(_UNK_01a996cc + 0x1a99474);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01a996d0 + 0x1a9948c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01a996d4 + 0x1a99498));
    *pcVar7 = '\x01';
  }
  piVar2 = *(int **)(*(int *)(param_3 + 0x10) + 0x60);
  iVar10 = *(int *)(*piVar2 + 0x84);
  iVar1 = -(iVar10 + 7U & 0xfffffff8);
  puVar9 = auStack_40 + iVar1;
  uStack_3c = 0;
  puVar3 = (undefined4 *)thunk_FUN_00f1b490(param_1,*(undefined4 *)(piVar2[4] + 0x40));
  iVar4 = Rotatelab_Save_SaveManager__GetString_10790b0
                    (*puVar3,**(undefined4 **)(_UNK_01a996d8 + 0x1a994ec),0);
  if ((iVar4 == 0) || (iVar5 = System_String__IsNullOrEmpty_2a0a844(iVar4,0), iVar5 != 0)) {
    pcVar7 = (char *)thunk_FUN_00f1b490(param_1,*(undefined4 *)
                                                 (*(int *)(*(int *)(*(int *)(param_3 + 0x10) + 0x60)
                                                          + 0xc) + 0x40));
    puStack_30 = puVar9;
    if (*pcVar7 == '\0') {
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x18);
      uVar6 = *puVar3;
      pcVar8 = (code *)puVar3[2];
      *(undefined1 **)((int)aiStack_48 + iVar1) = puVar9;
    }
    else {
      puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x1c);
      uVar6 = *puVar3;
      pcVar8 = (code *)puVar3[2];
      param_1 = 0;
      *(undefined1 **)((int)aiStack_48 + iVar1) = puVar9;
    }
    (*pcVar8)(uVar6,puVar3,param_1,&puStack_30);
  }
  else {
    if (*(int *)(**(int **)(_UNK_01a996dc + 0x1a99568) + 0x74) == 0) {
      FUN_00ec3934();
    }
    puVar3 = *(undefined4 **)(*(int *)(*(int *)(param_3 + 0x10) + 0x60) + 0x14);
    uVar6 = *puVar3;
    pcVar8 = (code *)puVar3[2];
    iStack_38 = iVar4;
    puStack_34 = puVar9;
    *(undefined1 **)((int)aiStack_48 + iVar1) = puVar9;
    (*pcVar8)(uVar6,puVar3,0,&iStack_38);
  }
  thunk_FUN_00f95db8(param_2,puVar9,iVar10);
  if (**(int **)(_UNK_01a996e8 + 0x1a9960c) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

