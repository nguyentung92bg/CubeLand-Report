/* IL2CPP: Rotatelab.Shop.IapOfferButton$$UpdateDiscountAmountText
void Rotatelab_Shop_IapOfferButton__UpdateDiscountAmountText (Rotatelab_Shop_IapOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.IapOfferButton$$UpdateDiscountAmountText
   void Rotatelab_Shop_IapOfferButton__UpdateDiscountAmountText (Rotatelab_Shop_IapOfferButton_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_IapOfferButton__UpdateDiscountAmountText_10ce900(int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_010dea00 + 0x10de918);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dea04 + 0x10de92c));
    *pcVar2 = '\x01';
  }
  uVar3 = 0;
  iVar6 = *(int *)(_UNK_010dea08 + 0x10de948);
  puVar7 = *(undefined4 **)(_UNK_010dea0c + 0x10de950);
  while( true ) {
    if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1[0x11] + 0xc) <= (int)uVar3) {
      return;
    }
    iVar4 = param_1[0x11];
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar4 + 0xc) <= uVar3) break;
    piVar5 = *(int **)(iVar4 + uVar3 * 4 + 0x10);
    uStack_24 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined4 *)(*param_1 + 0x15c));
    uVar1 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x24),&uStack_24);
    uVar1 = System_String__Format_29ffb6c(*puVar7,uVar1,0);
    if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar1,*(undefined4 *)(*piVar5 + 0x2b4));
    uVar3 = uVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

