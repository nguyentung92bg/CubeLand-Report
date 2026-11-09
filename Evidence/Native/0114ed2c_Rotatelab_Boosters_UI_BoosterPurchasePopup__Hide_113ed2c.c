/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$Hide
void Rotatelab_Boosters_UI_BoosterPurchasePopup__Hide (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$Hide
   void Rotatelab_Boosters_UI_BoosterPurchasePopup__Hide
   (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_UI_BoosterPurchasePopup__Hide_113ed2c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r1;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_0114ef00 + 0x114ed44);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ef04 + 0x114ed58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ef08 + 0x114ed64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ef0c + 0x114ed70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ef10 + 0x114ed7c));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar7 = *(undefined4 *)(param_1 + 0x20);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,9,0);
  uVar3 = uStack_54;
  uVar2 = uStack_58;
  uVar1 = uStack_5c;
  uVar4 = uStack_60;
  if (*(int *)(**(int **)(_UNK_0114ef14 + 0x114ede4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4684
            (&uStack_60,uVar7,0,0x3e4ccccd,uVar4,uVar1,uVar2,uVar3,uStack_50,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0114ef18 + 0x114ee78));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_0114ef1c + 0x114ee94),0);
  PrimeTween_Sequence__ChainCallback_2cf0180(&uStack_70,&uStack_38,uVar4,0,0);
  iVar5 = *(int *)(**(int **)(_UNK_0114ef20 + 0x114eec8) + 0x74);
  if (iVar5 == 0) {
    FUN_00ec3934();
    iVar5 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_70,iVar5,uStack_70,uStack_6c,uStack_68,uStack_64,0);
  return;
}

