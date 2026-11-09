/* IL2CPP: Rotatelab.IAP.PurchasesListener$$ProcessPurchase
int32_t Rotatelab_IAP_PurchasesListener__ProcessPurchase (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_PurchaseEventArgs_o* purchaseEvent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$ProcessPurchase
   int32_t Rotatelab_IAP_PurchasesListener__ProcessPurchase (Rotatelab_IAP_PurchasesListener_o*
   __this, UnityEngine_Purchasing_PurchaseEventArgs_o* purchaseEvent, const MethodInfo* method); */

undefined4 Rotatelab_IAP_PurchasesListener__ProcessPurchase_1097148(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 auStack_28 [3];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(param_2 + 8);
  pcVar6 = (char *)(_UNK_010a77c8 + 0x10a718c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77cc + 0x10a71a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77d0 + 0x10a71ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77d4 + 0x10a71b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77d8 + 0x10a71c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77dc + 0x10a71d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77e0 + 0x10a71dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77e4 + 0x10a71e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77e8 + 0x10a71f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77ec + 0x10a7200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77f0 + 0x10a720c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77f4 + 0x10a7218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77f8 + 0x10a7224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a77fc + 0x10a7230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a7800 + 0x10a723c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a7804 + 0x10a7248));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a7808 + 0x10a7254));
    *pcVar6 = '\x01';
  }
  auStack_28[0] = 0;
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a780c + 0x10a726c));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  piVar12 = (int *)(iVar1 + 0xc);
  *piVar12 = iVar4;
  thunk_FUN_00ec5080(piVar12,iVar4);
  if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*piVar12 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = *(undefined4 *)(iVar4 + 8);
  iVar9 = 0;
  iVar4 = UnityEngine_Purchasing_StandardPurchasingModule__Instance_32ad0a0(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Purchasing_StandardPurchasingModule__get_appStore_32ad1f8(iVar4,0);
  if (iVar4 == 1) {
    piVar10 = *(int **)(param_1 + 0x24);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = **(int **)(_UNK_010a7810 + 0x10a7320);
    iVar4 = *piVar10;
    uVar5 = (uint)*(ushort *)(iVar4 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar4 + 0x58) + 4);
      do {
        if (piVar8[-1] == *(int *)(iVar9 + 0x10)) {
          iVar4 = iVar4 + (*piVar8 + (uint)*(ushort *)(iVar9 + 0x2c)) * 8 + 0xc0;
          goto LAB_010a7374;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    iVar4 = FUN_00efdb38(piVar10);
LAB_010a7374:
    iVar4 = FUN_00ec3930(*(undefined4 *)(iVar4 + 4),iVar9);
    piVar10 = (int *)(**(code **)(iVar4 + 4))(piVar10,iVar4);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *piVar12;
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *piVar10;
    uVar5 = (uint)*(ushort *)(iVar9 + 0xb6);
    if (uVar5 != 0) {
      piVar8 = (int *)(*(int *)(iVar9 + 0x58) + 4);
      do {
        if (piVar8[-1] == **(int **)(_UNK_010a7814 + 0x10a73c0)) {
          puVar2 = (undefined4 *)(iVar9 + *piVar8 * 8 + 0xc0);
          goto LAB_010a7408;
        }
        uVar5 = uVar5 - 1;
        piVar8 = piVar8 + 2;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined4 *)FUN_00efdb38(piVar10,**(int **)(_UNK_010a7814 + 0x10a73c0),0);
LAB_010a7408:
    iVar9 = (*(code *)*puVar2)(piVar10,iVar4,puVar2[1]);
  }
  uStack_30 = CONCAT31(uStack_30._1_3_,(char)iVar9);
  uVar3 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010a7818 + 0x10a7434) + 0x14),&uStack_30);
  uVar3 = System_String__Format_2a0c264(**(undefined4 **)(_UNK_010a781c + 0x10a7454),uVar11,uVar3,0)
  ;
  piVar10 = *(int **)(_UNK_010a7820 + 0x10a7468);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar7 = 0;
  UnityEngine_Debug__Log_35b1c44(uVar3,0);
  if (iVar9 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8);
    }
    iVar4 = System_String__op_Equality_2a0975c(uVar7,uVar11,0);
    if (iVar4 != 0) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_IAP_PurchasesListener__PurchaseFailed_1097858
                (param_1,*piVar12,*(undefined4 *)(param_1 + 0x2c),0,0,0);
      return 1;
    }
    return 1;
  }
  uVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010a7824 + 0x10a74f4));
  if (*(int *)(**(int **)(_UNK_010a7828 + 0x10a7508) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Equality_36033f4(uVar3,0,0);
  if (iVar4 != 0) {
    piVar12 = *(int **)(_UNK_010a782c + 0x10a753c);
    iVar4 = *piVar12;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar12;
    }
    puVar2 = *(undefined4 **)(iVar4 + 0x5c);
    iVar9 = puVar2[2];
    if (iVar9 == 0) {
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        puVar2 = *(undefined4 **)(*piVar12 + 0x5c);
      }
      uVar11 = *puVar2;
      iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a7830 + 0x10a7584));
      System_Func_bool____ctor_23938dc(iVar9,uVar11,**(undefined4 **)(_UNK_010a7834 + 0x10a75a4),0);
      piVar12 = (int *)(*(int *)(*piVar12 + 0x5c) + 8);
      *piVar12 = iVar9;
      thunk_FUN_00ec5080(piVar12,iVar9);
    }
    if (*(int *)(**(int **)(_UNK_010a7838 + 0x10a75cc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&uStack_30,iVar9,0xd,0,0,0);
    uVar3 = uStack_2c;
    uVar11 = uStack_30;
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a783c + 0x10a7610));
    System_Action___ctor_2b10bac(uVar7,iVar1,**(undefined4 **)(_UNK_010a7840 + 0x10a762c),0);
    Cysharp_Threading_Tasks_UniTaskExtensions__ContinueWith_321e304(&uStack_30,uVar11,uVar3,uVar7,0)
    ;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget_321de88(uStack_30,uStack_2c,0);
    return 1;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*piVar12 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0x10) == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 8);
    }
    iVar4 = System_String__op_Inequality_2a09760(uVar3,uVar11,0);
    if (iVar4 != 0) {
      if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = Rotatelab_Save_SavedValue_object___get_Value_1a8bb8c
                        (*(int *)(param_1 + 0x40),**(undefined4 **)(_UNK_010a7844 + 0x10a76dc));
      uVar3 = System_Collections_Generic_CollectionExtensions__GetValueOrDefault_object__object__143ac98
                        (uVar3,uVar11,**(undefined4 **)(_UNK_010a7848 + 0x10a76f0));
      iVar4 = Rotatelab_IAP_PurchasesListener__TryFindIapObject_10985b4
                        (param_1,uVar11,uVar3,auStack_28);
      if (iVar4 != 0) {
        Rotatelab_IAP_PurchasesListener__GrantPurchase_1098788(param_1,*piVar12,auStack_28[0]);
        return 0;
      }
    }
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    Rotatelab_IAP_PurchasesListener__HandleRestoredPurchaseAsync_1098b44(0,*piVar12);
    return 0;
  }
  iVar4 = System_String__op_Inequality_2a09760
                    (*(undefined4 *)(*(int *)(param_1 + 0x2c) + 8),uVar11,0);
  if (iVar4 == 0) {
    Rotatelab_IAP_PurchasesListener__GrantPurchase_1098788
              (param_1,*piVar12,*(undefined4 *)(param_1 + 0x2c));
    return 0;
  }
  uVar11 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_010a784c + 0x10a7768),uVar11,0);
  if (*(int *)(*piVar10 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar11 = UnityEngine_Debug__LogError_35b238c(uVar11,0);
  Rotatelab_IAP_PurchasesListener__HandleRestoredPurchaseAsync_1098b44(uVar11,*piVar12);
  return 0;
}

