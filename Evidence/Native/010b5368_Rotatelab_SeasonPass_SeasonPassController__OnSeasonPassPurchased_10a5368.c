/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$OnSeasonPassPurchased
void Rotatelab_SeasonPass_SeasonPassController__OnSeasonPassPurchased (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$OnSeasonPassPurchased
   void Rotatelab_SeasonPass_SeasonPassController__OnSeasonPassPurchased
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__OnSeasonPassPurchased_10a5368(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  
  pcVar4 = (char *)(_UNK_010b5558 + 0x10b5380);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b555c + 0x10b5394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5560 + 0x10b53a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5564 + 0x10b53ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5568 + 0x10b53b8));
    *pcVar4 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  puVar5 = *(undefined4 **)(_UNK_010b556c + 0x10b53d4);
  uStack_38 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_Currency_HeartManager__get_Hearts_10837c4(iVar1,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = (**(code **)(*piVar2 + 0x110))(piVar2,*(undefined4 *)(*piVar2 + 0x114));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_Currency_HeartManager__get_Hearts_10837c4(iVar1,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = (**(code **)(*piVar2 + 0xf0))(piVar2,*(undefined4 *)(*piVar2 + 0xf4));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b5570 + 0x10b5480));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0
            (iVar1,5,(uint)uVar6 - (uint)uVar7,
             (int)((ulonglong)uVar6 >> 0x20) -
             ((int)((ulonglong)uVar7 >> 0x20) + (uint)((uint)uVar6 < (uint)uVar7)),0,0,0);
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
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b5574 + 0x10b5510));
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_010b5578 + 0x10b5530),0);
  PrimeTween_Sequence__OnComplete_2cf16e0(auStack_68,&uStack_38,uVar3,0,0);
  return;
}

