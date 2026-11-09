/* IL2CPP: Rotatelab.UI.FailPanelController$$TriggerPlayOn
void Rotatelab_UI_FailPanelController__TriggerPlayOn (Rotatelab_UI_FailPanelController_o* __this, System_String_o* source, Rotatelab_UI_PlayOnOffer_o offer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$TriggerPlayOn
   void Rotatelab_UI_FailPanelController__TriggerPlayOn (Rotatelab_UI_FailPanelController_o* __this,
   System_String_o* source, Rotatelab_UI_PlayOnOffer_o offer, const MethodInfo* method); */

int Rotatelab_UI_FailPanelController__TriggerPlayOn_111b958
              (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  
  pcVar7 = (char *)(_UNK_0112bcb0 + 0x112b980);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcb4 + 0x112b994));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcb8 + 0x112b9a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcbc + 0x112b9ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcc0 + 0x112b9b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcc4 + 0x112b9c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcc8 + 0x112b9d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bccc + 0x112b9dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcd0 + 0x112b9e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcd4 + 0x112b9f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcd8 + 0x112ba00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bcdc + 0x112ba0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112bce0 + 0x112ba18));
    *pcVar7 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112bce4 + 0x112ba2c));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 8),param_1);
  piVar10 = *(int **)(_UNK_0112bce8 + 0x112ba6c);
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  iVar2 = *piVar10;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  *(undefined1 *)(param_1 + 0xd9) = 0;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar10;
  }
  piVar10 = *(int **)(_UNK_0112bcec + 0x112ba9c);
  iVar6 = *piVar10;
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x28);
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934(iVar6);
    iVar6 = *piVar10;
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__object___Raise_23a4f8c
            (iVar2,*(undefined4 *)(*(int *)(iVar6 + 0x5c) + 8),param_2,
             **(undefined4 **)(_UNK_0112bcf0 + 0x112bae0));
  if (*(int *)(**(int **)(_UNK_0112bcf4 + 0x112baf8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_UI_FailPanelController__get_levelBasePlayOnUseCount_1118dbc();
  Rotatelab_UI_FailPanelController__set_levelBasePlayOnUseCount_1118e10(iVar2 + 1);
  DG_Tweening_ShortcutExtensions__DOScale_116ba14(*(undefined4 *)(param_1 + 0x54),0,0x3dcccccd,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112bcf8 + 0x112bb38));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar2,6,0);
  if (*(int *)(param_1 + 0xdc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Video_VideoPlayer__Stop_39ebad0(*(int *)(param_1 + 0xdc),0);
  if (*(int *)(**(int **)(_UNK_0112bcfc + 0x112bb88) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                    (*(undefined4 *)(param_1 + 0x40),0,0x453b8000,0x3ecccccd,0,0);
  puVar8 = *(undefined4 **)(_UNK_0112bd00 + 0x112bbe0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,0x1c,*puVar8);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar3,uVar4,0);
  uVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                    (*(undefined4 *)(param_1 + 0x6c),0,0x453b8000,0x3ecccccd,0,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar4,0x1c,*puVar8);
  uVar3 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar3,uVar4,0);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112bd04 + 0x112bc40));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar4,iVar1,**(undefined4 **)(_UNK_0112bd08 + 0x112bc5c),0);
  iVar1 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar3,uVar4,0);
  if (*(int *)(**(int **)(_UNK_0112bd0c + 0x112bc84) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = **(int **)(_UNK_0112bd10 + 0x112bca0);
  piVar10 = *(int **)(iVar2 + 0x1c);
  if (piVar10 == (int *)0x0) {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01494e8c + 0x1494d18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01494e90 + 0x1494d24));
    piVar10 = *(int **)(iVar2 + 0x1c);
    if (piVar10 == (int *)0x0) {
      FUN_00efd7c4(iVar2);
      piVar10 = *(int **)(iVar2 + 0x1c);
    }
  }
  if ((*(ushort *)(*piVar10 + 0xbd) & 1) == 0) {
    FUN_00efd768();
  }
  iVar6 = thunk_FUN_00f00cdc();
  Rotatelab_Extensions___c__DisplayClass91_0_object____ctor_17839a4
            (iVar6,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 4));
  if (iVar6 != 0) {
    piVar10 = (int *)(iVar6 + 8);
    *piVar10 = iVar1;
    thunk_FUN_00ec5080(piVar10,iVar1);
    iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                      (**(undefined4 **)(_UNK_01494e94 + 0x1494d94));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_UIInputBlocker__TrySetInputAllowed_1124020(iVar1,0,*piVar10,0);
    if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar11 = *(int **)(_UNK_01494e98 + 0x1494ddc);
    piVar9 = (int *)(*piVar10 + 0x50);
    iVar1 = *piVar9;
    uVar3 = thunk_FUN_00f00cdc(*piVar11);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar3,iVar6,*(undefined4 *)(*(int *)(iVar2 + 0x1c) + 0xc),0);
    piVar5 = (int *)System_Delegate__Combine_2bbca94(iVar1,uVar3,0);
    if (piVar5 == (int *)0x0) {
      *piVar9 = 0;
      piVar5 = (int *)0x0;
    }
    else {
      iVar1 = *piVar11;
      if (*piVar5 != iVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar5);
      }
      *piVar9 = (int)piVar5;
      if (*piVar5 != iVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar5);
      }
    }
    thunk_FUN_00ec5080(piVar9,piVar5);
    return *piVar10;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

