/* IL2CPP: Rotatelab.WinStreak.Chest$$SetCollected
void Rotatelab_WinStreak_Chest__SetCollected (Rotatelab_WinStreak_Chest_o* __this, bool isCollected, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Chest$$SetCollected
   void Rotatelab_WinStreak_Chest__SetCollected (Rotatelab_WinStreak_Chest_o* __this, bool
   isCollected, const MethodInfo* method); */

void Rotatelab_WinStreak_Chest__SetCollected_1090348(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int *piVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  piVar7 = *(int **)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x3c);
  *(char *)(param_1 + 0x40) = (char)param_2;
  if (param_2 == 0) {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar4 = (int *)(iVar8 + 0x18);
  }
  else {
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar4 = (int *)(iVar8 + 0x14);
  }
  iVar8 = *piVar4;
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar9 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar8,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar9 = '\x01';
  }
  piVar4 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar13 = piVar7 + 0x20;
  iVar10 = *piVar13;
  if (*(int *)(*piVar4 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar10,0,0);
  if (iVar10 == 0) {
    if (*(int *)(*piVar4 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar8,0,0);
    if (iVar10 == 0) {
      return;
    }
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar8,0);
    if (*(int *)(**(int **)(_UNK_03726bf0 + 0x3726980) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar9 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar9 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar9 = '\x01';
    }
    pfVar5 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar5[1];
    fStack_40 = fStack_40 - *pfVar5;
    *(bool *)(piVar7 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar3 = 0;
    uVar6 = UnityEngine_Sprite__get_texture_35a2e9c(iVar8,0);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
    if (iVar10 != 0) {
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar8,0);
      bVar3 = iVar10 == 0;
    }
  }
  else {
    iVar10 = *piVar13;
    if (*(int *)(*piVar4 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar10,iVar8,0);
    if (iVar10 == 0) {
      return;
    }
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,*piVar13,0);
    fVar2 = fStack_3c;
    fVar1 = fStack_40;
    piVar11 = *(int **)(_UNK_03726be0 + 0x37268b0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    if (*(int *)(*piVar4 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Implicit_3607ff4(iVar8,0);
    if (iVar10 == 0) {
      pcVar9 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar9 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar9 = '\x01';
      }
      pfVar5 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
      fStack_40 = *pfVar5;
      fStack_3c = pfVar5[1];
    }
    else {
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar8,0);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
    }
    *(bool *)(piVar7 + 9) = fVar1 == fStack_40 && fVar2 == fStack_3c;
    if (piVar7[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar12 = 0;
    uVar6 = UnityEngine_Sprite__get_texture_35a2e9c(piVar7[0x20],0);
    if (*(int *)(*piVar4 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Implicit_3607ff4(iVar8,0);
    if (iVar10 != 0) {
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar12 = UnityEngine_Sprite__get_texture_35a2e9c(iVar8,0);
    }
    if (*(int *)(*piVar4 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    bVar3 = 0;
    iVar10 = UnityEngine_Object__op_Equality_36033f4(uVar6,uVar12,0);
    if (iVar10 != 0) {
      bVar3 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar7,iVar8);
      bVar3 = bVar3 ^ 1;
    }
  }
  piVar7[0x20] = iVar8;
  *(byte *)((int)piVar7 + 0x25) = bVar3;
  thunk_FUN_00ec5080(piVar13,iVar8);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar7);
  (**(code **)(*piVar7 + 400))(piVar7,*(undefined4 *)(*piVar7 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar7);
  return;
}

