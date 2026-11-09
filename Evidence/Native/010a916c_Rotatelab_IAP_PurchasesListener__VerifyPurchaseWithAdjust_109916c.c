/* IL2CPP: Rotatelab.IAP.PurchasesListener$$VerifyPurchaseWithAdjust
void Rotatelab_IAP_PurchasesListener__VerifyPurchaseWithAdjust (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_Product_o* product, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.IAP.PurchasesListener$$VerifyPurchaseWithAdjust
   void Rotatelab_IAP_PurchasesListener__VerifyPurchaseWithAdjust
   (Rotatelab_IAP_PurchasesListener_o* __this, UnityEngine_Purchasing_Product_o* product,
   Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method); */

void Rotatelab_IAP_PurchasesListener__VerifyPurchaseWithAdjust_109916c
               (int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_r1;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined8 uStack_48;
  undefined4 *puStack_40;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  pcVar10 = (char *)(_UNK_010a96dc + 0x10a918c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a96e0 + 0x10a91a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a96e4 + 0x10a91ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a96e8 + 0x10a91b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a96ec + 0x10a91c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a96f0 + 0x10a91d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a96f4 + 0x10a91dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a96f8 + 0x10a91e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a96fc + 0x10a91f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9700 + 0x10a9200));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9704 + 0x10a920c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9708 + 0x10a9218));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a970c + 0x10a9224));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9710 + 0x10a9230));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9714 + 0x10a923c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a9718 + 0x10a9248));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a971c + 0x10a9254));
    *pcVar10 = '\x01';
  }
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a9720 + 0x10a9268));
  System_Object___ctor_2bb93bc(iVar4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar4 + 8) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar4 + 8),param_1);
  piVar15 = (int *)(iVar4 + 0xc);
  *piVar15 = param_2;
  thunk_FUN_00ec5080(piVar15,param_2);
  puVar11 = (undefined4 *)(iVar4 + 0x10);
  *puVar11 = param_3;
  thunk_FUN_00ec5080(puVar11,param_3);
  piVar6 = *(int **)(_UNK_010a9724 + 0x10a92c8);
  iVar5 = *piVar6;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar6;
  }
  if (*(char *)(*(int *)(iVar5 + 0x5c) + 1) == '\0') {
    if (*(int *)(**(int **)(_UNK_010a9728 + 0x10a956c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Debug__LogWarning_35b0090(**(undefined4 **)(_UNK_010a972c + 0x10a958c),0);
    uVar7 = *puVar11;
  }
  else {
    piStack_3c = param_1;
    if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*piVar15 + 0xc);
    puStack_40 = puVar11;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(iVar5 + 0x20);
    uVar12 = *(undefined4 *)(iVar5 + 0x24);
    uVar13 = *(undefined4 *)(iVar5 + 0x18);
    uVar14 = *(undefined4 *)(iVar5 + 0x1c);
    if (*(int *)(**(int **)(_UNK_010a9730 + 0x10a9328) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uStack_48 = uStack_48 & 0xffffffff00000000;
    uVar17 = System_Decimal__op_Explicit_2bda9c4(uVar13,uVar14,uVar7,uVar12);
    if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*piVar15 + 0xc);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = *(uint *)(iVar5 + 0x14);
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a9734 + 0x10a9390));
    AdjustSdk_AdjustEvent___ctor_f9b4cc(iVar5,**(undefined4 **)(_UNK_010a9738 + 0x10a93b0),0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_48 = (ulonglong)uVar8;
    AdjustSdk_AdjustEvent__SetRevenue_f9b4f4
              (iVar5,extraout_r1,(int)uVar17,(int)((ulonglong)uVar17 >> 0x20));
    if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(*piVar15 + 8);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(iVar9 + 8);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar5 + 0x34) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(iVar5 + 0x34),uVar7);
    piVar6 = *(int **)(_UNK_010a973c + 0x10a9424);
    iVar9 = *piVar6;
    if (*(int *)(iVar9 + 0x74) == 0) {
      FUN_00ec3934();
      iVar9 = *piVar6;
    }
    piVar6 = *(int **)(_UNK_010a9740 + 0x10a9444);
    uVar7 = *(undefined4 *)(*(int *)(iVar9 + 0x5c) + 0x78);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934(*piVar6);
    }
    pcVar10 = (char *)(_UNK_010a9744 + 0x10a946c);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010a9748 + 0x10a9480));
      *pcVar10 = '\x01';
    }
    iVar9 = *piVar6;
    if (*(int *)(iVar9 + 0x74) == 0) {
      FUN_00ec3934();
      iVar9 = *piVar6;
    }
    param_1 = piStack_3c;
    AdjustSdk_AdjustEvent__AddPartnerParameter_f9b58c(iVar5,uVar7,**(undefined4 **)(iVar9 + 0x5c),0)
    ;
    piVar6 = *(int **)(_UNK_010a974c + 0x10a94c8);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar9 = UnityEngine_Application__get_platform_35a81fc(0);
    if (iVar9 == 0xb) {
      if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Purchasing_Product__get_receipt_32976fc(*piVar15,0);
      uVar7 = Rotatelab_IAP_PurchasesListener__ExtractGooglePurchaseToken_109aa70();
      *(undefined4 *)(iVar5 + 0x3c) = uVar7;
      thunk_FUN_00ec5080();
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a9750 + 0x10a9524));
      System_Action_object____ctor_1f11414
                (uVar7,iVar4,**(undefined4 **)(_UNK_010a9754 + 0x10a9540),0);
      pcVar10 = (char *)(_UNK_00fa161c + 0xfa15d4);
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa1620 + 0xfa15e8),uVar7,0);
        *pcVar10 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_00fa1624 + 0xfa15fc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar10 = (char *)(_UNK_00fa2238 + 0xfa1644);
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa223c + 0xfa1658));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2240 + 0xfa1664));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2244 + 0xfa1670));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2248 + 0xfa167c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa224c + 0xfa1688));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2250 + 0xfa1694));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2254 + 0xfa16a0));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2258 + 0xfa16ac));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa225c + 0xfa16b8));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2260 + 0xfa16c4));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2264 + 0xfa16d0));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2268 + 0xfa16dc));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa226c + 0xfa16e8));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2270 + 0xfa16f4));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2274 + 0xfa1700));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2278 + 0xfa170c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa227c + 0xfa1718));
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa2280 + 0xfa1724));
        *pcVar10 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      iStack_30 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      iStack_28 = 0;
      uStack_38 = 0;
      iStack_4c = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fa2284 + 0xfa1744));
      AdjustSdk_AdjustAndroid_VerificationResultListener___ctor_f93f9c(iStack_4c,uVar7);
      piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fa2288 + 0xfa176c),1);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *(int *)(iVar5 + 0x10);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iVar4 != 0) &&
         (iVar9 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar6 + 0x20)), iVar9 == 0)) {
        uVar7 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar7,0);
      }
      if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar6[4] = iVar4;
      thunk_FUN_00ec5080(piVar6 + 4,iVar4);
      iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fa228c + 0xfa17e8));
      UnityEngine_AndroidJavaObject___ctor_35898a8
                (iVar4,**(undefined4 **)(_UNK_00fa2290 + 0xfa1808),piVar6,0);
      piStack_3c = &iStack_28;
      uStack_38 = *(undefined4 *)(iVar5 + 0x18);
      uStack_34 = *(undefined4 *)(iVar5 + 0x1c);
      iStack_30 = *(int *)(iVar5 + 0x20);
      uStack_2c = *(undefined4 *)(iVar5 + 0x24);
      puStack_40 = (undefined4 *)0x0;
      iStack_28 = iVar4;
      if ((char)uStack_38 != '\0') {
        piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fa2294 + 0xfa1844),2);
        uStack_38 = *(undefined4 *)(iVar5 + 0x18);
        uStack_34 = *(undefined4 *)(iVar5 + 0x1c);
        iStack_30 = *(int *)(iVar5 + 0x20);
        uStack_2c = *(undefined4 *)(iVar5 + 0x24);
        uStack_48 = System_Nullable_double___get_Value_17d9970
                              (&uStack_38,**(undefined4 **)(_UNK_00fa2298 + 0xfa185c));
        iVar9 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fa229c + 0xfa187c) + 0x40),&uStack_48);
        if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((iVar9 != 0) &&
           (iVar1 = thunk_FUN_00f00bc8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar1 == 0)) {
          uVar7 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar7,0);
        }
        if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar6[4] = iVar9;
        thunk_FUN_00ec5080(piVar6 + 4,iVar9);
        iVar9 = *(int *)(iVar5 + 0x28);
        if ((iVar9 != 0) &&
           (iVar1 = thunk_FUN_00f00bc8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar1 == 0)) {
          uVar7 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar7,0);
        }
        if ((uint)piVar6[3] < 2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar6[5] = iVar9;
        thunk_FUN_00ec5080(piVar6 + 5,iVar9);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_AndroidJavaObject__Call_3589bb8
                  (iVar4,**(undefined4 **)(_UNK_00fa22a0 + 0xfa194c),piVar6,0);
      }
      iVar4 = AdjustSdk_AdjustEvent__get_CallbackParameters_f93850(iVar5);
      if (iVar4 != 0) {
        iVar4 = 0;
        puVar11 = *(undefined4 **)(_UNK_00fa22a4 + 0xfa197c);
        puVar16 = *(undefined4 **)(_UNK_00fa22a8 + 0xfa1984);
        while( true ) {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = AdjustSdk_AdjustEvent__get_CallbackParameters_f93850(iVar5);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count_199b7a0
                            (iVar9,*puVar11);
          if (iVar9 <= iVar4) break;
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = AdjustSdk_AdjustEvent__get_CallbackParameters_f93850(iVar5);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item_199b83c
                            (iVar9,iVar4,*puVar16);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = AdjustSdk_AdjustEvent__get_CallbackParameters_f93850(iVar5);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item_199b83c
                            (iVar1,iVar4 + 1,*puVar16);
          iVar1 = iStack_28;
          piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fa22ac + 0xfa1a3c),2);
          if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if ((iVar9 != 0) &&
             (iVar3 = thunk_FUN_00f00bc8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
            uVar7 = thunk_FUN_00f08b98();
            func_0x00ec3920(uVar7,0);
          }
          if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          piVar6[4] = iVar9;
          thunk_FUN_00ec5080(piVar6 + 4,iVar9);
          if ((iVar2 != 0) &&
             (iVar9 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar9 == 0)) {
            uVar7 = thunk_FUN_00f08b98();
            func_0x00ec3920(uVar7,0);
          }
          if ((uint)piVar6[3] < 2) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          piVar6[5] = iVar2;
          thunk_FUN_00ec5080(piVar6 + 5,iVar2);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_AndroidJavaObject__Call_3589bb8
                    (iVar1,**(undefined4 **)(_UNK_00fa22b0 + 0xfa1b04),piVar6,0);
          iVar4 = iVar4 + 2;
        }
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
      }
      iVar4 = AdjustSdk_AdjustEvent__get_PartnerParameters_f938b4(iVar5);
      if (iVar4 != 0) {
        iVar4 = 0;
        puVar11 = *(undefined4 **)(_UNK_00fa22b4 + 0xfa1b48);
        puVar16 = *(undefined4 **)(_UNK_00fa22b8 + 0xfa1b50);
        while( true ) {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = AdjustSdk_AdjustEvent__get_PartnerParameters_f938b4(iVar5);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Count_199b7a0
                            (iVar9,*puVar11);
          if (iVar9 <= iVar4) break;
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = AdjustSdk_AdjustEvent__get_PartnerParameters_f938b4(iVar5);
          if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar9 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item_199b83c
                            (iVar9,iVar4,*puVar16);
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = AdjustSdk_AdjustEvent__get_PartnerParameters_f938b4(iVar5);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = System_Collections_ObjectModel_ReadOnlyCollection_object___get_Item_199b83c
                            (iVar1,iVar4 + 1,*puVar16);
          iVar1 = iStack_28;
          piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fa22bc + 0xfa1c08),2);
          if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if ((iVar9 != 0) &&
             (iVar3 = thunk_FUN_00f00bc8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar3 == 0)) {
            uVar7 = thunk_FUN_00f08b98();
            func_0x00ec3920(uVar7,0);
          }
          if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          piVar6[4] = iVar9;
          thunk_FUN_00ec5080(piVar6 + 4,iVar9);
          if ((iVar2 != 0) &&
             (iVar9 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar6 + 0x20)), iVar9 == 0)) {
            uVar7 = thunk_FUN_00f08b98();
            func_0x00ec3920(uVar7,0);
          }
          if ((uint)piVar6[3] < 2) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          piVar6[5] = iVar2;
          thunk_FUN_00ec5080(piVar6 + 5,iVar2);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_AndroidJavaObject__Call_3589bb8
                    (iVar1,**(undefined4 **)(_UNK_00fa22c0 + 0xfa1cd0),piVar6,0);
          iVar4 = iVar4 + 2;
        }
      }
      iVar4 = iStack_28;
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar5 + 0x30) != 0) {
        piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fa22c4 + 0xfa1d10),1);
        iVar9 = *(int *)(iVar5 + 0x30);
        if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((iVar9 != 0) &&
           (iVar1 = thunk_FUN_00f00bc8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar1 == 0)) {
          uVar7 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar7,0);
        }
        if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar6[4] = iVar9;
        thunk_FUN_00ec5080(piVar6 + 4,iVar9);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_AndroidJavaObject__Call_3589bb8
                  (iVar4,**(undefined4 **)(_UNK_00fa22c8 + 0xfa1d90),piVar6,0);
      }
      iVar4 = iStack_28;
      if (*(int *)(iVar5 + 0x2c) != 0) {
        piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fa22cc + 0xfa1dbc),1);
        iVar9 = *(int *)(iVar5 + 0x2c);
        if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((iVar9 != 0) &&
           (iVar1 = thunk_FUN_00f00bc8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar1 == 0)) {
          uVar7 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar7,0);
        }
        if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar6[4] = iVar9;
        thunk_FUN_00ec5080(piVar6 + 4,iVar9);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_AndroidJavaObject__Call_3589bb8
                  (iVar4,**(undefined4 **)(_UNK_00fa22d0 + 0xfa1e3c),piVar6,0);
      }
      iVar4 = iStack_28;
      if (*(int *)(iVar5 + 0x34) != 0) {
        piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fa22d4 + 0xfa1e68),1);
        iVar9 = *(int *)(iVar5 + 0x34);
        if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((iVar9 != 0) &&
           (iVar1 = thunk_FUN_00f00bc8(iVar9,*(undefined4 *)(*piVar6 + 0x20)), iVar1 == 0)) {
          uVar7 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar7,0);
        }
        if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar6[4] = iVar9;
        thunk_FUN_00ec5080(piVar6 + 4,iVar9);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_AndroidJavaObject__Call_3589bb8
                  (iVar4,**(undefined4 **)(_UNK_00fa22d8 + 0xfa1ee8),piVar6,0);
      }
      iVar4 = iStack_28;
      if (*(int *)(iVar5 + 0x3c) != 0) {
        piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fa22dc + 0xfa1f14),1);
        iVar5 = *(int *)(iVar5 + 0x3c);
        if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((iVar5 != 0) &&
           (iVar9 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar9 == 0)) {
          uVar7 = thunk_FUN_00f08b98();
          func_0x00ec3920(uVar7,0);
        }
        if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        piVar6[4] = iVar5;
        thunk_FUN_00ec5080(piVar6 + 4,iVar5);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_AndroidJavaObject__Call_3589bb8
                  (iVar4,**(undefined4 **)(_UNK_00fa22e0 + 0xfa1f94),piVar6,0);
      }
      piVar6 = *(int **)(_UNK_00fa22e4 + 0xfa1fb0);
      iVar4 = *piVar6;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar6;
      }
      iVar5 = iStack_4c;
      iVar9 = *(int *)(*(int *)(iVar4 + 0x5c) + 4);
      piVar6 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fa22e8 + 0xfa1fe4),2);
      iVar4 = iStack_28;
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iStack_28 != 0) &&
         (iVar1 = thunk_FUN_00f00bc8(iStack_28,*(undefined4 *)(*piVar6 + 0x20)), iVar1 == 0)) {
        uVar7 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar7,0);
      }
      if (piVar6[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar6[4] = iVar4;
      thunk_FUN_00ec5080(piVar6 + 4,iVar4);
      if ((iVar5 != 0) &&
         (iVar4 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar6 + 0x20)), iVar4 == 0)) {
        uVar7 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar7,0);
      }
      if ((uint)piVar6[3] < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar6[5] = iVar5;
      thunk_FUN_00ec5080(piVar6 + 5,iVar5);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_AndroidJavaObject__CallStatic_3589e34
                (iVar9,**(undefined4 **)(_UNK_00fa22ec + 0xfa20b0),piVar6,0);
      piVar6 = (int *)*piStack_3c;
      if (piVar6 != (int *)0x0) {
        iVar4 = *piVar6;
        uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
        if (uVar8 != 0) {
          piVar15 = (int *)(*(int *)(iVar4 + 0x58) + 4);
          do {
            if (piVar15[-1] == **(int **)(_UNK_00fa22f0 + 0xfa20e0)) {
              puVar11 = (undefined4 *)(iVar4 + *piVar15 * 8 + 0xc0);
              goto LAB_00fa2128;
            }
            uVar8 = uVar8 - 1;
            piVar15 = piVar15 + 2;
          } while (uVar8 != 0);
        }
        puVar11 = (undefined4 *)FUN_00efdb38(piVar6,**(int **)(_UNK_00fa22f0 + 0xfa20e0),0);
LAB_00fa2128:
        (*(code *)*puVar11)(piVar6,puVar11[1]);
      }
      if (puStack_40 != (undefined4 *)0x0) {
        FUN_00ec3a6c();
      }
      return;
    }
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar9 = UnityEngine_Application__get_platform_35a81fc(0);
    if (iVar9 == 8) {
      if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(*piVar15 + 0x14);
      thunk_FUN_00ec5080();
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a9758 + 0x10a95f8));
      System_Action_object____ctor_1f11414
                (uVar7,iVar4,**(undefined4 **)(_UNK_010a975c + 0x10a9614),0);
      pcVar10 = (char *)(_UNK_00fa15a8 + 0xfa154c);
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa15ac + 0xfa1560),uVar7,0);
        FUN_00ec37c0(*(undefined4 *)(_UNK_00fa15b0 + 0xfa156c));
        *pcVar10 = '\x01';
      }
      if (*(int *)(**(int **)(_UNK_00fa15b4 + 0xfa1580) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = **(undefined4 **)(_UNK_00fa15b8 + 0xfa15a0);
      pcVar10 = (char *)(_UNK_035c1d64 + 0x35c1c58);
      if (*pcVar10 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d68 + 0x35c1c6c),0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d6c + 0x35c1c78));
        *pcVar10 = '\x01';
      }
      piVar6 = *(int **)(_UNK_035c1d70 + 0x35c1c8c);
      if (*(int *)(*piVar6 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      pcVar10 = (char *)(_UNK_035c1d74 + 0x35c1ca8);
      if (*pcVar10 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c1d78 + 0x35c1cbc));
        *pcVar10 = '\x01';
      }
      iVar4 = *piVar6;
      if (*(int *)(iVar4 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar4 = *piVar6;
      }
      piVar6 = *(int **)(*(int *)(iVar4 + 0x5c) + 4);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = *piVar6;
      uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
      if (uVar8 != 0) {
        piVar15 = (int *)(*(int *)(iVar4 + 0x58) + 4);
        do {
          if (piVar15[-1] == **(int **)(_UNK_035c1d7c + 0x35c1d00)) {
            puVar11 = (undefined4 *)(iVar4 + *piVar15 * 8 + 0xd8);
            goto LAB_035c1d48;
          }
          uVar8 = uVar8 - 1;
          piVar15 = piVar15 + 2;
        } while (uVar8 != 0);
      }
      puVar11 = (undefined4 *)thunk_FUN_00efdb38(piVar6,**(int **)(_UNK_035c1d7c + 0x35c1d00),3);
LAB_035c1d48:
                    /* WARNING: Could not recover jumptable at 0x035c1d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar11)(piVar6,3,uVar7,puVar11[1]);
      return;
    }
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar5 = UnityEngine_Application__get_isEditor_35a9d10(0);
    if (iVar5 != 0) {
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a9760 + 0x10a9668));
      System_Action___ctor_2b10bac(uVar7,iVar4,**(undefined4 **)(_UNK_010a9764 + 0x10a9688),0);
      if (*(int *)(**(int **)(_UNK_010a9768 + 0x10a969c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uStack_48 = 0;
      PrimeTween_Tween__Delay_2ce9f2c(&uStack_38,0x3f800000,uVar7,0);
      return;
    }
    uVar7 = *puStack_40;
  }
  iVar4 = *piVar15;
  pcVar10 = (char *)(_UNK_010aaa64 + 0x10aa9a8);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010aaa68 + 0x10aa9bc));
    *pcVar10 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  puStack_40 = *(undefined4 **)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  piStack_3c = *(int **)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48._0_4_ = 0;
  uStack_38 = 0;
  iStack_28 = 0;
  iStack_30 = (int)puStack_40;
  uStack_2c = piStack_3c;
  uStack_48._4_4_ = uStack_34;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create_2a93b18(&uStack_58);
  puVar11 = (undefined4 *)((uint)&uStack_48 | 4);
  *puVar11 = uStack_58;
  puVar11[1] = uStack_54;
  puVar11[2] = uStack_50;
  puVar11[3] = iStack_4c;
  thunk_FUN_00ec5080(puVar11,0);
  puVar11[4] = param_1;
  thunk_FUN_00ec5080(puVar11 + 4,param_1);
  iStack_30 = iVar4;
  thunk_FUN_00ec5080(&iStack_30,iVar4);
  uStack_2c = uVar7;
  thunk_FUN_00ec5080(&uStack_2c,uVar7);
  uStack_48 = CONCAT44(uStack_48._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Start_PurchasesListener__PurchaseComplete_d__51__13f0158
            (puVar11,&uStack_48,**(undefined4 **)(_UNK_010aaa6c + 0x10aaa4c));
  return;
}

