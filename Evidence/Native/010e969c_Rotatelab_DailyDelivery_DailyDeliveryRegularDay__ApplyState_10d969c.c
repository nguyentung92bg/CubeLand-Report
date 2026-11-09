/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryRegularDay$$ApplyState
void Rotatelab_DailyDelivery_DailyDeliveryRegularDay__ApplyState (Rotatelab_DailyDelivery_DailyDeliveryRegularDay_o* __this, int32_t dayState, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryRegularDay$$ApplyState
   void Rotatelab_DailyDelivery_DailyDeliveryRegularDay__ApplyState
   (Rotatelab_DailyDelivery_DailyDeliveryRegularDay_o* __this, int32_t dayState, const MethodInfo*
   method); */

void Rotatelab_DailyDelivery_DailyDeliveryRegularDay__ApplyState_10d969c(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  char *pcVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  int *piVar16;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  Rotatelab_DailyDelivery_DailyDeliveryDayBase__ApplyState_10d9160();
  if (param_2 == 1) {
    puVar4 = (undefined4 *)(param_1 + 0x3c);
  }
  else if (param_2 == 2) {
    puVar4 = (undefined4 *)(param_1 + 0x38);
  }
  else {
    puVar4 = (undefined4 *)(param_1 + 0x40);
  }
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(*(int *)(param_1 + 0x34),*puVar4,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x44),0);
  if (param_2 == 0) {
    pcVar12 = (char *)(_UNK_010e9818 + 0x10e976c);
    if (*pcVar12 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010e981c + 0x10e9780));
      *pcVar12 = '\x01';
    }
    puVar4 = *(undefined4 **)(**(int **)(_UNK_010e9820 + 0x10e9794) + 0x5c);
    puVar9 = puVar4 + 2;
    puVar10 = puVar4 + 1;
  }
  else {
    pcVar12 = (char *)(_UNK_010e980c + 0x10e9724);
    if (*pcVar12 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010e9810 + 0x10e9738));
      *pcVar12 = '\x01';
    }
    iVar6 = *(int *)(**(int **)(_UNK_010e9814 + 0x10e974c) + 0x5c);
    puVar9 = (undefined4 *)(iVar6 + 0x14);
    puVar10 = (undefined4 *)(iVar6 + 0x10);
    puVar4 = (undefined4 *)(iVar6 + 0xc);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar5,*puVar4,*puVar10,*puVar9);
  iVar5 = 0x4c;
  if (param_2 == 2) {
    iVar5 = 0x48;
  }
  iVar5 = *(int *)(param_1 + iVar5);
  piVar11 = *(int **)(param_1 + 0x44);
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar12 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar12 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar5,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar12 = '\x01';
  }
  piVar15 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar16 = piVar11 + 0x20;
  iVar6 = *piVar16;
  if (*(int *)(*piVar15 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar6 = UnityEngine_Object__op_Inequality_36018e4(iVar6,0,0);
  if (iVar6 == 0) {
    if (*(int *)(*piVar15 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__op_Inequality_36018e4(iVar5,0,0);
    if (iVar6 == 0) {
      return;
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar5,0);
    if (*(int *)(**(int **)(_UNK_03726bf0 + 0x3726980) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar12 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar12 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar12 = '\x01';
    }
    pfVar7 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar7[1];
    fStack_40 = fStack_40 - *pfVar7;
    *(bool *)(piVar11 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar3 = 0;
    uVar8 = UnityEngine_Sprite__get_texture_35a2e9c(iVar5,0);
    if (*(int *)(*piVar15 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__op_Equality_36033f4(uVar8,0,0);
    if (iVar6 != 0) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar5,0);
      bVar3 = iVar6 == 0;
    }
  }
  else {
    iVar6 = *piVar16;
    if (*(int *)(*piVar15 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__op_Inequality_36018e4(iVar6,iVar5,0);
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
    iVar6 = UnityEngine_Object__op_Implicit_3607ff4(iVar5,0);
    if (iVar6 == 0) {
      pcVar12 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar12 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar12 = '\x01';
      }
      pfVar7 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
      fStack_40 = *pfVar7;
      fStack_3c = pfVar7[1];
    }
    else {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar5,0);
      if (*(int *)(*piVar13 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
    }
    *(bool *)(piVar11 + 9) = fVar1 == fStack_40 && fVar2 == fStack_3c;
    if (piVar11[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar14 = 0;
    uVar8 = UnityEngine_Sprite__get_texture_35a2e9c(piVar11[0x20],0);
    if (*(int *)(*piVar15 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__op_Implicit_3607ff4(iVar5,0);
    if (iVar6 != 0) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar14 = UnityEngine_Sprite__get_texture_35a2e9c(iVar5,0);
    }
    if (*(int *)(*piVar15 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    bVar3 = 0;
    iVar6 = UnityEngine_Object__op_Equality_36033f4(uVar8,uVar14,0);
    if (iVar6 != 0) {
      bVar3 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar11,iVar5);
      bVar3 = bVar3 ^ 1;
    }
  }
  piVar11[0x20] = iVar5;
  *(byte *)((int)piVar11 + 0x25) = bVar3;
  thunk_FUN_00ec5080(piVar16,iVar5);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar11);
  (**(code **)(*piVar11 + 400))(piVar11,*(undefined4 *)(*piVar11 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar11);
  return;
}

