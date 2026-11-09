/* IL2CPP: Rotatelab.UI.FailPanelController$$Update
void Rotatelab_UI_FailPanelController__Update (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0112c7e8) */
/* WARNING: Removing unreachable block (ram,0x0112c7f8) */
/* WARNING: Removing unreachable block (ram,0x0112c7fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$Update
   void Rotatelab_UI_FailPanelController__Update (Rotatelab_UI_FailPanelController_o* __this, const
   MethodInfo* method); */

void Rotatelab_UI_FailPanelController__Update_111c344(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  bool bVar13;
  float fVar14;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pcVar8 = (char *)(_UNK_0112c4e4 + 0x112c35c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c4e8 + 0x112c370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c4ec + 0x112c37c));
    *pcVar8 = '\x01';
  }
  if ((*(char *)(param_1 + 0xc4) == '\0') ||
     (iVar3 = UnityEngine_Input__GetMouseButtonUp_368b1ec(0,0), iVar3 == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0xc4) = 0;
  fVar14 = *(float *)(param_1 + 0xcc) - *(float *)(param_1 + 200);
  if (_UNK_0112c4e0 < ABS(fVar14)) {
    if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar12 = *(undefined4 **)(_UNK_0112c4f0 + 0x112c3f4);
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),*puVar12);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
    DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar4,0x3f666666,0x3e4ccccd,0);
    iVar3 = -1;
    if (0.0 < fVar14) {
      iVar3 = 1;
    }
    if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(param_1 + 0xc0) + iVar3;
    iVar9 = *(int *)(*(int *)(param_1 + 0xb8) + 0xc) + -1;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
    if (iVar3 < 0) {
      iVar9 = 0;
    }
    *(int *)(param_1 + 0xc0) = iVar9;
    if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0xb8),iVar9,*puVar12);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
    DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar4,0x3f8ccccd,0x3e4ccccd,0);
  }
  pcVar8 = (char *)(_UNK_0112c854 + 0x112c518);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c858 + 0x112c52c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c85c + 0x112c538));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c860 + 0x112c544));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c864 + 0x112c550));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112c868 + 0x112c55c));
    *pcVar8 = '\x01';
  }
  iVar3 = 4;
  while( true ) {
    if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = iVar3 - 4;
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
        uVar4 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),
                           **(undefined4 **)(_UNK_0112c86c + 0x112c6dc));
        if (*(int *)(**(int **)(_UNK_0112c870 + 0x112c6f4) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar4,0);
        iVar9 = *(int *)(param_1 + 0x70);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,iVar3,0);
        fVar2 = fStack_50;
        fVar1 = fStack_54;
        fVar14 = fStack_58;
        if (*(int *)(**(int **)(_UNK_0112c874 + 0x112c740) + 0x74) == 0) {
          FUN_00ec3934();
        }
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__TransformPoint_3616968
                  (&fStack_58,iVar3,fVar14 + fVar2 * 0.5,fVar1 + fStack_4c * 0.5,0,0);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__InverseTransformPoint_3616aa0
                  (&fStack_58,iVar9,fStack_58,fStack_54,fStack_50,0);
        uVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPosX_f9ea50
                          (*(undefined4 *)(param_1 + 0x70),-fStack_58,0x3e4ccccd,0,0);
        DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                  (uVar4,9,**(undefined4 **)(_UNK_0112c878 + 0x112c83c));
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
    iVar9 = *(int *)(iVar9 + iVar3 * 4);
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
    piVar11 = *(int **)(iVar9 + iVar3 * 4);
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
    iVar5 = 0x88;
    if (uVar10 == *(uint *)(param_1 + 0xc0)) {
      iVar5 = 0x78;
    }
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar11 + 0x178))
              (piVar11,*(undefined4 *)(param_1 + iVar5),*(undefined4 *)(param_1 + iVar7),
               *(undefined4 *)(param_1 + iVar9),*(undefined4 *)(param_1 + iVar6),
               *(undefined4 *)(*piVar11 + 0x17c));
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

