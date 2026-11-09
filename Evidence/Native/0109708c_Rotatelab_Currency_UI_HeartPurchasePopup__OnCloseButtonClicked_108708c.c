/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnCloseButtonClicked
void Rotatelab_Currency_UI_HeartPurchasePopup__OnCloseButtonClicked (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Currency.UI.HeartPurchasePopup$$OnCloseButtonClicked
   void Rotatelab_Currency_UI_HeartPurchasePopup__OnCloseButtonClicked
   (Rotatelab_Currency_UI_HeartPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Currency_UI_HeartPurchasePopup__OnCloseButtonClicked_108708c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
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
  
  pcVar6 = (char *)(_UNK_01097060 + 0x1096e54);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097064 + 0x1096e68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097068 + 0x1096e74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109706c + 0x1096e80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097070 + 0x1096e8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01097074 + 0x1096e98));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01097078 + 0x1096eb4));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_108dbe8(iVar4,6,0x3f800000);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar7 = *(undefined4 *)(param_1 + 0x1c);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1a,0);
  uVar3 = uStack_54;
  uVar2 = uStack_58;
  uVar1 = uStack_5c;
  uVar5 = uStack_60;
  if (*(int *)(**(int **)(_UNK_0109707c + 0x1096f30) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_60,uVar7,0,0x453b8000,0x3e99999a,uVar5,uVar1,uVar2,uVar3,uStack_50,1,0,0,0,0,0)
  ;
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01097080 + 0x1096fd0));
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_01097084 + 0x1096ff0),0);
  PrimeTween_Sequence__InsertCallback_2cf01e0(&uStack_70,&uStack_38,0x3e4ccccd,uVar5,0,0);
  iVar4 = *(int *)(**(int **)(_UNK_01097088 + 0x1097028) + 0x74);
  if (iVar4 == 0) {
    FUN_00ec3934();
    iVar4 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_70,iVar4,uStack_70,uStack_6c,uStack_68,uStack_64,0);
  return;
}

