/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor$$SetRank
void Rotatelab_Leaderboard_BaseCompetitor__SetRank (Rotatelab_Leaderboard_BaseCompetitor_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.BaseCompetitor$$SetRank
   void Rotatelab_Leaderboard_BaseCompetitor__SetRank (Rotatelab_Leaderboard_BaseCompetitor_o*
   __this, int32_t rank, const MethodInfo* method); */

void Rotatelab_Leaderboard_BaseCompetitor__SetRank_10afb40(int *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint in_fpscr;
  float fVar12;
  
  pcVar6 = (char *)(_UNK_010c02b8 + 0x10bfb64);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c02bc + 0x10bfb78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c02c0 + 0x10bfb84));
    *pcVar6 = '\x01';
  }
  iVar7 = param_1[6];
  param_1[0x14] = param_2;
  uVar1 = (**(code **)(*param_1 + 0xe0))(param_1,*(undefined4 *)(*param_1 + 0xe4));
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  puVar11 = *(undefined4 **)(_UNK_010c02c4 + 0x10bfbd4);
  TMPro_TMP_Text__SetText_34ffc34(iVar7,*puVar11,uVar1,0);
  piVar9 = (int *)param_1[0x12];
  iVar8 = param_1[0x11];
  iVar7 = param_1[0x13];
  if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *piVar9;
  piVar10 = *(int **)(_UNK_010c02c8 + 0x10bfc04);
  uVar4 = (uint)*(ushort *)(iVar2 + 0xb6);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(int *)(iVar2 + 0x58) + 4);
    do {
      if (piVar5[-1] == *piVar10) {
        puVar3 = (undefined4 *)(iVar2 + *piVar5 * 8 + 0x100);
        goto LAB_010bfc4c;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 2;
    } while (uVar4 != 0);
  }
  puVar3 = (undefined4 *)FUN_00efdb38(piVar9,*piVar10,8);
LAB_010bfc4c:
  uVar1 = (*(code *)*puVar3)(piVar9,iVar7,puVar3[1]);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar8,uVar1,0);
  iVar7 = param_1[0xd];
  if ((int)param_2 < 3) {
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
    iVar7 = param_1[0xf];
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (param_1[0xd] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (param_1[0xd],*(undefined4 *)(iVar7 + param_2 * 4 + 0x10),0);
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(param_1[4],0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar7,0,0);
    if (param_1[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(param_1[0xc],0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar7,1,0);
    if (param_1[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_transform_35fe190(param_1[0xc],0);
    pcVar6 = (char *)(_UNK_010c02cc + 0x10bfeac);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010c02d0 + 0x10bfec0));
      *pcVar6 = '\x01';
    }
    iVar8 = *(int *)(**(int **)(_UNK_010c02d4 + 0x10bfedc) + 0x5c);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Transform__set_localScale_36155dc
              (iVar7,*(float *)(iVar8 + 0xc) * _UNK_010c02b4,
               *(float *)(iVar8 + 0x10) * _UNK_010c02b4,*(float *)(iVar8 + 0x14) * _UNK_010c02b4,0);
    iVar7 = param_1[0xe];
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar7 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    if (param_1[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_UI_Image__set_sprite_37167cc
              (param_1[0xc],*(undefined4 *)(iVar7 + param_2 * 4 + 0x10),0);
    iVar7 = param_1[7];
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
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = UnityEngine_Component__get_gameObject_35fe360(param_1[4],0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar7,1,0);
    if (param_1[4] == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = VectorSignedToFloat(param_2 + 1,(byte)(in_fpscr >> 0x16) & 3);
    TMPro_TMP_Text__SetText_34ffc34(param_1[4],*puVar11,uVar1,0);
    piVar9 = (int *)param_1[0x12];
    if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *piVar9;
    uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
      do {
        if (piVar5[-1] == *piVar10) {
          puVar11 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xf8);
          goto LAB_010bff84;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 2;
      } while (uVar4 != 0);
    }
    puVar11 = (undefined4 *)FUN_00efdb38(piVar9,*piVar10,7);
LAB_010bff84:
    iVar7 = (*(code *)*puVar11)(piVar9,param_2,puVar11[1]);
    if (iVar7 != 0) {
      piVar9 = (int *)param_1[0x12];
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *piVar9;
      uVar4 = (uint)*(ushort *)(iVar7 + 0xb6);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(int *)(iVar7 + 0x58) + 4);
        do {
          if (piVar5[-1] == *piVar10) {
            puVar11 = (undefined4 *)(iVar7 + *piVar5 * 8 + 0xc0);
            goto LAB_010c0050;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 2;
        } while (uVar4 != 0);
      }
      puVar11 = (undefined4 *)FUN_00efdb38(piVar9,*piVar10,0);
LAB_010c0050:
      iVar7 = (*(code *)*puVar11)(piVar9,puVar11[1]);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar7 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      iVar7 = *(int *)(iVar7 + param_2 * 4 + 0x10);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = *(int *)(iVar7 + 8);
      if (param_1[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = UnityEngine_Component__get_gameObject_35fe360(param_1[0xc],0);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar8,1,0);
      if (param_1[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = UnityEngine_Component__get_transform_35fe190(param_1[0xc],0);
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
      fVar12 = _UNK_010c02b4;
      if (*(int *)(iVar7 + 0xc) == 1) {
        fVar12 = 1.0;
      }
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Transform__set_localScale_36155dc
                (iVar8,*(float *)(iVar2 + 0xc) * fVar12,*(float *)(iVar2 + 0x10) * fVar12,
                 *(float *)(iVar2 + 0x14) * fVar12,0);
      if (*(int *)(iVar7 + 0xc) == 1) {
        if (*(int *)(iVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        puVar11 = (undefined4 *)(*(int *)(iVar7 + 0x10) + 0x18);
      }
      else {
        iVar8 = param_1[0xe];
        if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar8 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f07924();
        }
        puVar11 = (undefined4 *)(iVar8 + (*(int *)(iVar8 + 0xc) + -1) * 4 + 0x10);
      }
      if (param_1[0xc] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Image__set_sprite_37167cc(param_1[0xc],*puVar11,0);
      if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar8 = UnityEngine_Component__get_gameObject_35fe360(param_1[7],0);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar8,*(int *)(iVar7 + 0xc) == 1,0);
      piVar9 = (int *)param_1[7];
      if (*(int *)(iVar7 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (*(int *)(iVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Could not recover jumptable at 0x010c02b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*piVar9 + 0x2b0))
                (piVar9,*(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x1c),
                 *(undefined4 *)(*piVar9 + 0x2b4));
      return;
    }
    iVar7 = param_1[0xc];
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

