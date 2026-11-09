/* IL2CPP: Rotatelab.UI.PageButtonBase$$RefreshLockedState
void Rotatelab_UI_PageButtonBase__RefreshLockedState (Rotatelab_UI_PageButtonBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PageButtonBase$$RefreshLockedState
   void Rotatelab_UI_PageButtonBase__RefreshLockedState (Rotatelab_UI_PageButtonBase_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_PageButtonBase__RefreshLockedState_112d254(int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  char *pcVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  piVar8 = *(int **)(param_1 + 0x20);
  iVar4 = Rotatelab_UI_PageButtonBase__get_IsUnlocked_112d1d4();
  iVar7 = 0x2c;
  if (iVar4 != 0) {
    iVar7 = 0x28;
  }
  iVar4 = *(int *)(param_1 + iVar7);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar9 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar4,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar9 = '\x01';
  }
  piVar12 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar13 = piVar8 + 0x20;
  iVar7 = *piVar13;
  if (*(int *)(*piVar12 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar7 = UnityEngine_Object__op_Inequality_36018e4(iVar7,0,0);
  if (iVar7 == 0) {
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar7 = UnityEngine_Object__op_Inequality_36018e4(iVar4,0,0);
    if (iVar7 == 0) {
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
    pcVar9 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar9 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar9 = '\x01';
    }
    pfVar5 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar5[1];
    fStack_40 = fStack_40 - *pfVar5;
    *(bool *)(piVar8 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar3 = 0;
    uVar6 = UnityEngine_Sprite__get_texture_35a2e9c(iVar4,0);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar7 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
    if (iVar7 != 0) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar4,0);
      bVar3 = iVar7 == 0;
    }
  }
  else {
    iVar7 = *piVar13;
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar7 = UnityEngine_Object__op_Inequality_36018e4(iVar7,iVar4,0);
    if (iVar7 == 0) {
      return;
    }
    if (*piVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,*piVar13,0);
    fVar2 = fStack_3c;
    fVar1 = fStack_40;
    piVar10 = *(int **)(_UNK_03726be0 + 0x37268b0);
    if (*(int *)(*piVar10 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar7 = UnityEngine_Object__op_Implicit_3607ff4(iVar4,0);
    if (iVar7 == 0) {
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
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar4,0);
      if (*(int *)(*piVar10 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
    }
    *(bool *)(piVar8 + 9) = fVar1 == fStack_40 && fVar2 == fStack_3c;
    if (piVar8[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = 0;
    uVar6 = UnityEngine_Sprite__get_texture_35a2e9c(piVar8[0x20],0);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar7 = UnityEngine_Object__op_Implicit_3607ff4(iVar4,0);
    if (iVar7 != 0) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar11 = UnityEngine_Sprite__get_texture_35a2e9c(iVar4,0);
    }
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    bVar3 = 0;
    iVar7 = UnityEngine_Object__op_Equality_36033f4(uVar6,uVar11,0);
    if (iVar7 != 0) {
      bVar3 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar8,iVar4);
      bVar3 = bVar3 ^ 1;
    }
  }
  piVar8[0x20] = iVar4;
  *(byte *)((int)piVar8 + 0x25) = bVar3;
  thunk_FUN_00ec5080(piVar13,iVar4);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar8);
  (**(code **)(*piVar8 + 400))(piVar8,*(undefined4 *)(*piVar8 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar8);
  return;
}

