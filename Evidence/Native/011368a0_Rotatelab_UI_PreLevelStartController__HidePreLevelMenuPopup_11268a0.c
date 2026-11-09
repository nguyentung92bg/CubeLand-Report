/* IL2CPP: Rotatelab.UI.PreLevelStartController$$HidePreLevelMenuPopup
void Rotatelab_UI_PreLevelStartController__HidePreLevelMenuPopup (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController$$HidePreLevelMenuPopup
   void Rotatelab_UI_PreLevelStartController__HidePreLevelMenuPopup
   (Rotatelab_UI_PreLevelStartController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_PreLevelStartController__HidePreLevelMenuPopup_11268a0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
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
  
  pcVar6 = (char *)(_UNK_01136b20 + 0x11368b8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136b24 + 0x11368cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136b28 + 0x11368d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136b2c + 0x11368e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136b30 + 0x11368f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136b34 + 0x11368fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136b38 + 0x1136908));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136b3c + 0x1136914));
    *pcVar6 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar5 = *(int **)(_UNK_01136b40 + 0x1136934);
  *(undefined1 *)(param_1 + 0x56) = 0;
  uStack_38 = 0;
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar5;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x114);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar3,1,**(undefined4 **)(_UNK_01136b44 + 0x1136974));
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01136b48 + 0x1136988));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,6,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1a,0);
  uVar2 = uStack_54;
  uVar1 = uStack_58;
  uVar7 = uStack_5c;
  uVar4 = uStack_60;
  if (*(int *)(**(int **)(_UNK_01136b4c + 0x1136a00) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_60,uVar8,0,0x453b8000,0x3e99999a,uVar4,uVar7,uVar1,uVar2,uStack_50,1,0,0,0,0,0)
  ;
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  iVar3 = *(int *)(**(int **)(_UNK_01136b50 + 0x1136a94) + 0x74);
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar3 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_60,iVar3,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01136b54 + 0x1136adc));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_01136b58 + 0x1136afc),0);
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar7,0,uVar4,0);
  return;
}

