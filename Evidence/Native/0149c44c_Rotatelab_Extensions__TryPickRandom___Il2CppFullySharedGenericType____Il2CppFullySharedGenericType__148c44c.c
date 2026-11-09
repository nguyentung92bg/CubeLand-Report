/* IL2CPP: Rotatelab.Extensions$$TryPickRandom<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__TryPickRandom___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o* selector, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_148C44C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$TryPickRandom<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>
   bool 
   Rotatelab_Extensions__TryPickRandom___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_T__P__bool__o*
   selector, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const
   MethodInfo_148C44C* method); */

void Rotatelab_Extensions__TryPickRandom___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__148c44c
               (int *param_1,undefined4 *****param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *****pppppuVar9;
  int *piVar10;
  code *pcVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int aiStack_68 [2];
  int iStack_60;
  int *piStack_5c;
  int iStack_58;
  undefined4 ****ppppuStack_54;
  int iStack_50;
  int iStack_4c;
  int *piStack_48;
  undefined4 *puStack_44;
  int iStack_40;
  undefined4 ****ppppuStack_3c;
  int iStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0149c7f8 + 0x149c474);
  iVar2 = *(int *)(param_5 + 0x1c);
  ppppuStack_54 = param_2;
  iStack_40 = param_3;
  ppppuStack_3c = param_2;
  if (iVar2 == 0) {
    FUN_00efd7c4(param_5);
    iVar2 = *(int *)(param_5 + 0x1c);
  }
  iVar13 = *(int *)(*(int *)(iVar2 + 4) + 0x84);
  iStack_58 = *(int *)(*(int *)(iVar2 + 0x1c) + 0x84);
  uVar3 = iVar13 + 7U & 0xfffffff8;
  iVar14 = (int)&iStack_60 - uVar3;
  piStack_5c = (int *)(iVar14 - uVar3);
  puVar12 = (undefined4 *)((int)piStack_5c - (iStack_58 + 7U & 0xfffffff8));
  iVar2 = (int)puVar12 - uVar3;
  iStack_50 = iVar2;
  FUN_00f88e5c(iVar2,iVar13);
  iStack_4c = iVar13;
  FUN_00f88e5c(param_4,iVar13);
  piStack_48 = param_1;
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar13 = *(int *)(*(int *)(param_5 + 0x1c) + 0xc);
  iStack_60 = param_4;
  if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
    iVar13 = FUN_00efd768(iVar13);
  }
  iVar4 = *piStack_48;
  uVar3 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar3 != 0) {
    piVar10 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar10[-1] == iVar13) {
        puVar5 = (undefined4 *)(iVar4 + *piVar10 * 8 + 0xc0);
        goto LAB_0149c590;
      }
      uVar3 = uVar3 - 1;
      piVar10 = piVar10 + 2;
    } while (uVar3 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piStack_48,iVar13,0);
LAB_0149c590:
  iVar13 = (*(code *)*puVar5)(piStack_48,puVar5[1]);
  if (iVar13 + -1 < 0) {
    bVar1 = false;
  }
  else {
    iVar13 = iVar13 + -1;
    iVar4 = 0;
    puStack_44 = puVar12;
    do {
      iVar8 = *(int *)(*(int *)(param_5 + 0x1c) + 8);
      if ((*(ushort *)(iVar8 + 0xbd) & 1) == 0) {
        iVar8 = FUN_00efd768(iVar8);
      }
      iVar6 = *piStack_48;
      uVar3 = (uint)*(ushort *)(iVar6 + 0xb6);
      iStack_38 = iVar13;
      if (uVar3 != 0) {
        piVar10 = (int *)(*(int *)(iVar6 + 0x58) + 4);
        do {
          if (piVar10[-1] == iVar8) {
            iVar8 = iVar6 + *piVar10 * 8 + 0xc0;
            goto LAB_0149c634;
          }
          uVar3 = uVar3 - 1;
          piVar10 = piVar10 + 2;
        } while (uVar3 != 0);
      }
      iVar8 = FUN_00efdb38(piStack_48,iVar8,0);
LAB_0149c634:
      piVar10 = piStack_48;
      iVar8 = *(int *)(iVar8 + 4);
      pcVar11 = *(code **)(iVar8 + 8);
      uVar7 = *(undefined4 *)(iVar8 + 4);
      piStack_34 = &iStack_38;
      puStack_30 = (undefined4 *)iVar14;
      *(int *)(iVar2 + -8) = iVar14;
      (*pcVar11)(uVar7,iVar8,piVar10,&piStack_34);
      iVar8 = iStack_4c;
      thunk_FUN_00f95db8(iStack_50,iVar14,iStack_4c);
      piVar10 = piStack_5c;
      thunk_FUN_00f95db8(piStack_5c,iVar14,iVar8);
      iVar8 = *(int *)(param_5 + 0x1c);
      pppppuVar9 = &ppppuStack_3c;
      if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x14) < 0) {
        pppppuVar9 = (undefined4 *****)ppppuStack_54;
      }
      thunk_FUN_00f95db8(puStack_44,pppppuVar9,iStack_58);
      iVar6 = iStack_40;
      if (iStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar12 = *(undefined4 **)(iVar8 + 0x20);
      if (-1 < *(int *)(*(int *)(iVar8 + 4) + 0x14)) {
        piVar10 = (int *)*piVar10;
      }
      uVar7 = *puVar12;
      puStack_30 = puStack_44;
      if (-1 < *(int *)(*(int *)(iVar8 + 0x1c) + 0x14)) {
        puStack_30 = (undefined4 *)*puStack_44;
      }
      pcVar11 = (code *)puVar12[2];
      piStack_34 = piVar10;
      *(int **)(iVar2 + -8) = &iStack_38;
      (*pcVar11)(uVar7,puVar12,iVar6,&piStack_34);
      iVar8 = iVar4;
      if (((char)iStack_38 != '\0') &&
         ((iVar8 = iVar4 + 1, iVar4 == 0 ||
          (iVar4 = UnityEngine_Random__Range_35f8b14(0,iVar8,0), iVar4 == 0)))) {
        iVar4 = iStack_4c;
        iVar13 = iStack_50;
        thunk_FUN_00f95db8(iVar14,iStack_50,iStack_4c);
        iVar2 = iStack_60;
        thunk_FUN_00f95db8(iStack_60,iVar13,iVar4);
        iVar13 = *(int *)(*(int *)(param_5 + 0x1c) + 4);
        if ((*(ushort *)(iVar13 + 0xbd) & 1) == 0) {
          iVar13 = FUN_00efd768();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760(iVar13,iVar2,iVar14);
      }
      bVar1 = 0 < iVar13;
      iVar13 = iVar13 + -1;
      iVar4 = iVar8;
    } while (bVar1);
    bVar1 = 0 < iVar8;
  }
  if (**(int **)(_UNK_0149c7fc + 0x149c7e4) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar1);
  }
  return;
}

