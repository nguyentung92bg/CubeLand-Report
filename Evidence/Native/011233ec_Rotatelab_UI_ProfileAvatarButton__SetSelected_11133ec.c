/* IL2CPP: Rotatelab.UI.ProfileAvatarButton$$SetSelected
void Rotatelab_UI_ProfileAvatarButton__SetSelected (Rotatelab_UI_ProfileAvatarButton_o* __this, bool isSelected, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileAvatarButton$$SetSelected
   void Rotatelab_UI_ProfileAvatarButton__SetSelected (Rotatelab_UI_ProfileAvatarButton_o* __this,
   bool isSelected, const MethodInfo* method); */

void Rotatelab_UI_ProfileAvatarButton__SetSelected_11133ec(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x20),param_2,0);
  iVar4 = 0x14;
  if (param_2 != 0) {
    iVar4 = 0x18;
  }
  iVar4 = *(int *)(param_1 + iVar4);
  piVar7 = *(int **)(param_1 + 0x10);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar4,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar8 = '\x01';
  }
  piVar12 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar13 = piVar7 + 0x20;
  iVar9 = *piVar13;
  if (*(int *)(*piVar12 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar9 = UnityEngine_Object__op_Inequality_36018e4(iVar9,0,0);
  if (iVar9 == 0) {
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar9 = UnityEngine_Object__op_Inequality_36018e4(iVar4,0,0);
    if (iVar9 == 0) {
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
    pcVar8 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar8 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar8 = '\x01';
    }
    pfVar5 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar5[1];
    fStack_40 = fStack_40 - *pfVar5;
    *(bool *)(piVar7 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar3 = 0;
    uVar6 = UnityEngine_Sprite__get_texture_35a2e9c(iVar4,0);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar9 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
    if (iVar9 != 0) {
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar4,0);
      bVar3 = iVar9 == 0;
    }
  }
  else {
    iVar9 = *piVar13;
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar9 = UnityEngine_Object__op_Inequality_36018e4(iVar9,iVar4,0);
    if (iVar9 == 0) {
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
    iVar9 = UnityEngine_Object__op_Implicit_3607ff4(iVar4,0);
    if (iVar9 == 0) {
      pcVar8 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar8 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar8 = '\x01';
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
    *(bool *)(piVar7 + 9) = fVar1 == fStack_40 && fVar2 == fStack_3c;
    if (piVar7[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar11 = 0;
    uVar6 = UnityEngine_Sprite__get_texture_35a2e9c(piVar7[0x20],0);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar9 = UnityEngine_Object__op_Implicit_3607ff4(iVar4,0);
    if (iVar9 != 0) {
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
    iVar9 = UnityEngine_Object__op_Equality_36033f4(uVar6,uVar11,0);
    if (iVar9 != 0) {
      bVar3 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar7,iVar4);
      bVar3 = bVar3 ^ 1;
    }
  }
  piVar7[0x20] = iVar4;
  *(byte *)((int)piVar7 + 0x25) = bVar3;
  thunk_FUN_00ec5080(piVar13,iVar4);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar7);
  (**(code **)(*piVar7 + 400))(piVar7,*(undefined4 *)(*piVar7 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar7);
  return;
}

