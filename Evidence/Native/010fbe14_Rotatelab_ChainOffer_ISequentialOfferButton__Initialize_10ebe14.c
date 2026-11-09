/* IL2CPP: Rotatelab.ChainOffer.ISequentialOfferButton$$Initialize
void Rotatelab_ChainOffer_ISequentialOfferButton__Initialize (Rotatelab_ChainOffer_ISequentialOfferButton_o* __this, UnityEngine_Sprite_o* background, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.ChainOffer.ISequentialOfferButton$$Initialize
   void Rotatelab_ChainOffer_ISequentialOfferButton__Initialize
   (Rotatelab_ChainOffer_ISequentialOfferButton_o* __this, UnityEngine_Sprite_o* background, const
   MethodInfo* method); */

void Rotatelab_ChainOffer_ISequentialOfferButton__Initialize_10ebe14(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int *piVar11;
  undefined4 uVar12;
  int *piVar13;
  int *piVar14;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  pcVar10 = (char *)(_UNK_010fbed4 + 0x10fbe2c);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010fbed8 + 0x10fbe40));
    *pcVar10 = '\x01';
  }
  iVar4 = *param_1;
  uVar8 = (uint)*(ushort *)(iVar4 + 0xb6);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar4 + 0x58) + 4);
    do {
      if (piVar9[-1] == **(int **)(_UNK_010fbedc + 0x10fbe58)) {
        puVar5 = (undefined4 *)(iVar4 + *piVar9 * 8 + 0xc0);
        goto LAB_010fbea0;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar5 = (undefined4 *)FUN_00efdb38(param_1,**(int **)(_UNK_010fbedc + 0x10fbe58),0);
LAB_010fbea0:
  piVar9 = (int *)(*(code *)*puVar5)(param_1,puVar5[1]);
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar10 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar10 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),param_2,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar10 = '\x01';
  }
  piVar13 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar14 = piVar9 + 0x20;
  iVar4 = *piVar14;
  if (*(int *)(*piVar13 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar4 = UnityEngine_Object__op_Inequality_36018e4(iVar4,0,0);
  if (iVar4 == 0) {
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Inequality_36018e4(param_2,0,0);
    if (iVar4 == 0) {
      return;
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,param_2,0);
    if (*(int *)(**(int **)(_UNK_03726bf0 + 0x3726980) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar10 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar10 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar10 = '\x01';
    }
    pfVar6 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar6[1];
    fStack_40 = fStack_40 - *pfVar6;
    *(bool *)(piVar9 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar3 = 0;
    uVar7 = UnityEngine_Sprite__get_texture_35a2e9c(param_2,0);
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Equality_36033f4(uVar7,0,0);
    if (iVar4 != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(param_2,0);
      bVar3 = iVar4 == 0;
    }
  }
  else {
    iVar4 = *piVar14;
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Inequality_36018e4(iVar4,param_2,0);
    if (iVar4 == 0) {
      return;
    }
    if (*piVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,*piVar14,0);
    fVar2 = fStack_3c;
    fVar1 = fStack_40;
    piVar11 = *(int **)(_UNK_03726be0 + 0x37268b0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Implicit_3607ff4(param_2,0);
    if (iVar4 == 0) {
      pcVar10 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar10 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar10 = '\x01';
      }
      pfVar6 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
      fStack_40 = *pfVar6;
      fStack_3c = pfVar6[1];
    }
    else {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,param_2,0);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
    }
    *(bool *)(piVar9 + 9) = fVar1 == fStack_40 && fVar2 == fStack_3c;
    if (piVar9[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar12 = 0;
    uVar7 = UnityEngine_Sprite__get_texture_35a2e9c(piVar9[0x20],0);
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar4 = UnityEngine_Object__op_Implicit_3607ff4(param_2,0);
    if (iVar4 != 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar12 = UnityEngine_Sprite__get_texture_35a2e9c(param_2,0);
    }
    if (*(int *)(*piVar13 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    bVar3 = 0;
    iVar4 = UnityEngine_Object__op_Equality_36033f4(uVar7,uVar12,0);
    if (iVar4 != 0) {
      bVar3 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar9,param_2);
      bVar3 = bVar3 ^ 1;
    }
  }
  piVar9[0x20] = param_2;
  *(byte *)((int)piVar9 + 0x25) = bVar3;
  thunk_FUN_00ec5080(piVar14,param_2);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar9);
  (**(code **)(*piVar9 + 400))(piVar9,*(undefined4 *)(*piVar9 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar9);
  return;
}

