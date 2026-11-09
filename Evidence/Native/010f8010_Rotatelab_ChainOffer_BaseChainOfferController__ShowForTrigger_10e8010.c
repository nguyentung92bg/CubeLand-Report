/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$ShowForTrigger
void Rotatelab_ChainOffer_BaseChainOfferController__ShowForTrigger (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, int32_t trigger, System_Action_bool__o* onClosed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$ShowForTrigger
   void Rotatelab_ChainOffer_BaseChainOfferController__ShowForTrigger
   (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, int32_t trigger, System_Action_bool__o*
   onClosed, const MethodInfo* method); */

void Rotatelab_ChainOffer_BaseChainOfferController__ShowForTrigger_10e8010
               (int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010f80dc + 0x10f802c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f80e0 + 0x10f8040));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f80e4 + 0x10f804c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f80e8 + 0x10f8058));
    *pcVar6 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x4c) = param_3;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x4c),param_3);
  *(undefined1 *)(param_1 + 0x50) = 0;
  Rotatelab_UI_PopupController__Show_1124734(param_1,0,0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010f80ec + 0x10f8094));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = **(undefined4 **)(_UNK_010f80f0 + 0x10f80ac);
  if (param_2 == 0) {
    uVar5 = **(undefined4 **)(_UNK_010f80f4 + 0x10f80b8);
  }
  puVar4 = (undefined4 *)(iVar3 + 0x34);
  *puVar4 = uVar5;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

