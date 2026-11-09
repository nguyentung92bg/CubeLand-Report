/* IL2CPP: Rotatelab.Boosters.Booster$$RefreshButtonInteractibility
void Rotatelab_Boosters_Booster__RefreshButtonInteractibility (Rotatelab_Boosters_Booster_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.Booster$$RefreshButtonInteractibility
   void Rotatelab_Boosters_Booster__RefreshButtonInteractibility (Rotatelab_Boosters_Booster_o*
   __this, const MethodInfo* method); */

void Rotatelab_Boosters_Booster__RefreshButtonInteractibility_113c064(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  bool bVar7;
  
  pcVar3 = (char *)(_UNK_0114c2d8 + 0x114c078);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c2dc + 0x114c08c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c2e0 + 0x114c098));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114c2e4 + 0x114c0a4));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_Boosters_Booster__get_IsUnlocked_113a12c(param_1);
  bVar7 = false;
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114c2e8 + 0x114c0d8));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar7 = false;
    iVar1 = Rotatelab_Scripts_LevelStateManager__get_IsWinSequenceAnimating_1006428(iVar1,0);
    if (iVar1 == 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_0114c2ec + 0x114c110));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar1 + 0x39) == '\0') {
        if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 1) {
          iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                            (**(undefined4 **)(_UNK_0114c2f0 + 0x114c158));
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar2 = *(undefined4 *)(iVar1 + 0x44);
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
            bVar7 = true;
            if (*(int *)(*(int *)(param_1 + 0x10) + 0xc) == 9) {
              iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                                (**(undefined4 **)(_UNK_0114c2f8 + 0x114c2b4));
              if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                thunk_FUN_00f078d4();
              }
              bVar7 = *(char *)(iVar1 + 0x65) == '\0';
            }
            goto LAB_0114c1f8;
          }
          puVar4 = *(undefined4 **)(_UNK_0114c2f4 + 0x114c19c);
          iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          bVar7 = false;
          iVar1 = Rotatelab_GameExtensions__OccupiedDockCount_fb4db0
                            (*(undefined4 *)(iVar1 + 0x44),0);
          if (iVar1 < 1) goto LAB_0114c1f8;
          iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar4);
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          uVar2 = *(undefined4 *)(iVar1 + 0x48);
        }
        bVar7 = false;
        iVar1 = Rotatelab_GameExtensions__EmptyDockCount_fb4c5c(uVar2,0);
        if (0 < iVar1) {
          bVar7 = true;
        }
      }
    }
  }
LAB_0114c1f8:
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = 0;
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x14),bVar7,0);
  iVar1 = *(int *)(param_1 + 0x34);
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((int)*(uint *)(iVar1 + 0xc) <= (int)uVar5) {
      return;
    }
    if (*(uint *)(iVar1 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    piVar6 = *(int **)(iVar1 + 0x10 + uVar5 * 4);
    uVar2 = 0;
    if (bVar7 == false) {
      uVar2 = *(undefined4 *)(param_1 + 0x38);
    }
    if (piVar6 == (int *)0x0) break;
    (**(code **)(*piVar6 + 0x1c8))(piVar6,uVar2,*(undefined4 *)(*piVar6 + 0x1cc));
    uVar5 = uVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

