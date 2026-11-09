/* IL2CPP: Rotatelab.Extensions$$TryFindByType<SatoriBundleConfigFlag.CurrencyIcon, SatoriBundleConfigFlag.CurrencyIcon>
bool Rotatelab_Extensions__TryFindByType_SatoriBundleConfigFlag_CurrencyIcon__SatoriBundleConfigFlag_CurrencyIcon_ (System_Collections_Generic_IList_T__o* list, System_Predicate_TargetType__o* selector, Rotatelab_Networking_SatoriBundleConfigFlag_CurrencyIcon_o* value, const MethodInfo_148A578* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Extensions$$TryFindByType<SatoriBundleConfigFlag.CurrencyIcon,
   SatoriBundleConfigFlag.CurrencyIcon>
   bool 
   Rotatelab_Extensions__TryFindByType_SatoriBundleConfigFlag_CurrencyIcon__SatoriBundleConfigFlag_CurrencyIcon_
   (System_Collections_Generic_IList_T__o* list, System_Predicate_TargetType__o* selector,
   Rotatelab_Networking_SatoriBundleConfigFlag_CurrencyIcon_o* value, const MethodInfo_148A578*
   method); */

bool Rotatelab_Extensions__TryFindByType_SatoriBundleConfigFlag_CurrencyIcon__SatoriBundleConfigFlag_CurrencyIcon__148a578
               (int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 auStack_30 [12];
  
  if (*(int *)(param_4 + 0x1c) == 0) {
    FUN_00efd7c4(param_4);
  }
  iVar8 = 0;
  do {
    if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_4 + 0x1c) + 0x1c);
    if ((*(ushort *)(iVar5 + 0xbd) & 1) == 0) {
      iVar5 = FUN_00efd768(iVar5);
    }
    iVar1 = *param_1;
    uVar6 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar5) {
          puVar2 = (undefined4 *)(iVar1 + *piVar7 * 8 + 0xc0);
          goto LAB_0149a620;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar5,0);
LAB_0149a620:
    iVar5 = (*(code *)*puVar2)(param_1,puVar2[1]);
    if (iVar5 <= iVar8) {
      param_3[1] = 0;
      *param_3 = 0;
LAB_0149a7f0:
      return iVar8 < iVar5;
    }
    iVar1 = **(int **)(param_4 + 0x1c);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar3 = *param_1;
    uVar6 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar7[-1] == iVar1) {
          puVar2 = (undefined4 *)(iVar3 + *piVar7 * 8 + 0xc0);
          goto LAB_0149a6a8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 2;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar1,0);
LAB_0149a6a8:
    (*(code *)*puVar2)(auStack_30,param_1,iVar8,puVar2[1]);
    uVar4 = FUN_00ec393c(*(undefined4 *)(*(int *)(param_4 + 0x1c) + 8),auStack_30);
    iVar1 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
    if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
      iVar1 = FUN_00efd768(iVar1);
    }
    iVar1 = thunk_FUN_00f00bc8(uVar4,iVar1);
    if (iVar1 != 0) {
      piVar7 = (int *)FUN_00ec393c(*(undefined4 *)(*(int *)(param_4 + 0x1c) + 8),auStack_30);
      iVar1 = *(int *)(*(int *)(param_4 + 0x1c) + 0xc);
      if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
        iVar1 = FUN_00efd768(iVar1);
      }
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*piVar7 + 0x20) != *(int *)(iVar1 + 0x20)) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar7,iVar1);
      }
      puVar2 = (undefined4 *)FUN_00ec3940(piVar7);
      uVar9 = *puVar2;
      uVar4 = puVar2[1];
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = (**(code **)(param_2 + 0xc))
                        (*(undefined4 *)(param_2 + 0x20),uVar9,uVar4,*(undefined4 *)(param_2 + 0x14)
                        );
      if (iVar1 != 0) {
        *param_3 = uVar9;
        param_3[1] = uVar4;
        thunk_FUN_00ec5080(param_3 + 1,0);
        goto LAB_0149a7f0;
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}

