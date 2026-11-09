/* IL2CPP: Rotatelab.UI.FailPanelController$$FocusOnActiveCarouselItem
void Rotatelab_UI_FailPanelController__FocusOnActiveCarouselItem (Rotatelab_UI_FailPanelController_o* __this, bool immediately, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$FocusOnActiveCarouselItem
   void Rotatelab_UI_FailPanelController__FocusOnActiveCarouselItem
   (Rotatelab_UI_FailPanelController_o* __this, bool immediately, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController__FocusOnActiveCarouselItem_111c4f4(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pcVar8 = (char *)(_UNK_0112c854 + 0x112c518);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c858 + 0x112c52c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c85c + 0x112c538));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c860 + 0x112c544));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c864 + 0x112c550));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c868 + 0x112c55c));
    *pcVar8 = '\x01';
  }
  iVar12 = 4;
  while( true ) {
    if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = iVar12 - 4;
    if (*(int *)(*(int *)(param_1 + 0x74) + 0xc) <= (int)uVar10) {
      if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0xb8) + 0xc) != 0) {
        if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar5 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),
                           **(undefined4 **)(_UNK_0112c86c + 0x112c6dc));
        piVar11 = *(int **)(_UNK_0112c870 + 0x112c6f4);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar12 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar5,0);
        iVar9 = *(int *)(param_1 + 0x70);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,iVar12,0);
        fVar3 = fStack_50;
        fVar2 = fStack_54;
        fVar1 = fStack_58;
        if (*(int *)(**(int **)(_UNK_0112c874 + 0x112c740) + 0x74) == 0) {
          FUN_00ec3934();
        }
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__TransformPoint_3616968
                  (&fStack_58,iVar12,fVar1 + fVar3 * 0.5,fVar2 + fStack_4c * 0.5,0,0);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__InverseTransformPoint_3616aa0
                  (&fStack_58,iVar9,fStack_58,fStack_54,fStack_50,0);
        uVar5 = *(undefined4 *)(param_1 + 0x70);
        if (param_2 == 0) {
          uVar5 = DG_Tweening_DOTweenModuleUI__DOAnchorPosX_f9ea50(uVar5,-fStack_58,0x3e4ccccd,0,0);
          DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar5,9,**(undefined4 **)(_UNK_0112c878 + 0x112c83c));
        }
        else {
          if (*(int *)(*piVar11 + 0x74) == 0) {
            FUN_00ec3934();
          }
          Rotatelab_Extensions__SetAnchoredPosX_fc1f1c(uVar5,-fStack_58,0);
        }
      }
      return;
    }
    iVar9 = *(int *)(param_1 + 0x74);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar9 = *(int *)(iVar9 + iVar12 * 4);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = UnityEngine_Component__get_gameObject_35fe360(iVar9,0);
    if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038
              (iVar9,(int)uVar10 < *(int *)(*(int *)(param_1 + 0xb8) + 0xc),0);
    iVar9 = *(int *)(param_1 + 0x74);
    if (iVar9 == 0) break;
    if (*(uint *)(iVar9 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = 0x94;
    piVar11 = *(int **)(iVar9 + iVar12 * 4);
    bVar13 = uVar10 == *(uint *)(param_1 + 0xc0);
    if (bVar13) {
      iVar6 = 0x84;
    }
    iVar9 = 0x90;
    if (bVar13) {
      iVar9 = 0x80;
    }
    iVar7 = 0x8c;
    if (bVar13) {
      iVar7 = 0x7c;
    }
    iVar4 = 0x88;
    if (uVar10 == *(uint *)(param_1 + 0xc0)) {
      iVar4 = 0x78;
    }
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar11 + 0x178))
              (piVar11,*(undefined4 *)(param_1 + iVar4),*(undefined4 *)(param_1 + iVar7),
               *(undefined4 *)(param_1 + iVar9),*(undefined4 *)(param_1 + iVar6),
               *(undefined4 *)(*piVar11 + 0x17c));
    iVar12 = iVar12 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

