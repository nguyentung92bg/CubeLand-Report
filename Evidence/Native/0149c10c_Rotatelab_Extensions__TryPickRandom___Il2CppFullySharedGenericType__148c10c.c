/* IL2CPP: Rotatelab.Extensions$$TryPickRandom<__Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__TryPickRandom___Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* selector, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_148C10C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$TryPickRandom<__Il2CppFullySharedGenericType>
   bool Rotatelab_Extensions__TryPickRandom___Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, System_Predicate_T__o* selector,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_148C10C* method);
    */

void Rotatelab_Extensions__TryPickRandom___Il2CppFullySharedGenericType__148c10c
               (int *param_1,int param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int aiStack_60 [2];
  int aiStack_58 [3];
  int *piStack_4c;
  int *piStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0149c444 + 0x149c130);
  iVar2 = *(int *)(param_4 + 0x1c);
  if (iVar2 == 0) {
    FUN_00efd7c4(param_4);
    iVar2 = *(int *)(param_4 + 0x1c);
  }
  iVar10 = *(int *)(*(int *)(iVar2 + 4) + 0x84);
  uVar3 = iVar10 + 7U & 0xfffffff8;
  iVar7 = (int)aiStack_58 - uVar3;
  piVar9 = (int *)(iVar7 - uVar3);
  iVar2 = (int)piVar9 - uVar3;
  iStack_40 = iVar2;
  FUN_00f88e5c(iVar2,iVar10);
  iStack_3c = iVar10;
  FUN_00f88e5c(param_3,iVar10);
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
  if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
    iVar10 = FUN_00efd768(iVar10);
  }
  iVar12 = *param_1;
  uVar3 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar3 != 0) {
    piVar8 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar8[-1] == iVar10) {
        puVar4 = (undefined4 *)(iVar12 + *piVar8 * 8 + 0xc0);
        goto LAB_0149c210;
      }
      uVar3 = uVar3 - 1;
      piVar8 = piVar8 + 2;
    } while (uVar3 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(param_1,iVar10,0);
LAB_0149c210:
  iVar10 = (*(code *)*puVar4)(param_1,puVar4[1]);
  if (iVar10 + -1 < 0) {
    bVar1 = false;
  }
  else {
    iStack_44 = 0;
    iVar10 = iVar10 + -1;
    aiStack_58[1] = iVar7;
    aiStack_58[2] = param_3;
    piStack_4c = param_1;
    piStack_48 = piVar9;
    do {
      iVar12 = *(int *)(*(int *)(param_4 + 0x1c) + 8);
      if ((*(ushort *)(iVar12 + 0xbd) & 1) == 0) {
        iVar12 = FUN_00efd768(iVar12);
      }
      iVar5 = *param_1;
      uVar3 = (uint)*(ushort *)(iVar5 + 0xb6);
      iStack_30 = iVar10;
      if (uVar3 != 0) {
        piVar8 = (int *)(*(int *)(iVar5 + 0x58) + 4);
        do {
          if (piVar8[-1] == iVar12) {
            iVar12 = iVar5 + *piVar8 * 8 + 0xc0;
            goto LAB_0149c2b4;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 2;
        } while (uVar3 != 0);
      }
      iVar12 = FUN_00efdb38(param_1,iVar12,0);
LAB_0149c2b4:
      piStack_38 = &iStack_30;
      iVar12 = *(int *)(iVar12 + 4);
      uVar6 = *(undefined4 *)(iVar12 + 4);
      pcVar11 = *(code **)(iVar12 + 8);
      iStack_34 = iVar7;
      *(int *)(iVar2 + -8) = iVar7;
      (*pcVar11)(uVar6,iVar12,param_1,&piStack_38);
      iVar12 = iStack_3c;
      thunk_FUN_00f95db8(iStack_40,iVar7,iStack_3c);
      thunk_FUN_00f95db8(piVar9,iVar7,iVar12);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar4 = *(undefined4 **)(*(int *)(param_4 + 0x1c) + 0x1c);
      uVar6 = *puVar4;
      piStack_38 = piVar9;
      if (-1 < *(int *)(*(int *)(*(int *)(param_4 + 0x1c) + 4) + 0x14)) {
        piStack_38 = (int *)*piVar9;
      }
      pcVar11 = (code *)puVar4[2];
      *(int **)(iVar2 + -8) = &iStack_30;
      (*pcVar11)(uVar6,puVar4,param_2,&piStack_38);
      iVar12 = iStack_44;
      if (((char)iStack_30 != '\0') &&
         ((iVar12 = iStack_44 + 1, iStack_44 == 0 ||
          (iVar5 = UnityEngine_Random__Range_35f8b14(0,iVar12,0), piVar9 = piStack_48,
          param_1 = piStack_4c, iVar5 == 0)))) {
        iVar12 = iStack_3c;
        iVar10 = iStack_40;
        thunk_FUN_00f95db8(iVar7,iStack_40,iStack_3c);
        iVar2 = aiStack_58[2];
        thunk_FUN_00f95db8(aiStack_58[2],iVar10,iVar12);
        iVar7 = *(int *)(*(int *)(param_4 + 0x1c) + 4);
        if ((*(ushort *)(iVar7 + 0xbd) & 1) == 0) {
          iVar7 = FUN_00efd768();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760(iVar7,iVar2,aiStack_58[1]);
      }
      iStack_44 = iVar12;
      bVar1 = 0 < iVar10;
      iVar10 = iVar10 + -1;
    } while (bVar1);
    bVar1 = 0 < iStack_44;
  }
  if (**(int **)(_UNK_0149c448 + 0x149c430) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

