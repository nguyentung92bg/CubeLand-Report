/* IL2CPP: Rotatelab.Boosters.Booster$$OnBoosterAmountChanged
void Rotatelab_Boosters_Booster__OnBoosterAmountChanged (Rotatelab_Boosters_Booster_o* __this, int64_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$OnBoosterAmountChanged
   void Rotatelab_Boosters_Booster__OnBoosterAmountChanged (Rotatelab_Boosters_Booster_o* __this,
   int64_t value, const MethodInfo* method); */

void Rotatelab_Boosters_Booster__OnBoosterAmountChanged_113beb4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  pcVar4 = (char *)(_UNK_0114b3fc + 0x114b210);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b400 + 0x114b224));
    *pcVar4 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x28);
  uVar14 = Rotatelab_Boosters_Booster__get_RemainingUsages_113a0a0(param_1);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = FUN_00f88368((int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  uVar5 = 0;
  TMPro_TMP_Text__SetText_34ffc34(iVar6,**(undefined4 **)(_UNK_0114b404 + 0x114b270),uVar1,0);
  iVar6 = *(int *)(param_1 + 0x24);
  uVar2 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar6,uVar2 ^ 1,0);
  iVar7 = *(int *)(param_1 + 0x20);
  iVar6 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  if (iVar6 != 0) {
    uVar14 = Rotatelab_Boosters_Booster__get_RemainingUsages_113a0a0(param_1);
    iVar6 = (int)((ulonglong)uVar14 >> 0x20);
    bVar9 = (int)uVar14 != 0;
    uVar5 = 0;
    if ((int)-(iVar6 + (uint)bVar9) < 0 != (SBORROW4(0,iVar6) != SBORROW4(-iVar6,(uint)bVar9))) {
      uVar5 = 1;
    }
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  bVar9 = false;
  UnityEngine_GameObject__SetActive_3602038(iVar7,uVar5,0);
  iVar7 = *(int *)(param_1 + 0x1c);
  iVar6 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  if (iVar6 != 0) {
    lVar15 = Rotatelab_Boosters_Booster__get_RemainingUsages_113a0a0(param_1);
    bVar9 = lVar15 == 0;
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
  iVar6 = UnityEngine_UI_Graphic__get_rectTransform_371ba7c(*(int *)(param_1 + 0x18),0);
  pcVar4 = (char *)(_UNK_0114b408 + 0x114b360);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114b40c + 0x114b374));
    *pcVar4 = '\x01';
  }
  iVar7 = *(int *)(**(int **)(_UNK_0114b410 + 0x114b388) + 0x5c);
  fVar11 = *(float *)(iVar7 + 0xc);
  fVar12 = *(float *)(iVar7 + 0x10);
  fVar13 = *(float *)(iVar7 + 0x14);
  iVar7 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar10 = 0.5;
  if (iVar7 != 0) {
    fVar10 = 1.0;
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar6,fVar11 * fVar10,fVar12 * fVar10,fVar13 * fVar10,0);
  pcVar4 = (char *)(_UNK_0114c2d8 + 0x114c078);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c2dc + 0x114c08c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c2e0 + 0x114c098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c2e4 + 0x114c0a4));
    *pcVar4 = '\x01';
  }
  iVar6 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  bVar9 = false;
  if ((iVar6 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114c2e8 + 0x114c0d8));
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar9 = false;
    iVar6 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar6,0);
    if (iVar6 == 0) {
      iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0114c2ec + 0x114c110));
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar6 + 0x39) == '\0') {
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 1) {
          iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_0114c2f0 + 0x114c158));
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar1 = *(undefined4 *)(iVar6 + 0x44);
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
              iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                                (**(undefined4 **)(_UNK_0114c2f8 + 0x114c2b4));
              if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              bVar9 = *(char *)(iVar6 + 0x65) == '\0';
            }
            goto LAB_0114c1f8;
          }
          puVar3 = *(undefined4 **)(_UNK_0114c2f4 + 0x114c19c);
          iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          bVar9 = false;
          iVar6 = Rotatelab_GameExtensions__OccupiedDockCount_fb4db0
                            (*(undefined4 *)(iVar6 + 0x44),0);
          if (iVar6 < 1) goto LAB_0114c1f8;
          iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
          if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar1 = *(undefined4 *)(iVar6 + 0x48);
        }
        bVar9 = false;
        iVar6 = Rotatelab_GameExtensions__EmptyDockCount_fb4c5c(uVar1,0);
        if (0 < iVar6) {
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
  iVar6 = *(int *)(param_1 + 0x34);
  while( true ) {
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar6 + 0xc) <= (int)uVar2) {
      return;
    }
    if (*(uint *)(iVar6 + 0xc) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar8 = *(int **)(iVar6 + 0x10 + uVar2 * 4);
    uVar1 = 0;
    if (bVar9 == false) {
      uVar1 = *(undefined4 *)(param_1 + 0x38);
    }
    if (piVar8 == (int *)0x0) break;
    (**(code **)(*piVar8 + 0x1c8))(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x1cc));
    uVar2 = uVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

