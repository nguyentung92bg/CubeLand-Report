/* IL2CPP: Rotatelab.PooledClosure$$Action<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
System_Action_o* Rotatelab_PooledClosure__Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter1, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter2, System_Action_P1__P2__o* callback, const MethodInfo_153DCB4* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PooledClosure$$Action<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>
   System_Action_o*
   Rotatelab_PooledClosure__Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter1,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter2, System_Action_P1__P2__o*
   callback, const MethodInfo_153DCB4* method); */

void Rotatelab_PooledClosure__Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__153dcb4
               (undefined4 *****param_1,undefined4 *****param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *****pppppuVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  int aiStack_58 [5];
  undefined4 ****ppppuStack_44;
  undefined4 ****ppppuStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0154de14 + 0x154dcdc);
  piVar8 = *(int **)(param_4 + 0x1c);
  aiStack_58[4] = param_3;
  ppppuStack_44 = param_2;
  ppppuStack_40 = param_1;
  if (piVar8 == (int *)0x0) {
    FUN_00efd7c4(param_4);
    piVar8 = *(int **)(param_4 + 0x1c);
  }
  iVar5 = piVar8[1];
  iVar4 = *(int *)(iVar5 + 0x84);
  piVar9 = (int *)((int)aiStack_58 + (8 - (*(int *)(*piVar8 + 0x84) + 7U & 0xfffffff8)));
  piVar6 = (int *)((int)piVar9 - (iVar4 + 7U & 0xfffffff8));
  pppppuVar2 = &ppppuStack_40;
  if (*(int *)(*piVar8 + 0x14) < 0) {
    pppppuVar2 = param_1;
  }
  aiStack_58[3] = param_4;
  thunk_FUN_00f95db8(piVar9,pppppuVar2);
  pppppuVar2 = &ppppuStack_44;
  if (*(int *)(iVar5 + 0x14) < 0) {
    pppppuVar2 = param_2;
  }
  thunk_FUN_00f95db8(piVar6,pppppuVar2,iVar4);
  iVar4 = piVar8[4];
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768();
  }
  iVar5 = aiStack_58[3];
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar8 = *(int **)(iVar5 + 0x1c);
  puVar3 = (undefined4 *)piVar8[3];
  if (-1 < *(int *)(*piVar8 + 0x14)) {
    piVar9 = (int *)*piVar9;
  }
  uVar1 = *puVar3;
  iStack_38 = (int)piVar6;
  if (-1 < *(int *)(piVar8[1] + 0x14)) {
    iStack_38 = *piVar6;
  }
  uStack_34 = aiStack_58[4];
  pcVar7 = (code *)puVar3[2];
  iStack_3c = (int)piVar9;
  piVar6[-2] = (int)&uStack_30;
  (*pcVar7)(uVar1,puVar3,0,&iStack_3c);
  if (**(int **)(_UNK_0154de18 + 0x154de00) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_30);
  }
  return;
}

