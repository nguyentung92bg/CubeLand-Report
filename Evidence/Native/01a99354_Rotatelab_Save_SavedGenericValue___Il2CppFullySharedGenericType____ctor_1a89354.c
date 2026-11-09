/* IL2CPP: Rotatelab.Save.SavedGenericValue<__Il2CppFullySharedGenericType>$$.ctor
void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType____ctor (Rotatelab_Save_SavedGenericValue_T__o* __this, System_String_o* key, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, bool createNewInstanceAsDefault, const MethodInfo_1A89354* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Save.SavedGenericValue<__Il2CppFullySharedGenericType>$$.ctor
   void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType____ctor
   (Rotatelab_Save_SavedGenericValue_T__o* __this, System_String_o* key,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o defaultValue, bool
   createNewInstanceAsDefault, const MethodInfo_1A89354* method); */

void Rotatelab_Save_SavedGenericValue___Il2CppFullySharedGenericType____ctor_1a89354
               (undefined4 param_1,undefined4 param_2,undefined4 *******param_3,undefined4 param_4,
               int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int *piVar9;
  int aiStack_40 [2];
  undefined4 *******apppppppuStack_38 [2];
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01a99438 + 0x1a99378);
  piVar7 = *(int **)(*(int *)(param_5 + 0x10) + 0x60);
  iVar2 = *piVar7;
  iVar6 = *(int *)(iVar2 + 0x84);
  iVar1 = -(iVar6 + 7U & 0xfffffff8);
  piVar9 = (int *)((int)apppppppuStack_38 + iVar1);
  iVar2 = *(int *)(iVar2 + 0x14);
  pppppppuVar4 = apppppppuStack_38;
  if (iVar2 < 0) {
    pppppppuVar4 = param_3;
  }
  apppppppuStack_38[0] = param_3;
  thunk_FUN_00f95db8(piVar9,pppppppuVar4,iVar6);
  puVar5 = (undefined4 *)piVar7[1];
  if (-1 < iVar2) {
    piVar9 = (int *)*piVar9;
  }
  uVar3 = *puVar5;
  pcVar8 = (code *)puVar5[2];
  apppppppuStack_38[1] = (undefined4 *******)param_2;
  iStack_30 = (int)piVar9;
  *(int **)((int)aiStack_40 + iVar1) = piVar9;
  (*pcVar8)(uVar3,puVar5,param_1,apppppppuStack_38 + 1);
  func_0x00b8fd04(param_1,*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_5 + 0x10) + 0x60) + 0xc) + 0x40),
                  param_4);
  if (**(int **)(_UNK_01a9943c + 0x1a99424) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

