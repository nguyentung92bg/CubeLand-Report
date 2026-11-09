/* IL2CPP: Rotatelab.Shop.IapOfferButton$$UpdateDiscountState
void Rotatelab_Shop_IapOfferButton__UpdateDiscountState (Rotatelab_Shop_IapOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.IapOfferButton$$UpdateDiscountState
   void Rotatelab_Shop_IapOfferButton__UpdateDiscountState (Rotatelab_Shop_IapOfferButton_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_IapOfferButton__UpdateDiscountState_10ce864(int *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 auStack_24 [3];
  
  uVar6 = 0;
  while( true ) {
    if (param_1[0x10] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1[0x10] + 0xc) <= (int)uVar6) {
      if ((char)param_1[0x12] == '\0') {
        return;
      }
      pcVar2 = (char *)(_UNK_010dea00 + 0x10de918);
      if (*pcVar2 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010dea04 + 0x10de92c));
        *pcVar2 = '\x01';
      }
      uVar6 = 0;
      iVar3 = *(int *)(_UNK_010dea08 + 0x10de948);
      puVar7 = *(undefined4 **)(_UNK_010dea0c + 0x10de950);
      while( true ) {
        if (param_1[0x11] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(param_1[0x11] + 0xc) <= (int)uVar6) {
          return;
        }
        iVar4 = param_1[0x11];
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar4 + 0xc) <= uVar6) break;
        piVar5 = *(int **)(iVar4 + uVar6 * 4 + 0x10);
        auStack_24[0] = (**(code **)(*param_1 + 0x158))(param_1,*(undefined4 *)(*param_1 + 0x15c));
        uVar1 = FUN_00ec393c(*(undefined4 *)(iVar3 + 0x24),auStack_24);
        uVar1 = System_String__Format_29ffb6c(*puVar7,uVar1,0);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar1,*(undefined4 *)(*piVar5 + 0x2b4));
        uVar6 = uVar6 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = param_1[0x10];
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar6) break;
    iVar3 = *(int *)(iVar3 + uVar6 * 4 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar3,(char)param_1[0x12] != '\0',0);
    uVar6 = uVar6 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f07924();
}

