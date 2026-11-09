/* IL2CPP: Rotatelab.MetaProgressionController$$<ShowJourney>g__SetLatestLevelCredentials|34_0
void Rotatelab_MetaProgressionController___ShowJourney_g__SetLatestLevelCredentials_34_0 (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$<ShowJourney>g__SetLatestLevelCredentials|34_0
   void Rotatelab_MetaProgressionController___ShowJourney_g__SetLatestLevelCredentials_34_0
   (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController___ShowJourney_g__SetLatestLevelCredentials_34_0_fbd70c
               (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  
  pcVar3 = (char *)(_UNK_00fcd948 + 0xfcd728);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd94c + 0xfcd73c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcd950 + 0xfcd748));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = *(int **)(iVar1 + 0x24);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
  iVar1 = Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(param_1,uVar2);
  uVar2 = _UNK_00fcd944;
  iVar5 = 0;
  puVar7 = *(undefined4 **)(_UNK_00fcd954 + 0xfcd7b8);
  while( true ) {
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(param_1 + 0x40);
    if (*(int *)(*(int *)(param_1 + 0x40) + 0xc) <= iVar5) break;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = uVar2;
    if (iVar5 < iVar1) {
      uVar8 = 0xbf800000;
    }
    iVar6 = System_Collections_Generic_List_object___get_Item_267d814(iVar6,iVar5,*puVar7);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_MetaProgressionBaseStage__SetSliderValue_fbb8dc(iVar6,uVar8,0,0x3fc00000,0x3f000000);
    iVar5 = iVar5 + 1;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar1 < *(int *)(iVar6 + 0xc)) {
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x40),iVar1,*puVar7);
    iVar5 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar4 = *(int **)(iVar5 + 0x24);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = FUN_00f88368((int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    Rotatelab_MetaProgressionBaseStage__SetSliderValue_fbb8dc(iVar1,uVar2,0,0x3fc00000,0x3f000000);
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar4 = *(int **)(iVar1 + 0x24);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*piVar4 + 0xf0))(piVar4,*(undefined4 *)(*piVar4 + 0xf4));
  Rotatelab_MetaProgressionController___ShowJourney_g__SetContentHeight_34_2_fbe234
            (param_1,uVar2,0,0x3f800000,0x3e800000);
  return;
}

