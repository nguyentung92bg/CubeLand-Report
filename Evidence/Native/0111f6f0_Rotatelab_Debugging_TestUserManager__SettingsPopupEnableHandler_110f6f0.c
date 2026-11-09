/* IL2CPP: Rotatelab.Debugging.TestUserManager$$SettingsPopupEnableHandler
void Rotatelab_Debugging_TestUserManager__SettingsPopupEnableHandler (Rotatelab_Debugging_TestUserManager_o* __this, bool isEnable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x029a327c) */
/* WARNING: Removing unreachable block (ram,0x029a3288) */
/* WARNING: Removing unreachable block (ram,0x029a328c) */
/* WARNING: Removing unreachable block (ram,0x029a33e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Debugging.TestUserManager$$SettingsPopupEnableHandler
   void Rotatelab_Debugging_TestUserManager__SettingsPopupEnableHandler
   (Rotatelab_Debugging_TestUserManager_o* __this, bool isEnable, const MethodInfo* method); */

void Rotatelab_Debugging_TestUserManager__SettingsPopupEnableHandler_110f6f0
               (int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
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
  if (param_2 == 0) {
    if ((*(uint *)(param_1 + 0x2c) & 0x80000001) != 1) {
      return;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(**(int **)(_UNK_0111f8fc + 0x111f800) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Object__op_Inequality_36018e4(uVar5,0,0);
    if (iVar3 != 0) {
      piVar8 = *(int **)(param_1 + 0x24);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar5 = (**(code **)(*piVar8 + 0x2a8))(piVar8,*(undefined4 *)(*piVar8 + 0x2ac));
      iVar3 = System_String__op_Equality_2a0975c
                        (uVar5,**(undefined4 **)(_UNK_0111f900 + 0x111f860),0);
      if (iVar3 != 0) {
        if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        IngameDebugConsole_DebugLogPopup__Hide_299149c(*(int *)(param_1 + 0x20),0);
      }
    }
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),0,0);
    iVar3 = *(int *)(param_1 + 0x18);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar7 = (char *)(_UNK_039b3bbc + 0x39b3b40);
    if (*pcVar7 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039b3bc0 + 0x39b3b54),0,0);
      *pcVar7 = '\x01';
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(iVar3 + 8);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar3,0);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(_UNK_039b3bc4 + 0x39b3b8c);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_039b3bc8 + 0x39b3b9c);
      *(code **)(_UNK_039b3bcc + 0x39b3bac) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x039b3bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar6,0);
    return;
  }
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) + 1;
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

