/* IL2CPP: Rotatelab.Extensions$$TryFindByType<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__TryFindByType___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, System_Predicate_TargetType__o* selector, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_148A18C* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$TryFindByType<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType>
   bool 
   Rotatelab_Extensions__TryFindByType___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list, System_Predicate_TargetType__o* selector,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_148A18C* method);
    */

void Rotatelab_Extensions__TryFindByType___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__148a18c
               (int *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  int iVar10;
  code *pcVar11;
  int iVar12;
  int aiStack_68 [2];
  uint auStack_60 [2];
  uint *puStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint *puStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0149a570 + 0x149a1b4);
  iVar1 = *(int *)(param_4 + 0x1c);
  auStack_60[0] = param_3;
  iStack_40 = param_2;
  if (iVar1 == 0) {
    FUN_00efd7c4(param_4);
    iVar1 = *(int *)(param_4 + 0x1c);
  }
  iVar10 = *(int *)(*(int *)(iVar1 + 0xc) + 0x84);
  iStack_3c = *(int *)(*(int *)(iVar1 + 8) + 0x84);
  uVar2 = iStack_3c + 7U & 0xfffffff8;
  iVar12 = (int)auStack_60 - uVar2;
  iStack_44 = iVar12 - uVar2;
  uVar9 = iVar10 + 7U & 0xfffffff8;
  iStack_50 = iStack_44 - uVar9;
  puStack_58 = (uint *)(iStack_50 - uVar9);
  uVar2 = (int)puStack_58 - uVar2;
  FUN_00f88e5c(uVar2);
  iVar1 = uVar2 - uVar9;
  iStack_54 = iVar1;
  iStack_4c = iVar10;
  FUN_00f88e5c(iVar1,iVar10);
  uVar9 = 0;
  auStack_60[1] = uVar2;
  do {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar10 = *(int *)(*(int *)(param_4 + 0x1c) + 0x1c);
    if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
      iVar10 = FUN_00efd768(iVar10);
    }
    iVar3 = *param_1;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar10) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_0149a2c8;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(param_1,iVar10,0);
LAB_0149a2c8:
    iVar10 = (*(code *)*puVar4)(param_1,puVar4[1]);
    iStack_48 = iVar10;
    if (iVar10 <= (int)uVar9) {
      FUN_00f88e5c(auStack_60[0],iStack_4c);
      if (**(int **)(_UNK_0149a574 + 0x149a55c) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail((int)uVar9 < iVar10);
      }
      return;
    }
    iVar10 = **(int **)(param_4 + 0x1c);
    if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
      iVar10 = FUN_00efd768(iVar10);
    }
    iVar3 = *param_1;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    uStack_30 = uVar9;
    if (uVar6 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar10) {
          iVar10 = iVar3 + *piVar8 * 8 + 0xc0;
          goto LAB_0149a354;
        }
        uVar6 = uVar6 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar6 != 0);
    }
    iVar10 = FUN_00efdb38(param_1,iVar10,0);
LAB_0149a354:
    puStack_38 = &uStack_30;
    iVar10 = *(int *)(iVar10 + 4);
    uVar5 = *(undefined4 *)(iVar10 + 4);
    pcVar11 = *(code **)(iVar10 + 8);
    iStack_34 = iVar12;
    *(int *)(iVar1 + -8) = iVar12;
    (*pcVar11)(uVar5,iVar10,param_1,&puStack_38);
    iVar3 = iStack_3c;
    thunk_FUN_00f95db8(uVar2,iVar12,iStack_3c);
    iVar10 = iStack_44;
    thunk_FUN_00f95db8(iStack_44,iVar12,iVar3);
    uVar5 = FUN_00ec393c(*(undefined4 *)(*(int *)(param_4 + 0x1c) + 8),iVar10);
    iVar10 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
    if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
      iVar10 = FUN_00efd768(iVar10);
    }
    iVar10 = thunk_FUN_00f00bc8(uVar5,iVar10);
    if (iVar10 != 0) {
      thunk_FUN_00f95db8(iVar12,uVar2,iStack_3c);
      uVar5 = FUN_00ec393c(*(undefined4 *)(*(int *)(param_4 + 0x1c) + 8),iVar12);
      iVar10 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar10 + 0xbd) & 1) == 0) {
        iVar10 = FUN_00efd768(iVar10);
      }
      uVar5 = func_0x00ec3948(uVar5,iVar10,iStack_50);
      iVar10 = iStack_4c;
      thunk_FUN_00f95db8(iStack_54,uVar5,iStack_4c);
      puVar7 = puStack_58;
      thunk_FUN_00f95dc8(puStack_58,uVar5,iVar10);
      if (iStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar4 = *(undefined4 **)(*(int *)(param_4 + 0x1c) + 0x14);
      uVar5 = *puVar4;
      if (-1 < *(int *)(*(int *)(*(int *)(param_4 + 0x1c) + 0xc) + 0x14)) {
        puVar7 = (uint *)*puVar7;
      }
      pcVar11 = (code *)puVar4[2];
      puStack_38 = puVar7;
      *(uint **)(iVar1 + -8) = &uStack_30;
      (*pcVar11)(uVar5,puVar4,iStack_40,&puStack_38);
      iVar3 = iStack_4c;
      iVar10 = iStack_54;
      uVar2 = auStack_60[1];
      if ((uStack_30 & 0xff) != 0) {
        thunk_FUN_00f95db8(iStack_50,iStack_54,iStack_4c);
        uVar2 = auStack_60[0];
        thunk_FUN_00f95db8(auStack_60[0],iVar10,iVar3);
        iVar1 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = FUN_00efd768();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760(iVar1,uVar2,iStack_50);
      }
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

