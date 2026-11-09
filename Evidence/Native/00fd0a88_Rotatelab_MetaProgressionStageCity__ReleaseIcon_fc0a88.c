/* IL2CPP: Rotatelab.MetaProgressionStageCity$$ReleaseIcon
void Rotatelab_MetaProgressionStageCity__ReleaseIcon (Rotatelab_MetaProgressionStageCity_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03726a0c) */
/* WARNING: Removing unreachable block (ram,0x03726a30) */
/* WARNING: Removing unreachable block (ram,0x03726a34) */
/* WARNING: Removing unreachable block (ram,0x03726a4c) */
/* WARNING: Removing unreachable block (ram,0x03726a54) */
/* WARNING: Removing unreachable block (ram,0x03726b34) */
/* WARNING: Removing unreachable block (ram,0x037268fc) */
/* WARNING: Removing unreachable block (ram,0x03726924) */
/* WARNING: Removing unreachable block (ram,0x03726964) */
/* WARNING: Removing unreachable block (ram,0x03726994) */
/* WARNING: Removing unreachable block (ram,0x03726998) */
/* WARNING: Removing unreachable block (ram,0x037269ac) */
/* WARNING: Removing unreachable block (ram,0x037269c0) */
/* WARNING: Removing unreachable block (ram,0x037269f8) */
/* WARNING: Removing unreachable block (ram,0x037269fc) */
/* WARNING: Removing unreachable block (ram,0x03726a08) */
/* WARNING: Removing unreachable block (ram,0x03726a58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageCity$$ReleaseIcon
   void Rotatelab_MetaProgressionStageCity__ReleaseIcon (Rotatelab_MetaProgressionStageCity_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionStageCity__ReleaseIcon_fc0a88(int param_1)

{
  byte bVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_48 [8];
  float fStack_40;
  float fStack_3c;
  
  pcVar5 = (char *)(_UNK_00fd0b68 + 0xfd0a9c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0b6c + 0xfd0ab0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0b70 + 0xfd0abc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd0b74 + 0xfd0ac8));
    *pcVar5 = '\x01';
  }
  iVar2 = UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_object___IsValid_17b6c30
                    ((undefined4 *)(param_1 + 0x60),**(undefined4 **)(_UNK_00fd0b78 + 0xfd0ae0));
  if (iVar2 == 0) {
    return;
  }
  uVar6 = *(undefined4 *)(param_1 + 0x60);
  uVar7 = *(undefined4 *)(param_1 + 100);
  uVar8 = *(undefined4 *)(param_1 + 0x68);
  if (*(int *)(**(int **)(_UNK_00fd0b7c + 0xfd0b00) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_AddressableAssets_Addressables__Release_object__13a0e24
            (uVar6,uVar7,uVar8,**(undefined4 **)(_UNK_00fd0b80 + 0xfd0b28));
  piVar4 = *(int **)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_03726bd0 + 0x37267f0);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd4 + 0x3726804),0,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726bd8 + 0x3726810));
    *pcVar5 = '\x01';
  }
  piVar9 = *(int **)(_UNK_03726bdc + 0x3726828);
  piVar10 = piVar4 + 0x20;
  iVar2 = *piVar10;
  if (*(int *)(*piVar9 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar2,0,0);
  if (iVar2 == 0) {
    if (*(int *)(*piVar9 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(0,0,0);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  else {
    iVar2 = *piVar10;
    if (*(int *)(*piVar9 + 0x74) == 0) {
      thunk_FUN_00ec3934();
    }
    iVar2 = UnityEngine_Object__op_Inequality_36018e4(iVar2,0,0);
    if (iVar2 != 0) {
      if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Sprite__get_rect_35a2c6c(auStack_48,*piVar10,0);
      if (*(int *)(**(int **)(_UNK_03726be0 + 0x37268b0) + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      if (*(int *)(*piVar9 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Implicit_3607ff4(0,0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar5 = (char *)(_UNK_03726be4 + 0x3726a7c);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03726be8 + 0x3726a90));
        *pcVar5 = '\x01';
      }
      pfVar3 = *(float **)(**(int **)(_UNK_03726bec + 0x3726aa4) + 0x5c);
      *(bool *)(piVar4 + 9) = fStack_40 == *pfVar3 && fStack_3c == pfVar3[1];
      if (piVar4[0x20] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = UnityEngine_Sprite__get_texture_35a2e9c(piVar4[0x20],0);
      if (*(int *)(*piVar9 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Implicit_3607ff4(0,0);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*piVar9 + 0x74) == 0) {
        thunk_FUN_00ec3934();
      }
      bVar1 = 0;
      iVar2 = UnityEngine_Object__op_Equality_36033f4(uVar6,0,0);
      if (iVar2 != 0) {
        bVar1 = UnityEngine_UI_Image__CheckSecondaryTexturesChanged_37217f8(piVar4,0);
        bVar1 = bVar1 ^ 1;
      }
      piVar4[0x20] = 0;
      *(byte *)((int)piVar4 + 0x25) = bVar1;
      thunk_FUN_00ec5080(piVar10,0);
      UnityEngine_UI_Image___set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0_3721888(piVar4);
      (**(code **)(*piVar4 + 400))(piVar4,*(undefined4 *)(*piVar4 + 0x194));
      UnityEngine_UI_Image__TrackSprite_3721938(piVar4);
    }
  }
  return;
}

