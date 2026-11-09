/* IL2CPP: Rotatelab.Extensions$$Contains<__Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__Contains___Il2CppFullySharedGenericType_ (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o element, const MethodInfo_1484EF0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Contains<__Il2CppFullySharedGenericType>
   bool Rotatelab_Extensions__Contains___Il2CppFullySharedGenericType_
   (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* array,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o element, const MethodInfo_1484EF0*
   method); */

void Rotatelab_Extensions__Contains___Il2CppFullySharedGenericType__1484ef0
               (undefined4 param_1,undefined4 *****param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *****pppppuVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  int aiStack_40 [3];
  undefined4 ****ppppuStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iStack_24 = **(int **)(_UNK_01494fd0 + 0x1494f10);
  iVar7 = *(int *)(param_3 + 0x1c);
  ppppuStack_34 = param_2;
  if (iVar7 == 0) {
    FUN_00efd7c4(param_3);
    iVar7 = *(int *)(param_3 + 0x1c);
  }
  iVar1 = -(*(int *)(*(int *)(iVar7 + 4) + 0x84) + 7U & 0xfffffff8);
  piVar6 = (int *)((int)aiStack_40 + iVar1 + 8);
  iVar5 = *(int *)(*(int *)(iVar7 + 4) + 0x14);
  pppppuVar3 = &ppppuStack_34;
  if (iVar5 < 0) {
    pppppuVar3 = param_2;
  }
  thunk_FUN_00f95db8(piVar6,pppppuVar3);
  puVar4 = *(undefined4 **)(iVar7 + 8);
  if (-1 < iVar5) {
    piVar6 = (int *)*piVar6;
  }
  uVar2 = *puVar4;
  pcVar8 = (code *)puVar4[2];
  uStack_30 = param_1;
  iStack_2c = (int)piVar6;
  *(undefined4 **)((int)aiStack_40 + iVar1) = &uStack_28;
  (*pcVar8)(uVar2,puVar4,0,&uStack_30);
  if (**(int **)(_UNK_01494fd4 + 0x1494fb4) != iStack_24) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_28);
  }
  return;
}

