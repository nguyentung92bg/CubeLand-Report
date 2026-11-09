/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$GetCycleEndTime
System_DateTime_o Rotatelab_ChainOffer_ChainOfferManager__GetCycleEndTime (Rotatelab_ChainOffer_ChainOfferManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ChainOfferManager$$GetCycleEndTime
   System_DateTime_o Rotatelab_ChainOffer_ChainOfferManager__GetCycleEndTime
   (Rotatelab_ChainOffer_ChainOfferManager_o* __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_ChainOfferManager__GetCycleEndTime_10e8714(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r1;
  char *pcVar4;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar4 = (char *)(_UNK_010f87f4 + 0x10f872c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f87f8 + 0x10f8740));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f87fc + 0x10f874c));
    *pcVar4 = '\x01';
  }
  uStack_1c = 0;
  uStack_20 = 0;
  if (*(int *)(**(int **)(_UNK_010f8800 + 0x10f8764) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_28,0);
  uVar2 = uStack_24;
  uVar1 = uStack_28;
  iVar3 = *(int *)(**(int **)(_UNK_010f8804 + 0x10f8798) + 0x74);
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar3 = extraout_r1;
  }
  Rotatelab_Extensions__GetStartOfWeek_fc341c(&uStack_20,iVar3,uVar1,uVar2,0);
  System_DateTime__AddDays_2b48944(&uStack_28,&uStack_20,0,0x401c0000,0);
  *param_1 = uStack_28;
  param_1[1] = uStack_24;
  return;
}

