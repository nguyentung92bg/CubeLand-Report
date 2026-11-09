/* IL2CPP: Rotatelab.UI.UITransitionController$$OnGameLoadedHandler
void Rotatelab_UI_UITransitionController__OnGameLoadedHandler (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UITransitionController$$OnGameLoadedHandler
   void Rotatelab_UI_UITransitionController__OnGameLoadedHandler
   (Rotatelab_UI_UITransitionController_o* __this, const MethodInfo* method); */

int Rotatelab_UI_UITransitionController__OnGameLoadedHandler_112d5e4(int param_1)

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
  undefined4 unaff_r5;
  int iVar11;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  int *piVar12;
  int *piVar13;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar14;
  
  pcVar10 = (char *)(_UNK_0113dc40 + 0x113d5fc);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc44 + 0x113d610));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc48 + 0x113d61c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc4c + 0x113d628));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc50 + 0x113d634));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc54 + 0x113d640));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc58 + 0x113d64c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc5c + 0x113d658));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc60 + 0x113d664));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc64 + 0x113d670));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc68 + 0x113d67c));
    *pcVar10 = '\x01';
  }
  iVar11 = *(int *)(param_1 + 0x18);
  pcVar10 = (char *)(_UNK_0113dc6c + 0x113d694);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc70 + 0x113d6a8));
    *pcVar10 = '\x01';
  }
  puVar2 = *(undefined4 **)(**(int **)(_UNK_0113dc74 + 0x113d6c0) + 0x5c);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar11,*puVar2,puVar2[1],0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(param_1 + 0x1c),0,0x441c4000,0);
  iVar11 = *(int *)(param_1 + 0x1c);
  pcVar10 = (char *)(_UNK_0113dc78 + 0x113d71c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc7c + 0x113d730));
    *pcVar10 = '\x01';
  }
  piVar13 = *(int **)(_UNK_0113dc80 + 0x113d74c);
  iVar3 = *(int *)(*piVar13 + 0x5c);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar11,*(float *)(iVar3 + 0xc) * 20.0,*(float *)(iVar3 + 0x10) * 20.0,
             *(float *)(iVar3 + 0x14) * 20.0,0);
  iVar11 = *(int *)(param_1 + 0x2c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc84 + 0x113d7b4));
    *pcVar10 = '\x01';
  }
  iVar3 = *(int *)(*piVar13 + 0x5c);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar11,*(float *)(iVar3 + 0xc) * _UNK_0113d7f8,*(float *)(iVar3 + 0x10) * _UNK_0113d7f8
             ,*(float *)(iVar3 + 0x14) * _UNK_0113d7f8,0);
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__SetParent_3615940
            (*(int *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),0);
  iVar11 = *(int *)(param_1 + 0x30);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc88 + 0x113d85c));
    *pcVar10 = '\x01';
  }
  iVar3 = *(int *)(*piVar13 + 0x5c);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar11,*(float *)(iVar3 + 0xc) * 4.0,*(float *)(iVar3 + 0x10) * 4.0,
             *(float *)(iVar3 + 0x14) * 4.0,0);
  iVar11 = *(int *)(param_1 + 0x3c);
  pcVar10 = (char *)(_UNK_0113dc8c + 0x113d8cc);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113dc90 + 0x113d8e0));
    *pcVar10 = '\x01';
  }
  puVar2 = *(undefined4 **)(*piVar13 + 0x5c);
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar11,*puVar2,puVar2[1],puVar2[2],0);
  if (*(int *)(**(int **)(_UNK_0113dc94 + 0x113d92c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar4,0x3d4ccccd,0);
  uVar5 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x3c),0x3f800000,0x3e4ccccd,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar5,0);
  uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x2c),0x4019999a,0x3e99999a,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x2c),0x3fe66666,0x3e4ccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
  uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x30),0x4099999a,0x3e4ccccd,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  puVar2 = *(undefined4 **)(_UNK_0113dc98 + 0x113da48);
  uVar6 = thunk_FUN_00f00cdc(*puVar2);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar6,param_1,**(undefined4 **)(_UNK_0113dc9c + 0x113da64),0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar5,uVar6,0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x30),0x3f000000,0x3e99999a,0);
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
  uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
  uVar6 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                    (*(undefined4 *)(param_1 + 0x1c),0x3f800000,0x3f000000,0);
  uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar6,1,**(undefined4 **)(_UNK_0113dca0 + 0x113dae4));
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar6 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                    (*(undefined4 *)(param_1 + 0x1c),0,0x44fa0000,0x3f000000,0,0);
  uVar6 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar6,0x1a,**(undefined4 **)(_UNK_0113dca4 + 0x113db2c));
  uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar6,0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
  uVar5 = thunk_FUN_00f00cdc(*puVar2);
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar5,param_1,**(undefined4 **)(_UNK_0113dca8 + 0x113db78),0);
  uVar4 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar4,uVar5,0);
  if (*(int *)(**(int **)(_UNK_0113dcac + 0x113dba0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Extensions__BlockInputDuringAnimation_object__1484cf0
                    (uVar4,**(undefined4 **)(_UNK_0113dcb0 + 0x113dbbc));
  uVar5 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  iVar11 = DG_Tweening_TweenSettingsExtensions__SetLink_object__15da040
                     (uVar4,uVar5,**(undefined4 **)(_UNK_0113dcb4 + 0x113dbe4));
  piVar13 = *(int **)(_UNK_0113dcb8 + 0x113dbfc);
  iVar3 = *piVar13;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar13;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x79) == '\0') {
    return 0;
  }
  pcVar10 = (char *)(_UNK_011788d8 + 0x1178764);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011788dc + 0x1178778),1,0);
    *pcVar10 = '\x01';
  }
  if (iVar11 == 0) {
    pcVar10 = (char *)(_UNK_011788e0 + 0x1178800);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011788e4 + 0x1178814));
      *pcVar10 = '\x01';
    }
    iVar11 = **(int **)(**(int **)(_UNK_011788e8 + 0x1178828) + 0x5c);
    if (iVar11 < 2) {
      return iVar11;
    }
    pcVar10 = (char *)(_UNK_0118e26c + 0x118e238);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e270 + 0x118e24c),0);
      *pcVar10 = '\x01';
    }
    iVar11 = 0;
    piVar13 = (int *)**(int **)(_UNK_0118e274 + 0x118e264);
  }
  else if (*(char *)(iVar11 + 0x94) == '\0') {
    pcVar10 = (char *)(_UNK_011788ec + 0x1178854);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011788f0 + 0x1178868));
      *pcVar10 = '\x01';
    }
    iVar11 = **(int **)(**(int **)(_UNK_011788f4 + 0x117887c) + 0x5c);
    if (iVar11 < 2) {
      return iVar11;
    }
    pcVar10 = (char *)(_UNK_0118e1c8 + 0x118e194);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118e1cc + 0x118e1a8),0);
      *pcVar10 = '\x01';
    }
    iVar11 = 0;
    piVar13 = (int *)**(int **)(_UNK_0118e1d0 + 0x118e1c0);
  }
  else {
    if (*(char *)(iVar11 + 0x95) == '\0') {
      if (*(int *)(**(int **)(_UNK_01178904 + 0x11788b0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      pcVar10 = (char *)(_UNK_01195124 + 0x1195048);
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_01195128 + 0x119505c),1,0,0);
        *pcVar10 = '\x01';
      }
      if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = 0;
      if ((*(int *)(iVar11 + 100) != -1) && (*(char *)(iVar11 + 0xb5) == '\0')) {
        DG_Tweening_Tween__DoGoto_116d1fc
                  (iVar11,*(undefined4 *)(iVar11 + 0x60),*(int *)(iVar11 + 100),0,0);
        *(undefined1 *)(iVar11 + 0xb4) = 0;
        iVar3 = 1;
        bVar14 = *(char *)(iVar11 + 0x5c) != '\0';
        cVar1 = '\0';
        if (bVar14) {
          cVar1 = *(char *)(iVar11 + 0x94);
        }
        if (bVar14 && cVar1 != '\0') {
          piVar13 = *(int **)(_UNK_0119512c + 0x11950d4);
          iVar7 = *piVar13;
          if (*(int *)(iVar7 + 0x74) == 0) {
            FUN_00ec3934();
            iVar7 = *piVar13;
          }
          if (*(char *)(*(int *)(iVar7 + 0x5c) + 0x44) == '\0') {
            if (*(int *)(iVar7 + 0x74) == 0) {
              FUN_00ec3934();
            }
            DG_Tweening_Core_TweenManager__Despawn_1182a40(iVar11,1);
          }
          else {
            *(undefined1 *)(iVar11 + 0x94) = 0;
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
    piVar13 = (int *)**(int **)(_UNK_0118e224 + 0x118e214);
  }
  pcVar10 = (char *)(_UNK_0118da34 + 0x118d898);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da38 + 0x118d8ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da3c + 0x118d8b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0118da40 + 0x118d8c4));
    *pcVar10 = '\x01';
  }
  piVar12 = *(int **)(_UNK_0118da44 + 0x118d8d8);
  iVar3 = *piVar12;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar12;
  }
  if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x31) == '\0') {
    uVar4 = **(undefined4 **)(_UNK_0118da4c + 0x118d948);
    if (piVar13 == (int *)0x0) {
      uVar5 = 0;
    }
    else {
      pcVar8 = *(code **)(*piVar13 + 0xd8);
      uVar5 = *(undefined4 *)(*piVar13 + 0xdc);
      uVar5 = (*pcVar8)(piVar13,uVar5,pcVar8,uVar5,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r11,
                        unaff_lr);
    }
    uVar4 = System_String__Concat_29fee38(uVar4,uVar5,0);
  }
  else {
    uVar4 = DG_Tweening_Core_Debugger__GetDebugDataMessage_117da54(iVar11);
    uVar5 = **(undefined4 **)(_UNK_0118da48 + 0x118d918);
    if (piVar13 == (int *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)(*piVar13 + 0xd8))(piVar13,*(undefined4 *)(*piVar13 + 0xdc));
    }
    uVar4 = System_String__Concat_2a0b574(uVar5,uVar4,uVar6,0);
  }
  iVar11 = *piVar12;
  if (*(int *)(iVar11 + 0x74) == 0) {
    FUN_00ec3934();
    iVar11 = *piVar12;
  }
  iVar3 = *(int *)(*(int *)(iVar11 + 0x5c) + 0x2c);
  if (iVar3 != 0) {
    if (*(int *)(iVar11 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *(int *)(*(int *)(*piVar12 + 0x5c) + 0x2c);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    iVar11 = (**(code **)(iVar3 + 0xc))
                       (*(undefined4 *)(iVar3 + 0x20),2,uVar4,*(undefined4 *)(iVar3 + 0x14));
    if (iVar11 == 0) {
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
  piVar13 = *(int **)(_UNK_035c01bc + 0x35c00d8);
  if (*(int *)(*piVar13 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar10 = (char *)(_UNK_035c01c0 + 0x35c00f4);
  if (*pcVar10 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
    *pcVar10 = '\x01';
  }
  iVar11 = *piVar13;
  if (*(int *)(iVar11 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar11 = *piVar13;
  }
  piVar13 = *(int **)(*(int *)(iVar11 + 0x5c) + 4);
  if (piVar13 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar11 = *piVar13;
  uVar9 = (uint)*(ushort *)(iVar11 + 0xb6);
  if (uVar9 != 0) {
    piVar12 = (int *)(*(int *)(iVar11 + 0x58) + 4);
    do {
      if (piVar12[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
        puVar2 = (undefined4 *)(iVar11 + *piVar12 * 8 + 0xd8);
        goto LAB_035c0194;
      }
      uVar9 = uVar9 - 1;
      piVar12 = piVar12 + 2;
    } while (uVar9 != 0);
  }
  puVar2 = (undefined4 *)thunk_FUN_00efdb38(piVar13,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar11 = (*(code *)*puVar2)(piVar13,2,uVar4,puVar2[1]);
  return iVar11;
}

