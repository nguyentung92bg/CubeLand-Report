/* IL2CPP: Rotatelab.UI.UITransitionController$$StartTransition
void Rotatelab_UI_UITransitionController__StartTransition (Rotatelab_UI_UITransitionController_o* __this, DG_Tweening_TweenCallback_o* halfway, DG_Tweening_TweenCallback_o* ended, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UITransitionController$$StartTransition
   void Rotatelab_UI_UITransitionController__StartTransition (Rotatelab_UI_UITransitionController_o*
   __this, DG_Tweening_TweenCallback_o* halfway, DG_Tweening_TweenCallback_o* ended, const
   MethodInfo* method); */

int Rotatelab_UI_UITransitionController__StartTransition_1127948
              (int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  undefined4 unaff_r4;
  char *pcVar10;
  int *piVar11;
  undefined4 unaff_r5;
  int iVar12;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar13;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar14;
  
  pcVar10 = (char *)(_UNK_011380f4 + 0x1137968);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011380f8 + 0x113797c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011380fc + 0x1137988));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138100 + 0x1137994));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138104 + 0x11379a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138108 + 0x11379ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113810c + 0x11379b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138110 + 0x11379c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138114 + 0x11379d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138118 + 0x11379dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113811c + 0x11379e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138120 + 0x11379f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138124 + 0x1137a00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138128 + 0x1137a0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113812c + 0x1137a18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138130 + 0x1137a24));
    *pcVar10 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_pivot_3613a30(*(int *)(param_1 + 0x18),0x3f000000,0x3f115492,0);
  iVar12 = *(int *)(param_1 + 0x18);
  pcVar10 = (char *)(_UNK_01138134 + 0x1137a6c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138138 + 0x1137a80));
    *pcVar10 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_0113813c + 0x1137a98) + 0x5c);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar12,*puVar2,puVar2[1],0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x1c),0,0x44fa0000,0);
  iVar12 = *(int *)(param_1 + 0x1c);
  pcVar10 = (char *)(_UNK_01138140 + 0x1137af4);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138144 + 0x1137b08));
    *pcVar10 = '\x01';
  }
  iVar3 = *(int *)(**(int **)(_UNK_01138148 + 0x1137b20) + 0x5c);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar12,*(undefined4 *)(iVar3 + 0xc),*(undefined4 *)(iVar3 + 0x10),
             *(undefined4 *)(iVar3 + 0x14),0);
  iVar12 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar12,1,0);
  if (*(int *)(**(int **)(_UNK_0113814c + 0x1137b90) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar5 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                    (*(undefined4 *)(param_1 + 0x1c),0,0x43480000,0x3e4ccccd,0,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar5,0x1b,**(undefined4 **)(_UNK_01138150 + 0x1137be0));
  uVar4 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar5,0);
  puVar2 = *(undefined4 **)(_UNK_01138154 + 0x1137c08);
  uVar5 = thunk_FUN_00f00cdc(*puVar2);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar5,param_1,**(undefined4 **)(_UNK_01138158 + 0x1137c28),0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar4,uVar5,0);
  uVar5 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x1c),0x41a00000,0x3f4ccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar5,1,**(undefined4 **)(_UNK_0113815c + 0x1137c6c));
  uVar5 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
                    (uVar5,param_2,**(undefined4 **)(_UNK_01138160 + 0x1137c80));
  uVar4 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar5,0);
  uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x2c),0x4019999a,0x3e99999a,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x2c),0x40000000,0x3e4ccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
  uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x30),0x4099999a,0x3ecccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar6 = thunk_FUN_00f00cdc(*puVar2);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar6,param_1,**(undefined4 **)(_UNK_01138164 + 0x1137d74),0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar5,uVar6,0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x30),0x40800000,0x3e4ccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x3c),0,0x3e4ccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar5,uVar6,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar4,0x3e4ccccd,0);
  uVar5 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x3c),0x3f800000,0x3e4ccccd,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar5,0);
  uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x2c),0x40000000,0x3e99999a,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x2c),0x3f800000,0x3e4ccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
  uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x30),0x4099999a,0x3e4ccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar6 = thunk_FUN_00f00cdc(*puVar2);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar6,param_1,**(undefined4 **)(_UNK_01138168 + 0x1137eec),0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar5,uVar6,0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x30),0x3f000000,0x3e4ccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
  uVar5 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x1c),0x3f800000,0x3ecccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                    (uVar5,0x3e800000,**(undefined4 **)(_UNK_0113816c + 0x1137f68));
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar5,1,**(undefined4 **)(_UNK_01138170 + 0x1137f7c));
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
  uVar5 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                    (*(undefined4 *)(param_1 + 0x1c),0,0x44fa0000,0x3ecccccd,0,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar5,0x1a,**(undefined4 **)(_UNK_01138174 + 0x1137fc4));
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
  uVar5 = thunk_FUN_00f00cdc(*puVar2);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar5,param_1,**(undefined4 **)(_UNK_01138178 + 0x1138000),0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar4,uVar5,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar4,param_3,0);
  uVar4 = Rotatelab_GameExtensions__PauseGameDuringAnimation_object__148fec8
                    (uVar4,**(undefined4 **)(_UNK_0113817c + 0x1138030));
  if (*(int *)(**(int **)(_UNK_01138180 + 0x1138044) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Extensions__BlockInputDuringAnimation_object__1484cf0
                    (uVar4,**(undefined4 **)(_UNK_01138184 + 0x1138060));
  uVar5 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  iVar12 = DG_Tweening_TweenSettingsExtensions__SetLink_object__15da040
                     (uVar4,uVar5,**(undefined4 **)(_UNK_01138188 + 0x1138088));
  *(int *)(param_1 + 0x14) = iVar12;
  thunk_FUN_00ec5080((int *)(param_1 + 0x14),iVar12);
  piVar11 = *(int **)(_UNK_0113818c + 0x11380b0);
  iVar3 = *piVar11;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar11;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x79) == '\0') {
    return 0;
  }
  pcVar10 = (char *)(_UNK_011788d8 + 0x1178764);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011788dc + 0x1178778),1,0);
    *pcVar10 = '\x01';
  }
  if (iVar12 == 0) {
    pcVar10 = (char *)(_UNK_011788e0 + 0x1178800);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011788e4 + 0x1178814));
      *pcVar10 = '\x01';
    }
    iVar12 = **(int **)(**(int **)(_UNK_011788e8 + 0x1178828) + 0x5c);
    if (iVar12 < 2) {
      return iVar12;
    }
    pcVar10 = (char *)(_UNK_0118e26c + 0x118e238);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e270 + 0x118e24c),0);
      *pcVar10 = '\x01';
    }
    iVar12 = 0;
    piVar11 = (int *)**(int **)(_UNK_0118e274 + 0x118e264);
  }
  else if (*(char *)(iVar12 + 0x94) == '\0') {
    pcVar10 = (char *)(_UNK_011788ec + 0x1178854);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011788f0 + 0x1178868));
      *pcVar10 = '\x01';
    }
    iVar12 = **(int **)(**(int **)(_UNK_011788f4 + 0x117887c) + 0x5c);
    if (iVar12 < 2) {
      return iVar12;
    }
    pcVar10 = (char *)(_UNK_0118e1c8 + 0x118e194);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e1cc + 0x118e1a8),0);
      *pcVar10 = '\x01';
    }
    iVar12 = 0;
    piVar11 = (int *)**(int **)(_UNK_0118e1d0 + 0x118e1c0);
  }
  else {
    if (*(char *)(iVar12 + 0x95) == '\0') {
      if (*(int *)(**(int **)(_UNK_01178904 + 0x11788b0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar10 = (char *)(_UNK_01195124 + 0x1195048);
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01195128 + 0x119505c),1,0,0);
        *pcVar10 = '\x01';
      }
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = 0;
      if ((*(int *)(iVar12 + 100) != -1) && (*(char *)(iVar12 + 0xb5) == '\0')) {
        DG_Tweening_Tween__DoGoto_116d1fc
                  (iVar12,*(undefined4 *)(iVar12 + 0x60),*(int *)(iVar12 + 100),0,0);
        *(undefined1 *)(iVar12 + 0xb4) = 0;
        iVar3 = 1;
        bVar14 = *(char *)(iVar12 + 0x5c) != '\0';
        cVar1 = '\0';
        if (bVar14) {
          cVar1 = *(char *)(iVar12 + 0x94);
        }
        if (bVar14 && cVar1 != '\0') {
          piVar11 = *(int **)(_UNK_0119512c + 0x11950d4);
          iVar7 = *piVar11;
          if (*(int *)(iVar7 + 0x74) == 0) {
            FUN_00ec3934();
            iVar7 = *piVar11;
          }
          if (*(char *)(*(int *)(iVar7 + 0x5c) + 0x44) == '\0') {
            if (*(int *)(iVar7 + 0x74) == 0) {
              FUN_00ec3934();
            }
            DG_Tweening_Core_TweenManager__Despawn_1182a40(iVar12,1);
          }
          else {
            *(undefined1 *)(iVar12 + 0x94) = 0;
          }
        }
      }
      return iVar3;
    }
    pcVar10 = (char *)(_UNK_011788f8 + 0x11787ac);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011788fc + 0x11787c0));
      *pcVar10 = '\x01';
    }
    iVar3 = **(int **)(**(int **)(_UNK_01178900 + 0x11787d4) + 0x5c);
    if (iVar3 < 2) {
      return iVar3;
    }
    pcVar10 = (char *)(_UNK_0118e21c + 0x118e1e8);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e220 + 0x118e1fc),0);
      *pcVar10 = '\x01';
    }
    piVar11 = (int *)**(int **)(_UNK_0118e224 + 0x118e214);
  }
  pcVar10 = (char *)(_UNK_0118da34 + 0x118d898);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da38 + 0x118d8ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da3c + 0x118d8b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da40 + 0x118d8c4));
    *pcVar10 = '\x01';
  }
  piVar13 = *(int **)(_UNK_0118da44 + 0x118d8d8);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar13;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x31) == '\0') {
    uVar4 = **(undefined4 **)(_UNK_0118da4c + 0x118d948);
    if (piVar11 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      pcVar8 = *(code **)(*piVar11 + 0xd8);
      uVar5 = *(undefined4 *)(*piVar11 + 0xdc);
      uVar5 = (*pcVar8)(piVar11,uVar5,pcVar8,uVar5,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r11,
                        unaff_lr);
    }
    uVar4 = System_String__Concat_29fee38(uVar4,uVar5,0);
  }
  else {
    uVar4 = DG_Tweening_Core_Debugger__GetDebugDataMessage_117da54(iVar12);
    uVar5 = **(undefined4 **)(_UNK_0118da48 + 0x118d918);
    if (piVar11 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*piVar11 + 0xd8))(piVar11,*(undefined4 *)(*piVar11 + 0xdc));
    }
    uVar4 = System_String__Concat_2a0b574(uVar5,uVar4,uVar6,0);
  }
  iVar12 = *piVar13;
  if (*(int *)(iVar12 + 0x74) == 0) {
    FUN_00ec3934();
    iVar12 = *piVar13;
  }
  iVar3 = *(int *)(*(int *)(iVar12 + 0x5c) + 0x2c);
  if (iVar3 != 0) {
    if (*(int *)(iVar12 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *(int *)(*(int *)(*piVar13 + 0x5c) + 0x2c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    iVar12 = (**(code **)(iVar3 + 0xc))
                       (*(undefined4 *)(iVar3 + 0x20),2,uVar4,*(undefined4 *)(iVar3 + 0x14));
    if (iVar12 == 0) {
      return 0;
    }
  }
  if (*(int *)(**(int **)(_UNK_0118da50 + 0x118da0c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_035c01b0 + 0x35c00a4);
  if (*pcVar10 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
    *pcVar10 = '\x01';
  }
  piVar11 = *(int **)(_UNK_035c01bc + 0x35c00d8);
  if (*(int *)(*piVar11 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_035c01c0 + 0x35c00f4);
  if (*pcVar10 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
    *pcVar10 = '\x01';
  }
  iVar12 = *piVar11;
  if (*(int *)(iVar12 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar12 = *piVar11;
  }
  piVar11 = *(int **)(*(int *)(iVar12 + 0x5c) + 4);
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar12 = *piVar11;
  uVar9 = (uint)*(ushort *)(iVar12 + 0xb6);
  if (uVar9 != 0) {
    piVar13 = (int *)(*(int *)(iVar12 + 0x58) + 4);
    do {
      if (piVar13[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
        puVar2 = (undefined4 *)(iVar12 + *piVar13 * 8 + 0xd8);
        goto LAB_035c0194;
      }
      uVar9 = uVar9 - 1;
      piVar13 = piVar13 + 2;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar11,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar12 = (*(code *)*puVar2)(piVar11,2,uVar4,puVar2[1]);
  return iVar12;
}

