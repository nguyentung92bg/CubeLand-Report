/* IL2CPP: Rotatelab.Extensions$$ConvertAll<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array* Rotatelab_Extensions__ConvertAll___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_TInput__o* list, System_Converter_TInput__TOutput__o* converter, const MethodInfo_1485014* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$ConvertAll<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array*
   Rotatelab_Extensions__ConvertAll___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_TInput__o* list, System_Converter_TInput__TOutput__o*
   converter, const MethodInfo_1485014* method); */

void Rotatelab_Extensions__ConvertAll___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__1485014
               (int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  code *pcVar12;
  int aiStack_58 [2];
  uint auStack_50 [3];
  uint *puStack_44;
  int iStack_40;
  int *piStack_3c;
  uint uStack_38;
  uint *puStack_34;
  uint *puStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0149539c + 0x1495038);
  iVar2 = *(int *)(param_3 + 0x1c);
  if (iVar2 == 0) {
    FUN_00efd7c4(param_3);
    iVar2 = *(int *)(param_3 + 0x1c);
  }
  iStack_40 = *(int *)(*(int *)(iVar2 + 0x20) + 0x84);
  puStack_44 = (uint *)((int)auStack_50 -
                       (*(int *)(*(int *)(iVar2 + 0x18) + 0x84) + 7U & 0xfffffff8));
  iVar11 = (int)puStack_44 - (iStack_40 + 7U & 0xfffffff8);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 4);
  auStack_50[2] = iVar11;
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar3 = *param_1;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar2) {
        puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
        goto LAB_0149510c;
      }
      uVar6 = uVar6 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(param_1,iVar2,0);
LAB_0149510c:
  uVar5 = (*(code *)*puVar4)(param_1,puVar4[1]);
  iVar2 = *(int *)(*(int *)(param_3 + 0x1c) + 0xc);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768();
  }
  piVar9 = (int *)FUN_00ec388c(iVar2,uVar5);
  iVar2 = *(int *)(*(int *)(param_3 + 0x1c) + 4);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar3 = *param_1;
  uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar6 != 0) {
    piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar2) {
        puVar4 = (undefined4 *)(iVar3 + *piVar10 * 8 + 0xc0);
        goto LAB_014951b0;
      }
      uVar6 = uVar6 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(param_1,iVar2,0);
LAB_014951b0:
  iVar2 = (*(code *)*puVar4)(param_1,puVar4[1]);
  uVar6 = iVar2 - 1;
  if ((int)uVar6 < 0) {
    if (**(int **)(_UNK_014953a0 + 0x1495384) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(iStack_2c);
    }
    return;
  }
  piStack_3c = piVar9 + 4;
  iVar2 = **(int **)(param_3 + 0x1c);
  auStack_50[1] = param_3;
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  iVar3 = *param_1;
  uVar7 = (uint)*(ushort *)(iVar3 + 0xb6);
  uStack_38 = uVar6;
  if (uVar7 != 0) {
    piVar10 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar2) {
        iVar2 = iVar3 + *piVar10 * 8 + 0xc0;
        goto LAB_01495244;
      }
      uVar7 = uVar7 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar7 != 0);
  }
  iVar2 = FUN_00efdb38(param_1,iVar2,0);
LAB_01495244:
  puVar8 = puStack_44;
  puStack_34 = &uStack_38;
  puStack_30 = puStack_44;
  iVar2 = *(int *)(iVar2 + 4);
  uVar5 = *(undefined4 *)(iVar2 + 4);
  pcVar12 = *(code **)(iVar2 + 8);
  *(uint **)(iVar11 + -8) = puStack_44;
  (*pcVar12)(uVar5,iVar2,param_1,&puStack_34);
  uVar1 = auStack_50[2];
  uVar7 = auStack_50[1];
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar4 = *(undefined4 **)(*(int *)(auStack_50[1] + 0x1c) + 0x1c);
  uVar5 = *puVar4;
  if (-1 < *(int *)(*(int *)(*(int *)(auStack_50[1] + 0x1c) + 0x18) + 0x14)) {
    puVar8 = (uint *)*puVar8;
  }
  puStack_30 = (uint *)auStack_50[2];
  pcVar12 = (code *)puVar4[2];
  puStack_34 = puVar8;
  *(uint *)(iVar11 + -8) = auStack_50[2];
  (*pcVar12)(uVar5,puVar4,param_2,&puStack_34);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((uint)piVar9[3] <= uVar6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  thunk_FUN_00f95db8((int *)(*(int *)(*piVar9 + 0x8c) * uVar6 + (int)piStack_3c),uVar1,iStack_40);
  iVar2 = *(int *)(*(int *)(uVar7 + 0x1c) + 0x20);
  if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
    iVar2 = FUN_00efd768(iVar2);
  }
  if (uVar6 < (uint)piVar9[3]) {
                    /* WARNING: Subroutine does not return */
    FUN_00ec3760(iVar2,(int *)(*(int *)(*piVar9 + 0x8c) * uVar6 + (int)piStack_3c),uVar1);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

