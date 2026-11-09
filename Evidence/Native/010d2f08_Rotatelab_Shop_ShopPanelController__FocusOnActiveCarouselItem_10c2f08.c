/* IL2CPP: Rotatelab.Shop.ShopPanelController$$FocusOnActiveCarouselItem
void Rotatelab_Shop_ShopPanelController__FocusOnActiveCarouselItem (Rotatelab_Shop_ShopPanelController_o* __this, bool immediately, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$FocusOnActiveCarouselItem
   void Rotatelab_Shop_ShopPanelController__FocusOnActiveCarouselItem
   (Rotatelab_Shop_ShopPanelController_o* __this, bool immediately, const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__FocusOnActiveCarouselItem_10c2f08(int param_1,int param_2)

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
  
  pcVar8 = (char *)(_UNK_010d3290 + 0x10d2f2c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3294 + 0x10d2f40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3298 + 0x10d2f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d329c + 0x10d2f58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d32a0 + 0x10d2f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d32a4 + 0x10d2f70));
    *pcVar8 = '\x01';
  }
  iVar12 = 4;
  while( true ) {
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = iVar12 - 4;
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
        uVar5 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 100),
                           **(undefined4 **)(_UNK_010d32a8 + 0x10d30f0));
        piVar11 = *(int **)(_UNK_010d32ac + 0x10d3108);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar12 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar5,0);
        if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = *(int *)(*(int *)(param_1 + 0x30) + 0x10);
        if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,iVar12,0);
        fVar3 = fStack_50;
        fVar2 = fStack_54;
        fVar1 = fStack_58;
        if (*(int *)(**(int **)(_UNK_010d32b0 + 0x10d3164) + 0x74) == 0) {
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
        iVar12 = *(int *)(param_1 + 0x30);
        if (param_2 == 0) {
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar5 = DG_Tweening_DOTweenModuleUI__DOAnchorPosX_f9ea50
                            (*(undefined4 *)(iVar12 + 0x10),-fStack_58,0x3e4ccccd,0,0);
          DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                    (uVar5,9,**(undefined4 **)(_UNK_010d32b4 + 0x10d3278));
        }
        else {
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar5 = *(undefined4 *)(iVar12 + 0x10);
          if (*(int *)(*piVar11 + 0x74) == 0) {
            FUN_00ec3934();
          }
          Rotatelab_Extensions__SetAnchoredPosX_fc1f1c(uVar5,-fStack_58,0);
        }
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
    iVar9 = *(int *)(iVar9 + iVar12 * 4);
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
    piVar11 = *(int **)(iVar9 + iVar12 * 4);
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
    iVar4 = 0x48;
    if (uVar10 == *(uint *)(param_1 + 100)) {
      iVar4 = 0x38;
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

