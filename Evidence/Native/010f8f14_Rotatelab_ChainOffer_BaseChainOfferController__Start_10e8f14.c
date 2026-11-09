/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$Start
void Rotatelab_ChainOffer_BaseChainOfferController__Start (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.BaseChainOfferController$$Start
   void Rotatelab_ChainOffer_BaseChainOfferController__Start
   (Rotatelab_ChainOffer_BaseChainOfferController_o* __this, const MethodInfo* method); */

void Rotatelab_ChainOffer_BaseChainOfferController__Start_10e8f14(int param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar5 = (char *)(_UNK_010f9074 + 0x10f8f28);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f9078 + 0x10f8f3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f907c + 0x10f8f48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f9080 + 0x10f8f54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f9084 + 0x10f8f60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f9088 + 0x10f8f6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f908c + 0x10f8f78));
    *pcVar5 = '\x01';
  }
  Rotatelab_UI_PopupController__Start_11246e8(param_1,0);
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(*(int *)(param_1 + 0x34) + 0xb4);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f9090 + 0x10f8fa8));
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar3,param_1,**(undefined4 **)(_UNK_010f9094 + 0x10f8fc8),0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar6,uVar3,0);
  piVar8 = *(int **)(_UNK_010f9098 + 0x10f8ff8);
  iVar6 = *piVar8;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xe0);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f909c + 0x10f901c));
  System_Action_object____ctor_1f11414(uVar3,param_1,**(undefined4 **)(_UNK_010f90a0 + 0x10f903c),0)
  ;
  uVar3 = Rotatelab_GameAction_object___op_Addition_23a2f60
                    (uVar7,uVar3,**(undefined4 **)(_UNK_010f90a4 + 0x10f9054));
  puVar4 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xe0);
  *puVar4 = uVar3;
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

