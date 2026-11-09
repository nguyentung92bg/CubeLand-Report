/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$OnPopupShown
void Rotatelab_Boosters_UI_BoosterPurchasePopup__OnPopupShown (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.BoosterPurchasePopup$$OnPopupShown
   void Rotatelab_Boosters_UI_BoosterPurchasePopup__OnPopupShown
   (Rotatelab_Boosters_UI_BoosterPurchasePopup_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_UI_BoosterPurchasePopup__OnPopupShown_113e500(int param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_r1;
  undefined4 *puVar7;
  bool bVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  uint in_fpscr;
  undefined4 uVar12;
  undefined8 uVar13;
  uint uStack_70;
  uint *puStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  
  pcVar9 = (char *)(_UNK_0114ecb0 + 0x114e518);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecb4 + 0x114e52c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecb8 + 0x114e538));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecbc + 0x114e544));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecc0 + 0x114e550));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecc4 + 0x114e55c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecc8 + 0x114e568));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114eccc + 0x114e574));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecd0 + 0x114e580));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecd4 + 0x114e58c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecd8 + 0x114e598));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ecdc + 0x114e5a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ece0 + 0x114e5b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114ece4 + 0x114e5bc));
    *pcVar9 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  piVar10 = *(int **)(param_1 + 0x28);
  uStack_38 = 0;
  iStack_48 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  iStack_2c = uStack_3c;
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar10 + 0x2b0))
            (piVar10,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x14),
             *(undefined4 *)(*piVar10 + 0x2b4));
  piVar10 = *(int **)(param_1 + 0x2c);
  if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar10 + 0x2b0))
            (piVar10,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x18),
             *(undefined4 *)(*piVar10 + 0x2b4));
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar12 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x58),(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34
            (*(int *)(param_1 + 0x30),**(undefined4 **)(_UNK_0114ece8 + 0x114e680),uVar12,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_70,*(int *)(param_1 + 0x24),**(undefined4 **)(_UNK_0114ecec + 0x114e6b0));
  uStack_38 = uStack_70;
  uStack_34 = puStack_6c;
  uStack_30 = uStack_68;
  iStack_2c = iStack_64;
  uStack_70 = 0;
  puVar7 = *(undefined4 **)(_UNK_0114ecf0 + 0x114e6d4);
  puStack_6c = &uStack_38;
  while (iVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                           (&uStack_38,*puVar7), iVar4 != 0) {
    if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (iStack_2c,*(undefined4 *)(*(int *)(param_1 + 0x54) + 0x10),0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose_219071c
            (&uStack_38,**(undefined4 **)(_UNK_0114ecf4 + 0x114e728));
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114ecfc + 0x114e73c));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar4 + 0x4c) == 0) {
    bVar1 = false;
  }
  else {
    if (*(int *)(**(int **)(_UNK_0114ed00 + 0x114e768) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar12 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar12,0);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114ed04 + 0x114e798));
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(iVar5 + 0x34) + 0x14);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(iVar5 + 0x14);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar1 = *(int *)(iVar5 + 0xc) <= iVar4;
  }
  if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar12 = 0;
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x4c),0,0);
  uVar11 = 0x3f800000;
  bVar8 = true;
  if (bVar1) {
    if (*(int *)(param_1 + 0x54) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x54) + 0xc);
    if (iVar4 != 4 && iVar4 != 9) {
      puVar7 = *(undefined4 **)(_UNK_0114ed08 + 0x114e9ec);
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = RemoteVariableSO_bool___op_Implicit_1a81fac
                        (*(undefined4 *)(iVar4 + 0x20),**(undefined4 **)(_UNK_0114ed0c + 0x114ea0c))
      ;
      bVar8 = true;
      if (iVar4 == 0) {
        uVar12 = 1;
      }
      else {
        iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_0114ed10 + 0x114ea2c));
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar12 = 0;
        uVar6 = Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar4,0);
        iVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar6,0);
        if (iVar4 < *(int *)(param_1 + 0x58)) {
          iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(iVar4 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar4 = *(int *)(*(int *)(iVar4 + 0x34) + 0x14);
          if (*(int *)(**(int **)(_UNK_0114ed14 + 0x114ea98) + 0x74) == 0) {
            FUN_00ec3934();
          }
          uVar12 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
          uVar13 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar12,0);
          uVar12 = (undefined4)((ulonglong)uVar13 >> 0x20);
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar4 = Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__IsCapActive_fe72e8
                            (iVar4,uVar12,(int)uVar13,uVar12,0);
          uVar12 = 1;
          if (iVar4 != 0) {
            iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            if (*(int *)(iVar4 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar4 = *(int *)(*(int *)(iVar4 + 0x34) + 0x14);
            if (*(int *)(**(int **)(_UNK_0114ed18 + 0x114eb28) + 0x74) == 0) {
              FUN_00ec3934();
            }
            uVar12 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
            uVar13 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar12,0);
            uVar12 = (undefined4)((ulonglong)uVar13 >> 0x20);
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            iVar4 = Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__GetDailyCap_fe7244
                              (iVar4,uVar12,(int)uVar13,uVar12,0);
            piVar10 = *(int **)(param_1 + 0x38);
            iVar5 = Rotatelab_RotateConstants__get_TotalRewardedUseCount_1078e84(0);
            uStack_70 = iVar4 - iVar5 & ~(iVar4 - iVar5 >> 0x1f);
            iVar5 = *(int *)(_UNK_0114ed1c + 0x114eb9c);
            uVar12 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x24),&uStack_70);
            iStack_58 = iVar4;
            uVar11 = FUN_00ec393c(*(undefined4 *)(iVar5 + 0x24),&iStack_58);
            uVar12 = System_String__Format_2a0c264
                               (**(undefined4 **)(_UNK_0114ed20 + 0x114ebd4),uVar12,uVar11,0);
            if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            (**(code **)(*piVar10 + 0x2b0))(piVar10,uVar12,*(undefined4 *)(*piVar10 + 0x2b4));
            iVar5 = Rotatelab_RotateConstants__get_TotalRewardedUseCount_1078e84(0);
            bVar8 = iVar5 < iVar4;
            if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            uVar12 = 1;
            UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x4c),1,0);
            uVar11 = 0x3e8c8c8d;
            if (iVar5 < iVar4) {
              uVar11 = 0x3f800000;
            }
          }
        }
      }
    }
  }
  piVar10 = *(int **)(param_1 + 0x50);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar10 + 0x178))
            (piVar10,0x3f800000,0x3f800000,0x3f800000,uVar11,*(undefined4 *)(*piVar10 + 0x17c));
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x40),bVar8,0);
  if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x48),uVar12,0);
  PrimeTween_Sequence__Create_2cef1e0(&iStack_58,1,0,1,0,0,0);
  uVar11 = *(undefined4 *)(param_1 + 0x20);
  iStack_48 = iStack_58;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  PrimeTween_Easing__op_Implicit_2ce2e54(&uStack_70,9,0);
  iVar4 = iStack_64;
  uVar12 = uStack_68;
  puVar3 = puStack_6c;
  uVar2 = uStack_70;
  if (*(int *)(**(int **)(_UNK_0114ed24 + 0x114e918) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce4a3c
            (&uStack_70,uVar11,0,0x3f800000,0x3f000000,uVar2,puVar3,uVar12,iVar4,uStack_60,1,0,0,0,0
             ,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_70,&iStack_48,uStack_70,puStack_6c,uStack_68,iStack_64,0);
  puVar3 = puStack_6c;
  uVar2 = uStack_70;
  iVar4 = *(int *)(**(int **)(_UNK_0114ed28 + 0x114e9a0) + 0x74);
  if (iVar4 == 0) {
    FUN_00ec3934();
    iVar4 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
            (&uStack_70,iVar4,uVar2,puVar3,uStack_68,iStack_64,0);
  return;
}

