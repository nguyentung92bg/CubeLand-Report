/* IL2CPP: Rotatelab.Boosters.Booster$$OnBoosterUsed
void Rotatelab_Boosters_Booster__OnBoosterUsed (Rotatelab_Boosters_Booster_o* __this, int32_t boosterType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$OnBoosterUsed
   void Rotatelab_Boosters_Booster__OnBoosterUsed (Rotatelab_Boosters_Booster_o* __this, int32_t
   boosterType, const MethodInfo* method); */

void Rotatelab_Boosters_Booster__OnBoosterUsed_113bd48(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  undefined8 uVar15;
  
  pcVar8 = (char *)(_UNK_0114be64 + 0x114bd64);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114be68 + 0x114bd78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114be6c + 0x114bd84));
    *pcVar8 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == param_2) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114be70 + 0x114bdb4));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar4 = (int *)Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4(iVar3,param_2,0);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar15 = (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
    iVar3 = (int)((ulonglong)uVar15 >> 0x20);
    (**(code **)(*piVar4 + 0xf8))
              (piVar4,iVar3,(int)uVar15 + -1,iVar3 - (uint)((int)uVar15 == 0),
               *(undefined4 *)(*piVar4 + 0xfc));
    if (param_2 == 3 || param_2 == 1) {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0114be74 + 0x114be30));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar3,0x12,0);
    }
  }
  pcVar8 = (char *)(_UNK_0114b3fc + 0x114b210);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b400 + 0x114b224));
    *pcVar8 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 0x28);
  uVar15 = Rotatelab_Boosters_Booster__get_RemainingUsages_113a0a0(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = FUN_00f88368((int)uVar15,(int)((ulonglong)uVar15 >> 0x20));
  uVar6 = 0;
  TMPro_TMP_Text__SetText_34ffc34(iVar3,**(undefined4 **)(_UNK_0114b404 + 0x114b270),uVar1,0);
  iVar3 = *(int *)(param_1 + 0x24);
  uVar2 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,uVar2 ^ 1,0);
  iVar7 = *(int *)(param_1 + 0x20);
  iVar3 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  if (iVar3 != 0) {
    uVar15 = Rotatelab_Boosters_Booster__get_RemainingUsages_113a0a0(param_1);
    iVar3 = (int)((ulonglong)uVar15 >> 0x20);
    bVar9 = (int)uVar15 != 0;
    uVar6 = 0;
    if ((int)-(iVar3 + (uint)bVar9) < 0 != (SBORROW4(0,iVar3) != SBORROW4(-iVar3,(uint)bVar9))) {
      uVar6 = 1;
    }
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar9 = false;
  UnityEngine_GameObject__SetActive_3602038(iVar7,uVar6,0);
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar3 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  if (iVar3 != 0) {
    lVar14 = Rotatelab_Boosters_Booster__get_RemainingUsages_113a0a0(param_1);
    bVar9 = lVar14 == 0;
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar7,bVar9,0);
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x18),0);
  pcVar8 = (char *)(_UNK_0114b408 + 0x114b360);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b40c + 0x114b374));
    *pcVar8 = '\x01';
  }
  iVar7 = *(int *)(**(int **)(_UNK_0114b410 + 0x114b388) + 0x5c);
  fVar11 = *(float *)(iVar7 + 0xc);
  fVar12 = *(float *)(iVar7 + 0x10);
  fVar13 = *(float *)(iVar7 + 0x14);
  iVar7 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar10 = 0.5;
  if (iVar7 != 0) {
    fVar10 = 1.0;
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar3,fVar11 * fVar10,fVar12 * fVar10,fVar13 * fVar10,0);
  pcVar8 = (char *)(_UNK_0114c2d8 + 0x114c078);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c2dc + 0x114c08c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c2e0 + 0x114c098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c2e4 + 0x114c0a4));
    *pcVar8 = '\x01';
  }
  iVar3 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  bVar9 = false;
  if ((iVar3 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114c2e8 + 0x114c0d8));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar9 = false;
    iVar3 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar3,0);
    if (iVar3 == 0) {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0114c2ec + 0x114c110));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar3 + 0x39) == '\0') {
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 1) {
          iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_0114c2f0 + 0x114c158));
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar1 = *(undefined4 *)(iVar3 + 0x44);
        }
        else {
          if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) != 3) {
            if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
            bVar9 = true;
            if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 9) {
              iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                                (**(undefined4 **)(_UNK_0114c2f8 + 0x114c2b4));
              if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              bVar9 = *(char *)(iVar3 + 0x65) == '\0';
            }
            goto LAB_0114c1f8;
          }
          puVar5 = *(undefined4 **)(_UNK_0114c2f4 + 0x114c19c);
          iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          bVar9 = false;
          iVar3 = Rotatelab_GameExtensions__OccupiedDockCount_fb4db0
                            (*(undefined4 *)(iVar3 + 0x44),0);
          if (iVar3 < 1) goto LAB_0114c1f8;
          iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
          if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar1 = *(undefined4 *)(iVar3 + 0x48);
        }
        bVar9 = false;
        iVar3 = Rotatelab_GameExtensions__EmptyDockCount_fb4c5c(uVar1,0);
        if (0 < iVar3) {
          bVar9 = true;
        }
      }
    }
  }
LAB_0114c1f8:
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = 0;
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x14),bVar9,0);
  iVar3 = *(int *)(param_1 + 0x34);
  while( true ) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar3 + 0xc) <= (int)uVar2) {
      return;
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar4 = *(int **)(iVar3 + 0x10 + uVar2 * 4);
    uVar1 = 0;
    if (bVar9 == false) {
      uVar1 = *(undefined4 *)(param_1 + 0x38);
    }
    if (piVar4 == (int *)0x0) break;
    (**(code **)(*piVar4 + 0x1c8))(piVar4,uVar1,*(undefined4 *)(*piVar4 + 0x1cc));
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

