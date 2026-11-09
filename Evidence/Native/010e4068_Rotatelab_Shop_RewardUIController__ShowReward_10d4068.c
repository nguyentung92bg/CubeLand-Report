/* IL2CPP: Rotatelab.Shop.RewardUIController$$ShowReward
void Rotatelab_Shop_RewardUIController__ShowReward (Rotatelab_Shop_RewardUIController_o* __this, Rotatelab_Shop_RewardData_o rewardData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.RewardUIController$$ShowReward
   void Rotatelab_Shop_RewardUIController__ShowReward (Rotatelab_Shop_RewardUIController_o* __this,
   Rotatelab_Shop_RewardData_o rewardData, const MethodInfo* method); */

void Rotatelab_Shop_RewardUIController__ShowReward_10d4068
               (int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  
  pcVar5 = (char *)(_UNK_010e4450 + 0x10e4090);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4454 + 0x10e40a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4458 + 0x10e40b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e445c + 0x10e40bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4460 + 0x10e40c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4464 + 0x10e40d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4468 + 0x10e40e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e446c + 0x10e40ec));
    *pcVar5 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Show_1124734(*(int *)(param_1 + 0x18),0,0);
  piVar6 = *(int **)(param_1 + 0x14);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar6 + 0x2b0))(piVar6,param_2,*(undefined4 *)(*piVar6 + 0x2b4));
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar15 = (float)VectorSignedToFloat(*(undefined4 *)(param_3 + 0xc),(byte)(in_fpscr >> 0x16) & 3);
  pcVar5 = (char *)(_UNK_010e4470 + 0x10e4160);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e4474 + 0x10e4174));
    *pcVar5 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_010e4478 + 0x10e4190) + 0x74) == 0) {
    FUN_00ec3934();
  }
  fVar15 = (float)FUN_01f4f1bc(fVar15 * 0.5);
  uVar14 = (uint)fVar15;
  if (fVar15 == _UNK_010e444c) {
    uVar14 = 0x80000000;
  }
  iVar2 = FUN_00ec388c(**(undefined4 **)(_UNK_010e447c + 0x10e41c8),uVar14);
  if (0 < (int)uVar14) {
    iVar11 = 0;
    uVar12 = 0;
    do {
      uVar7 = *(undefined4 *)(param_1 + 0x10);
      uVar9 = *(undefined4 *)(param_1 + 0x20);
      if (*(int *)(**(int **)(_UNK_010e4480 + 0x10e41fc) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = UnityEngine_Object__Instantiate_object__14d4dd0
                        (uVar9,uVar7,**(undefined4 **)(_UNK_010e4484 + 0x10e4224));
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar2 + 0x10 + uVar12 * 4) = uVar7;
      thunk_FUN_00ec5080(iVar2 + 0x10 + iVar11,uVar7);
      uVar12 = uVar12 + 1;
      iVar11 = iVar11 + 4;
    } while (uVar14 != uVar12);
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar11 = FUN_00ec388c(**(undefined4 **)(_UNK_010e4488 + 0x10e4288),*(undefined4 *)(param_3 + 0xc))
  ;
  piVar6 = (int *)(param_1 + 0x2c);
  *piVar6 = iVar11;
  thunk_FUN_00ec5080(piVar6,iVar11);
  uVar12 = 0;
  iVar10 = 0x10;
  iVar11 = 0;
  uVar14 = 0;
  while( true ) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_3 + 0xc) <= (int)uVar12) {
      iVar2 = *(int *)(param_1 + 0x24);
      iVar11 = *(int *)(param_1 + 0x2c);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar5 = (char *)(_UNK_010e3de0 + 0x10e3a58);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010e3de4 + 0x10e3a6c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010e3de8 + 0x10e3a78));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010e3dec + 0x10e3a84));
        *pcVar5 = '\x01';
      }
      if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(iVar2 + 0x10),0);
      if (*(char *)(_UNK_010e3df0 + 0x10e3ab8) == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010e3df4 + 0x10e3acc));
        *(undefined1 *)(_UNK_010e3df8 + 0x10e3adc) = 1;
      }
      puVar1 = *(undefined4 **)(**(int **)(_UNK_010e3dfc + 0x10e3aec) + 0x5c);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_localScale_36155dc(iVar10,*puVar1,puVar1[1],puVar1[2],0);
      if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = TMPro_TMP_Text__get_transform_34fc774(*(int *)(iVar2 + 0x14),0);
      if (*(char *)(_UNK_010e3e00 + 0x10e3b48) == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010e3e04 + 0x10e3b5c));
        *(undefined1 *)(_UNK_010e3e08 + 0x10e3b6c) = 1;
      }
      puVar1 = *(undefined4 **)(**(int **)(_UNK_010e3e0c + 0x10e3b80) + 0x5c);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_localScale_36155dc(iVar10,*puVar1,puVar1[1],puVar1[2],0);
      uVar14 = 0;
      while( true ) {
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if ((int)*(uint *)(iVar11 + 0xc) <= (int)uVar14) {
          if (*(int *)(**(int **)(_UNK_010e3e20 + 0x10e3c7c) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar7 = DG_Tweening_DOTween__Sequence_1167c00(0);
          uVar9 = UnityEngine_Component__get_gameObject_35fe360(iVar2,0);
          uVar7 = DG_Tweening_TweenSettingsExtensions__SetLink_object__15da040
                            (uVar7,uVar9,**(undefined4 **)(_UNK_010e3e24 + 0x10e3cb8));
          uVar7 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar7,0x3f000000,0);
          if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar9 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(iVar2 + 0x10),0);
          uVar9 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar9,0x3f800000,0x3e800000,0);
          puVar1 = *(undefined4 **)(_UNK_010e3e28 + 0x10e3d0c);
          uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar9,0x1e,*puVar1);
          uVar7 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar7,uVar9,0);
          if (*(int *)(iVar2 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar12 = 0;
          uVar9 = TMPro_TMP_Text__get_rectTransform_34fc82c(*(int *)(iVar2 + 0x14),0);
          uVar9 = DG_Tweening_ShortcutExtensions__DOScale_116ba14(uVar9,0x3f800000,0x3e800000,0);
          uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8(uVar9,0x1e,*puVar1);
          uVar7 = DG_Tweening_TweenSettingsExtensions__Append_116cf54(uVar7,uVar9,0);
          uVar7 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar7,0,0);
          uVar14 = *(uint *)(iVar11 + 0xc);
          if (0 < (int)uVar14) {
            do {
              if (uVar14 <= uVar12) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f07924();
              }
              uVar9 = DG_Tweening_ShortcutExtensions__DOScale_116ba14
                                (*(undefined4 *)(iVar11 + 0x10 + uVar12 * 4),0x3f800000,0x3e800000,0
                                );
              uVar9 = DG_Tweening_TweenSettingsExtensions__SetEase_object__15d9fc8
                                (uVar9,0x1e,*puVar1);
              DG_Tweening_TweenSettingsExtensions__Join_116d050(uVar7,uVar9,0);
              uVar14 = *(uint *)(iVar11 + 0xc);
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar14);
          }
          return;
        }
        if (*(uint *)(iVar11 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar10 = *(int *)(iVar11 + 0x10 + uVar14 * 4);
        if (iVar10 == 0) break;
        iVar10 = UnityEngine_Component__get_transform_35fe190(iVar10,0);
        if (*(char *)(_UNK_010e3e10 + 0x10e3c08) == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_010e3e14 + 0x10e3c1c));
          *(undefined1 *)(_UNK_010e3e18 + 0x10e3c2c) = 1;
        }
        puVar1 = *(undefined4 **)(**(int **)(_UNK_010e3e1c + 0x10e3c3c) + 0x5c);
        if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Transform__set_localScale_36155dc(iVar10,*puVar1,puVar1[1],puVar1[2],0);
        uVar14 = uVar14 + 1;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(param_1 + 0x1c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar2 + 0xc) <= uVar14) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    uVar9 = *(undefined4 *)(iVar2 + uVar14 * 4 + 0x10);
    if (*(int *)(**(int **)(_UNK_010e448c + 0x10e4304) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__Instantiate_object__14d4dd0
                      (uVar7,uVar9,**(undefined4 **)(_UNK_010e4490 + 0x10e4328));
    iVar4 = System_Collections_Generic_List_object___get_Item_267d814
                      (param_3,uVar12,**(undefined4 **)(_UNK_010e4494 + 0x10e4344));
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_RewardInfo__SetUI_10d354c
              (iVar3,*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0xc));
    iVar4 = iVar11 + 1;
    if (iVar4 == 2) {
      uVar14 = uVar14 + 1;
    }
    bVar13 = iVar11 != 1;
    iVar8 = *piVar6;
    iVar11 = 0;
    if (bVar13) {
      iVar11 = iVar4;
    }
    if (iVar3 == 0) break;
    iVar3 = UnityEngine_Component__get_transform_35fe190(iVar3,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = UnityEngine_Component__GetComponent_object__143f3b0
                      (iVar3,**(undefined4 **)(_UNK_010e4498 + 0x10e43d4));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar8 + 0xc) <= uVar12) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *(undefined4 *)(iVar8 + iVar10) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(iVar8 + iVar10),uVar7);
    iVar10 = iVar10 + 4;
    uVar12 = uVar12 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

