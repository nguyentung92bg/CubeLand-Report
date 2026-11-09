/* IL2CPP: Rotatelab.Scripts.BotClickHand$$Awake
void Rotatelab_Scripts_BotClickHand__Awake (Rotatelab_Scripts_BotClickHand_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BotClickHand$$Awake
   void Rotatelab_Scripts_BotClickHand__Awake (Rotatelab_Scripts_BotClickHand_o* __this, const
   MethodInfo* method); */

void Rotatelab_Scripts_BotClickHand__Awake_ff3cf8(int param_1)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined4 uVar4;
  float *pfVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  pcVar7 = (char *)(_UNK_01003d80 + 0x1003d0c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01003d84 + 0x1003d20));
    *pcVar7 = '\x01';
  }
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01003d88 + 0x1003d34));
  UnityEngine_WaitForSeconds___ctor_360c704(uVar4,uVar8,0);
  *(undefined4 *)(param_1 + 0x30) = uVar4;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x30),uVar4);
  piVar6 = *(int **)(param_1 + 0x10);
  iVar9 = *(int *)(param_1 + 0x14);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar9,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar7 = '\x01';
  }
  piVar12 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar13 = piVar6 + 0x20;
  iVar10 = *piVar13;
  if (*(int *)(*piVar12 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar10,0,0);
  if (iVar10 == 0) {
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar9,0,0);
    if (iVar10 == 0) {
      return;
    }
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar9,0);
    if (*(int *)(**(int **)(_UNK_03726bf0 + 0x3726980) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar7 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar7 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar7 = '\x01';
    }
    pfVar5 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar5[1];
    fStack_40 = fStack_40 - *pfVar5;
    *(bool *)(piVar6 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar3 = 0;
    uVar4 = UnityEngine_Sprite__get_texture_35a2e9c(iVar9,0);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Equality_36033f4(uVar4,0,0);
    if (iVar10 != 0) {
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar9,0);
      bVar3 = iVar10 == 0;
    }
  }
  else {
    iVar10 = *piVar13;
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Inequality_36018e4(iVar10,iVar9,0);
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
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Implicit_3607ff4(iVar9,0);
    if (iVar10 == 0) {
      pcVar7 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar7 = '\x01';
      }
      pfVar5 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
      fStack_40 = *pfVar5;
      fStack_3c = pfVar5[1];
    }
    else {
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar9,0);
      if (*(int *)(*piVar11 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
    }
    *(bool *)(piVar6 + 9) = fVar1 == fStack_40 && fVar2 == fStack_3c;
    if (piVar6[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = 0;
    uVar4 = UnityEngine_Sprite__get_texture_35a2e9c(piVar6[0x20],0);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar10 = UnityEngine_Object__op_Implicit_3607ff4(iVar9,0);
    if (iVar10 != 0) {
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = UnityEngine_Sprite__get_texture_35a2e9c(iVar9,0);
    }
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    bVar3 = 0;
    iVar10 = UnityEngine_Object__op_Equality_36033f4(uVar4,uVar8,0);
    if (iVar10 != 0) {
      bVar3 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar6,iVar9);
      bVar3 = bVar3 ^ 1;
    }
  }
  piVar6[0x20] = iVar9;
  *(byte *)((int)piVar6 + 0x25) = bVar3;
  thunk_FUN_00ec5080(piVar13,iVar9);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar6);
  (**(code **)(*piVar6 + 400))(piVar6,*(undefined4 *)(*piVar6 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar6);
  return;
}

