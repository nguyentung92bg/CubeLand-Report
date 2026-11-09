/* IL2CPP: Rotatelab.PooledClosure$$Action<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
System_Action_o* Rotatelab_PooledClosure__Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter1, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter2, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter3, System_Action_P1__P2__P3__o* callback, const MethodInfo_153DE1C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PooledClosure$$Action<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
   System_Action_o*
   Rotatelab_PooledClosure__Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter1,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter2,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter3, System_Action_P1__P2__P3__o*
   callback, const MethodInfo_153DE1C* method); */

void Rotatelab_PooledClosure__Action___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__153de1c
               (undefined4 *****param_1,undefined4 *****param_2,undefined4 *****param_3,
               undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *****pppppuVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int aiStack_68 [4];
  undefined4 ****ppppuStack_58;
  undefined4 ****ppppuStack_54;
  undefined4 uStack_50;
  undefined4 ****ppppuStack_4c;
  undefined4 ****ppppuStack_48;
  undefined4 ****ppppuStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0154dfd8 + 0x154de40);
  piVar7 = *(int **)(param_5 + 0x1c);
  ppppuStack_58 = param_2;
  ppppuStack_54 = param_3;
  uStack_50 = param_4;
  ppppuStack_4c = param_3;
  ppppuStack_48 = param_2;
  ppppuStack_44 = param_1;
  if (piVar7 == (int *)0x0) {
    FUN_00efd7c4(param_5);
    piVar7 = *(int **)(param_5 + 0x1c);
  }
  iVar9 = piVar7[1];
  iVar5 = piVar7[2];
  iVar11 = *(int *)(iVar9 + 0x84);
  aiStack_68[3] = *(int *)(iVar5 + 0x84);
  piVar10 = (int *)((int)aiStack_68 + (8 - (*(int *)(*piVar7 + 0x84) + 7U & 0xfffffff8)));
  piVar6 = (int *)((int)piVar10 - (iVar11 + 7U & 0xfffffff8));
  piVar4 = (int *)((int)piVar6 - (aiStack_68[3] + 7U & 0xfffffff8));
  pppppuVar2 = &ppppuStack_44;
  if (*(int *)(*piVar7 + 0x14) < 0) {
    pppppuVar2 = param_1;
  }
  thunk_FUN_00f95db8(piVar10,pppppuVar2);
  pppppuVar2 = &ppppuStack_48;
  if (*(int *)(iVar9 + 0x14) < 0) {
    pppppuVar2 = (undefined4 *****)ppppuStack_58;
  }
  thunk_FUN_00f95db8(piVar6,pppppuVar2,iVar11);
  pppppuVar2 = &ppppuStack_4c;
  if (*(int *)(iVar5 + 0x14) < 0) {
    pppppuVar2 = (undefined4 *****)ppppuStack_54;
  }
  thunk_FUN_00f95db8(piVar4,pppppuVar2,aiStack_68[3]);
  iVar5 = piVar7[5];
  if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
    iVar5 = FUN_00efd768();
  }
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar7 = *(int **)(param_5 + 0x1c);
  puVar3 = (undefined4 *)piVar7[4];
  if (-1 < *(int *)(*piVar7 + 0x14)) {
    piVar10 = (int *)*piVar10;
  }
  uVar1 = *puVar3;
  if (-1 < *(int *)(piVar7[1] + 0x14)) {
    piVar6 = (int *)*piVar6;
  }
  iStack_38 = (int)piVar4;
  if (-1 < *(int *)(piVar7[2] + 0x14)) {
    iStack_38 = *piVar4;
  }
  uStack_34 = uStack_50;
  pcVar8 = (code *)puVar3[2];
  iStack_40 = (int)piVar10;
  iStack_3c = (int)piVar6;
  piVar4[-2] = (int)&uStack_30;
  (*pcVar8)(uVar1,puVar3,0,&iStack_40);
  if (**(int **)(_UNK_0154dfdc + 0x154dfc4) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_30);
  }
  return;
}

