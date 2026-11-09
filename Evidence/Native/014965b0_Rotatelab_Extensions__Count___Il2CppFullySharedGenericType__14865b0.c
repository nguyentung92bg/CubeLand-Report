/* IL2CPP: Rotatelab.Extensions$$Count<__Il2CppFullySharedGenericType>
int32_t Rotatelab_Extensions__Count___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* match, const MethodInfo_14865B0* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$Count<__Il2CppFullySharedGenericType>
   int32_t Rotatelab_Extensions__Count___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* match, const
   MethodInfo_14865B0* method); */

void Rotatelab_Extensions__Count___Il2CppFullySharedGenericType__14865b0
               (int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  code *pcVar10;
  int *piVar11;
  int aiStack_48 [4];
  int *piStack_38;
  int *piStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_014967d8 + 0x14965d4);
  iVar3 = *(int *)(param_3 + 0x1c);
  if (iVar3 == 0) {
    FUN_00efd7c4(param_3);
    iVar3 = *(int *)(param_3 + 0x1c);
  }
  iVar2 = -(*(int *)(*(int *)(iVar3 + 0x14) + 0x84) + 7U & 0xfffffff8);
  piVar11 = (int *)((int)aiStack_48 + iVar2 + 8);
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
        goto LAB_01496684;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(param_1,iVar3,0);
LAB_01496684:
  iVar3 = (*(code *)*puVar5)(param_1,puVar5[1]);
  iVar3 = iVar3 + -1;
  iVar4 = param_2;
  if (-1 < iVar3) {
    do {
      aiStack_48[3] = iVar4;
      iVar4 = **(int **)(param_3 + 0x1c);
      if ((*(ushort *)(iVar4 + 0xbd) & 1) == 0) {
        iVar4 = FUN_00efd768(iVar4);
      }
      iVar6 = *param_1;
      uVar8 = (uint)*(ushort *)(iVar6 + 0xb6);
      iStack_30 = iVar3;
      if (uVar8 != 0) {
        piVar9 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar9[-1] == iVar4) {
            iVar4 = iVar6 + *piVar9 * 8 + 0xc0;
            goto LAB_01496714;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar8 != 0);
      }
      iVar4 = FUN_00efdb38(param_1,iVar4,0);
LAB_01496714:
      piStack_38 = &iStack_30;
      iVar4 = *(int *)(iVar4 + 4);
      pcVar10 = *(code **)(iVar4 + 8);
      uVar7 = *(undefined4 *)(iVar4 + 4);
      piStack_34 = piVar11;
      *(int **)((int)aiStack_48 + iVar2) = piVar11;
      (*pcVar10)(uVar7,iVar4,param_1,&piStack_38);
      iVar4 = aiStack_48[3];
      if (aiStack_48[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar5 = *(undefined4 **)(*(int *)(param_3 + 0x1c) + 0x18);
      uVar7 = *puVar5;
      piStack_38 = piVar11;
      if (-1 < *(int *)(*(int *)(*(int *)(param_3 + 0x1c) + 0x14) + 0x14)) {
        piStack_38 = (int *)*piVar11;
      }
      pcVar10 = (code *)puVar5[2];
      *(int **)((int)aiStack_48 + iVar2) = &iStack_30;
      (*pcVar10)(uVar7,puVar5,iVar4,&piStack_38);
      bVar1 = 0 < iVar3;
      iVar3 = iVar3 + -1;
      iVar4 = aiStack_48[3];
    } while (bVar1);
  }
  if (**(int **)(_UNK_014967dc + 0x14967c0) == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iStack_2c);
}

