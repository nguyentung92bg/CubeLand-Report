/* IL2CPP: Rotatelab.Extensions$$TryFindByType<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
bool Rotatelab_Extensions__TryFindByType___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_ (System_Collections_Generic_IList_T__o* list, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter, System_Func_TargetType__P__bool__o* selector, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_148B100* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Extensions$$TryFindByType<__Il2CppFullySharedGenericType,
   __Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>
   bool 
   Rotatelab_Extensions__TryFindByType___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType_
   (System_Collections_Generic_IList_T__o* list,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o parameter,
   System_Func_TargetType__P__bool__o* selector,
   Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_o* value, const MethodInfo_148B100* method);
    */

void Rotatelab_Extensions__TryFindByType___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__148b100
               (int *param_1,undefined4 *****param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *****pppppuVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  uint uVar11;
  int *piVar12;
  int aiStack_78 [2];
  uint uStack_70;
  int *piStack_6c;
  uint *puStack_68;
  int iStack_64;
  undefined4 ****ppppuStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  uint uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 ****ppppuStack_3c;
  uint uStack_38;
  uint *puStack_34;
  int *piStack_30;
  int iStack_2c;
  
  iStack_2c = **(int **)(_UNK_0149b55c + 0x149b128);
  iVar1 = *(int *)(param_5 + 0x1c);
  uStack_70 = param_4;
  ppppuStack_60 = param_2;
  iStack_48 = param_3;
  ppppuStack_3c = param_2;
  if (iVar1 == 0) {
    FUN_00efd7c4(param_5);
    iVar1 = *(int *)(param_5 + 0x1c);
  }
  iVar9 = *(int *)(*(int *)(iVar1 + 0xc) + 0x84);
  iStack_40 = *(int *)(*(int *)(iVar1 + 8) + 0x84);
  iStack_64 = *(int *)(*(int *)(iVar1 + 0x14) + 0x84);
  uVar2 = iStack_40 + 7U & 0xfffffff8;
  piVar12 = (int *)((int)&uStack_70 - uVar2);
  iStack_50 = (int)piVar12 - uVar2;
  uVar11 = iVar9 + 7U & 0xfffffff8;
  iStack_58 = iStack_50 - uVar11;
  puStack_68 = (uint *)(iStack_58 - uVar11);
  piStack_6c = (int *)((int)puStack_68 - (iStack_64 + 7U & 0xfffffff8));
  iVar1 = (int)piStack_6c - uVar2;
  iStack_44 = iVar1;
  FUN_00f88e5c();
  iVar1 = iVar1 - uVar11;
  iStack_5c = iVar1;
  iStack_54 = iVar9;
  FUN_00f88e5c(iVar1,iVar9);
  uVar2 = 0;
  do {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(*(int *)(param_5 + 0x1c) + 0x20);
    if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
      iVar9 = FUN_00efd768(iVar9);
    }
    iVar3 = *param_1;
    uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar11 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar9) {
          puVar4 = (undefined4 *)(iVar3 + *piVar8 * 8 + 0xc0);
          goto LAB_0149b260;
        }
        uVar11 = uVar11 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar11 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(param_1,iVar9,0);
LAB_0149b260:
    iVar9 = (*(code *)*puVar4)(param_1,puVar4[1]);
    if (iVar9 <= (int)uVar2) {
      FUN_00f88e5c(uStack_70,iStack_54);
      if (**(int **)(_UNK_0149b560 + 0x149b548) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail((int)uVar2 < iVar9);
      }
      return;
    }
    iVar9 = **(int **)(param_5 + 0x1c);
    if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
      iVar9 = FUN_00efd768(iVar9);
    }
    iVar3 = *param_1;
    uVar11 = (uint)*(ushort *)(iVar3 + 0xb6);
    uStack_38 = uVar2;
    if (uVar11 != 0) {
      piVar8 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar8[-1] == iVar9) {
          iVar9 = iVar3 + *piVar8 * 8 + 0xc0;
          goto LAB_0149b2ec;
        }
        uVar11 = uVar11 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar11 != 0);
    }
    iVar9 = FUN_00efdb38(param_1,iVar9,0);
LAB_0149b2ec:
    puStack_34 = &uStack_38;
    iVar9 = *(int *)(iVar9 + 4);
    uVar5 = *(undefined4 *)(iVar9 + 4);
    pcVar10 = *(code **)(iVar9 + 8);
    piStack_30 = piVar12;
    *(int **)(iVar1 + -8) = piVar12;
    (*pcVar10)(uVar5,iVar9,param_1,&puStack_34);
    iVar3 = iStack_40;
    thunk_FUN_00f95db8(iStack_44,piVar12,iStack_40);
    iVar9 = iStack_50;
    thunk_FUN_00f95db8(iStack_50,piVar12,iVar3);
    uVar5 = FUN_00ec393c(*(undefined4 *)(*(int *)(param_5 + 0x1c) + 8),iVar9);
    iVar9 = *(int *)(*(int *)(param_5 + 0x1c) + 0xc);
    if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
      iVar9 = FUN_00efd768(iVar9);
    }
    iVar9 = thunk_FUN_00f00bc8(uVar5,iVar9);
    if (iVar9 != 0) {
      thunk_FUN_00f95db8(piVar12,iStack_44,iStack_40);
      uVar5 = FUN_00ec393c(*(undefined4 *)(*(int *)(param_5 + 0x1c) + 8),piVar12);
      iVar9 = *(int *)(*(int *)(param_5 + 0x1c) + 0xc);
      uStack_4c = uVar2;
      if ((*(ushort *)(iVar9 + 0xbd) & 1) == 0) {
        iVar9 = FUN_00efd768(iVar9);
      }
      piVar8 = piStack_6c;
      uVar5 = func_0x00ec3948(uVar5,iVar9,iStack_58);
      iVar9 = iStack_54;
      thunk_FUN_00f95db8(iStack_5c,uVar5,iStack_54);
      puVar7 = puStack_68;
      thunk_FUN_00f95dc8(puStack_68,uVar5,iVar9);
      iVar9 = *(int *)(param_5 + 0x1c);
      pppppuVar6 = &ppppuStack_3c;
      if (*(int *)(*(int *)(iVar9 + 0x14) + 0x14) < 0) {
        pppppuVar6 = (undefined4 *****)ppppuStack_60;
      }
      thunk_FUN_00f95db8(piVar8,pppppuVar6,iStack_64);
      if (iStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar4 = *(undefined4 **)(iVar9 + 0x18);
      if (-1 < *(int *)(*(int *)(iVar9 + 0xc) + 0x14)) {
        puVar7 = (uint *)*puVar7;
      }
      uVar5 = *puVar4;
      if (-1 < *(int *)(*(int *)(iVar9 + 0x14) + 0x14)) {
        piVar8 = (int *)*piVar8;
      }
      pcVar10 = (code *)puVar4[2];
      puStack_34 = puVar7;
      piStack_30 = piVar8;
      *(uint **)(iVar1 + -8) = &uStack_38;
      (*pcVar10)(uVar5,puVar4,iStack_48,&puStack_34);
      iVar3 = iStack_54;
      iVar9 = iStack_5c;
      uVar2 = uStack_4c;
      if ((uStack_38 & 0xff) != 0) {
        thunk_FUN_00f95db8(iStack_58,iStack_5c,iStack_54);
        uVar2 = uStack_70;
        thunk_FUN_00f95db8(uStack_70,iVar9,iVar3);
        iVar1 = *(int *)(*(int *)(param_5 + 0x1c) + 0xc);
        if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
          iVar1 = FUN_00efd768();
        }
                    /* WARNING: Subroutine does not return */
        FUN_00ec3760(iVar1,uVar2,iStack_58);
      }
    }
    uVar2 = uVar2 + 1;
  } while( true );
}

