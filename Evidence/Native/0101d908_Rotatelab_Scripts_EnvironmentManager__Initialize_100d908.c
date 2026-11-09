/* IL2CPP: Rotatelab.Scripts.EnvironmentManager$$Initialize
void Rotatelab_Scripts_EnvironmentManager__Initialize (Rotatelab_Scripts_EnvironmentManager_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.EnvironmentManager$$Initialize
   void Rotatelab_Scripts_EnvironmentManager__Initialize (Rotatelab_Scripts_EnvironmentManager_o*
   __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method); */

void Rotatelab_Scripts_EnvironmentManager__Initialize_100d908(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  float *pfVar4;
  undefined4 uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  undefined1 auStack_78 [4];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 in_stack_ffffffc8;
  int iVar13;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_EnvironmentManager__CurrentEnvironmentData_100d9e8
            (auStack_78,param_1,*(undefined4 *)(param_2 + 0x50));
  iVar13 = (int)((ulonglong)in_stack_ffffffc8 >> 0x20);
  Rotatelab_Scripts_EnvironmentManager__UpdateColor_100da88
            (param_1,uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,uStack_60,uStack_5c,uStack_58
             ,uStack_54,uStack_50,uStack_4c,uStack_48,uStack_44,fStack_40,fStack_3c,
             (int)in_stack_ffffffc8);
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar7 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),iVar13,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar7 = '\x01';
  }
  piVar11 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar12 = piVar6 + 0x20;
  iVar8 = *piVar12;
  if (*(int *)(*piVar11 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar8 = UnityEngine_Object__op_Inequality_36018e4(iVar8,0,0);
  if (iVar8 == 0) {
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__op_Inequality_36018e4(iVar13,0,0);
    if (iVar8 == 0) {
      return;
    }
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(&uStack_48,iVar13,0);
    if (*(int *)(**(int **)(_UNK_03726bf0 + 0x3726980) + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    pcVar7 = (char *)(_UNK_03726bf4 + 0x37269a4);
    if (*pcVar7 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bf8 + 0x37269b8));
      *pcVar7 = '\x01';
    }
    pfVar4 = *(float **)(**(int **)(_UNK_03726bfc + 0x37269cc) + 0x5c);
    fStack_3c = fStack_3c - pfVar4[1];
    fStack_40 = fStack_40 - *pfVar4;
    *(bool *)(piVar6 + 9) = fStack_3c * fStack_3c + fStack_40 * fStack_40 < _UNK_03726bcc;
    if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar3 = 0;
    uVar5 = UnityEngine_Sprite__get_texture_35a2e9c(iVar13,0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__op_Equality_36033f4(uVar5,0,0);
    if (iVar8 != 0) {
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = UnityEngine_Sprite__GetSecondaryTextureCount_35a3348(iVar13,0);
      bVar3 = iVar8 == 0;
    }
  }
  else {
    iVar8 = *piVar12;
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__op_Inequality_36018e4(iVar8,iVar13,0);
    if (iVar8 == 0) {
      return;
    }
    if (*piVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Sprite__get_rect_35a2c6c(&uStack_48,*piVar12,0);
    fVar2 = fStack_3c;
    fVar1 = fStack_40;
    piVar9 = *(int **)(_UNK_03726be0 + 0x37268b0);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__op_Implicit_3607ff4(iVar13,0);
    if (iVar8 == 0) {
      pcVar7 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar7 = '\x01';
      }
      pfVar4 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
      fStack_40 = *pfVar4;
      fStack_3c = pfVar4[1];
    }
    else {
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(&uStack_48,iVar13,0);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
    }
    *(bool *)(piVar6 + 9) = fVar1 == fStack_40 && fVar2 == fStack_3c;
    if (piVar6[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar10 = 0;
    uVar5 = UnityEngine_Sprite__get_texture_35a2e9c(piVar6[0x20],0);
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar8 = UnityEngine_Object__op_Implicit_3607ff4(iVar13,0);
    if (iVar8 != 0) {
      if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar10 = UnityEngine_Sprite__get_texture_35a2e9c(iVar13,0);
    }
    if (*(int *)(*piVar11 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    bVar3 = 0;
    iVar8 = UnityEngine_Object__op_Equality_36033f4(uVar5,uVar10,0);
    if (iVar8 != 0) {
      bVar3 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar6,iVar13);
      bVar3 = bVar3 ^ 1;
    }
  }
  piVar6[0x20] = iVar13;
  *(byte *)((int)piVar6 + 0x25) = bVar3;
  thunk_FUN_00ec5080(piVar12,iVar13);
  UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar6);
  (**(code **)(*piVar6 + 400))(piVar6,*(undefined4 *)(*piVar6 + 0x194));
  UnityEngine_UI_Image__TrackSprite_3721938(piVar6);
  return;
}

