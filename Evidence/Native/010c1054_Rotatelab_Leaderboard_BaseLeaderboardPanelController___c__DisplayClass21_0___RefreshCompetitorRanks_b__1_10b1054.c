/* IL2CPP: Rotatelab.Leaderboard.BaseLeaderboardPanelController.<>c__DisplayClass21_0$$<RefreshCompetitorRanks>b__1
void Rotatelab_Leaderboard_BaseLeaderboardPanelController___c__DisplayClass21_0___RefreshCompetitorRanks_b__1 (Rotatelab_Leaderboard_BaseLeaderboardPanelController___c__DisplayClass21_0_o* __this, Rotatelab_Leaderboard_PlayerCompetitor_o* playerCompetitor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Leaderboard.BaseLeaderboardPanelController.<>c__DisplayClass21_0$$<RefreshCompetitorRanks>b__1
   void 
   Rotatelab_Leaderboard_BaseLeaderboardPanelController___c__DisplayClass21_0___RefreshCompetitorRanks_b__1
   (Rotatelab_Leaderboard_BaseLeaderboardPanelController___c__DisplayClass21_0_o* __this,
   Rotatelab_Leaderboard_PlayerCompetitor_o* playerCompetitor, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseLeaderboardPanelController___c__DisplayClass21_0___RefreshCompetitorRanks_b__1_10b1054
               (int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  float fVar13;
  
  uVar8 = *(uint *)(param_1 + 8);
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_010c02b8 + 0x10bfb64);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c02bc + 0x10bfb78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c02c0 + 0x10bfb84));
    *pcVar6 = '\x01';
  }
  iVar7 = param_2[6];
  param_2[0x14] = uVar8;
  uVar1 = (**(code **)(*param_2 + 0xe0))(param_2,*(undefined4 *)(*param_2 + 0xe4));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  puVar12 = *(undefined4 **)(_UNK_010c02c4 + 0x10bfbd4);
  TMPro_TMP_Text__SetText_34ffc34(iVar7,*puVar12,uVar1,0);
  piVar10 = (int *)param_2[0x12];
  iVar9 = param_2[0x11];
  iVar7 = param_2[0x13];
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar10;
  piVar11 = *(int **)(_UNK_010c02c8 + 0x10bfc04);
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar11) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x100);
        goto LAB_010bfc4c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar10,*piVar11,8);
LAB_010bfc4c:
  uVar1 = (*(code *)*puVar3)(piVar10,iVar7,puVar3[1]);
  if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar9,uVar1,0);
  iVar7 = param_2[0xd];
  if ((int)uVar8 < 3) {
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(iVar7,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar7,1,0);
    iVar7 = param_2[0xf];
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (param_2[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (param_2[0xd],*(undefined4 *)(iVar7 + uVar8 * 4 + 0x10),0);
    if (param_2[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(param_2[4],0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar7,0,0);
    if (param_2[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(param_2[0xc],0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar7,1,0);
    if (param_2[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_transform_35fe190(param_2[0xc],0);
    pcVar6 = (char *)(_UNK_010c02cc + 0x10bfeac);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c02d0 + 0x10bfec0));
      *pcVar6 = '\x01';
    }
    iVar9 = *(int *)(**(int **)(_UNK_010c02d4 + 0x10bfedc) + 0x5c);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar7,*(float *)(iVar9 + 0xc) * _UNK_010c02b4,
               *(float *)(iVar9 + 0x10) * _UNK_010c02b4,*(float *)(iVar9 + 0x14) * _UNK_010c02b4,0);
    iVar7 = param_2[0xe];
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (param_2[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (param_2[0xc],*(undefined4 *)(iVar7 + uVar8 * 4 + 0x10),0);
    iVar7 = param_2[7];
  }
  else {
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(iVar7,0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar7,0,0);
    if (param_2[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(param_2[4],0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar7,1,0);
    if (param_2[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = VectorSignedToFloat(uVar8 + 1,(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34(param_2[4],*puVar12,uVar1,0);
    piVar10 = (int *)param_2[0x12];
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *piVar10;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar11) {
          puVar12 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xf8);
          goto LAB_010bff84;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar12 = (undefined4 *)FUN_00efdb38(piVar10,*piVar11,7);
LAB_010bff84:
    iVar7 = (*(code *)*puVar12)(piVar10,uVar8,puVar12[1]);
    if (iVar7 != 0) {
      piVar10 = (int *)param_2[0x12];
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *piVar10;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar11) {
            puVar12 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xc0);
            goto LAB_010c0050;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar12 = (undefined4 *)FUN_00efdb38(piVar10,*piVar11,0);
LAB_010c0050:
      iVar7 = (*(code *)*puVar12)(piVar10,puVar12[1]);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar7 + 0xc) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar7 = *(int *)(iVar7 + uVar8 * 4 + 0x10);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(iVar7 + 8);
      if (param_2[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = UnityEngine_Component__get_gameObject_35fe360(param_2[0xc],0);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar9,1,0);
      if (param_2[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = UnityEngine_Component__get_transform_35fe190(param_2[0xc],0);
      pcVar6 = (char *)(_UNK_010c02d8 + 0x10c0100);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010c02dc + 0x10c0114));
        *pcVar6 = '\x01';
      }
      iVar2 = *(int *)(**(int **)(_UNK_010c02e0 + 0x10c012c) + 0x5c);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar13 = _UNK_010c02b4;
      if (*(int *)(iVar7 + 0xc) == 1) {
        fVar13 = 1.0;
      }
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_localScale_36155dc
                (iVar9,*(float *)(iVar2 + 0xc) * fVar13,*(float *)(iVar2 + 0x10) * fVar13,
                 *(float *)(iVar2 + 0x14) * fVar13,0);
      if (*(int *)(iVar7 + 0xc) == 1) {
        if (*(int *)(iVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar12 = (undefined4 *)(*(int *)(iVar7 + 0x10) + 0x18);
      }
      else {
        iVar9 = param_2[0xe];
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar9 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        puVar12 = (undefined4 *)(iVar9 + (*(int *)(iVar9 + 0xc) + -1) * 4 + 0x10);
      }
      if (param_2[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Image__set_sprite_37167cc(param_2[0xc],*puVar12,0);
      if (param_2[7] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar9 = UnityEngine_Component__get_gameObject_35fe360(param_2[7],0);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar9,*(int *)(iVar7 + 0xc) == 1,0);
      piVar10 = (int *)param_2[7];
      if (*(int *)(iVar7 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (*(int *)(iVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Could not recover jumptable at 0x010c02b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar10 + 0x2b0))
                (piVar10,*(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x1c),
                 *(undefined4 *)(*piVar10 + 0x2b4));
      return;
    }
    iVar7 = param_2[0xc];
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = UnityEngine_Component__get_gameObject_35fe360(iVar7,0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(iRam036120c4 + 0x3612050);
  if (*pcVar6 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
    *pcVar6 = '\x01';
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
      *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar7,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

