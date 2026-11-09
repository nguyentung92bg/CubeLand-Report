/* IL2CPP: Rotatelab.Debugging.TestUserManager$$OnSettingsPopupOpenedHandler
void Rotatelab_Debugging_TestUserManager__OnSettingsPopupOpenedHandler (Rotatelab_Debugging_TestUserManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029a33e4) */
/* WARNING: Removing unreachable block (ram,0x029a327c) */
/* WARNING: Removing unreachable block (ram,0x029a3288) */
/* WARNING: Removing unreachable block (ram,0x029a328c) */
/* WARNING: Removing unreachable block (ram,0x0111f7e8) */
/* WARNING: Removing unreachable block (ram,0x0111f7f0) */
/* WARNING: Removing unreachable block (ram,0x0111f7f4) */
/* WARNING: Removing unreachable block (ram,0x0111f810) */
/* WARNING: Removing unreachable block (ram,0x0111f814) */
/* WARNING: Removing unreachable block (ram,0x0111f82c) */
/* WARNING: Removing unreachable block (ram,0x0111f838) */
/* WARNING: Removing unreachable block (ram,0x0111f83c) */
/* WARNING: Removing unreachable block (ram,0x0111f86c) */
/* WARNING: Removing unreachable block (ram,0x0111f878) */
/* WARNING: Removing unreachable block (ram,0x0111f87c) */
/* WARNING: Removing unreachable block (ram,0x0111f888) */
/* WARNING: Removing unreachable block (ram,0x0111f894) */
/* WARNING: Removing unreachable block (ram,0x0111f898) */
/* WARNING: Removing unreachable block (ram,0x0111f8b4) */
/* WARNING: Removing unreachable block (ram,0x0111f8b8) */
/* WARNING: Removing unreachable block (ram,0x039b3b48) */
/* WARNING: Removing unreachable block (ram,0x039b3b5c) */
/* WARNING: Removing unreachable block (ram,0x039b3b64) */
/* WARNING: Removing unreachable block (ram,0x039b3b68) */
/* WARNING: Removing unreachable block (ram,0x039b3b74) */
/* WARNING: Removing unreachable block (ram,0x039b3b80) */
/* WARNING: Removing unreachable block (ram,0x039b3b90) */
/* WARNING: Removing unreachable block (ram,0x039b3bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.TestUserManager$$OnSettingsPopupOpenedHandler
   void Rotatelab_Debugging_TestUserManager__OnSettingsPopupOpenedHandler
   (Rotatelab_Debugging_TestUserManager_o* __this, const MethodInfo* method); */

void Rotatelab_Debugging_TestUserManager__OnSettingsPopupOpenedHandler_110f904(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  
  pcVar7 = (char *)(_UNK_0111f8ec + 0x111f708);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f8f0 + 0x111f71c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111f8f4 + 0x111f728));
    *pcVar7 = '\x01';
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  if (*(char *)(param_1 + 0x28) != '\0') {
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),0x3f800000,0);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*(int *)(param_1 + 0x18),1,0);
  }
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  if (*(int *)(**(int **)(_UNK_0111f8f8 + 0x111f79c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar5,0,0);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(*(int *)(param_1 + 0x20) + 0x90) == '\0') {
      iVar3 = *(int *)(param_1 + 0x20);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4(iVar3,0);
      }
      UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*(int *)(iVar3 + 0x20),1,0);
      if (*(int *)(iVar3 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_CanvasGroup__set_alpha_39a3758
                (*(int *)(iVar3 + 0x20),*(undefined4 *)(*(int *)(iVar3 + 0x24) + 0x24),0);
      *(undefined1 *)(iVar3 + 0x90) = 1;
      IngameDebugConsole_DebugLogPopup__ResetValues_2995f04(iVar3);
      pcVar7 = (char *)(_UNK_029a3424 + 0x29a313c);
      if (*pcVar7 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_029a3428 + 0x29a3150));
        *pcVar7 = '\x01';
      }
      if (*(int *)(iVar3 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar6 = *(int *)(*(int *)(iVar3 + 0x24) + 0xd4);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__get_rect_3612fd0(&fStack_58,iVar6,0);
      fVar2 = fStack_4c;
      fVar1 = fStack_50;
      piVar8 = *(int **)(_UNK_029a342c + 0x29a3194);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      if (*(int *)(iVar3 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar17 = _UNK_029a3420;
      fVar18 = _UNK_029a3420;
      fVar9 = fVar2;
      fVar12 = fVar1;
      if (*(char *)(*(int *)(iVar3 + 0x24) + 0x65) != '\0') {
        UnityEngine_Screen__get_safeArea_35bd318(&fStack_58,0);
        uVar5 = UnityEngine_Screen__get_width_35bd080(0);
        uVar4 = UnityEngine_Screen__get_height_35bd0c4(0);
        if (*(int *)(*piVar8 + 0x74) == 0) {
          FUN_00ec3934();
        }
        fVar9 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
        fVar12 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
        fVar17 = fVar2 * (fStack_54 / fVar9);
        fVar18 = fVar1 * (fStack_58 / fVar12);
        fVar9 = fVar2 * (fStack_4c / fVar9);
        fVar12 = fVar1 * (fStack_50 / fVar12);
      }
      fVar10 = fVar2 * 0.5 + fVar9 * *(float *)(iVar3 + 0x88);
      fVar13 = fVar1 * 0.5 + fVar12 * *(float *)(iVar3 + 0x84);
      fVar15 = fVar9 - fVar10;
      fVar16 = fVar12 - fVar13;
      fVar14 = fVar15;
      if (fVar10 < fVar15) {
        fVar14 = fVar10;
      }
      fVar11 = fVar16;
      if (fVar13 < fVar16) {
        fVar11 = fVar13;
      }
      if (fVar14 <= fVar11) {
        fVar16 = *(float *)(iVar3 + 0x14);
        fVar14 = fVar13;
        if (fVar12 - fVar16 < fVar13) {
          fVar14 = fVar12 - fVar16;
        }
        fVar11 = fVar9 - *(float *)(iVar3 + 0x18);
        if (fVar10 < fVar15) {
          fVar11 = *(float *)(iVar3 + 0x18);
        }
        if (fVar13 < fVar16) {
          fVar14 = fVar16;
        }
      }
      else {
        fVar15 = *(float *)(iVar3 + 0x18);
        fVar11 = fVar10;
        if (fVar9 - fVar15 < fVar10) {
          fVar11 = fVar9 - fVar15;
        }
        fVar14 = fVar12 - *(float *)(iVar3 + 0x14);
        if (fVar13 < fVar16) {
          fVar14 = *(float *)(iVar3 + 0x14);
        }
        if (fVar10 < fVar15) {
          fVar11 = fVar15;
        }
      }
      fVar11 = fVar11 - fVar2 * 0.5;
      fVar14 = fVar14 - fVar1 * 0.5;
      iVar6 = *(int *)(iVar3 + 0x8c);
      *(float *)(iVar3 + 0x84) = fVar14 / fVar12;
      *(float *)(iVar3 + 0x88) = fVar11 / fVar9;
      if (iVar6 != 0) {
        UnityEngine_MonoBehaviour__StopCoroutine_360440c(iVar3,iVar6,0);
        *(undefined4 *)(iVar3 + 0x8c) = 0;
        thunk_FUN_00ec5080((int *)(iVar3 + 0x8c),0);
      }
      if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_RectTransform__set_anchoredPosition_3613610
                (*(int *)(iVar3 + 0x10),fVar18 + fVar14,fVar17 + fVar11,0);
      return;
    }
  }
  return;
}

