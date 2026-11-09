/* IL2CPP: Rotatelab.GameAction<__Il2CppFullySharedGenericType>$$Raise
void Rotatelab_GameAction___Il2CppFullySharedGenericType___Raise (Rotatelab_GameAction_T1__o* __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1, const MethodInfo_23A36A4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameAction<__Il2CppFullySharedGenericType>$$Raise
   void Rotatelab_GameAction___Il2CppFullySharedGenericType___Raise (Rotatelab_GameAction_T1__o*
   __this, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o arg1, const MethodInfo_23A36A4*
   method); */

void Rotatelab_GameAction___Il2CppFullySharedGenericType___Raise_23a36a4
               (int param_1,undefined4 *****param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *****pppppuVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  int aiStack_38 [3];
  undefined4 ****ppppuStack_2c;
  int iStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_023b3764 + 0x23b36bc);
  iVar8 = *(int *)(*(int *)(param_3 + 0x10) + 0x60);
  iVar4 = *(int *)(iVar8 + 8);
  iVar1 = -(*(int *)(iVar4 + 0x84) + 7U & 0xfffffff8);
  piVar7 = (int *)((int)aiStack_38 + iVar1 + 8);
  iVar6 = *(int *)(param_1 + 8);
  ppppuStack_2c = param_2;
  if (iVar6 != 0) {
    iVar4 = *(int *)(iVar4 + 0x14);
    pppppuVar5 = &ppppuStack_2c;
    if (iVar4 < 0) {
      pppppuVar5 = param_2;
    }
    thunk_FUN_00f95db8(piVar7,pppppuVar5);
    puVar3 = *(undefined4 **)(iVar8 + 0xc);
    if (-1 < iVar4) {
      piVar7 = (int *)*piVar7;
    }
    uVar2 = *puVar3;
    pcVar9 = (code *)puVar3[2];
    iStack_28 = (int)piVar7;
    *(int **)((int)aiStack_38 + iVar1) = piVar7;
    (*pcVar9)(uVar2,puVar3,iVar6,&iStack_28);
  }
  if (**(int **)(_UNK_023b3768 + 0x23b3750) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

