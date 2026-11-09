/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ClaimBonusReward
void Rotatelab_SeasonPass_SeasonPassResultController__ClaimBonusReward (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$ClaimBonusReward
   void Rotatelab_SeasonPass_SeasonPassResultController__ClaimBonusReward
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassResultController__ClaimBonusReward_10aaf94(int param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
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
  
  pcVar3 = (char *)(_UNK_010bb1dc + 0x10bafb0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb1e0 + 0x10bafc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb1e4 + 0x10bafd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb1e8 + 0x10bafdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb1ec + 0x10bafe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb1f0 + 0x10baff4));
    *pcVar3 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010bb1f4 + 0x10bb010));
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x40),
                     **(undefined4 **)(_UNK_010bb1f8 + 0x10bb038));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Currency_CurrencyManager__IncreaseCurrency_10839a0(iVar1,0,iVar2,iVar2 >> 0x1f,0,0,0);
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  pcVar3 = (char *)(_UNK_010bb1fc + 0x10bb084);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb200 + 0x10bb098));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_010bb204 + 0x10bb0ac) + 0x5c);
  fVar6 = *(float *)(iVar1 + 0xc);
  fVar7 = *(float *)(iVar1 + 0x10);
  fVar5 = *(float *)(iVar1 + 0x14);
  if (*(int *)(**(int **)(_UNK_010bb208 + 0x10bb0b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__PunchScale_2ceb894
            (&uStack_50,uVar4,fVar6 * 0.5,fVar7 * 0.5,fVar5 * 0.5,0x3f000000,0x41200000,1,0,0,1,0,0,
             0,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_50,1,0,1,0,0,0);
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_60,&uStack_40,0x3e800000,0);
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bb20c + 0x10bb190));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010bb210 + 0x10bb1b0),0);
  PrimeTween_Sequence__OnComplete_2cf16e0(auStack_70,&uStack_40,uVar4,0,0);
  return;
}

