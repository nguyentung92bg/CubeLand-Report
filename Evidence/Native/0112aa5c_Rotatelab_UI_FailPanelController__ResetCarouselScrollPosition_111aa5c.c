/* IL2CPP: Rotatelab.UI.FailPanelController$$ResetCarouselScrollPosition
void Rotatelab_UI_FailPanelController__ResetCarouselScrollPosition (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0112c810) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$ResetCarouselScrollPosition
   void Rotatelab_UI_FailPanelController__ResetCarouselScrollPosition
   (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController__ResetCarouselScrollPosition_111aa5c(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  float *pfVar13;
  bool bVar14;
  float fVar15;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  ulonglong uStack_48;
  
  pcVar8 = (char *)(_UNK_0112abc8 + 0x112aa7c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112abcc + 0x112aa90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112abd0 + 0x112aa9c));
    *pcVar8 = '\x01';
  }
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  puVar12 = *(undefined4 **)(_UNK_0112abd4 + 0x112aac0);
  pcVar8 = (char *)(_UNK_0112abd8 + 0x112aacc);
  piVar9 = *(int **)(_UNK_0112abdc + 0x112aad0);
  while( true ) {
    if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0xb8) + 0xc) <= iVar11) break;
    if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0xb8),iVar11,*puVar12);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(piVar9);
      *pcVar8 = '\x01';
    }
    pfVar13 = (float *)&UNK_0112abc0;
    iVar4 = *(int *)(*piVar9 + 0x5c);
    if (iVar11 == *(int *)(param_1 + 0xc0)) {
      pfVar13 = (float *)&UNK_0112abc4;
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar15 = *pfVar13;
    uStack_48 = uStack_48 & 0xffffffff00000000;
    UnityEngine_Transform__set_localScale_36155dc
              (iVar3,fVar15 * *(float *)(iVar4 + 0xc),fVar15 * *(float *)(iVar4 + 0x10),
               fVar15 * *(float *)(iVar4 + 0x14));
    iVar11 = iVar11 + 1;
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
  iVar11 = 4;
  while( true ) {
    if (*(int *)(param_1 + 0x74) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = iVar11 - 4;
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
        uVar6 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xc0),
                           **(undefined4 **)(_UNK_0112c86c + 0x112c6dc));
        piVar9 = *(int **)(_UNK_0112c870 + 0x112c6f4);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar11 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar6,0);
        iVar3 = *(int *)(param_1 + 0x70);
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,iVar11,0);
        fVar2 = fStack_50;
        fVar1 = fStack_54;
        fVar15 = fStack_58;
        if (*(int *)(**(int **)(_UNK_0112c874 + 0x112c740) + 0x74) == 0) {
          FUN_00ec3934();
        }
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__TransformPoint_3616968
                  (&fStack_58,iVar11,fVar15 + fVar2 * 0.5,fVar1 + fStack_4c * 0.5,0,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__InverseTransformPoint_3616aa0
                  (&fStack_58,iVar3,fStack_58,fStack_54,fStack_50,0);
        uVar6 = *(undefined4 *)(param_1 + 0x70);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        Rotatelab_Extensions__SetAnchoredPosX_fc1f1c(uVar6,-fStack_58,0);
      }
      return;
    }
    iVar3 = *(int *)(param_1 + 0x74);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar3 + iVar11 * 4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_gameObject_35fe360(iVar3,0);
    if (*(int *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038
              (iVar3,(int)uVar10 < *(int *)(*(int *)(param_1 + 0xb8) + 0xc),0);
    iVar3 = *(int *)(param_1 + 0x74);
    if (iVar3 == 0) break;
    if (*(uint *)(iVar3 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar4 = 0x94;
    piVar9 = *(int **)(iVar3 + iVar11 * 4);
    bVar14 = uVar10 == *(uint *)(param_1 + 0xc0);
    if (bVar14) {
      iVar4 = 0x84;
    }
    iVar3 = 0x90;
    if (bVar14) {
      iVar3 = 0x80;
    }
    iVar7 = 0x8c;
    if (bVar14) {
      iVar7 = 0x7c;
    }
    iVar5 = 0x88;
    if (uVar10 == *(uint *)(param_1 + 0xc0)) {
      iVar5 = 0x78;
    }
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar9 + 0x178))
              (piVar9,*(undefined4 *)(param_1 + iVar5),*(undefined4 *)(param_1 + iVar7),
               *(undefined4 *)(param_1 + iVar3),*(undefined4 *)(param_1 + iVar4),
               *(undefined4 *)(*piVar9 + 0x17c));
    iVar11 = iVar11 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

