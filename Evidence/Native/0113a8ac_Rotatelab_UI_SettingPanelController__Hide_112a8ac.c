/* IL2CPP: Rotatelab.UI.SettingPanelController$$Hide
void Rotatelab_UI_SettingPanelController__Hide (Rotatelab_UI_SettingPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SettingPanelController$$Hide
   void Rotatelab_UI_SettingPanelController__Hide (Rotatelab_UI_SettingPanelController_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_SettingPanelController__Hide_112a8ac(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int extraout_r1;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  
  pcVar5 = (char *)(_UNK_0113aba0 + 0x113a8c4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113aba4 + 0x113a8d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113aba8 + 0x113a8e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113abac + 0x113a8f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113abb0 + 0x113a8fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113abb4 + 0x113a908));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113abb8 + 0x113a914));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113abbc + 0x113a920));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113abc0 + 0x113a92c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0113abc4 + 0x113a948));
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,6,0);
  piVar6 = *(int **)(_UNK_0113abc8 + 0x113a97c);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x90);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar3,0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uVar10 = *(undefined4 *)(param_1 + 0x14);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_60,0x1c,0);
  uVar2 = uStack_54;
  uVar1 = uStack_58;
  uVar9 = uStack_5c;
  uVar7 = uStack_60;
  if (*(int *)(**(int **)(_UNK_0113abcc + 0x113aa04) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__UIAnchoredPosition_2ce6e40
            (&uStack_60,uVar10,0,0x453b8000,0x3e99999a,uVar7,uVar9,uVar1,uVar2,uStack_50,1,0,0,0,0,0
            );
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_60,&uStack_38,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  piVar6 = *(int **)(_UNK_0113abd0 + 0x113aaa0);
  uVar7 = *(undefined4 *)(param_1 + 0x10);
  iVar3 = *piVar6;
  uStack_38 = uStack_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = uStack_54;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  puVar4 = *(undefined4 **)(iVar3 + 0x5c);
  iVar8 = puVar4[2];
  if (iVar8 == 0) {
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar6 + 0x5c);
    }
    uVar9 = *puVar4;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113abd4 + 0x113aaf4));
    System_Action_object____ctor_1f11414(iVar8,uVar9,**(undefined4 **)(_UNK_0113abd8 + 0x113ab14),0)
    ;
    piVar6 = (int *)(*(int *)(*piVar6 + 0x5c) + 8);
    *piVar6 = iVar8;
    thunk_FUN_00ec5080(piVar6,iVar8);
  }
  PrimeTween_Sequence__ChainCallback_object__15b4c64
            (&uStack_60,&uStack_38,uVar7,iVar8,0,**(undefined4 **)(_UNK_0113abdc + 0x113ab4c));
  iVar3 = *(int *)(**(int **)(_UNK_0113abe0 + 0x113ab68) + 0x74);
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar3 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_60,iVar3,uStack_60,uStack_5c,uStack_58,uStack_54,0);
  return;
}

