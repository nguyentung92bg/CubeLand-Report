/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_OfferYear
int32_t Rotatelab_Shop_SeasonalOfferButton__get_OfferYear (Rotatelab_Shop_SeasonalOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.SeasonalOfferButton$$get_OfferYear
   int32_t Rotatelab_Shop_SeasonalOfferButton__get_OfferYear (Rotatelab_Shop_SeasonalOfferButton_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_SeasonalOfferButton__get_OfferYear_10d0900(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar2 = (char *)(_UNK_010e09d0 + 0x10e0914);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e09d4 + 0x10e0928));
    *pcVar2 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  iVar1 = Rotatelab_Shop_SeasonalOfferButton__get_Flag_10d01ec();
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x10) == 0 && *(int *)(iVar1 + 0x14) == 0) {
      if (*(int *)(**(int **)(_UNK_010e09dc + 0x10e0994) + 0x74) == 0) {
        FUN_00ec3934();
      }
      System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_30,0);
      uStack_20 = uStack_30;
      uStack_1c = uStack_2c;
      uStack_18 = uStack_28;
      uStack_14 = uStack_24;
    }
    else {
      Rotatelab_Shop_SeasonalOfferButton__get_OfferStartTime_10d0580(&uStack_20);
      if (*(int *)(**(int **)(_UNK_010e09d8 + 0x10e0970) + 0x74) == 0) {
        FUN_00ec3934();
      }
    }
    System_DateTimeOffset__get_Year_2b4e384(&uStack_20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

