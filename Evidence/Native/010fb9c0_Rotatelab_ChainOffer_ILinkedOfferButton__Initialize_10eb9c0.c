/* IL2CPP: Rotatelab.ChainOffer.ILinkedOfferButton$$Initialize
void Rotatelab_ChainOffer_ILinkedOfferButton__Initialize (Rotatelab_ChainOffer_ILinkedOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ILinkedOfferButton$$Initialize
   void Rotatelab_ChainOffer_ILinkedOfferButton__Initialize
   (Rotatelab_ChainOffer_ILinkedOfferButton_o* __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_ILinkedOfferButton__Initialize_10eb9c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  
  pcVar8 = (char *)(_UNK_010fbb28 + 0x10fb9d4);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fbb2c + 0x10fb9e8));
    *pcVar8 = '\x01';
  }
  iVar1 = *param_1;
  piVar9 = *(int **)(_UNK_010fbb30 + 0x10fba00);
  uVar5 = (uint)*(ushort *)(iVar1 + 0xb6);
  iVar3 = *piVar9;
  if (uVar5 != 0) {
    piVar6 = (int *)(*(int *)(iVar1 + 0x58) + 4);
    do {
      if (piVar6[-1] == iVar3) {
        puVar2 = (undefined4 *)(iVar1 + *piVar6 * 8 + 0xc0);
        goto LAB_010fba48;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar3,0);
LAB_010fba48:
  iVar1 = (*(code *)*puVar2)(param_1,puVar2[1]);
  iVar3 = *param_1;
  iVar4 = *piVar9;
  uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
  if (uVar5 != 0) {
    piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar4) {
        puVar2 = (undefined4 *)(iVar3 + *piVar9 * 8 + 200);
        goto LAB_010fbaac;
      }
      uVar5 = uVar5 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(param_1,iVar4,1);
LAB_010fbaac:
  iVar3 = (*(code *)*puVar2)(param_1,puVar2[1]);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = *(int *)(iVar3 + 0xc) - 1;
  if (uVar5 < 4) {
    uVar7 = *(undefined4 *)(_UNK_010fbb34 + 0x10fbaec + uVar5 * 4);
    uVar10 = *(undefined4 *)(_UNK_010fbb38 + 0x10fbaf0 + uVar5 * 4);
  }
  else {
    uVar7 = 0x43070000;
    uVar10 = 0x43960000;
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_039bbf3c + 0x39bbef4);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039bbf40 + 0x39bbf08),uVar7,uVar10,0);
    *pcVar8 = '\x01';
  }
  UnityEngine_UI_LayoutGroup__SetProperty_Vector2__14add20
            (iVar1,iVar1 + 0x44,uVar7,uVar10,**(undefined4 **)(_UNK_039bbf44 + 0x39bbf28));
  return;
}

