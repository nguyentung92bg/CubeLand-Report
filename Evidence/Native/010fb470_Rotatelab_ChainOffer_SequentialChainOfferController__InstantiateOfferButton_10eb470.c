/* IL2CPP: Rotatelab.ChainOffer.SequentialChainOfferController$$InstantiateOfferButton
Rotatelab_ChainOffer_OfferButton_o* Rotatelab_ChainOffer_SequentialChainOfferController__InstantiateOfferButton (Rotatelab_ChainOffer_SequentialChainOfferController_o* __this, int32_t order, int32_t offerIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.SequentialChainOfferController$$InstantiateOfferButton
   Rotatelab_ChainOffer_OfferButton_o*
   Rotatelab_ChainOffer_SequentialChainOfferController__InstantiateOfferButton
   (Rotatelab_ChainOffer_SequentialChainOfferController_o* __this, int32_t order, int32_t
   offerIndex, const MethodInfo* method); */

undefined4
Rotatelab_ChainOffer_SequentialChainOfferController__InstantiateOfferButton_10eb470
          (int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint extraout_r1;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  
  pcVar7 = (char *)(_UNK_010fb5a0 + 0x10fb48c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fb5a4 + 0x10fb4a0));
    *pcVar7 = '\x01';
  }
  uVar1 = Rotatelab_ChainOffer_BaseChainOfferController__InstantiateOfferButton_10e95bc
                    (param_1,param_2,param_3);
  iVar9 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58) + 1;
  *(int *)(param_1 + 0x58) = iVar5;
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = *(uint *)(iVar9 + 0xc);
  FUN_00f88884(iVar5,uVar8);
  if (uVar8 <= extraout_r1) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar6 = *(int **)(_UNK_010fb5a8 + 0x10fb508);
  uVar4 = *(undefined4 *)(iVar9 + extraout_r1 * 4 + 0x10);
  iVar5 = thunk_FUN_00f00bc8(uVar1,*piVar6);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar9 = *piVar6;
  piVar6 = (int *)thunk_FUN_00f00bc8(uVar1,iVar9);
  iVar5 = *piVar6;
  uVar8 = (uint)*(ushort *)(iVar5 + 0xb6);
  if (uVar8 != 0) {
    piVar3 = (int *)(*(int *)(iVar5 + 0x58) + 4);
    do {
      if (piVar3[-1] == iVar9) {
        puVar2 = (undefined4 *)(iVar5 + *piVar3 * 8 + 200);
        goto LAB_010fb584;
      }
      uVar8 = uVar8 - 1;
      piVar3 = piVar3 + 2;
    } while (uVar8 != 0);
  }
  puVar2 = (undefined4 *)FUN_00efdb38(piVar6,iVar9,1);
LAB_010fb584:
  (*(code *)*puVar2)(piVar6,uVar4,puVar2[1]);
  return uVar1;
}

