/* IL2CPP: Rotatelab.Shop.ShopPanelController$$Update
void Rotatelab_Shop_ShopPanelController__Update (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010d3208) */
/* WARNING: Removing unreachable block (ram,0x010d3210) */
/* WARNING: Removing unreachable block (ram,0x010d3214) */
/* WARNING: Removing unreachable block (ram,0x010d3228) */
/* WARNING: Removing unreachable block (ram,0x010d322c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$Update
   void Rotatelab_Shop_ShopPanelController__Update (Rotatelab_Shop_ShopPanelController_o* __this,
   const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__Update_10c2d58(int param_1)

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
  
  pcVar8 = (char *)(_UNK_010d2ef8 + 0x10d2d70);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2efc + 0x10d2d84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d2f00 + 0x10d2d90));
    *pcVar8 = '\x01';
  }
  if ((*(char *)(param_1 + 0x60) == '\0') ||
     (iVar3 = UnityEngine_Input__GetMouseButtonUp_368b1ec(0,0), iVar3 == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x60) = 0;
  fVar14 = *(float *)(param_1 + 0x5c) - *(float *)(param_1 + 0x58);
  if (_UNK_010d2ef4 < ABS(fVar14)) {
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar12 = *(undefined4 **)(_UNK_010d2f04 + 0x10d2e08);
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 100),*puVar12);
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
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(param_1 + 100) + iVar3;
    iVar9 = *(int *)(*(int *)(param_1 + 0x70) + 0xc) + -1;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
    if (iVar3 < 0) {
      iVar9 = 0;
    }
    *(int *)(param_1 + 100) = iVar9;
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x70),iVar9,*puVar12);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
    DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar4,0x3f8ccccd,0x3e4ccccd,0);
  }
  pcVar8 = (char *)(_UNK_010d3290 + 0x10d2f2c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3294 + 0x10d2f40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3298 + 0x10d2f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d329c + 0x10d2f58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d32a0 + 0x10d2f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d32a4 + 0x10d2f70));
    *pcVar8 = '\x01';
  }
  iVar3 = 4;
  while( true ) {
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = iVar3 - 4;
    if (*(int *)(*(int *)(param_1 + 0x34) + 0xc) <= (int)uVar10) {
      if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x70) + 0xc) != 0) {
        if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 100),
                           **(undefined4 **)(_UNK_010d32a8 + 0x10d30f0));
        if (*(int *)(**(int **)(_UNK_010d32ac + 0x10d3108) + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar3 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar4,0);
        if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x30) + 0x10);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,iVar3,0);
        fVar2 = fStack_50;
        fVar1 = fStack_54;
        fVar14 = fStack_58;
        if (*(int *)(**(int **)(_UNK_010d32b0 + 0x10d3164) + 0x74) == 0) {
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
        if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPosX_f9ea50
                          (*(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10),-fStack_58,0x3e4ccccd,0,
                           0);
        DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                  (uVar4,9,**(undefined4 **)(_UNK_010d32b4 + 0x10d3278));
      }
      return;
    }
    iVar9 = *(int *)(param_1 + 0x34);
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
    if (*(int *)(param_1 + 0x70) == 0) break;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038
              (iVar9,(int)uVar10 < *(int *)(*(int *)(param_1 + 0x70) + 0xc),0);
    iVar9 = *(int *)(param_1 + 0x34);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar9 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar6 = 0x54;
    piVar11 = *(int **)(iVar9 + iVar3 * 4);
    bVar13 = uVar10 == *(uint *)(param_1 + 100);
    if (bVar13) {
      iVar6 = 0x44;
    }
    iVar9 = 0x50;
    if (bVar13) {
      iVar9 = 0x40;
    }
    iVar7 = 0x4c;
    if (bVar13) {
      iVar7 = 0x3c;
    }
    iVar5 = 0x48;
    if (uVar10 == *(uint *)(param_1 + 100)) {
      iVar5 = 0x38;
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

