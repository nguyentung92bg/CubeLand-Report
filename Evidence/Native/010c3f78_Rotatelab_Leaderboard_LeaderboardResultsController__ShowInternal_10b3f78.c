/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$ShowInternal
void Rotatelab_Leaderboard_LeaderboardResultsController__ShowInternal (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$ShowInternal
   void Rotatelab_Leaderboard_LeaderboardResultsController__ShowInternal
   (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardResultsController__ShowInternal_10b3f78(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  uint in_fpscr;
  undefined4 uVar14;
  undefined4 uStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  pcVar10 = (char *)(_UNK_010c4564 + 0x10c3f94);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4568 + 0x10c3fa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c456c + 0x10c3fb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4570 + 0x10c3fc0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4574 + 0x10c3fcc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4578 + 0x10c3fd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c457c + 0x10c3fe4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4580 + 0x10c3ff0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c4584 + 0x10c3ffc));
    *pcVar10 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_Leaderboard_CycleData__get_PlayerRank_10ae0e0(*(int *)(param_1 + 0x10));
  piVar12 = *(int **)(param_1 + 0x14);
  if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *piVar12;
  piVar13 = *(int **)(_UNK_010c4588 + 0x10c4040);
  uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
  iVar7 = *piVar13;
  if (uVar8 != 0) {
    piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
    do {
      if (piVar9[-1] == iVar7) {
        puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xf8);
        goto LAB_010c4088;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 2;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined4 *)FUN_00efdb38(piVar12,iVar7,7);
LAB_010c4088:
  uVar8 = (*(code *)*puVar4)(piVar12,uVar2,puVar4[1]);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar14 = VectorSignedToFloat(uVar2 + 1,(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34
            (*(int *)(param_1 + 0x20),**(undefined4 **)(_UNK_010c458c + 0x10c40d0),uVar14,0);
  if (*(int *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x30),3 < (int)uVar2,0);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x3c),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,uVar8 ^ 1,0);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x40),uVar8,0);
  if (uVar8 != 0) {
    piVar12 = *(int **)(param_1 + 0x14);
    if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *piVar12;
    iVar7 = *piVar13;
    uVar8 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar8 != 0) {
      piVar13 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar13[-1] == iVar7) {
          puVar4 = (undefined4 *)(iVar3 + *piVar13 * 8 + 0xc0);
          goto LAB_010c41c8;
        }
        uVar8 = uVar8 - 1;
        piVar13 = piVar13 + 2;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar12,iVar7,0);
LAB_010c41c8:
    iVar3 = (*(code *)*puVar4)(piVar12,puVar4[1]);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar3 + uVar2 * 4 + 0x10);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(iVar3 + 8);
    iVar3 = 4;
    while( true ) {
      if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = iVar3 - 4;
      if (*(int *)(*(int *)(param_1 + 0x48) + 0xc) <= (int)uVar2) break;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar11 = *(int *)(param_1 + 0x48);
      if ((int)uVar2 < *(int *)(iVar7 + 0xc)) {
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar11 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar11 = *(int *)(iVar11 + iVar3 * 4);
        if (*(uint *)(iVar7 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Leaderboard_LeaderboardRewardEntry__Show_10b11e4
                  (iVar11,*(undefined4 *)(iVar7 + iVar3 * 4));
      }
      else {
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(uint *)(iVar11 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        iVar11 = *(int *)(iVar11 + iVar3 * 4);
        if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Leaderboard_LeaderboardRewardEntry__Hide_10b127c(iVar11);
      }
      iVar3 = iVar3 + 1;
    }
  }
  Rotatelab_Leaderboard_LeaderboardResultsController__InstantiateCompetitors_10b45a8(param_1);
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x1c),0,0);
  uVar14 = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(**(int **)(_UNK_010c4590 + 0x10c4340) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_40,uVar14,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  fVar1 = fStack_34;
  fVar6 = fStack_3c;
  iVar3 = *(int *)(**(int **)(_UNK_010c4594 + 0x10c43a8) + 0x74);
  if (iVar3 == 0) {
    FUN_00ec3934();
    iVar3 = extraout_r1;
  }
  Rotatelab_Extensions__BlockInputDuringAnimation_fc2c40
            (&uStack_40,iVar3,uStack_40,fVar6,uStack_38,fVar1,0);
  uVar14 = Rotatelab_Extensions__RectTransform_fc1bd0(*(undefined4 *)(param_1 + 0x24),0);
  if (*(int *)(**(int **)(_UNK_010c4598 + 0x10c4400) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate_39b0474(uVar14,0);
  uVar14 = *(undefined4 *)(param_1 + 0x38);
  iVar3 = UnityEngine_Component__get_transform_35fe190(param_1,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = UnityEngine_Transform__get_parent_36148d8(iVar3,0);
  iVar3 = Rotatelab_Extensions__RectTransform_fc1c54(uVar5,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_rect_3612fd0(&uStack_40,iVar3,0);
  if (*(int *)(**(int **)(_UNK_010c459c + 0x10c447c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar3 = Rotatelab_Extensions__RectTransform_fc1bd0(*(undefined4 *)(param_1 + 0x24),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_RectTransform__get_offsetMax_3613ebc(&uStack_40,iVar3,0);
  piVar12 = *(int **)(param_1 + 0x24);
  if (piVar12 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar6 = (float)(**(code **)(*piVar12 + 0x1d0))(piVar12,*(undefined4 *)(*piVar12 + 0x1d4));
  Rotatelab_Extensions__SetSizeDeltaY_fc2054
            (uVar14,((fStack_34 + fStack_3c) - fVar6) + _UNK_010c4560,0);
  piVar12 = *(int **)(_UNK_010c45a0 + 0x10c4514);
  iVar3 = *piVar12;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar12;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x114);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar3,0,**(undefined4 **)(_UNK_010c45a4 + 0x10c454c));
  return;
}

