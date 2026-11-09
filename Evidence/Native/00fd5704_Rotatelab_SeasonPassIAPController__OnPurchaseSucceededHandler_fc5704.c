/* IL2CPP: Rotatelab.SeasonPassIAPController$$OnPurchaseSucceededHandler
void Rotatelab_SeasonPassIAPController__OnPurchaseSucceededHandler (Rotatelab_SeasonPassIAPController_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPassIAPController$$OnPurchaseSucceededHandler
   void Rotatelab_SeasonPassIAPController__OnPurchaseSucceededHandler
   (Rotatelab_SeasonPassIAPController_o* __this, Rotatelab_IAP_IapObject_o* iapObject, const
   MethodInfo* method); */

void Rotatelab_SeasonPassIAPController__OnPurchaseSucceededHandler_fc5704
               (int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [16];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_00fd5794 + 0xfd571c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd5798 + 0xfd5730));
    *pcVar6 = '\x01';
  }
  if (*(char *)(param_1 + 0x20) == '\0') {
    return;
  }
  iVar1 = Rotatelab_SeasonPassIAPController__IsSeasonPassProduct_fc56c4(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  Rotatelab_SeasonPassIAPController__HidePopup_fc55c4(param_1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fd579c + 0xfd576c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_010b5558 + 0x10b5380);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b555c + 0x10b5394),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5560 + 0x10b53a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5564 + 0x10b53ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5568 + 0x10b53b8));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar5 = *(undefined4 **)(_UNK_010b556c + 0x10b53d4);
  uStack_38 = 0;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = (int *)Rotatelab_Currency_HeartManager__get_Hearts_10837c4(iVar2,0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = (**(code **)(*piVar3 + 0x110))(piVar3,*(undefined4 *)(*piVar3 + 0x114));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = (int *)Rotatelab_Currency_HeartManager__get_Hearts_10837c4(iVar2,0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = (**(code **)(*piVar3 + 0xf0))(piVar3,*(undefined4 *)(*piVar3 + 0xf4));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b5570 + 0x10b5480));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
            (iVar2,5,(uint)uVar7 - (uint)uVar8,
             (int)((ulonglong)uVar7 >> 0x20) -
             ((int)((ulonglong)uVar8 >> 0x20) + (uint)((uint)uVar7 < (uint)uVar8)),0,0,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3dcccccd,0);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b5574 + 0x10b5510));
  System_Action___ctor_2b10bac(uVar4,iVar1,**(undefined4 **)(_UNK_010b5578 + 0x10b5530),0);
  PrimeTween_Sequence__OnComplete_2cf16e0(auStack_68,&uStack_38,uVar4,0,0);
  return;
}

