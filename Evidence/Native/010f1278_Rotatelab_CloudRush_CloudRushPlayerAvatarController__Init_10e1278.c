/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$Init
void Rotatelab_CloudRush_CloudRushPlayerAvatarController__Init (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, bool isLocalPlayer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushPlayerAvatarController$$Init
   void Rotatelab_CloudRush_CloudRushPlayerAvatarController__Init
   (Rotatelab_CloudRush_CloudRushPlayerAvatarController_o* __this, bool isLocalPlayer, const
   MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushPlayerAvatarController__Init_10e1278
               (int param_1,undefined1 param_2)

{
  char cVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  pcVar8 = (char *)(_UNK_010f1324 + 0x10f1290);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1328 + 0x10f12a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f132c + 0x10f12b0));
    *pcVar8 = '\x01';
  }
  iVar11 = *(int *)(param_1 + 0x40);
  iVar9 = *(int *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x44) = param_2;
  if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = UnityEngine_Random__Range_35f8b14(0,*(undefined4 *)(iVar11 + 0xc),0);
  uVar5 = System_Collections_Generic_List_object___get_Item_267d814
                    (iVar11,uVar5,**(undefined4 **)(_UNK_010f1330 + 0x10f12f0));
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar9,uVar5,0);
  pcVar8 = (char *)(_UNK_010f5acc + 0x10f59cc);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5ad0 + 0x10f59e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5ad4 + 0x10f59ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f5ad8 + 0x10f59f8));
    *pcVar8 = '\x01';
  }
  puVar10 = *(undefined4 **)(_UNK_010f5adc + 0x10f5a0c);
  cVar1 = *(char *)(param_1 + 0x44);
  piVar7 = *(int **)(param_1 + 0x1c);
  iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
  if (cVar1 == '\0') {
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar11 = *(int *)(iVar9 + 0x28);
    iVar9 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar9 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = UnityEngine_Random__Range_35f8b14(0,*(undefined4 *)(*(int *)(iVar9 + 0x28) + 0xc),0);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar11,uVar5,**(undefined4 **)(_UNK_010f5ae0 + 0x10f5aa0));
  }
  else {
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar9 + 0x10);
  }
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar8 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar9,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar8 = '\x01';
  }
  piVar14 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar15 = piVar7 + 0x20;
  iVar11 = *piVar15;
  if (*(int *)(*piVar14 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar11 = UnityEngine_Object__op_Inequality_36018e4(iVar11,0,0);
  if (iVar11 == 0) {
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Inequality_36018e4(iVar9,0,0);
    if (iVar11 == 0) {
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
    pcVar8 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar8 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar8 = '\x01';
    }
    pfVar6 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar6[1];
    fStack_40 = fStack_40 - *pfVar6;
    *(bool *)(piVar7 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar4 = 0;
    uVar5 = UnityEngine_Sprite__get_texture_35a2e9c(iVar9,0);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Equality_36033f4(uVar5,0,0);
    if (iVar11 != 0) {
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar9,0);
      bVar4 = iVar11 == 0;
    }
  }
  else {
    iVar11 = *piVar15;
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Inequality_36018e4(iVar11,iVar9,0);
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
    iVar11 = UnityEngine_Object__op_Implicit_3607ff4(iVar9,0);
    if (iVar11 == 0) {
      pcVar8 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar8 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar8 = '\x01';
      }
      pfVar6 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
      fStack_40 = *pfVar6;
      fStack_3c = pfVar6[1];
    }
    else {
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,iVar9,0);
      if (*(int *)(*piVar12 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
    }
    *(bool *)(piVar7 + 9) = fVar2 == fStack_40 && fVar3 == fStack_3c;
    if (piVar7[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = 0;
    uVar5 = UnityEngine_Sprite__get_texture_35a2e9c(piVar7[0x20],0);
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar11 = UnityEngine_Object__op_Implicit_3607ff4(iVar9,0);
    if (iVar11 != 0) {
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar13 = UnityEngine_Sprite__get_texture_35a2e9c(iVar9,0);
    }
    if (*(int *)(*piVar14 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    bVar4 = 0;
    iVar11 = UnityEngine_Object__op_Equality_36033f4(uVar5,uVar13,0);
    if (iVar11 != 0) {
      bVar4 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar7,iVar9);
      bVar4 = bVar4 ^ 1;
    }
  }
  piVar7[0x20] = iVar9;
  *(byte *)((int)piVar7 + 0x25) = bVar4;
  thunk_FUN_00ec5080(piVar15,iVar9);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar7);
  (**(code **)(*piVar7 + 400))(piVar7,*(undefined4 *)(*piVar7 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar7);
  return;
}

