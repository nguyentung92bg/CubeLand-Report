/* IL2CPP: Rotatelab.Extensions$$Shuffle<__Il2CppFullySharedGenericType>
System_Collections_Generic_IList_T__o* Rotatelab_Extensions__Shuffle___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, const MethodInfo_1488B7C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Shuffle<__Il2CppFullySharedGenericType>
   System_Collections_Generic_IList_T__o*
   Rotatelab_Extensions__Shuffle___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, const MethodInfo_1488B7C* method); */

void Rotatelab_Extensions__Shuffle___Il2CppFullySharedGenericType__1488b7c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int aiStack_60 [2];
  int aiStack_58 [2];
  int *piStack_50;
  int *piStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_01499094 + 0x1498b9c);
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) {
    FUN_00efd7c4(param_2);
    iVar1 = *(int *)(param_2 + 0x1c);
  }
  iVar9 = *(int *)(*(int *)(iVar1 + 0x10) + 0x84);
  uVar10 = iVar9 + 7U & 0xfffffff8;
  iStack_44 = (int)aiStack_58 - uVar10;
  iStack_48 = iStack_44 - uVar10;
  piStack_4c = (int *)(iStack_48 - uVar10);
  piStack_50 = (int *)((int)piStack_4c - uVar10);
  iVar12 = (int)piStack_50 - uVar10;
  FUN_00f88e5c(iVar12,iVar9);
  iVar1 = iVar12 - uVar10;
  iStack_3c = iVar1;
  FUN_00f88e5c(iVar1,iVar9);
  iVar13 = 0;
  aiStack_58[1] = iVar12;
  do {
    iVar12 = aiStack_58[1];
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(*(int *)(param_2 + 0x1c) + 4);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = FUN_00efd768(iVar7);
    }
    iVar2 = *param_1;
    uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar7) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_01498ca4;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar7,0);
LAB_01498ca4:
    iVar7 = (*(code *)*puVar3)(param_1,puVar3[1]);
    if (iVar7 + -1 <= iVar13) {
      if (**(int **)(_UNK_01499098 + 0x149907c) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(iStack_2c);
      }
      return;
    }
    iVar7 = *(int *)(*(int *)(param_2 + 0x1c) + 4);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = FUN_00efd768(iVar7);
    }
    iVar2 = *param_1;
    uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar7) {
          puVar3 = (undefined4 *)(iVar2 + *piVar8 * 8 + 0xc0);
          goto LAB_01498d2c;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined4 *)FUN_00efdb38(param_1,iVar7,0);
LAB_01498d2c:
    uVar4 = (*(code *)*puVar3)(param_1,puVar3[1]);
    iVar7 = UnityEngine_Random__Range_35f8b14(iVar13,uVar4,0);
    iVar2 = **(int **)(param_2 + 0x1c);
    if ((*(ushort *)(iVar2 + 0xbd) & 1) == 0) {
      iVar2 = FUN_00efd768(iVar2);
    }
    iVar5 = *param_1;
    uVar10 = (uint)*(ushort *)(iVar5 + 0xb6);
    iStack_40 = iVar7;
    iStack_30 = iVar7;
    if (uVar10 != 0) {
      piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar2) {
          iVar7 = iVar5 + *piVar8 * 8 + 0xc0;
          goto LAB_01498dc4;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar10 != 0);
    }
    iVar7 = FUN_00efdb38(param_1,iVar2,0);
LAB_01498dc4:
    iVar2 = iStack_44;
    piStack_38 = &iStack_30;
    piStack_34 = (int *)iStack_44;
    iVar7 = *(int *)(iVar7 + 4);
    uVar4 = *(undefined4 *)(iVar7 + 4);
    pcVar11 = *(code **)(iVar7 + 8);
    *(int *)(iVar1 + -8) = iStack_44;
    (*pcVar11)(uVar4,iVar7,param_1,&piStack_38);
    thunk_FUN_00f95db8(iVar12,iVar2,iVar9);
    iVar7 = **(int **)(param_2 + 0x1c);
    if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
      iVar7 = FUN_00efd768(iVar7);
    }
    iVar2 = *param_1;
    uVar10 = (uint)*(ushort *)(iVar2 + 0xb6);
    iStack_30 = iVar13;
    if (uVar10 != 0) {
      piVar8 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar7) {
          iVar7 = iVar2 + *piVar8 * 8 + 0xc0;
          goto LAB_01498e78;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar10 != 0);
    }
    iVar7 = FUN_00efdb38(param_1,iVar7,0);
LAB_01498e78:
    iVar2 = iStack_48;
    piStack_38 = &iStack_30;
    piStack_34 = (int *)iStack_48;
    iVar7 = *(int *)(iVar7 + 4);
    uVar4 = *(undefined4 *)(iVar7 + 4);
    pcVar11 = *(code **)(iVar7 + 8);
    *(int *)(iVar1 + -8) = iStack_48;
    (*pcVar11)(uVar4,iVar7,param_1,&piStack_38);
    thunk_FUN_00f95db8(iStack_3c,iVar2,iVar9);
    piVar8 = piStack_4c;
    thunk_FUN_00f95db8(piStack_4c,iVar12,iVar9);
    piVar6 = *(int **)(param_2 + 0x1c);
    iVar12 = *piVar6;
    if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
      iVar12 = FUN_00efd768(iVar12);
      piVar6 = *(int **)(param_2 + 0x1c);
    }
    iVar7 = *param_1;
    if (-1 < *(int *)(piVar6[4] + 0x14)) {
      piVar8 = (int *)*piVar8;
    }
    uVar10 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar12) {
          iVar12 = iVar7 + *piVar6 * 8 + 200;
          iStack_30 = iVar13;
          goto LAB_01498f58;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar10 != 0);
    }
    iStack_30 = iVar13;
    iVar12 = FUN_00efdb38(param_1,iVar12,1);
LAB_01498f58:
    piStack_38 = &iStack_30;
    iVar12 = *(int *)(iVar12 + 4);
    uVar4 = *(undefined4 *)(iVar12 + 4);
    pcVar11 = *(code **)(iVar12 + 8);
    piStack_34 = piVar8;
    *(int **)(iVar1 + -8) = piVar8;
    (*pcVar11)(uVar4,iVar12,param_1,&piStack_38);
    piVar8 = piStack_50;
    thunk_FUN_00f95db8(piStack_50,iStack_3c,iVar9);
    piVar6 = *(int **)(param_2 + 0x1c);
    iVar12 = *piVar6;
    if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
      iVar12 = FUN_00efd768(iVar12);
      piVar6 = *(int **)(param_2 + 0x1c);
    }
    iStack_30 = iStack_40;
    iVar7 = *param_1;
    if (-1 < *(int *)(piVar6[4] + 0x14)) {
      piVar8 = (int *)*piVar8;
    }
    uVar10 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar10 != 0) {
      piVar6 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar6[-1] == iVar12) {
          iVar12 = iVar7 + *piVar6 * 8 + 200;
          goto LAB_0149902c;
        }
        uVar10 = uVar10 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar10 != 0);
    }
    iVar12 = FUN_00efdb38(param_1,iVar12,1);
LAB_0149902c:
    piStack_38 = &iStack_30;
    iVar12 = *(int *)(iVar12 + 4);
    uVar4 = *(undefined4 *)(iVar12 + 4);
    pcVar11 = *(code **)(iVar12 + 8);
    piStack_34 = piVar8;
    *(int **)(iVar1 + -8) = piVar8;
    (*pcVar11)(uVar4,iVar12,param_1,&piStack_38);
    iVar13 = iVar13 + 1;
  } while( true );
}

