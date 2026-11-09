/* IL2CPP: Rotatelab.Shop.ShopPanelController$$ResetCarouselScrollPosition
void Rotatelab_Shop_ShopPanelController__ResetCarouselScrollPosition (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010d3240) */
/* WARNING: Removing unreachable block (ram,0x010d3248) */
/* WARNING: Removing unreachable block (ram,0x010d324c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.ShopPanelController$$ResetCarouselScrollPosition
   void Rotatelab_Shop_ShopPanelController__ResetCarouselScrollPosition
   (Rotatelab_Shop_ShopPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_ShopPanelController__ResetCarouselScrollPosition_10c222c(int param_1)

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
  
  pcVar8 = (char *)(_UNK_010d2398 + 0x10d224c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d239c + 0x10d2260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d23a0 + 0x10d226c));
    *pcVar8 = '\x01';
  }
  iVar11 = 0;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  puVar12 = *(undefined4 **)(_UNK_010d23a4 + 0x10d2290);
  pcVar8 = (char *)(_UNK_010d23a8 + 0x10d229c);
  piVar9 = *(int **)(_UNK_010d23ac + 0x10d22a0);
  while( true ) {
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x70) + 0xc) <= iVar11) break;
    if (*(int *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x70),iVar11,*puVar12);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(piVar9);
      *pcVar8 = '\x01';
    }
    pfVar13 = (float *)&UNK_010d2390;
    iVar4 = *(int *)(*piVar9 + 0x5c);
    if (iVar11 == *(int *)(param_1 + 100)) {
      pfVar13 = (float *)&UNK_010d2394;
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
  pcVar8 = (char *)(_UNK_010d3290 + 0x10d2f2c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3294 + 0x10d2f40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d3298 + 0x10d2f4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d329c + 0x10d2f58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d32a0 + 0x10d2f64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d32a4 + 0x10d2f70));
    *pcVar8 = '\x01';
  }
  iVar11 = 4;
  while( true ) {
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = iVar11 - 4;
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
        uVar6 = System_Collections_Generic_List_object___get_Item_267d814
                          (*(int *)(param_1 + 0x70),*(undefined4 *)(param_1 + 100),
                           **(undefined4 **)(_UNK_010d32a8 + 0x10d30f0));
        piVar9 = *(int **)(_UNK_010d32ac + 0x10d3108);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar11 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar6,0);
        if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0x10);
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,iVar11,0);
        fVar2 = fStack_50;
        fVar1 = fStack_54;
        fVar15 = fStack_58;
        if (*(int *)(**(int **)(_UNK_010d32b0 + 0x10d3164) + 0x74) == 0) {
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
        if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x10);
        if (*(int *)(*piVar9 + 0x74) == 0) {
          FUN_00ec3934();
        }
        Rotatelab_Extensions__SetAnchoredPosX_fc1f1c(uVar6,-fStack_58,0);
      }
      return;
    }
    iVar3 = *(int *)(param_1 + 0x34);
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
    if (*(int *)(param_1 + 0x70) == 0) break;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038
              (iVar3,(int)uVar10 < *(int *)(*(int *)(param_1 + 0x70) + 0xc),0);
    iVar3 = *(int *)(param_1 + 0x34);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar4 = 0x54;
    piVar9 = *(int **)(iVar3 + iVar11 * 4);
    bVar14 = uVar10 == *(uint *)(param_1 + 100);
    if (bVar14) {
      iVar4 = 0x44;
    }
    iVar3 = 0x50;
    if (bVar14) {
      iVar3 = 0x40;
    }
    iVar7 = 0x4c;
    if (bVar14) {
      iVar7 = 0x3c;
    }
    iVar5 = 0x48;
    if (uVar10 == *(uint *)(param_1 + 100)) {
      iVar5 = 0x38;
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

