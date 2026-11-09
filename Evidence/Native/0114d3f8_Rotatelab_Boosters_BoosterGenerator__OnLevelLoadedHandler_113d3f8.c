/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$OnLevelLoadedHandler
void Rotatelab_Boosters_BoosterGenerator__OnLevelLoadedHandler (Rotatelab_Boosters_BoosterGenerator_o* __this, Rotatelab_SoLevelData_o* levelData, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$OnLevelLoadedHandler
   void Rotatelab_Boosters_BoosterGenerator__OnLevelLoadedHandler
   (Rotatelab_Boosters_BoosterGenerator_o* __this, Rotatelab_SoLevelData_o* levelData, const
   MethodInfo* method); */

void Rotatelab_Boosters_BoosterGenerator__OnLevelLoadedHandler_113d3f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  if (*(char *)(param_1 + 0x28) != '\0') {
    pcVar3 = (char *)(_UNK_0114d158 + 0x114d0a8);
    if (*pcVar3 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0114d15c + 0x114d0bc));
      *pcVar3 = '\x01';
    }
    piVar7 = *(int **)(_UNK_0114d160 + 0x114d0d4);
    piVar4 = (int *)(param_1 + 0x24);
    iVar6 = *piVar4;
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar6 = UnityEngine_Object__op_Implicit_3607ff4(iVar6,0);
    if (iVar6 != 0) {
      if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar2 = UnityEngine_Component__get_gameObject_35fe360(*piVar4,0);
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Object__Destroy_3609820(uVar2,0);
      *(undefined4 *)(param_1 + 0x24) = 0;
      thunk_FUN_00ec5080(piVar4,0);
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
    return;
  }
  pcVar3 = (char *)(_UNK_0114cfe4 + 0x114ce1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cfe8 + 0x114ce30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cfec + 0x114ce3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cff0 + 0x114ce48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cff4 + 0x114ce54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cff8 + 0x114ce60));
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0114cffc + 0x114ce74) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar6 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  piVar4 = *(int **)(_UNK_0114d000 + 0x114cea4);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x38) < iVar6) {
    iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114d004 + 0x114ced4));
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = Rotatelab_RainbowShooter_RainbowShooterController__get_IsRainbowShooterActive_10ab8a8
                      (iVar6,0);
    if (iVar6 != 0) {
      piVar7 = *(int **)(_UNK_0114d008 + 0x114cf0c);
      piVar4 = (int *)(param_1 + 0x24);
      iVar6 = *piVar4;
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar6 = UnityEngine_Object__op_Implicit_3607ff4(iVar6,0);
      if (iVar6 == 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x10);
        uVar2 = UnityEngine_Component__get_transform_35fe190(param_1,0);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar6 = UnityEngine_Object__Instantiate_object__14d4e4c
                          (uVar5,uVar2,0,**(undefined4 **)(_UNK_0114d00c + 0x114cf74));
        *piVar4 = iVar6;
        thunk_FUN_00ec5080(piVar4,iVar6);
        if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Boosters_SpecialBooster__Initialize_113d010(*piVar4);
        if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = UnityEngine_Component__get_transform_35fe190(*piVar4,0);
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar3 = (char *)(iRam03626f10 + 0x3626e9c);
        if (*pcVar3 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam03626f14 + 0x3626eb0),0,0);
          *pcVar3 = '\x01';
        }
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar6 = *(int *)(iVar6 + 8);
        if (iVar6 != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(iRam03626f18 + 0x3626edc);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03626f1c + 0x3626eec);
            *(code **)(iRam03626f20 + 0x3626efc) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x03626f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar6,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
      }
    }
  }
  return;
}

