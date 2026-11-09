/* IL2CPP: Rotatelab.GameAction<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Raise
void Rotatelab_GameAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Raise (Rotatelab_GameAction_T1__T2__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2, const MethodInfo_23A595C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameAction<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>$$Raise
   void Rotatelab_GameAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Raise
   (Rotatelab_GameAction_T1__T2__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   arg1, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg2, const MethodInfo_23A595C*
   method); */

void Rotatelab_GameAction___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Raise_23a595c
               (int param_1,undefined4 *****param_2,undefined4 *****param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *****pppppuVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int aiStack_48 [3];
  undefined4 ****ppppuStack_3c;
  undefined4 ****ppppuStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_023b5a68 + 0x23b5978);
  iVar10 = *(int *)(*(int *)(param_4 + 0x10) + 0x60);
  iVar5 = *(int *)(iVar10 + 0xc);
  iVar7 = *(int *)(iVar5 + 0x84);
  piVar4 = (int *)((int)aiStack_48 + (8 - (*(int *)(*(int *)(iVar10 + 8) + 0x84) + 7U & 0xfffffff8))
                  );
  piVar6 = (int *)((int)piVar4 - (iVar7 + 7U & 0xfffffff8));
  ppppuStack_3c = param_3;
  ppppuStack_38 = param_2;
  if (*(int *)(param_1 + 8) != 0) {
    iVar9 = *(int *)(*(int *)(iVar10 + 8) + 0x14);
    pppppuVar2 = &ppppuStack_38;
    if (iVar9 < 0) {
      pppppuVar2 = param_2;
    }
    aiStack_48[2] = *(int *)(param_1 + 8);
    thunk_FUN_00f95db8(piVar4,pppppuVar2);
    iVar5 = *(int *)(iVar5 + 0x14);
    pppppuVar2 = &ppppuStack_3c;
    if (iVar5 < 0) {
      pppppuVar2 = param_3;
    }
    thunk_FUN_00f95db8(piVar6,pppppuVar2,iVar7);
    iVar7 = aiStack_48[2];
    puVar3 = *(undefined4 **)(iVar10 + 0x10);
    if (-1 < iVar9) {
      piVar4 = (int *)*piVar4;
    }
    iStack_30 = (int)piVar6;
    if (-1 < iVar5) {
      iStack_30 = *piVar6;
    }
    uVar1 = *puVar3;
    pcVar8 = (code *)puVar3[2];
    iStack_34 = (int)piVar4;
    piVar6[-2] = iStack_30;
    (*pcVar8)(uVar1,puVar3,iVar7,&iStack_34);
  }
  if (**(int **)(_UNK_023b5a6c + 0x23b5a54) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

