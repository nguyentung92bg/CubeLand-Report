/* IL2CPP: Rotatelab.UI.FailProgressLossPage$$TryShow
bool Rotatelab_UI_FailProgressLossPage__TryShow (Rotatelab_UI_FailProgressLossPage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailProgressLossPage$$TryShow
   bool Rotatelab_UI_FailProgressLossPage__TryShow (Rotatelab_UI_FailProgressLossPage_o* __this,
   const MethodInfo* method); */

undefined4 Rotatelab_UI_FailProgressLossPage__TryShow_111857c(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uStack_30;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_01128c1c + 0x1128594);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c20 + 0x11285a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c24 + 0x11285b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c28 + 0x11285c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c2c + 0x11285cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c30 + 0x11285d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c34 + 0x11285e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c38 + 0x11285f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c3c + 0x11285fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c40 + 0x1128608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c44 + 0x1128614));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c48 + 0x1128620));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c4c + 0x112862c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c50 + 0x1128638));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c54 + 0x1128644));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c58 + 0x1128650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c5c + 0x112865c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01128c60 + 0x1128668));
    *pcVar8 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01128c64 + 0x112867c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_SatoriFlag_bool___op_Implicit_1a88b00
                    (*(undefined4 *)(iVar1 + 0x44),**(undefined4 **)(_UNK_01128c68 + 0x112869c));
  uVar9 = 0;
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x28) == '\0')) {
    uVar2 = Rotatelab_UI_FailProgressLossInfo__Collect_111d0f4();
    uVar14 = (uVar2 & 0xffff) >> 8;
    uVar12 = (uVar2 & 0xffffff) >> 0x10;
    if ((uVar14 != 0 || (uVar2 & 0xff) != 0) || uVar12 != 0) {
      iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01128c6c + 0x11286e4));
      System_Collections_Generic_List_ValueTuple_object__object_____ctor_25b63d4
                (iVar1,2,**(undefined4 **)(_UNK_01128c70 + 0x11286fc));
      if ((uVar2 & 1) != 0) {
        puVar10 = *(undefined4 **)(_UNK_01128c74 + 0x112871c);
        iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = Rotatelab_Leaderboard_MidGameLeaderboardManager__get_CurrentTheme_10b81a8(iVar3,0);
        puVar7 = *(undefined4 **)(_UNK_01128c7c + 0x1128758);
        if (iVar3 == 1) {
          puVar7 = *(undefined4 **)(_UNK_01128c78 + 0x1128750);
        }
        uVar9 = *puVar7;
        iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar4 = Rotatelab_Leaderboard_MidGameLeaderboardManager__GetThemeSprite_10b8264(iVar3,2,0);
        uStack_2c = 0;
        uStack_30 = 0;
        System_ValueTuple_object__object____ctor_1d537e8
                  (&uStack_30,uVar4,uVar9,**(undefined4 **)(_UNK_01128c80 + 0x112879c));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(iVar1 + 8);
        uVar2 = *(uint *)(iVar1 + 0xc);
        piVar6 = *(int **)(_UNK_01128c84 + 0x11287e0);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar2 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar2 + 1;
          iVar3 = iVar3 + uVar2 * 8;
          puVar5 = (uint *)(iVar3 + 0x10);
          *puVar5 = uStack_30;
          *(undefined4 *)(iVar3 + 0x14) = uStack_2c;
          thunk_FUN_00ec5080(puVar5,0);
        }
        else {
          System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_25b6c30
                    (iVar1,uStack_30,uStack_2c,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
        }
      }
      if ((uVar14 & 1) != 0) {
        uStack_2c = 0;
        uStack_30 = 0;
        System_ValueTuple_object__object____ctor_1d537e8
                  (&uStack_30,*(undefined4 *)(param_1 + 0x20),
                   **(undefined4 **)(_UNK_01128c88 + 0x1128850),
                   **(undefined4 **)(_UNK_01128c8c + 0x112885c));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(iVar1 + 8);
        uVar2 = *(uint *)(iVar1 + 0xc);
        piVar6 = *(int **)(_UNK_01128c90 + 0x11288a8);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar2 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar2 + 1;
          iVar3 = iVar3 + uVar2 * 8;
          puVar5 = (uint *)(iVar3 + 0x10);
          *puVar5 = uStack_30;
          *(undefined4 *)(iVar3 + 0x14) = uStack_2c;
          thunk_FUN_00ec5080(puVar5,0);
        }
        else {
          System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_25b6c30
                    (iVar1,uStack_30,uStack_2c,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
        }
      }
      if ((uVar12 & 1) != 0) {
        uStack_2c = 0;
        uStack_30 = 0;
        System_ValueTuple_object__object____ctor_1d537e8
                  (&uStack_30,*(undefined4 *)(param_1 + 0x24),
                   **(undefined4 **)(_UNK_01128c94 + 0x1128914),
                   **(undefined4 **)(_UNK_01128c98 + 0x1128920));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar3 = *(int *)(iVar1 + 8);
        uVar2 = *(uint *)(iVar1 + 0xc);
        piVar6 = *(int **)(_UNK_01128c9c + 0x112896c);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (uVar2 < *(uint *)(iVar3 + 0xc)) {
          *(uint *)(iVar1 + 0xc) = uVar2 + 1;
          iVar3 = iVar3 + uVar2 * 8;
          puVar5 = (uint *)(iVar3 + 0x10);
          *puVar5 = uStack_30;
          *(undefined4 *)(iVar3 + 0x14) = uStack_2c;
          thunk_FUN_00ec5080(puVar5,0);
        }
        else {
          System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_25b6c30
                    (iVar1,uStack_30,uStack_2c,
                     *(undefined4 *)(*(int *)(*(int *)(*piVar6 + 0x10) + 0x60) + 0x38));
        }
      }
      iVar3 = 4;
      puVar10 = *(undefined4 **)(_UNK_01128ca0 + 0x11289d4);
      while( true ) {
        if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar2 = iVar3 - 4;
        if (*(int *)(*(int *)(param_1 + 0x18) + 0xc) <= (int)uVar2) break;
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar13 = *(int *)(param_1 + 0x18);
        iVar11 = *(int *)(iVar1 + 0xc);
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar13 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar13 = *(int *)(iVar13 + iVar3 * 4);
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar13 = UnityEngine_Component__get_gameObject_35fe360(iVar13,0);
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_GameObject__SetActive_3602038(iVar13,(int)uVar2 < iVar11,0);
        if ((int)uVar2 < iVar11) {
          iVar11 = *(int *)(param_1 + 0x18);
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(uint *)(iVar11 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f07924();
          }
          iVar11 = *(int *)(iVar11 + iVar3 * 4);
          System_Collections_Generic_List_ValueTuple_object__object____get_Item_25b6900
                    (&uStack_30,iVar1,uVar2,*puVar10);
          if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_UI_Image__set_sprite_37167cc(iVar11,uStack_30,0);
        }
        iVar3 = iVar3 + 1;
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar1 + 0xc) == 1) {
        System_Collections_Generic_List_ValueTuple_object__object____get_Item_25b6900
                  (&uStack_30,iVar1,0,*puVar10);
        uVar9 = Rotatelab_UI_FailProgressLossPage__Highlight_111d220(uStack_2c);
      }
      else {
        System_Collections_Generic_List_ValueTuple_object__object____get_Item_25b6900
                  (&uStack_30,iVar1,0,*puVar10);
        uVar9 = Rotatelab_UI_FailProgressLossPage__Highlight_111d220(uStack_2c);
        System_Collections_Generic_List_ValueTuple_object__object____get_Item_25b6900
                  (&uStack_30,iVar1,1,*puVar10);
        uVar4 = Rotatelab_UI_FailProgressLossPage__Highlight_111d220(uStack_2c);
        uVar9 = System_String__Concat_2a0b574
                          (uVar9,**(undefined4 **)(_UNK_01128ca4 + 0x1128b54),uVar4,0);
      }
      piVar6 = *(int **)(param_1 + 0x1c);
      uVar9 = System_String__Concat_2a0b574
                        (**(undefined4 **)(_UNK_01128cac + 0x1128b7c),uVar9,
                         **(undefined4 **)(_UNK_01128ca8 + 0x1128b70),0);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar6 + 0x2b0))(piVar6,uVar9,*(undefined4 *)(*piVar6 + 0x2b4));
      uVar9 = 1;
      uVar4 = *(undefined4 *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x28) = 1;
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__get_anchoredPosition_3613500(&uStack_30,*(int *)(param_1 + 0x14),0)
      ;
      uVar4 = DG_Tweening_DOTweenModuleUI__DOAnchorPosX_f9ea50
                        (uVar4,uStack_30 ^ 0x80000000,0x3e4ccccd,0,0);
      DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                (uVar4,9,**(undefined4 **)(_UNK_01128cb0 + 0x1128c08));
    }
  }
  return uVar9;
}

