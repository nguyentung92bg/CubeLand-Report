/* IL2CPP: Rotatelab.WinStreak.Stage$$InitializeLevel
void Rotatelab_WinStreak_Stage__InitializeLevel (Rotatelab_WinStreak_Stage_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Stage$$InitializeLevel
   void Rotatelab_WinStreak_Stage__InitializeLevel (Rotatelab_WinStreak_Stage_o* __this, int32_t
   level, const MethodInfo* method); */

void Rotatelab_WinStreak_Stage__InitializeLevel_1091208(int param_1,int param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  uint in_fpscr;
  undefined4 uVar15;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  piVar8 = *(int **)(param_1 + 0x10);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar15 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  (**(code **)(*piVar8 + 0x238))(piVar8,uVar15,*(undefined4 *)(*piVar8 + 0x23c));
  iVar9 = *(int *)(param_1 + 0x3c);
  iVar6 = Rotatelab_WinStreak_Stage__get_WinStreakData_1090e4c();
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = Rotatelab_WinStreak_WinStreakSo__GetLatestCheckpointStage_1090d2c(iVar6,param_2);
  uVar15 = _UNK_010a1334;
  if (iVar6 == *(int *)(param_1 + 0x40)) {
    uVar15 = 0x3f800000;
  }
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_fillAmount_3721d6c(iVar9,uVar15,0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = 0x2c;
  if (param_2 < *(int *)(*(int *)(param_1 + 0x40) + 8)) {
    iVar6 = 0x28;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc
            (*(int *)(param_1 + 0x24),*(undefined4 *)(param_1 + iVar6),0);
  iVar9 = *(int *)(param_1 + 0x34);
  iVar6 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = *(int *)(iVar6 + 0xa4);
  iVar6 = Rotatelab_WinStreak_Stage__get_Index_1090ebc(param_1);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar1 = iVar6 <= iVar10;
  piVar8 = *(int **)(iVar9 + 0x10);
  iVar6 = *(int *)(iVar9 + 0x3c);
  *(bool *)(iVar9 + 0x40) = bVar1;
  if (bVar1) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar5 = (int *)(iVar6 + 0x14);
  }
  else {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar5 = (int *)(iVar6 + 0x18);
  }
  iVar6 = *piVar5;
  if (piVar8 != (int *)0x0) {
    pcVar11 = (char *)(_UNK_03726bd0 + 0x37267f0);
    if (*pcVar11 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar6,0);
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
      *pcVar11 = '\x01';
    }
    piVar5 = *(int **)(_UNK_03726bdc + 0x3726828);
    piVar14 = piVar8 + 0x20;
    iVar9 = *piVar14;
    if (*(int *)(*piVar5 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar9 = UnityEngine_Object__op_Inequality_36018e4(iVar9,0,0);
    if (iVar9 == 0) {
      if (*(int *)(*piVar5 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar9 = UnityEngine_Object__op_Inequality_36018e4(iVar6,0,0);
      if (iVar9 == 0) {
        return;
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar6,0);
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
      *(bool *)(piVar8 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      bVar4 = 0;
      uVar15 = UnityEngine_Sprite__get_texture_35a2e9c(iVar6,0);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar9 = UnityEngine_Object__op_Equality_36033f4(uVar15,0,0);
      if (iVar9 != 0) {
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar6,0);
        bVar4 = iVar9 == 0;
      }
    }
    else {
      iVar9 = *piVar14;
      if (*(int *)(*piVar5 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar9 = UnityEngine_Object__op_Inequality_36018e4(iVar9,iVar6,0);
      if (iVar9 == 0) {
        return;
      }
      if (*piVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,*piVar14,0);
      fVar3 = fStack_3c;
      fVar2 = fStack_40;
      piVar12 = *(int **)(_UNK_03726be0 + 0x37268b0);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      if (*(int *)(*piVar5 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar9 = UnityEngine_Object__op_Implicit_3607ff4(iVar6,0);
      if (iVar9 == 0) {
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
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar6,0);
        if (*(int *)(*piVar12 + 0x74) == 0) {
          thunk_FUN_00ec3934();
        }
      }
      *(bool *)(piVar8 + 9) = fVar2 == fStack_40 && fVar3 == fStack_3c;
      if (piVar8[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar13 = 0;
      uVar15 = UnityEngine_Sprite__get_texture_35a2e9c(piVar8[0x20],0);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar9 = UnityEngine_Object__op_Implicit_3607ff4(iVar6,0);
      if (iVar9 != 0) {
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar13 = UnityEngine_Sprite__get_texture_35a2e9c(iVar6,0);
      }
      if (*(int *)(*piVar5 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      bVar4 = 0;
      iVar9 = UnityEngine_Object__op_Equality_36033f4(uVar15,uVar13,0);
      if (iVar9 != 0) {
        bVar4 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar8,iVar6);
        bVar4 = bVar4 ^ 1;
      }
    }
    piVar8[0x20] = iVar6;
    *(byte *)((int)piVar8 + 0x25) = bVar4;
    thunk_FUN_00ec5080(piVar14,iVar6);
    UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar8);
    (**(code **)(*piVar8 + 400))(piVar8,*(undefined4 *)(*piVar8 + 0x194));
    UnityEngine_UI_Image__TrackSprite_3721938(piVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

