/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$TryGenerateSpecialBooster
void Rotatelab_Boosters_BoosterGenerator__TryGenerateSpecialBooster (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BoosterGenerator$$TryGenerateSpecialBooster
   void Rotatelab_Boosters_BoosterGenerator__TryGenerateSpecialBooster
   (Rotatelab_Boosters_BoosterGenerator_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BoosterGenerator__TryGenerateSpecialBooster_113ce08(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  
  pcVar4 = (char *)(_UNK_0114cfe4 + 0x114ce1c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cfe8 + 0x114ce30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cfec + 0x114ce3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cff0 + 0x114ce48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cff4 + 0x114ce54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114cff8 + 0x114ce60));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0114cffc + 0x114ce74) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  piVar5 = *(int **)(_UNK_0114d000 + 0x114cea4);
  iVar3 = *piVar5;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar5;
  }
  if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x38) < iVar2) {
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_0114d004 + 0x114ced4));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_RainbowShooter_RainbowShooterController__get_IsRainbowShooterActive_10ab8a8
                      (iVar2,0);
    if (iVar2 != 0) {
      piVar7 = *(int **)(_UNK_0114d008 + 0x114cf0c);
      piVar5 = (int *)(param_1 + 0x24);
      iVar2 = *piVar5;
      if (*(int *)(*piVar7 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = UnityEngine_Object__op_Implicit_3607ff4(iVar2,0);
      if (iVar2 == 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x10);
        uVar1 = UnityEngine_Component__get_transform_35fe190(param_1,0);
        if (*(int *)(*piVar7 + 0x74) == 0) {
          FUN_00ec3934();
        }
        iVar2 = UnityEngine_Object__Instantiate_object__14d4e4c
                          (uVar6,uVar1,0,**(undefined4 **)(_UNK_0114d00c + 0x114cf74));
        *piVar5 = iVar2;
        thunk_FUN_00ec5080(piVar5,iVar2);
        if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_Boosters_SpecialBooster__Initialize_113d010(*piVar5);
        if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = UnityEngine_Component__get_transform_35fe190(*piVar5,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        pcVar4 = (char *)(iRam03626f10 + 0x3626e9c);
        if (*pcVar4 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam03626f14 + 0x3626eb0),0,0);
          *pcVar4 = '\x01';
        }
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar2 = *(int *)(iVar2 + 8);
        if (iVar2 != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(iRam03626f18 + 0x3626edc);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03626f1c + 0x3626eec);
            *(code **)(iRam03626f20 + 0x3626efc) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x03626f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar2,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
      }
    }
  }
  return;
}

