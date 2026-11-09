/* IL2CPP: Rotatelab.MetaProgressionController$$ShowJourney
void Rotatelab_MetaProgressionController__ShowJourney (Rotatelab_MetaProgressionController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$ShowJourney
   void Rotatelab_MetaProgressionController__ShowJourney (Rotatelab_MetaProgressionController_o*
   __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__ShowJourney_fbd6ac(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auStack_58 [16];
  
  Rotatelab_MetaProgressionController___ShowJourney_g__SetLatestLevelCredentials_34_0_fbd70c();
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(iVar2 + 0x24);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = (**(code **)(*piVar8 + 0xf0))(piVar8,*(undefined4 *)(*piVar8 + 0xf4));
  if (*(int *)(param_1 + 0x44) == iVar2) {
    return;
  }
  pcVar7 = (char *)(_UNK_00fcdcbc + 0xfcd978);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcdcc0 + 0xfcd98c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcdcc4 + 0xfcd998));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcdcc8 + 0xfcd9a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcdccc + 0xfcd9b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcdcd0 + 0xfcd9bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fcdcd4 + 0xfcd9c8));
    *pcVar7 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcdcd8 + 0xfcd9dc));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar2 + 0x10) = param_1;
  thunk_FUN_00ec5080((int *)(iVar2 + 0x10),param_1);
  iVar3 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar8 = *(int **)(iVar3 + 0x24);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = (**(code **)(*piVar8 + 0xf0))(piVar8,*(undefined4 *)(*piVar8 + 0xf4));
  uVar4 = Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(param_1,uVar4);
  uVar6 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(iVar2 + 0xc) = uVar4;
  iVar3 = Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(param_1,uVar6);
  iVar9 = *(int *)(iVar2 + 0xc);
  *(int *)(iVar2 + 8) = iVar3;
  fVar1 = _UNK_00fcdcb8;
  if (iVar3 < iVar9) {
    piVar8 = *(int **)(_UNK_00fcdcdc + 0xfcda98);
    fVar12 = _UNK_00fcdcb8;
    do {
      iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcdce0 + 0xfcdaa0));
      System_Object___ctor_2bb93bc(iVar3,0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar10 = (int *)(iVar3 + 0xc);
      *piVar10 = iVar2;
      thunk_FUN_00ec5080(piVar10,iVar2);
      puVar5 = *(undefined4 **)(_UNK_00fcdce4 + 0xfcdadc);
      *(int *)(iVar3 + 8) = iVar9;
      uVar4 = thunk_FUN_00f00cdc(*puVar5);
      System_Action___ctor_2b10bac(uVar4,iVar3,**(undefined4 **)(_UNK_00fcdce8 + 0xfcdafc),0);
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Delay_2ce9f2c(auStack_58,fVar12,uVar4,0,0,0);
      if (*piVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      fVar11 = fVar1;
      if (iVar9 == *(int *)(*piVar10 + 0xc)) {
        fVar11 = 0.5;
      }
      iVar9 = iVar9 + -1;
      fVar12 = fVar12 + 1.5 + fVar11;
    } while (*(int *)(iVar2 + 8) <= iVar9);
    uVar13 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if ((int)uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)((int)uVar13 + 0x24);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    (**(code **)(*piVar8 + 0xf8))
              (piVar8,(int)((ulonglong)uVar13 >> 0x20),*(int *)(param_1 + 0x44),
               *(int *)(param_1 + 0x44) >> 0x1f,*(undefined4 *)(*piVar8 + 0xfc));
    uVar4 = *(undefined4 *)(param_1 + 0x44);
    fVar12 = fVar12 + -0.5;
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x40),iVar9,**(undefined4 **)(_UNK_00fcdcec + 0xfcdc00));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x44),(byte)(in_fpscr >> 0x16) & 3);
    Rotatelab_MetaProgressionBaseStage__SetSliderValue_fbb8dc(iVar2,uVar4,1,0x3fc00000,0x3f000000);
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(iVar2 + 0x24);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = *(undefined4 *)(*piVar8 + 0xfc);
    (**(code **)(*piVar8 + 0xf8))
              (piVar8,uVar4,*(int *)(param_1 + 0x44),*(int *)(param_1 + 0x44) >> 0x1f,uVar4);
    uVar4 = *(undefined4 *)(param_1 + 0x44);
    fVar12 = 1.0;
  }
  Rotatelab_MetaProgressionController___ShowJourney_g__SetContentHeight_34_2_fbe234
            (param_1,uVar4,1,fVar12,0x3e800000);
  return;
}

