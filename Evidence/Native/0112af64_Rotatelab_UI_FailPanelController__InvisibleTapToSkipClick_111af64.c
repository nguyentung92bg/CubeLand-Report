/* IL2CPP: Rotatelab.UI.FailPanelController$$InvisibleTapToSkipClick
void Rotatelab_UI_FailPanelController__InvisibleTapToSkipClick (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$InvisibleTapToSkipClick
   void Rotatelab_UI_FailPanelController__InvisibleTapToSkipClick
   (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method); */

int Rotatelab_UI_FailPanelController__InvisibleTapToSkipClick_111af64(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  
  pcVar6 = (char *)(_UNK_0112b558 + 0x112af7c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b55c + 0x112af90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b560 + 0x112af9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b564 + 0x112afa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b568 + 0x112afb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b56c + 0x112afc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b570 + 0x112afcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b574 + 0x112afd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b578 + 0x112afe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b57c + 0x112aff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b580 + 0x112affc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b584 + 0x112b008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b588 + 0x112b014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b58c + 0x112b020));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112b590 + 0x112b02c));
    *pcVar6 = '\x01';
  }
  DG_Tweening_TweenExtensions__Kill_1168b64(*(undefined4 *)(param_1 + 0xd4),0,0);
  if (*(int *)(param_1 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0xd0),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar2,0,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112b594 + 0x112b08c));
  if (iVar2 != 0) {
    iVar2 = Rotatelab_Scripts_GameManager__get_IsMainMenuActive_1065c48(iVar2,0);
    iVar7 = *(int *)(param_1 + 0x4c);
    if (iVar2 == 0) {
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar7,1,0);
      if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x50),0,0);
    }
    else {
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar7,0,0);
      if (*(int *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = 0;
      UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x50),1,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0112b598 + 0x112b104));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = Rotatelab_Currency_HeartManager__get_Hearts_10837c4(iVar2,0);
      iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar3,0);
      puVar5 = *(undefined4 **)(_UNK_0112b59c + 0x112b13c);
      while( true ) {
        if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x58) + 0xc) <= iVar7) break;
        if (*(int *)(param_1 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x58),iVar7,*puVar5);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_GameObject__SetActive_3602038(iVar4,iVar7 <= iVar2 + -1,0);
        iVar7 = iVar7 + 1;
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      uVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x24),0);
      DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar3,0,0x3e4ccccd,0);
      pcVar6 = (char *)(_UNK_0112b5a0 + 0x112b224);
      if (*(char *)(param_1 + 0xda) == '\0') {
        uVar3 = *(undefined4 *)(param_1 + 0x3c);
        if (*pcVar6 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0112b5d0 + 0x112b3ec));
          *pcVar6 = '\x01';
        }
        puVar5 = *(undefined4 **)(**(int **)(_UNK_0112b5d4 + 0x112b408) + 0x5c);
        uVar3 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                          (uVar3,*puVar5,puVar5[1],0x3e99999a,0,0);
        uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                          (uVar3,0x1c,**(undefined4 **)(_UNK_0112b5d8 + 0x112b438));
        uVar3 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                          (uVar3,0x3dcccccd,**(undefined4 **)(_UNK_0112b5dc + 0x112b44c));
        piVar10 = *(int **)(_UNK_0112b5e0 + 0x112b468);
        iVar2 = *piVar10;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar10;
        }
        puVar5 = *(undefined4 **)(iVar2 + 0x5c);
        iVar7 = puVar5[2];
        if (iVar7 == 0) {
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            puVar5 = *(undefined4 **)(*piVar10 + 0x5c);
          }
          uVar9 = *puVar5;
          iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112b5e4 + 0x112b4b0));
          DG_Tweening_TweenCallback___ctor_11657e8
                    (iVar7,uVar9,**(undefined4 **)(_UNK_0112b5e8 + 0x112b4d0),0);
          piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
          *piVar10 = iVar7;
          thunk_FUN_00ec5080(piVar10,iVar7);
        }
        iVar2 = DG_Tweening_TweenSettingsExtensions__OnStart_object__15d9e64
                          (uVar3,iVar7,**(undefined4 **)(_UNK_0112b5ec + 0x112b4fc));
        uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112b5f0 + 0x112b514));
        puVar5 = *(undefined4 **)(_UNK_0112b5f4 + 0x112b528);
      }
      else {
        cVar1 = *pcVar6;
        uVar3 = *(undefined4 *)(param_1 + 0x6c);
        *(undefined1 *)(param_1 + 0xd9) = 1;
        if (cVar1 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_0112b5a4 + 0x112b248));
          *pcVar6 = '\x01';
        }
        puVar5 = *(undefined4 **)(**(int **)(_UNK_0112b5a8 + 0x112b264) + 0x5c);
        uVar3 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                          (uVar3,*puVar5,puVar5[1],0x3e99999a,0,0);
        puVar8 = *(undefined4 **)(_UNK_0112b5ac + 0x112b298);
        uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar3,0x1c,*puVar8);
        puVar5 = *(undefined4 **)(_UNK_0112b5b0 + 0x112b2b4);
        DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c(uVar3,0x3dcccccd,*puVar5);
        uVar3 = 0xc1f00000;
        if (*(char *)(param_1 + 0xd8) == '\0') {
          uVar3 = 0xc3570000;
        }
        uVar3 = DG_Tweening_DOTweenModuleUI__DOAnchorPos_f9e864
                          (*(undefined4 *)(param_1 + 0x40),0,uVar3,0x3e99999a,0,0);
        uVar3 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar3,0x1c,*puVar8);
        uVar3 = DG_Tweening_TweenSettingsExtensions__SetDelay_object__15d9f0c
                          (uVar3,0x3dcccccd,*puVar5);
        piVar10 = *(int **)(_UNK_0112b5b4 + 0x112b310);
        iVar2 = *piVar10;
        if (*(int *)(iVar2 + 0x74) == 0) {
          FUN_00ec3934();
          iVar2 = *piVar10;
        }
        puVar5 = *(undefined4 **)(iVar2 + 0x5c);
        iVar7 = puVar5[1];
        if (iVar7 == 0) {
          if (*(int *)(iVar2 + 0x74) == 0) {
            FUN_00ec3934();
            puVar5 = *(undefined4 **)(*piVar10 + 0x5c);
          }
          uVar9 = *puVar5;
          iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112b5b8 + 0x112b358));
          DG_Tweening_TweenCallback___ctor_11657e8
                    (iVar7,uVar9,**(undefined4 **)(_UNK_0112b5bc + 0x112b378),0);
          piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
          *piVar10 = iVar7;
          thunk_FUN_00ec5080(piVar10,iVar7);
        }
        iVar2 = DG_Tweening_TweenSettingsExtensions__OnStart_object__15d9e64
                          (uVar3,iVar7,**(undefined4 **)(_UNK_0112b5c0 + 0x112b3a4));
        uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0112b5c4 + 0x112b3bc));
        puVar5 = *(undefined4 **)(_UNK_0112b5c8 + 0x112b3d0);
      }
      DG_Tweening_TweenCallback___ctor_11657e8(uVar3,param_1,*puVar5,0);
      uVar9 = **(undefined4 **)(_UNK_0112b5cc + 0x112b548);
      cVar1 = '\0';
      if (iVar2 != 0) {
        cVar1 = *(char *)(iVar2 + 0x94);
      }
      if (iVar2 != 0 && cVar1 != '\0') {
        *(undefined4 *)(iVar2 + 0x4c) = uVar3;
        thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x4c),uVar3,uVar9);
      }
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

