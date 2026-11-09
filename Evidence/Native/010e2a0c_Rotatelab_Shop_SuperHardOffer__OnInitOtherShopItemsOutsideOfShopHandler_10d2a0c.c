/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$OnInitOtherShopItemsOutsideOfShopHandler
void Rotatelab_Shop_SuperHardOffer__OnInitOtherShopItemsOutsideOfShopHandler (Rotatelab_Shop_SuperHardOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SuperHardOffer$$OnInitOtherShopItemsOutsideOfShopHandler
   void Rotatelab_Shop_SuperHardOffer__OnInitOtherShopItemsOutsideOfShopHandler
   (Rotatelab_Shop_SuperHardOffer_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_SuperHardOffer__OnInitOtherShopItemsOutsideOfShopHandler_10d2a0c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar7 = (char *)(_UNK_010e2ac0 + 0x10e2a20);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2ac4 + 0x10e2a34));
    *pcVar7 = '\x01';
  }
  if (*(char *)(param_1 + 0x1c) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Shop_ShopBundleOfferController__Initialize_10c0094
            (*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),0,0);
  puVar2 = *(undefined4 **)(_UNK_010e2ac8 + 0x10e2a7c);
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar3 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar3 + 0x14) + 0x10) != 0) {
    return;
  }
  pcVar7 = (char *)(_UNK_010e2bb0 + 0x10e2ae0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2bb4 + 0x10e2af4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2bb8 + 0x10e2b00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e2bbc + 0x10e2b0c));
    *pcVar7 = '\x01';
  }
  iVar3 = Rotatelab_Shop_SuperHardOffer__get_Config_10d2554();
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar3 + 0x18) != '\0') {
    return;
  }
  iVar3 = Rotatelab_Shop_SuperHardOffer__IsDue_10d2bd8(param_1);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010e2bc0 + 0x10e2b54));
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e2bc4 + 0x10e2b68));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010e2bc8 + 0x10e2b84),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_0108a578 + 0x108a524);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),0xf,uVar4,0,unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7,unaff_r11,unaff_lr);
    *pcVar7 = '\x01';
  }
  if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
            (*(int *)(iVar3 + 0x10),0xf,uVar4,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
  if (*(char *)(iVar3 + 0x1c) != '\0') {
    return;
  }
  *(undefined1 *)(iVar3 + 0x1c) = 1;
  iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar3);
  if (iVar1 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
    uVar6 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar6,uVar4,0);
  }
  else {
    iVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar5 != 0) {
      pcVar7 = (char *)(iRam036143f4 + 0x3614380);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
        *pcVar7 = '\x01';
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
          *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar3,iVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar6 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar6,uVar4,0);
  }
  uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar6,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

