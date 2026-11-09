/* IL2CPP: Rotatelab.PooledClosure$$Action<__Il2CppFullySharedGenericType>
System_Action_o* Rotatelab_PooledClosure__Action___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter1, System_Action_P1__o* callback, const MethodInfo_153DB38* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PooledClosure$$Action<__Il2CppFullySharedGenericType>
   System_Action_o* Rotatelab_PooledClosure__Action___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter1, System_Action_P1__o*
   callback, const MethodInfo_153DB38* method); */

void Rotatelab_PooledClosure__Action___Il2CppFullySharedGenericType__153db38
               (undefined4 *****param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *****pppppuVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  code *pcVar8;
  int aiStack_40 [3];
  undefined4 ****ppppuStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_0154dc40 + 0x154db5c);
  piVar6 = *(int **)(param_3 + 0x1c);
  ppppuStack_34 = param_1;
  if (piVar6 == (int *)0x0) {
    FUN_00efd7c4(param_3);
    piVar6 = *(int **)(param_3 + 0x1c);
  }
  iVar1 = -(*(int *)(*piVar6 + 0x84) + 7U & 0xfffffff8);
  piVar7 = (int *)((int)aiStack_40 + iVar1 + 8);
  pppppuVar4 = &ppppuStack_34;
  if (*(int *)(*piVar6 + 0x14) < 0) {
    pppppuVar4 = param_1;
  }
  thunk_FUN_00f95db8(piVar7,pppppuVar4);
  iVar2 = piVar6[3];
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
  }
  puVar5 = (undefined4 *)(*(int **)(param_3 + 0x1c))[2];
  uVar3 = *puVar5;
  uStack_2c = param_2;
  if (-1 < *(int *)(**(int **)(param_3 + 0x1c) + 0x14)) {
    piVar7 = (int *)*piVar7;
  }
  pcVar8 = (code *)puVar5[2];
  iStack_30 = (int)piVar7;
  *(undefined4 **)((int)aiStack_40 + iVar1) = &uStack_28;
  (*pcVar8)(uVar3,puVar5,0,&iStack_30);
  if (**(int **)(_UNK_0154dc44 + 0x154dc2c) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_28);
  }
  return;
}

