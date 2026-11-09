/* IL2CPP: Rotatelab.Extensions$$InsertUnique<__Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__InsertUnique___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o element, const MethodInfo_1487540* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$InsertUnique<__Il2CppFullySharedGenericType>
   bool Rotatelab_Extensions__InsertUnique___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o element, const MethodInfo_1487540*
   method); */

void Rotatelab_Extensions__InsertUnique___Il2CppFullySharedGenericType__1487540
               (int *param_1,uint ***param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint ***pppuVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  uint **appuStack_48 [4];
  uint *puStack_38;
  uint *puStack_34;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01497790 + 0x1497564);
  iVar8 = *(int *)(param_3 + 0x1c);
  appuStack_48[3] = (uint **)param_2;
  if (iVar8 == 0) {
    FUN_00efd7c4(param_3);
    iVar8 = *(int *)(param_3 + 0x1c);
  }
  iVar12 = *(int *)(*(int *)(iVar8 + 4) + 0x84);
  iVar1 = -(iVar12 + 7U & 0xfffffff8);
  puVar11 = (uint *)((int)appuStack_48 + iVar1 + 8);
  pppuVar5 = appuStack_48 + 3;
  if (*(int *)(*(int *)(iVar8 + 4) + 0x14) < 0) {
    pppuVar5 = param_2;
  }
  thunk_FUN_00f95db8(puVar11,pppuVar5,iVar12);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iVar8 + 8);
  if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
    iVar4 = FUN_00efd768(iVar4);
    iVar8 = *(int *)(param_3 + 0x1c);
  }
  appuStack_48[2] = (uint **)param_2;
  iVar2 = *param_1;
  puVar10 = puVar11;
  if (-1 < *(int *)(*(int *)(iVar8 + 4) + 0x14)) {
    puVar10 = (uint *)*puVar11;
  }
  uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar4) {
        iVar8 = iVar2 + *piVar7 * 8 + 0xe0;
        goto LAB_01497650;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar6 != 0);
  }
  iVar8 = FUN_00efdb38(param_1,iVar4,4);
LAB_01497650:
  iVar8 = *(int *)(iVar8 + 4);
  uVar3 = *(undefined4 *)(iVar8 + 4);
  pcVar9 = *(code **)(iVar8 + 8);
  puStack_38 = puVar10;
  *(uint **)((int)appuStack_48 + iVar1) = &uStack_30;
  (*pcVar9)(uVar3,iVar8,param_1,appuStack_48 + 4);
  if ((uStack_30 & 0xff) == 0) {
    piVar7 = *(int **)(param_3 + 0x1c);
    pppuVar5 = appuStack_48 + 3;
    if (*(int *)(piVar7[1] + 0x14) < 0) {
      pppuVar5 = (uint ***)appuStack_48[2];
    }
    thunk_FUN_00f95db8(puVar11,pppuVar5,iVar12);
    iVar8 = *piVar7;
    if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
      iVar8 = FUN_00efd768(iVar8);
      piVar7 = *(int **)(param_3 + 0x1c);
    }
    uStack_30 = 0;
    iVar12 = *param_1;
    if (-1 < *(int *)(piVar7[1] + 0x14)) {
      puVar11 = (uint *)*puVar11;
    }
    uVar6 = (uint)*(ushort *)(iVar12 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar12 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar8) {
          iVar8 = iVar12 + *piVar7 * 8 + 0xd8;
          goto LAB_01497738;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    iVar8 = FUN_00efdb38(param_1,iVar8,3);
LAB_01497738:
    iVar8 = *(int *)(iVar8 + 4);
    uVar3 = *(undefined4 *)(iVar8 + 4);
    pcVar9 = *(code **)(iVar8 + 8);
    puStack_38 = &uStack_30;
    puStack_34 = puVar11;
    *(uint **)((int)appuStack_48 + iVar1) = puVar11;
    (*pcVar9)(uVar3,iVar8,param_1,appuStack_48 + 4);
  }
  if (**(int **)(_UNK_01497794 + 0x1497774) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iStack_2c);
  }
  return;
}

