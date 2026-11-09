/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnBoosterPurchasedHandler
void Rotatelab_PreBoosters_PreBooster__OnBoosterPurchasedHandler (Rotatelab_PreBoosters_PreBooster_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x011348ac) */
/* WARNING: Removing unreachable block (ram,0x011348b4) */
/* WARNING: Removing unreachable block (ram,0x011348b8) */
/* WARNING: Removing unreachable block (ram,0x011348d8) */
/* WARNING: Removing unreachable block (ram,0x011348e4) */
/* WARNING: Removing unreachable block (ram,0x011348e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.PreBoosters.PreBooster$$OnBoosterPurchasedHandler
   void Rotatelab_PreBoosters_PreBooster__OnBoosterPurchasedHandler
   (Rotatelab_PreBoosters_PreBooster_o* __this, int32_t type, const MethodInfo* method); */

void Rotatelab_PreBoosters_PreBooster__OnBoosterPurchasedHandler_10ed17c(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  uint in_fpscr;
  undefined8 uVar17;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) != param_2) {
    return;
  }
  Rotatelab_PreBoosters_PreBooster__OnBoosterStateChanged_10ecf04(param_1);
  pcVar11 = (char *)(_UNK_010fce38 + 0x10fcb00);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce3c + 0x10fcb14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce40 + 0x10fcb20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce44 + 0x10fcb2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce48 + 0x10fcb38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce4c + 0x10fcb44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce50 + 0x10fcb50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce54 + 0x10fcb5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce58 + 0x10fcb68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce5c + 0x10fcb74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fce60 + 0x10fcb80));
    *pcVar11 = '\x01';
  }
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010fce64 + 0x10fcb94));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = RemoteVariableSO_bool___op_Implicit_1a81fac
                    (*(undefined4 *)(iVar4 + 0x1c),**(undefined4 **)(_UNK_010fce68 + 0x10fcbb4));
  if (iVar4 == 0) {
    puVar5 = *(undefined4 **)(_UNK_010fce74 + 0x10fcc24);
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar4 + 0x3c) != 0) {
      piVar12 = *(int **)(_UNK_010fce78 + 0x10fcc50);
      iVar4 = *piVar12;
      if (*(int *)(iVar4 + 0x74) == 0) {
        FUN_00ec3934();
        iVar4 = *piVar12;
      }
      iVar6 = *(int *)(*(int *)(iVar4 + 0x5c) + 0x24);
      uVar8 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84(0);
      iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar4 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar14 = System_String__Concat_29fee38
                         (*(undefined4 *)(*(int *)(iVar4 + 0x3c) + 0x14),
                          **(undefined4 **)(_UNK_010fce7c + 0x10fccb0),0);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_int__object___Raise_23a4108
                (iVar6,uVar8,uVar14,**(undefined4 **)(_UNK_010fce80 + 0x10fccdc));
    }
  }
  else {
    piVar12 = *(int **)(_UNK_010fce6c + 0x10fcbd0);
    iVar4 = *piVar12;
    if (*(int *)(iVar4 + 0x74) == 0) {
      FUN_00ec3934();
      iVar4 = *piVar12;
    }
    iVar4 = *(int *)(*(int *)(iVar4 + 0x5c) + 0xcc);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool__bool___Raise_23a39b8
              (iVar4,1,0,**(undefined4 **)(_UNK_010fce70 + 0x10fcc0c));
  }
  uVar17 = Rotatelab_PreBoosters_PreBooster__get_RemainingUsages_10ebf68(param_1);
  if ((int)(uint)((int)uVar17 == 0) <= (int)((ulonglong)uVar17 >> 0x20)) {
    bVar9 = true;
    if (*(char *)(param_1 + 0x49) == '\0') {
      bVar9 = *(char *)(param_1 + 0x48) == '\0';
    }
    puVar5 = *(undefined4 **)(_UNK_010fce84 + 0x10fcd1c);
    *(bool *)(param_1 + 0x48) = bVar9;
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = *(int *)(iVar4 + 0x18);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
    if (iVar6 == 0xb) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined1 *)(iVar4 + 0x54) = *(undefined1 *)(param_1 + 0x48);
    }
    else if (iVar6 == 10) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined1 *)(iVar4 + 0x55) = *(undefined1 *)(param_1 + 0x48);
    }
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010fce88 + 0x10fcddc));
    if (iVar4 != 0) {
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar4,10,0);
      iVar4 = 0x3c;
      piVar12 = *(int **)(param_1 + 0x18);
      if (*(char *)(param_1 + 0x48) == '\0') {
        iVar4 = 0x38;
      }
      iVar4 = *(int *)(param_1 + iVar4);
      if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar11 = (char *)(_UNK_03726bd0 + 0x37267f0);
      if (*pcVar11 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar4,0);
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
        *pcVar11 = '\x01';
      }
      piVar15 = *(int **)(_UNK_03726bdc + 0x3726828);
      piVar16 = piVar12 + 0x20;
      iVar6 = *piVar16;
      if (*(int *)(*piVar15 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar6 = UnityEngine_Object__op_Inequality_36018e4(iVar6,0,0);
      if (iVar6 == 0) {
        if (*(int *)(*piVar15 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar6 = UnityEngine_Object__op_Inequality_36018e4(iVar4,0,0);
        if (iVar6 == 0) {
          return;
        }
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar4,0);
        if (*(int *)(**(int **)(_UNK_03726bf0 + 0x3726980) + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        pcVar11 = (char *)(_UNK_03726bf4 + 0x37269a4);
        if (*pcVar11 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
          *pcVar11 = '\x01';
        }
        pfVar7 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
        fStack_3c = fStack_3c - pfVar7[1];
        fStack_40 = fStack_40 - *pfVar7;
        *(bool *)(piVar12 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        bVar3 = 0;
        uVar8 = UnityEngine_Sprite__get_texture_35a2e9c(iVar4,0);
        if (*(int *)(*piVar15 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar6 = UnityEngine_Object__op_Equality_36033f4(uVar8,0,0);
        if (iVar6 != 0) {
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar6 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar4,0);
          bVar3 = iVar6 == 0;
        }
      }
      else {
        iVar6 = *piVar16;
        if (*(int *)(*piVar15 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar6 = UnityEngine_Object__op_Inequality_36018e4(iVar6,iVar4,0);
        if (iVar6 == 0) {
          return;
        }
        if (*piVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,*piVar16,0);
        fVar2 = fStack_3c;
        fVar1 = fStack_40;
        piVar13 = *(int **)(_UNK_03726be0 + 0x37268b0);
        if (*(int *)(*piVar13 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        if (*(int *)(*piVar15 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar6 = UnityEngine_Object__op_Implicit_3607ff4(iVar4,0);
        if (iVar6 == 0) {
          pcVar11 = (char *)(_UNK_03726be4 + 0x3726a7c);
          if (*pcVar11 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
            *pcVar11 = '\x01';
          }
          pfVar7 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
          fStack_40 = *pfVar7;
          fStack_3c = pfVar7[1];
        }
        else {
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar4,0);
          if (*(int *)(*piVar13 + 0x74) == 0) {
            thunk_FUN_00ec3934();
          }
        }
        *(bool *)(piVar12 + 9) = fVar1 == fStack_40 && fVar2 == fStack_3c;
        if (piVar12[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar14 = 0;
        uVar8 = UnityEngine_Sprite__get_texture_35a2e9c(piVar12[0x20],0);
        if (*(int *)(*piVar15 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        iVar6 = UnityEngine_Object__op_Implicit_3607ff4(iVar4,0);
        if (iVar6 != 0) {
          if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar14 = UnityEngine_Sprite__get_texture_35a2e9c(iVar4,0);
        }
        if (*(int *)(*piVar15 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
        bVar3 = 0;
        iVar6 = UnityEngine_Object__op_Equality_36033f4(uVar8,uVar14,0);
        if (iVar6 != 0) {
          bVar3 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar12,iVar4);
          bVar3 = bVar3 ^ 1;
        }
      }
      piVar12[0x20] = iVar4;
      *(byte *)((int)piVar12 + 0x25) = bVar3;
      thunk_FUN_00ec5080(piVar16,iVar4);
      UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar12);
      (**(code **)(*piVar12 + 400))(piVar12,*(undefined4 *)(*piVar12 + 0x194));
      UnityEngine_UI_Image__TrackSprite_3721938(piVar12);
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010fce8c + 0x10fcd80));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar12 = *(int **)(iVar4 + 0x24);
  iVar4 = *(int *)(param_1 + 0x10);
  if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar11 = (char *)(_UNK_01146b0c + 0x1146a78);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01146b10 + 0x1146a8c),iVar4,0);
    *pcVar11 = '\x01';
  }
  piVar12[0x15] = iVar4;
  thunk_FUN_00ec5080(piVar12 + 0x15,iVar4);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar4 + 0x20);
  piVar12[7] = iVar6;
  if (piVar12[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar8 = VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34(piVar12[0xd],**(undefined4 **)(_UNK_01146b14 + 0x1146ae0),uVar8,0)
  ;
  piVar12[0x16] = piVar12[7] * *(int *)(iVar4 + 0x1c);
  pcVar11 = (char *)(_UNK_0113479c + 0x113474c);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011347a0 + 0x1134760));
    *pcVar11 = '\x01';
  }
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_011347a4 + 0x1134774));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar11 = (char *)(_UNK_01134908 + 0x11347c4);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113490c + 0x11347d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134910 + 0x11347e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134914 + 0x11347f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134918 + 0x11347fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113491c + 0x1134808));
    *pcVar11 = '\x01';
  }
  uVar8 = *(undefined4 *)(iVar4 + 0x10);
  if (*(int *)(**(int **)(_UNK_01134920 + 0x1134820) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar6 = Rotatelab_Extensions__InsertUnique_object__14873f8
                    (uVar8,piVar12,**(undefined4 **)(_UNK_01134924 + 0x1134848));
  if (iVar6 == 0) {
    return;
  }
  if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (1 < *(int *)(*(int *)(iVar4 + 0x10) + 0xc)) {
    if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar4 + 0x10),1,**(undefined4 **)(_UNK_01134928 + 0x1134894));
    Rotatelab_UI_PopupManager__SetPopupVisible_1124efc(uVar8,uVar8,0);
  }
  pcVar11 = (char *)(_UNK_01134fac + 0x1134f14);
  if (*pcVar11 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01134fb0 + 0x1134f28));
    *pcVar11 = '\x01';
  }
  if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *piVar12;
  uVar10 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar10 != 0) {
    piVar15 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar15[-1] == **(int **)(_UNK_01134fb4 + 0x1134f4c)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar15 * 8 + 0xc0);
        goto LAB_01134f94;
      }
      uVar10 = uVar10 - 1;
      piVar15 = piVar15 + 2;
    } while (uVar10 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(piVar12,**(int **)(_UNK_01134fb4 + 0x1134f4c),0);
LAB_01134f94:
                    /* WARNING: Could not recover jumptable at 0x01134fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar5)(piVar12,1,puVar5[1]);
  return;
}

