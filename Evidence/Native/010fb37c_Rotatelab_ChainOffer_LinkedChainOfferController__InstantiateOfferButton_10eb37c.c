/* IL2CPP: Rotatelab.ChainOffer.LinkedChainOfferController$$InstantiateOfferButton
Rotatelab_ChainOffer_OfferButton_o* Rotatelab_ChainOffer_LinkedChainOfferController__InstantiateOfferButton (Rotatelab_ChainOffer_LinkedChainOfferController_o* __this, int32_t order, int32_t offerIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.LinkedChainOfferController$$InstantiateOfferButton
   Rotatelab_ChainOffer_OfferButton_o*
   Rotatelab_ChainOffer_LinkedChainOfferController__InstantiateOfferButton
   (Rotatelab_ChainOffer_LinkedChainOfferController_o* __this, int32_t order, int32_t offerIndex,
   const MethodInfo* method); */

undefined4
Rotatelab_ChainOffer_LinkedChainOfferController__InstantiateOfferButton_10eb37c
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  
  pcVar8 = (char *)(_UNK_010fb460 + 0x10fb398);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb464 + 0x10fb3ac));
    *pcVar8 = '\x01';
  }
  uVar1 = Rotatelab_ChainOffer_BaseChainOfferController__InstantiateOfferButton_10e95bc
                    (param_1,param_2,param_3);
  piVar6 = *(int **)(_UNK_010fb468 + 0x10fb3d4);
  iVar2 = thunk_FUN_00f00bc8(uVar1,*piVar6);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *piVar6;
  piVar6 = (int *)thunk_FUN_00f00bc8(uVar1,iVar7);
  iVar2 = *piVar6;
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == iVar7) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0xd0);
        goto LAB_010fb448;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar6,iVar7,2);
LAB_010fb448:
  (*(code *)*puVar3)(piVar6,puVar3[1]);
  return uVar1;
}

