/* IL2CPP: Rotatelab.Extensions$$RemoveFast<__Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__RemoveFast___Il2CppFullySharedGenericType_ (System_Collections_Generic_List_T__o* list, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o element, const MethodInfo_1488558* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$RemoveFast<__Il2CppFullySharedGenericType>
   bool Rotatelab_Extensions__RemoveFast___Il2CppFullySharedGenericType_
   (System_Collections_Generic_List_T__o* list,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o element, const MethodInfo_1488558*
   method); */

void Rotatelab_Extensions__RemoveFast___Il2CppFullySharedGenericType__1488558
               (int param_1,undefined4 *****param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *****pppppuVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int aiStack_40 [3];
  undefined4 ****ppppuStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iStack_28 = **(int **)(_UNK_014986a0 + 0x149857c);
  iVar5 = *(int *)(param_3 + 0x1c);
  ppppuStack_34 = param_2;
  if (iVar5 == 0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_014986a4 + 0x14985a0));
    iVar5 = *(int *)(param_3 + 0x1c);
    if (iVar5 == 0) {
      FUN_00efd7c4(param_3);
      iVar5 = *(int *)(param_3 + 0x1c);
    }
  }
  iVar1 = -(*(int *)(*(int *)(iVar5 + 4) + 0x84) + 7U & 0xfffffff8);
  piVar7 = (int *)((int)aiStack_40 + iVar1 + 8);
  iVar6 = *(int *)(*(int *)(iVar5 + 4) + 0x14);
  pppppuVar3 = &ppppuStack_34;
  if (iVar6 < 0) {
    pppppuVar3 = param_2;
  }
  thunk_FUN_00f95db8(piVar7,pppppuVar3);
  if (param_1 != 0) {
    puVar4 = *(undefined4 **)(iVar5 + 8);
    if (-1 < iVar6) {
      piVar7 = (int *)*piVar7;
    }
    uVar2 = *puVar4;
    pcVar8 = (code *)puVar4[2];
    iStack_30 = (int)piVar7;
    *(int **)((int)aiStack_40 + iVar1) = &iStack_2c;
    (*pcVar8)(uVar2,puVar4,param_1,&iStack_30);
    if (-1 < iStack_2c) {
      if (*(int *)(**(int **)(_UNK_014986a8 + 0x149864c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      (*(code *)**(undefined4 **)(*(int *)(param_3 + 0x1c) + 0xc))(param_1,iStack_2c);
    }
    if (**(int **)(_UNK_014986ac + 0x1498684) != iStack_28) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iStack_28);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

