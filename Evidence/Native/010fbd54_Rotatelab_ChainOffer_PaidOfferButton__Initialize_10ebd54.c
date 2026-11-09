/* IL2CPP: Rotatelab.ChainOffer.PaidOfferButton$$Initialize
void Rotatelab_ChainOffer_PaidOfferButton__Initialize (Rotatelab_ChainOffer_PaidOfferButton_o* __this, Rotatelab_ChainOffer_ChainOfferSo_ChainOfferData_o* data, Rotatelab_ChainOffer_BaseChainOfferController_o* controller, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.PaidOfferButton$$Initialize
   void Rotatelab_ChainOffer_PaidOfferButton__Initialize (Rotatelab_ChainOffer_PaidOfferButton_o*
   __this, Rotatelab_ChainOffer_ChainOfferSo_ChainOfferData_o* data,
   Rotatelab_ChainOffer_BaseChainOfferController_o* controller, const MethodInfo* method); */

void Rotatelab_ChainOffer_PaidOfferButton__Initialize_10ebd54
               (int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010fbe08 + 0x10fbd70);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fbe0c + 0x10fbd84));
    *pcVar2 = '\x01';
  }
  piVar3 = (int *)(param_1 + 0x24);
  *piVar3 = param_2;
  thunk_FUN_00ec5080(piVar3,param_2);
  *(undefined4 *)(param_1 + 0x20) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x20),param_3);
  piVar1 = (int *)UnityEngine_Component__GetComponent_object__143f3b0
                            (param_1,**(undefined4 **)(_UNK_010fbe10 + 0x10fbdbc));
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Could not recover jumptable at 0x010fbe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xe8))(piVar1,*(undefined4 *)(*piVar3 + 8),*(undefined4 *)(*piVar1 + 0xec))
  ;
  return;
}

