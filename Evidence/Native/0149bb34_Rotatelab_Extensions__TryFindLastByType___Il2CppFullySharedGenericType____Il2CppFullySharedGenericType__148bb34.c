/* IL2CPP: Rotatelab.Extensions$$TryFindLastByType<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__TryFindLastByType___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, System_Predicate_TargetType__o* selector, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_148BB34* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$TryFindLastByType<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>
   bool 
   Rotatelab_Extensions__TryFindLastByType___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, System_Predicate_TargetType__o* selector,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_148BB34* method);
    */

void Rotatelab_Extensions__TryFindLastByType___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__148bb34
               (int *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  code *pcVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int aiStack_68 [2];
  int aiStack_60 [4];
  int *piStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0149bf28 + 0x149bb58);
  iVar13 = *(int *)(param_4 + 0x1c);
  aiStack_60[0] = param_3;
  iStack_48 = param_2;
  iStack_3c = param_4;
  if (iVar13 == 0) {
    FUN_00efd7c4(param_4);
    iVar13 = *(int *)(param_4 + 0x1c);
  }
  iVar9 = *(int *)(*(int *)(iVar13 + 0x14) + 0x84);
  iStack_40 = *(int *)(*(int *)(iVar13 + 0x10) + 0x84);
  uVar2 = iStack_40 + 7U & 0xfffffff8;
  iVar12 = (int)aiStack_60 - uVar2;
  iStack_4c = iVar12 - uVar2;
  uVar8 = iVar9 + 7U & 0xfffffff8;
  aiStack_60[2] = iStack_4c - uVar8;
  piVar11 = (int *)(aiStack_60[2] - uVar8);
  iStack_44 = (int)piVar11 - uVar2;
  FUN_00f88e5c();
  iVar3 = ((int)piVar11 - uVar2) - uVar8;
  aiStack_60[1] = iVar3;
  aiStack_60[3] = iVar9;
  FUN_00f88e5c(iVar3,iVar9);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = *(int *)(iVar13 + 4);
  if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
    iVar13 = FUN_00efd768(iVar13);
  }
  iVar9 = *param_1;
  uVar2 = (uint)*(ushort *)(iVar9 + 0xb6);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(int *)(iVar9 + 0x58) + 4);
    do {
      if (piVar7[-1] == iVar13) {
        puVar4 = (undefined4 *)(iVar9 + *piVar7 * 8 + 0xc0);
        goto LAB_0149bc6c;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 2;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(param_1,iVar13,0);
LAB_0149bc6c:
  iVar13 = (*(code *)*puVar4)(param_1,puVar4[1]);
  iVar13 = iVar13 + -1;
  piVar7 = piVar11;
  if (-1 < iVar13) {
    do {
      piStack_50 = piVar7;
      iVar9 = **(int **)(iStack_3c + 0x1c);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = FUN_00efd768(iVar9);
      }
      iVar5 = *param_1;
      uVar2 = (uint)*(ushort *)(iVar5 + 0xb6);
      iStack_30 = iVar13;
      if (uVar2 != 0) {
        piVar7 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar7[-1] == iVar9) {
            iVar9 = iVar5 + *piVar7 * 8 + 0xc0;
            goto LAB_0149bd00;
          }
          uVar2 = uVar2 - 1;
          piVar7 = piVar7 + 2;
        } while (uVar2 != 0);
      }
      iVar9 = FUN_00efdb38(param_1,iVar9,0);
LAB_0149bd00:
      piStack_38 = &iStack_30;
      iVar9 = *(int *)(iVar9 + 4);
      uVar6 = *(undefined4 *)(iVar9 + 4);
      pcVar10 = *(code **)(iVar9 + 8);
      iStack_34 = iVar12;
      *(int *)(iVar3 + -8) = iVar12;
      (*pcVar10)(uVar6,iVar9,param_1,&piStack_38);
      iVar5 = iStack_40;
      thunk_FUN_00f95db8(iStack_44,iVar12,iStack_40);
      iVar9 = iStack_4c;
      thunk_FUN_00f95db8(iStack_4c,iVar12,iVar5);
      iVar5 = iStack_3c;
      uVar6 = FUN_00ec393c(*(undefined4 *)(*(int *)(iStack_3c + 0x1c) + 0x10),iVar9);
      iVar9 = *(int *)(*(int *)(iVar5 + 0x1c) + 0x14);
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = FUN_00efd768(iVar9);
      }
      iVar9 = thunk_FUN_00f00bc8(uVar6,iVar9);
      if (iVar9 != 0) {
        thunk_FUN_00f95db8(iVar12,iStack_44,iStack_40);
        iVar9 = iStack_3c;
        uVar6 = FUN_00ec393c(*(undefined4 *)(*(int *)(iStack_3c + 0x1c) + 0x10),iVar12);
        iVar9 = *(int *)(*(int *)(iVar9 + 0x1c) + 0x14);
        if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
          iVar9 = FUN_00efd768(iVar9);
        }
        uVar6 = func_0x00ec3948(uVar6,iVar9,aiStack_60[2]);
        iVar9 = aiStack_60[3];
        thunk_FUN_00f95db8(aiStack_60[1],uVar6,aiStack_60[3]);
        thunk_FUN_00f95dc8(piVar11,uVar6,iVar9);
        if (iStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar4 = *(undefined4 **)(*(int *)(iStack_3c + 0x1c) + 0x1c);
        uVar6 = *puVar4;
        piStack_38 = piVar11;
        if (-1 < *(int *)(*(int *)(*(int *)(iStack_3c + 0x1c) + 0x14) + 0x14)) {
          piStack_38 = (int *)*piVar11;
        }
        pcVar10 = (code *)puVar4[2];
        *(int **)(iVar3 + -8) = &iStack_30;
        (*pcVar10)(uVar6,puVar4,iStack_48,&piStack_38);
        iVar5 = aiStack_60[3];
        iVar9 = aiStack_60[1];
        if ((char)iStack_30 != '\0') {
          thunk_FUN_00f95db8(aiStack_60[2],aiStack_60[1],aiStack_60[3]);
          iVar13 = aiStack_60[0];
          thunk_FUN_00f95db8(aiStack_60[0],iVar9,iVar5);
          iVar3 = *(int *)(*(int *)(iStack_3c + 0x1c) + 0x14);
          if ((*(ushort *)(iVar3 + 0xbd) & 1) == 0) {
            iVar3 = FUN_00efd768();
          }
                    /* WARNING: Subroutine does not return */
          FUN_00ec3760(iVar3,iVar13,aiStack_60[2]);
        }
      }
      bVar1 = 0 < iVar13;
      iVar13 = iVar13 + -1;
      piVar7 = piStack_50;
    } while (bVar1);
  }
  FUN_00f88e5c(aiStack_60[0],aiStack_60[3]);
  if (**(int **)(_UNK_0149bf2c + 0x149bf14) == iStack_2c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

