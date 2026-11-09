/* IL2CPP: Rotatelab.Extensions$$PickRandom<__Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o Rotatelab_Extensions__PickRandom___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, const MethodInfo_1487A38* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$PickRandom<__Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o
   Rotatelab_Extensions__PickRandom___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, const MethodInfo_1487A38* method); */

void Rotatelab_Extensions__PickRandom___Il2CppFullySharedGenericType__1487a38
               (int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  int aiStack_40 [2];
  undefined4 *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01497c04 + 0x1497a5c);
  iVar2 = *(int *)(param_3 + 0x1c);
  if (iVar2 == 0) {
    FUN_00efd7c4(param_3);
    iVar2 = *(int *)(param_3 + 0x1c);
  }
  iVar9 = *(int *)(*(int *)(iVar2 + 0x10) + 0x84);
  iVar1 = -(iVar9 + 7U & 0xfffffff8);
  iVar10 = (int)&puStack_38 + iVar1;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 4);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar3 = *param_1;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar2) {
        puVar4 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
        goto LAB_01497b0c;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(param_1,iVar2,0);
LAB_01497b0c:
  uVar5 = (*(code *)*puVar4)(param_1,puVar4[1]);
  uStack_30 = UnityEngine_Random__Range_35f8b14(0,uVar5,0);
  iVar2 = **(int **)(param_3 + 0x1c);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar3 = *param_1;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar2) {
        iVar2 = iVar3 + *piVar7 * 8 + 0xc0;
        goto LAB_01497ba0;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  iVar2 = FUN_00efdb38(param_1,iVar2,0);
LAB_01497ba0:
  puStack_38 = &uStack_30;
  iVar2 = *(int *)(iVar2 + 4);
  uVar5 = *(undefined4 *)(iVar2 + 4);
  pcVar8 = *(code **)(iVar2 + 8);
  iStack_34 = iVar10;
  *(int *)((int)aiStack_40 + iVar1) = iVar10;
  (*pcVar8)(uVar5,iVar2,param_1,&puStack_38);
  thunk_FUN_00f95db8(param_2,iVar10,iVar9);
  if (**(int **)(_UNK_01497c08 + 0x1497bf0) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

