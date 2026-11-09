/* IL2CPP: Rotatelab.Shop.ShopBundleOfferController$$RefreshIfBundleChanged
void Rotatelab_Shop_ShopBundleOfferController__RefreshIfBundleChanged (Rotatelab_Shop_ShopBundleOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopBundleOfferController$$RefreshIfBundleChanged
   void Rotatelab_Shop_ShopBundleOfferController__RefreshIfBundleChanged
   (Rotatelab_Shop_ShopBundleOfferController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_ShopBundleOfferController__RefreshIfBundleChanged_10c0134(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_010d0380 + 0x10d014c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0384 + 0x10d0160));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0388 + 0x10d016c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d038c + 0x10d0178));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0390 + 0x10d0184));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0394 + 0x10d0190));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d0398 + 0x10d019c));
    *pcVar4 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_24 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(*(int *)(param_1 + 0x10) + 0x20);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar7 + 0x1c) != *(int *)(param_1 + 0x34)) {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    BundlePurchaseButton__RefreshProduct_fa69e4(*(int *)(param_1 + 0x10),0);
    if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_List_object___GetEnumerator_267e7a4
              (&uStack_30,*(int *)(param_1 + 0x2c),**(undefined4 **)(_UNK_010d039c + 0x10d0220));
    uVar8 = 0;
    puVar6 = *(undefined4 **)(_UNK_010d03a0 + 0x10d0238);
    piVar5 = *(int **)(_UNK_010d03a4 + 0x10d0240);
    puVar9 = &uStack_30;
    while (iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                             (&uStack_30,*puVar6), iVar1 != 0) {
      if (iStack_24 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_Component__get_gameObject_35fe360(iStack_24,0);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Object__Destroy_3609820(uVar2,0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose_219071c
              (&uStack_30,**(undefined4 **)(_UNK_010d03a8 + 0x10d02a0));
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar1 + 0xc);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    if (0 < iVar3) {
      System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar3,0,uVar8,puVar9);
    }
    Rotatelab_Shop_ShopBundleOfferController__SpawnOffers_10c07b4(param_1,iVar7);
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_GameObject__get_activeInHierarchy_3602210(iVar7,0);
    if (iVar7 != 0) {
      Rotatelab_Shop_ShopBundleOfferController__PlayOffersAnimationSequence_10c0abc(param_1);
    }
  }
  return;
}

