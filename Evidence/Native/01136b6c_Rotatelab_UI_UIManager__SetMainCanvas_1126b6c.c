/* IL2CPP: Rotatelab.UI.UIManager$$SetMainCanvas
void Rotatelab_UI_UIManager__SetMainCanvas (Rotatelab_UI_UIManager_o* __this, int32_t mainCanvasType, bool playAnimation, System_Action_o* onBeforeHalfwayReached, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIManager$$SetMainCanvas
   void Rotatelab_UI_UIManager__SetMainCanvas (Rotatelab_UI_UIManager_o* __this, int32_t
   mainCanvasType, bool playAnimation, System_Action_o* onBeforeHalfwayReached, const MethodInfo*
   method); */

undefined4 *
Rotatelab_UI_UIManager__SetMainCanvas_1126b6c
          (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  bool bVar13;
  undefined4 auStack_b8 [34];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_20;
  
  pcVar9 = (char *)(_UNK_01136d30 + 0x1136b88);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136d34 + 0x1136ba0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136d38 + 0x1136bac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136d3c + 0x1136bb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136d40 + 0x1136bc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136d44 + 0x1136bd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136d48 + 0x1136bdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01136d4c + 0x1136be8));
    *pcVar9 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01136d50 + 0x1136bfc));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  *(undefined4 *)(iVar2 + 8) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0xc),param_1);
  *(undefined4 *)(iVar2 + 0x10) = param_4;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),param_4);
  *(char *)(iVar2 + 0x14) = (char)param_3;
  if (param_3 != 0) {
    piVar10 = *(int **)(_UNK_01136d54 + 0x1136c58);
    iVar3 = *piVar10;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar10;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x148);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool___Raise_23a280c(iVar3,0,**(undefined4 **)(_UNK_01136d58 + 0x1136c90));
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01136d5c + 0x1136ca4));
    puVar11 = *(undefined4 **)(_UNK_01136d60 + 0x1136cb8);
    uVar4 = thunk_FUN_00f00cdc(*puVar11);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar4,iVar2,**(undefined4 **)(_UNK_01136d64 + 0x1136cd4),0);
    uVar5 = thunk_FUN_00f00cdc(*puVar11);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar5,iVar2,**(undefined4 **)(_UNK_01136d68 + 0x1136cfc),0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar9 = (char *)(_UNK_011380f4 + 0x1137968);
    uStack_28 = uVar5;
    if (*pcVar9 == '\0') {
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
      *pcVar9 = '\x01';
    }
    *(undefined1 *)(iVar3 + 0x10) = 1;
    if (*(int *)(iVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_pivot_3613a30(*(int *)(iVar3 + 0x18),0x3f000000,0x3f115492,0);
    iVar2 = *(int *)(iVar3 + 0x18);
    pcVar9 = (char *)(_UNK_01138134 + 0x1137a6c);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01138138 + 0x1137a80));
      *pcVar9 = '\x01';
    }
    puVar11 = *(undefined4 **)(**(int **)(_UNK_0113813c + 0x1137a98) + 0x5c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_anchoredPosition_3613610(iVar2,*puVar11,puVar11[1],0);
    if (*(int *)(iVar3 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__set_anchoredPosition_3613610(*(int *)(iVar3 + 0x1c),0,0x44fa0000,0);
    iVar2 = *(int *)(iVar3 + 0x1c);
    pcVar9 = (char *)(_UNK_01138140 + 0x1137af4);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01138144 + 0x1137b08));
      *pcVar9 = '\x01';
    }
    iVar6 = *(int *)(**(int **)(_UNK_01138148 + 0x1137b20) + 0x5c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_30 = 0;
    UnityEngine_Transform__set_localScale_36155dc
              (iVar2,*(undefined4 *)(iVar6 + 0xc),*(undefined4 *)(iVar6 + 0x10),
               *(undefined4 *)(iVar6 + 0x14));
    iVar2 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
    if (*(int *)(**(int **)(_UNK_0113814c + 0x1137b90) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
    uStack_30 = 0;
    uStack_2c = 0;
    uVar7 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                      (*(undefined4 *)(iVar3 + 0x1c),0,0x43480000,0x3e4ccccd);
    uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                      (uVar7,0x1b,**(undefined4 **)(_UNK_01138150 + 0x1137be0));
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar7,0);
    puVar11 = *(undefined4 **)(_UNK_01138154 + 0x1137c08);
    uVar7 = thunk_FUN_00f00cdc(*puVar11);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar7,iVar3,**(undefined4 **)(_UNK_01138158 + 0x1137c28),0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar5,uVar7,0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x1c),0x41a00000,0x3f4ccccd,0);
    uVar7 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                      (uVar7,1,**(undefined4 **)(_UNK_0113815c + 0x1137c6c));
    uVar4 = DG_Tweening_TweenSettingsExtensions__OnComplete_object__15d9e0c
                      (uVar7,uVar4,**(undefined4 **)(_UNK_01138160 + 0x1137c80));
    uVar4 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar4,0);
    uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x2c),0x4019999a,0x3e99999a,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar7,0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x2c),0x40000000,0x3e4ccccd,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar7,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
    uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x30),0x4099999a,0x3ecccccd,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar7,0);
    uVar7 = thunk_FUN_00f00cdc(*puVar11);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar7,iVar3,**(undefined4 **)(_UNK_01138164 + 0x1137d74),0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar5,uVar7,0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x30),0x40800000,0x3e4ccccd,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar7,0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x3c),0,0x3e4ccccd,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar5,uVar7,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar4,0x3e4ccccd,0);
    uVar5 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x3c),0x3f800000,0x3e4ccccd,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar4,uVar5,0);
    uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x2c),0x40000000,0x3e99999a,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar7,0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x2c),0x3f800000,0x3e4ccccd,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar7,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
    uVar5 = DG_Tweening_DOTween__Sequence_1167c00(0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x30),0x4099999a,0x3e4ccccd,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar7,0);
    uVar7 = thunk_FUN_00f00cdc(*puVar11);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar7,iVar3,**(undefined4 **)(_UNK_01138168 + 0x1137eec),0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar5,uVar7,0);
    uVar7 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x30),0x3f000000,0x3e4ccccd,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar5,uVar7,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
    uVar5 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                      (*(undefined4 *)(iVar3 + 0x1c),0x3f800000,0x3ecccccd,0);
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                      (uVar5,0x3e800000,**(undefined4 **)(_UNK_0113816c + 0x1137f68));
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                      (uVar5,1,**(undefined4 **)(_UNK_01138170 + 0x1137f7c));
    uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
    uStack_30 = 0;
    uStack_2c = 0;
    uVar5 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                      (*(undefined4 *)(iVar3 + 0x1c),0,0x44fa0000,0x3ecccccd);
    uVar5 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                      (uVar5,0x1a,**(undefined4 **)(_UNK_01138174 + 0x1137fc4));
    uVar4 = DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar4,uVar5,0);
    uVar5 = thunk_FUN_00f00cdc(*puVar11);
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar5,iVar3,**(undefined4 **)(_UNK_01138178 + 0x1138000),0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar4,uVar5,0);
    uVar4 = DG_Tweening_TweenSettingsExtensions__AppendCallback_116d100(uVar4,uStack_28,0);
    uVar4 = Rotatelab_GameExtensions__PauseGameDuringAnimation_object__148fec8
                      (uVar4,**(undefined4 **)(_UNK_0113817c + 0x1138030));
    if (*(int *)(**(int **)(_UNK_01138180 + 0x1138044) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = Rotatelab_Extensions__BlockInputDuringAnimation_object__1484cf0
                      (uVar4,**(undefined4 **)(_UNK_01138184 + 0x1138060));
    uVar5 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
    iVar2 = DG_Tweening_TweenSettingsExtensions__SetLink_object__15da040
                      (uVar4,uVar5,**(undefined4 **)(_UNK_01138188 + 0x1138088));
    *(int *)(iVar3 + 0x14) = iVar2;
    thunk_FUN_00ec5080((int *)(iVar3 + 0x14),iVar2);
    piVar10 = *(int **)(_UNK_0113818c + 0x11380b0);
    iVar3 = *piVar10;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar10;
    }
    if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x79) == '\0') {
      return (undefined4 *)0x0;
    }
    pcVar9 = (char *)(_UNK_011788d8 + 0x1178764);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_011788dc + 0x1178778),1,0);
      *pcVar9 = '\x01';
    }
    if (iVar2 == 0) {
      pcVar9 = (char *)(_UNK_011788e0 + 0x1178800);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_011788e4 + 0x1178814));
        *pcVar9 = '\x01';
      }
      puVar11 = (undefined4 *)**(int **)(**(int **)(_UNK_011788e8 + 0x1178828) + 0x5c);
      if ((int)puVar11 < 2) {
        return puVar11;
      }
      pcVar9 = (char *)(_UNK_0118e26c + 0x118e238);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0118e270 + 0x118e24c),0);
        *pcVar9 = '\x01';
      }
      iVar2 = 0;
      piVar10 = (int *)**(int **)(_UNK_0118e274 + 0x118e264);
    }
    else if (*(char *)(iVar2 + 0x94) == '\0') {
      pcVar9 = (char *)(_UNK_011788ec + 0x1178854);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_011788f0 + 0x1178868));
        *pcVar9 = '\x01';
      }
      puVar11 = (undefined4 *)**(int **)(**(int **)(_UNK_011788f4 + 0x117887c) + 0x5c);
      if ((int)puVar11 < 2) {
        return puVar11;
      }
      pcVar9 = (char *)(_UNK_0118e1c8 + 0x118e194);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0118e1cc + 0x118e1a8),0);
        *pcVar9 = '\x01';
      }
      iVar2 = 0;
      piVar10 = (int *)**(int **)(_UNK_0118e1d0 + 0x118e1c0);
    }
    else {
      if (*(char *)(iVar2 + 0x95) == '\0') {
        if (*(int *)(**(int **)(_UNK_01178904 + 0x11788b0) + 0x74) == 0) {
          FUN_00ec3934();
        }
        pcVar9 = (char *)(_UNK_01195124 + 0x1195048);
        if (*pcVar9 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_01195128 + 0x119505c),1,0,0);
          *pcVar9 = '\x01';
        }
        if (iVar2 != 0) {
          puVar11 = (undefined4 *)0x0;
          if ((*(int *)(iVar2 + 100) != -1) && (*(char *)(iVar2 + 0xb5) == '\0')) {
            uStack_20 = 0;
            DG_Tweening_Tween__DoGoto_116d1fc
                      (iVar2,*(undefined4 *)(iVar2 + 0x60),*(int *)(iVar2 + 100),0);
            *(undefined1 *)(iVar2 + 0xb4) = 0;
            puVar11 = (undefined4 *)0x1;
            bVar13 = *(char *)(iVar2 + 0x5c) != '\0';
            cVar1 = '\0';
            if (bVar13) {
              cVar1 = *(char *)(iVar2 + 0x94);
            }
            if (bVar13 && cVar1 != '\0') {
              piVar10 = *(int **)(_UNK_0119512c + 0x11950d4);
              iVar3 = *piVar10;
              if (*(int *)(iVar3 + 0x74) == 0) {
                FUN_00ec3934();
                iVar3 = *piVar10;
              }
              if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x44) == '\0') {
                if (*(int *)(iVar3 + 0x74) == 0) {
                  FUN_00ec3934();
                }
                DG_Tweening_Core_TweenManager__Despawn_1182a40(iVar2,1);
              }
              else {
                *(undefined1 *)(iVar2 + 0x94) = 0;
              }
            }
          }
          return puVar11;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar9 = (char *)(_UNK_011788f8 + 0x11787ac);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_011788fc + 0x11787c0));
        *pcVar9 = '\x01';
      }
      puVar11 = (undefined4 *)**(int **)(**(int **)(_UNK_01178900 + 0x11787d4) + 0x5c);
      if ((int)puVar11 < 2) {
        return puVar11;
      }
      pcVar9 = (char *)(_UNK_0118e21c + 0x118e1e8);
      if (*pcVar9 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0118e220 + 0x118e1fc),0);
        *pcVar9 = '\x01';
      }
      piVar10 = (int *)**(int **)(_UNK_0118e224 + 0x118e214);
    }
    pcVar9 = (char *)(_UNK_0118da34 + 0x118d898);
    if (*pcVar9 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118da38 + 0x118d8ac));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118da3c + 0x118d8b8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_0118da40 + 0x118d8c4));
      *pcVar9 = '\x01';
    }
    piVar12 = *(int **)(_UNK_0118da44 + 0x118d8d8);
    iVar3 = *piVar12;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar12;
    }
    if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x31) == '\0') {
      uVar4 = **(undefined4 **)(_UNK_0118da4c + 0x118d948);
      if (piVar10 == (int *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (**(code **)(*piVar10 + 0xd8))(piVar10,*(undefined4 *)(*piVar10 + 0xdc));
      }
      uVar4 = System_String__Concat_29fee38(uVar4,uVar5,0);
    }
    else {
      uVar4 = DG_Tweening_Core_Debugger__GetDebugDataMessage_117da54(iVar2);
      uVar5 = **(undefined4 **)(_UNK_0118da48 + 0x118d918);
      if (piVar10 == (int *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*piVar10 + 0xd8))(piVar10,*(undefined4 *)(*piVar10 + 0xdc));
      }
      uVar4 = System_String__Concat_2a0b574(uVar5,uVar4,uVar7,0);
    }
    iVar2 = *piVar12;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar12;
    }
    iVar3 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x2c);
    if (iVar3 != 0) {
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *(int *)(*(int *)(*piVar12 + 0x5c) + 0x2c);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
      }
      iVar2 = (**(code **)(iVar3 + 0xc))
                        (*(undefined4 *)(iVar3 + 0x20),2,uVar4,*(undefined4 *)(iVar3 + 0x14));
      if (iVar2 == 0) {
        return (undefined4 *)0x0;
      }
    }
    if (*(int *)(**(int **)(_UNK_0118da50 + 0x118da0c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar9 = (char *)(_UNK_035c01b0 + 0x35c00a4);
    if (*pcVar9 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b4 + 0x35c00b8),0);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01b8 + 0x35c00c4));
      *pcVar9 = '\x01';
    }
    piVar10 = *(int **)(_UNK_035c01bc + 0x35c00d8);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar9 = (char *)(_UNK_035c01c0 + 0x35c00f4);
    if (*pcVar9 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035c01c4 + 0x35c0108));
      *pcVar9 = '\x01';
    }
    iVar2 = *piVar10;
    if (*(int *)(iVar2 + 0x74) == 0) {
      thunk_FUN_00ec3934();
      iVar2 = *piVar10;
    }
    piVar10 = *(int **)(*(int *)(iVar2 + 0x5c) + 4);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *piVar10;
    uVar8 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar12[-1] == **(int **)(_UNK_035c01c8 + 0x35c014c)) {
          puVar11 = (undefined4 *)(iVar2 + *piVar12 * 8 + 0xd8);
          goto LAB_035c0194;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 2;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined4 *)thunk_FUN_00efdb38(piVar10,**(int **)(_UNK_035c01c8 + 0x35c014c),3);
LAB_035c0194:
                    /* WARNING: Could not recover jumptable at 0x035c01ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar11 = (undefined4 *)(*(code *)*puVar11)(piVar10,2,uVar4,puVar11[1]);
    return puVar11;
  }
  pcVar9 = (char *)(_UNK_011383c0 + 0x11381a4);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383c4 + 0x11381b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383c8 + 0x11381c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383cc + 0x11381d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383d0 + 0x11381dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011383d4 + 0x11381e8));
    *pcVar9 = '\x01';
  }
  if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x14);
  if (*(int *)(**(int **)(_UNK_011383d8 + 0x113820c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar4,0,0);
  if (iVar3 != 0) {
    if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 0x14);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_MainCanvasBase__SetCanvasEnable_1127660(iVar3,0);
  }
  iVar3 = *(int *)(iVar2 + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = Rotatelab_UI_UIManager__GetMainCanvasByType_11283ec(iVar3,*(undefined4 *)(iVar2 + 8));
  *(undefined4 *)(iVar3 + 0x14) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x14),uVar4);
  if (*(int *)(iVar2 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 0x14);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_MainCanvasBase__SetCanvasEnable_1127660(iVar3,1);
  iVar3 = *(int *)(iVar2 + 0x10);
  if (iVar3 != 0) {
    (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
  }
  piVar10 = *(int **)(_UNK_011383dc + 0x1138300);
  iVar3 = *piVar10;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar10;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x118);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_Int32Enum__bool___Raise_23a4370
            (iVar3,*(undefined4 *)(iVar2 + 8),*(char *)(iVar2 + 0x14) != '\0',
             **(undefined4 **)(_UNK_011383e0 + 0x113834c));
  if (*(undefined4 **)(iVar2 + 8) != (undefined4 *)0x1) {
    return *(undefined4 **)(iVar2 + 8);
  }
  if (*(int *)(**(int **)(_UNK_011383e4 + 0x113836c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  puVar11 = (undefined4 *)UnityEngine_Application__get_isEditor_35a9d10(0);
  if (puVar11 != (undefined4 *)0x0) {
    return puVar11;
  }
  UnityEngine_Resources__UnloadUnusedAssets_35f9cf4(0);
  if (*(int *)(**(int **)(_UNK_011383e8 + 0x11383a4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar9 = (char *)(_UNK_02bbe6ec + 0x2bbe6a8);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_02bbe6f0 + 0x2bbe6bc));
    *pcVar9 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_02bbe6f4 + 0x2bbe6d0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_GC__get_MaxGeneration_2bae6f8();
  func_0x00f2f344(0,0);
  if (*(int *)(_UNK_00f2f63c + 0xf2f630) == 0) {
    return (undefined4 *)0x0;
  }
  if (*(int *)(iRam00f2f840 + 0xf2f654) != 0) {
    piVar10 = (int *)(iRam00f2f844 + 0xf2f668);
    do {
      iVar2 = *piVar10;
      bVar13 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar13);
    *piVar10 = 1;
    DataMemoryBarrier(0xf);
    if (iVar2 == 1) {
      func_0x00f2a474();
    }
  }
  pcVar9 = (char *)(iRam00f2f848 + 0xf2f68c);
  if (*pcVar9 == '\x01') {
    if (*(int *)(iRam00f2f84c + 0xf2f6a0) == 0) {
      return (undefined4 *)0x0;
    }
    DataMemoryBarrier(0xf);
    puVar11 = (undefined4 *)(iRam00f2f850 + 0xf2f6b8);
    *puVar11 = 0;
    return puVar11;
  }
  *pcVar9 = '\x01';
  iVar2 = *(int *)(iRam00f2f854 + 0xf2f6d0);
  iVar3 = *(int *)(iRam00f2f858 + 0xf2f6dc);
  if (iVar2 != 0) {
    iVar6 = iRam00f2f85c + 0xf2f6f4;
    thunk_FUN_00f95db8(auStack_b8,iVar6,iVar2 << 2);
    *(undefined4 *)(iRam00f2f860 + 0xf2f708) = 0;
    FUN_00f88e5c(iVar6,iVar2 << 2);
  }
  if (*(int *)(iRam00f2f864 + 0xf2f720) != 0) {
    DataMemoryBarrier(0xf);
    *(undefined4 *)(iRam00f2f868 + 0xf2f738) = 0;
  }
  if (*(int *)(iRam00f2f86c + 0xf2f744) == 0) {
    if (iVar2 == 0) goto LAB_00f2f7bc;
LAB_00f2f770:
    func_0x00f29230(_UNK_00f2f874 + 0xf2f780,iVar2);
    puVar11 = auStack_b8;
    do {
      uVar4 = *puVar11;
      (**(code **)(_UNK_00f2f878 + 0xf2f798))(uVar4);
      FUN_00f30598(uVar4);
      iVar2 = iVar2 + -1;
      puVar11 = puVar11 + 1;
    } while (iVar2 != 0);
  }
  else {
    (**(code **)(iRam00f2f870 + 0xf2f754))();
    if (iVar2 != 0) goto LAB_00f2f770;
    if (iVar3 == 0) goto LAB_00f2f7bc;
  }
  iVar2 = FUN_00f94830(_UNK_00f2f87c + 0xf2f7b4);
  if (iVar2 != 0) {
    (**(code **)(_UNK_00f2f890 + 0xf2f83c))(_UNK_00f2f88c + 0xf2f838);
                    /* WARNING: Subroutine does not return */
    FUN_00f940e0();
  }
LAB_00f2f7bc:
  if (*(int *)(_UNK_00f2f880 + 0xf2f7c8) == 0) {
    *pcVar9 = '\0';
  }
  else {
    piVar10 = (int *)(_UNK_00f2f884 + 0xf2f7dc);
    do {
      iVar2 = *piVar10;
      bVar13 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar13);
    *piVar10 = 1;
    DataMemoryBarrier(0xf);
    if (iVar2 == 1) {
      func_0x00f2a474();
    }
    *pcVar9 = '\0';
    if (*(int *)(_UNK_00f2f888 + 0xf2f808) != 0) {
      DataMemoryBarrier(0xf);
      *piVar10 = 0;
    }
  }
  return (undefined4 *)0x0;
}

