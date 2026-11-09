/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$OnProfileChangedHandler
void Rotatelab_CloudRush_CloudRushPlayerAvatarController__OnProfileChangedHandler (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$OnProfileChangedHandler
   void Rotatelab_CloudRush_CloudRushPlayerAvatarController__OnProfileChangedHandler
   (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushPlayerAvatarController__OnProfileChangedHandler_10e5ff4
               (int param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  pcVar9 = (char *)(_UNK_010f5acc + 0x10f59cc);
  if (*pcVar9 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5ad0 + 0x10f59e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5ad4 + 0x10f59ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5ad8 + 0x10f59f8));
    *pcVar9 = '\x01';
  }
  puVar10 = *(undefined4 **)(_UNK_010f5adc + 0x10f5a0c);
  cVar1 = *(char *)(param_1 + 0x44);
  piVar8 = *(int **)(param_1 + 0x1c);
  iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (cVar1 == '\0') {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(iVar5 + 0x28);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = UnityEngine_Random__Range_35f8b14(0,*(undefined4 *)(*(int *)(iVar5 + 0x28) + 0xc),0);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar11,uVar7,**(undefined4 **)(_UNK_010f5ae0 + 0x10f5aa0));
  }
  else {
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(iVar5 + 0x10);
  }
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar9 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar9 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar5,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar9 = '\x01';
  }
  piVar14 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar15 = piVar8 + 0x20;
  iVar11 = *piVar15;
  if (*(int *)(*piVar14 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar11 = UnityEngine_Object__op_Inequality_36018e4(iVar11,0,0);
  if (iVar11 == 0) {
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Inequality_36018e4(iVar5,0,0);
    if (iVar11 == 0) {
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
    pcVar9 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar9 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar9 = '\x01';
    }
    pfVar6 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar6[1];
    fStack_40 = fStack_40 - *pfVar6;
    *(bool *)(piVar8 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar4 = 0;
    uVar7 = UnityEngine_Sprite__get_texture_35a2e9c(iVar5,0);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Equality_36033f4(uVar7,0,0);
    if (iVar11 != 0) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar5,0);
      bVar4 = iVar11 == 0;
    }
  }
  else {
    iVar11 = *piVar15;
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Inequality_36018e4(iVar11,iVar5,0);
    if (iVar11 == 0) {
      return;
    }
    if (*piVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,*piVar15,0);
    fVar3 = fStack_3c;
    fVar2 = fStack_40;
    piVar12 = *(int **)(_UNK_03726be0 + 0x37268b0);
    if (*(int *)(*piVar12 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Implicit_3607ff4(iVar5,0);
    if (iVar11 == 0) {
      pcVar9 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar9 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar9 = '\x01';
      }
      pfVar6 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
      fStack_40 = *pfVar6;
      fStack_3c = pfVar6[1];
    }
    else {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar5,0);
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
    uVar7 = UnityEngine_Sprite__get_texture_35a2e9c(piVar8[0x20],0);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Implicit_3607ff4(iVar5,0);
    if (iVar11 != 0) {
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar13 = UnityEngine_Sprite__get_texture_35a2e9c(iVar5,0);
    }
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    bVar4 = 0;
    iVar11 = UnityEngine_Object__op_Equality_36033f4(uVar7,uVar13,0);
    if (iVar11 != 0) {
      bVar4 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar8,iVar5);
      bVar4 = bVar4 ^ 1;
    }
  }
  piVar8[0x20] = iVar5;
  *(byte *)((int)piVar8 + 0x25) = bVar4;
  thunk_FUN_00ec5080(piVar15,iVar5);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar8);
  (**(code **)(*piVar8 + 400))(piVar8,*(undefined4 *)(*piVar8 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar8);
  return;
}

