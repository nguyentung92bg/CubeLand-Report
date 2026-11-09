/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$OnScrollRectScrolled
void Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnScrollRectScrolled (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, UnityEngine_Vector2_o normalizedPosition, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController$$OnScrollRectScrolled
   void Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnScrollRectScrolled
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController_o* __this, UnityEngine_Vector2_o
   normalizedPosition, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController__OnScrollRectScrolled_10b0364(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  undefined1 auStack_40 [4];
  float fStack_3c;
  float fStack_34;
  
  pcVar3 = (char *)(_UNK_010c06b0 + 0x10c0380);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c06b4 + 0x10c0394));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c06b8 + 0x10c03a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c06bc + 0x10c03ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c06c0 + 0x10c03b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c06c4 + 0x10c03c4));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x10);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_anchoredPosition_3613500(auStack_40,iVar4,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c),
                                     (byte)(in_fpscr >> 0x16) & 3);
  fVar9 = 5.0 - fStack_3c;
  fVar8 = -(*(float *)(param_1 + 0x2c) * fVar8);
  if (fVar8 <= fVar9) {
    piVar6 = *(int **)(_UNK_010c06cc + 0x10c0474);
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar4 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar5,0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__get_rect_3612fd0(auStack_40,iVar4,0);
    fVar9 = fStack_34;
    piVar7 = *(int **)(_UNK_010c06d0 + 0x10c04c4);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    if ((-fStack_3c - fVar9) + *(float *)(param_1 + 0x2c) <= fVar8) {
      if (*(char *)(param_1 + 0x3c) == '\0') {
        iVar4 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x38);
        if (*(int *)(*piVar6 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar4 = 0;
        uVar5 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar5,0);
        Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar5,fVar8,0);
      }
      goto LAB_010c057c;
    }
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(*piVar6 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar5,0);
    iVar4 = Rotatelab_Extensions__RectTransform_fc1bd0(*(undefined4 *)(param_1 + 0x1c),0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_RectTransform__get_rect_3612fd0(auStack_40,iVar4,0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    fVar9 = (-fStack_3c - fStack_34) + *(float *)(param_1 + 0x2c);
  }
  else {
    uVar5 = *(undefined4 *)(param_1 + 0x38);
    if (*(int *)(**(int **)(_UNK_010c06c8 + 0x10c0440) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar5 = Rotatelab_Extensions__RectTransform_fc1bd0(uVar5,0);
  }
  Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar5,fVar9,0);
  iVar4 = 1;
LAB_010c057c:
  if (*(int *)(**(int **)(_UNK_010c06d4 + 0x10c058c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Utilities__TryChangeValue_bool__1663d40
                    (param_1 + 0x3c,iVar4,**(undefined4 **)(_UNK_010c06d8 + 0x10c05ac));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x38),0);
    uVar5 = 0x3f800000;
    if (iVar4 != 0) {
      uVar5 = _UNK_010c06ac;
    }
    if (*(int *)(**(int **)(_UNK_010c06dc + 0x10c05f8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    PrimeTween_Tween__Scale_2ce4684(auStack_40,uVar2,uVar5,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  }
  return;
}

