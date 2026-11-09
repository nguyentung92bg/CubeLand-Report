/* IL2CPP: Rotatelab.Extensions$$Sum<__Il2CppFullySharedGenericType>
int32_t Rotatelab_Extensions__Sum___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, System_Func_T__int__o* converter, const MethodInfo_1489488* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Sum<__Il2CppFullySharedGenericType>
   int32_t Rotatelab_Extensions__Sum___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, System_Func_T__int__o* converter, const
   MethodInfo_1489488* method); */

void Rotatelab_Extensions__Sum___Il2CppFullySharedGenericType__1489488
               (int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  undefined4 *puVar11;
  int aiStack_48 [4];
  undefined4 **ppuStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_014996b0 + 0x14994ac);
  iVar3 = *(int *)(param_3 + 0x1c);
  if (iVar3 == 0) {
    FUN_00efd7c4(param_3);
    iVar3 = *(int *)(param_3 + 0x1c);
  }
  iVar2 = -(*(int *)(*(int *)(iVar3 + 0x14) + 0x84) + 7U & 0xfffffff8);
  puVar11 = (undefined4 *)((int)aiStack_48 + iVar2 + 8);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 4);
  if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
    iVar3 = FUN_00efd768(iVar3);
  }
  iVar4 = *param_1;
  uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar3) {
        puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
        goto LAB_0149955c;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(param_1,iVar3,0);
LAB_0149955c:
  iVar3 = (*(code *)*puVar5)(param_1,puVar5[1]);
  puVar5 = (undefined4 *)(iVar3 + -1);
  iVar3 = param_2;
  if (-1 < (int)puVar5) {
    do {
      aiStack_48[3] = iVar3;
      iVar3 = **(int **)(param_3 + 0x1c);
      if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
        iVar3 = FUN_00efd768(iVar3);
      }
      iVar4 = *param_1;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      puStack_30 = puVar5;
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar3) {
            iVar3 = iVar4 + *piVar9 * 8 + 0xc0;
            goto LAB_014995ec;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      iVar3 = FUN_00efdb38(param_1,iVar3,0);
LAB_014995ec:
      ppuStack_38 = &puStack_30;
      iVar3 = *(int *)(iVar3 + 4);
      uVar6 = *(undefined4 *)(iVar3 + 4);
      pcVar10 = *(code **)(iVar3 + 8);
      puStack_34 = puVar11;
      *(undefined4 **)((int)aiStack_48 + iVar2) = puVar11;
      (*pcVar10)(uVar6,iVar3,param_1,&ppuStack_38);
      iVar3 = aiStack_48[3];
      if (aiStack_48[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar7 = *(undefined4 **)(*(int *)(param_3 + 0x1c) + 0x18);
      uVar6 = *puVar7;
      puStack_30 = puVar11;
      if (-1 < *(int *)(*(int *)(*(int *)(param_3 + 0x1c) + 0x14) + 0x14)) {
        puStack_30 = (undefined4 *)*puVar11;
      }
      pcVar10 = (code *)puVar7[2];
      *(undefined4 ****)((int)aiStack_48 + iVar2) = &ppuStack_38;
      (*pcVar10)(uVar6,puVar7,iVar3,&puStack_30);
      bVar1 = 0 < (int)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + -1);
      iVar3 = aiStack_48[3];
    } while (bVar1);
  }
  if (**(int **)(_UNK_014996b4 + 0x1499698) == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iStack_2c);
}

