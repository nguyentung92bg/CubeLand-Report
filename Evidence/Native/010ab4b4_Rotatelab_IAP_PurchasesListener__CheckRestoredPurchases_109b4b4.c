/* IL2CPP: Rotatelab.IAP.PurchasesListener$$CheckRestoredPurchases
void Rotatelab_IAP_PurchasesListener__CheckRestoredPurchases (Rotatelab_IAP_PurchasesListener_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$CheckRestoredPurchases
   void Rotatelab_IAP_PurchasesListener__CheckRestoredPurchases (Rotatelab_IAP_PurchasesListener_o*
   __this, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__CheckRestoredPurchases_109b4b4(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 uStack_48;
  undefined4 *puStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar7 = (char *)(_UNK_010ab868 + 0x10ab4cc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab86c + 0x10ab4e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab870 + 0x10ab4ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab874 + 0x10ab4f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab878 + 0x10ab504));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab87c + 0x10ab510));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab880 + 0x10ab51c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab884 + 0x10ab528));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab888 + 0x10ab534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab88c + 0x10ab540));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab890 + 0x10ab54c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ab894 + 0x10ab558));
    *pcVar7 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_2c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_48,*(int *)(param_1 + 0x1c),**(undefined4 **)(_UNK_010ab898 + 0x10ab590));
  uStack_38 = uStack_48;
  uStack_34 = puStack_44;
  uStack_30 = uStack_40;
  iStack_2c = iStack_3c;
  uStack_48 = 0;
  puVar9 = *(undefined4 **)(_UNK_010ab89c + 0x10ab5b8);
  puVar10 = *(undefined4 **)(_UNK_010ab8a0 + 0x10ab5c0);
  piVar11 = *(int **)(_UNK_010ab8a4 + 0x10ab5c8);
  puStack_44 = &uStack_38;
  do {
    do {
      iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                        (&uStack_38,*puVar9);
      iVar4 = iStack_2c;
      if (iVar1 == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                  (&uStack_38,**(undefined4 **)(_UNK_010ab8b4 + 0x10ab748));
        if (*(int *)(**(int **)(_UNK_010ab8bc + 0x10ab75c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        RotateAdLogicManager__set_IsRestored_fab250(1,0);
        iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_010ab8c0 + 0x10ab784));
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Networking_CloudSaveManager__SaveToLocal_11427dc(iVar4,0);
        piVar11 = *(int **)(_UNK_010ab8c4 + 0x10ab7b0);
        iVar4 = *piVar11;
        if (*(int *)(iVar4 + 0x74) == 0) {
          FUN_00ec3934();
          iVar4 = *piVar11;
        }
        iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0xe4);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_GameAction__Raise_fc08b8(iVar4,0);
        return;
      }
      if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = System_String__Contains_2a104b8(iStack_2c,*puVar10,0);
    } while (iVar1 == 0);
    piVar8 = *(int **)(param_1 + 0x20);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *piVar8;
    uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
      do {
        if (piVar6[-1] == *piVar11) {
          puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
          goto LAB_010ab660;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar8,*piVar11,0);
LAB_010ab660:
    iVar1 = (*(code *)*puVar2)(piVar8,puVar2[1]);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Purchasing_ProductCollection__WithID_32ae42c(iVar1,iVar4,0);
    if (iVar1 != 0) {
      uVar3 = UnityEngine_Purchasing_Product__get_receipt_32976fc(iVar1,0);
      iVar1 = System_String__IsNullOrEmpty_2a0a844(uVar3,0);
      if (iVar1 == 0) {
        if (*(int *)(**(int **)(_UNK_010ab8a8 + 0x10ab6bc) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar1 = RotateAdLogicManager__get_IsNoAds_fa6fe8(0);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_ObservableBool__set_Value_fa6d68(iVar1,1,0);
        uVar3 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_010ab8ac + 0x10ab700),iVar4,0);
        if (*(int *)(**(int **)(_UNK_010ab8b0 + 0x10ab71c) + 0x74) == 0) {
          FUN_00ec3934();
        }
        UnityEngine_Debug__Log_35b1c44(uVar3,0);
      }
    }
  } while( true );
}

