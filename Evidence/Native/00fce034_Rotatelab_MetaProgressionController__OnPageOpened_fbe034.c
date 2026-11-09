/* IL2CPP: Rotatelab.MetaProgressionController$$OnPageOpened
void Rotatelab_MetaProgressionController__OnPageOpened (Rotatelab_MetaProgressionController_o* __this, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionController$$OnPageOpened
   void Rotatelab_MetaProgressionController__OnPageOpened (Rotatelab_MetaProgressionController_o*
   __this, int32_t type, const MethodInfo* method); */

void Rotatelab_MetaProgressionController__OnPageOpened_fbe034(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined1 auStack_58 [16];
  
  pcVar7 = (char *)(_UNK_00fce1a4 + 0xfce04c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce1a8 + 0xfce060));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce1ac + 0xfce06c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce1b0 + 0xfce078));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fce1b4 + 0xfce084));
    *pcVar7 = '\x01';
  }
  if ((*(char *)(param_1 + 0x10) == '\0') || ((bool)*(char *)(param_1 + 0x11) == (param_2 == 3))) {
    return;
  }
  *(bool *)(param_1 + 0x11) = param_2 == 3;
  iVar10 = 0;
  puVar8 = *(undefined4 **)(_UNK_00fce1b8 + 0xfce0c8);
  piVar11 = *(int **)(_UNK_00fce1bc + 0xfce0d0);
  while( true ) {
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x40) + 0xc) <= iVar10) break;
    if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar4 = (int *)System_Collections_Generic_List_object___get_Item_267d814
                              (*(int *)(param_1 + 0x40),iVar10,*puVar8);
    if (piVar4 != (int *)0x0) {
      uVar6 = (uint)*(byte *)(*piVar11 + 0xb8);
      if ((uVar6 <= *(byte *)(*piVar4 + 0xb8)) &&
         (*(int *)(*(int *)(*piVar4 + 100) + uVar6 * 4 + -4) == *piVar11)) {
        if (param_2 == 3) {
          Rotatelab_MetaProgressionStageCity__LoadIcon_fc08d8();
        }
        else {
          Rotatelab_MetaProgressionStageCity__ReleaseIcon_fc0a88(piVar4,0);
        }
      }
    }
    iVar10 = iVar10 + 1;
  }
  if (param_2 != 3) {
    iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_00fce1c0 + 0xfce17c));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar7 = (char *)(_UNK_0108a5f4 + 0x108a59c);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),2,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
      *pcVar7 = '\x01';
    }
    pcVar7 = (char *)(iVar10 + 0x14);
    if ((*pcVar7 != '\0') && (*(int *)(iVar10 + 0x18) == 2)) {
      *(undefined4 *)(iVar10 + 0x18) = 0;
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
    }
    if (*(char *)(iVar10 + 0x1c) == '\0') {
      *(undefined1 *)(iVar10 + 0x1c) = 1;
      iVar2 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar10);
      if (iVar2 == 0) {
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
        uVar5 = thunk_FUN_00f00cdc();
        uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
        System_NullReferenceException___ctor_2b721e8(uVar5,uVar3,0);
      }
      else {
        iVar9 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
        if (iVar9 != 0) {
          pcVar7 = (char *)(iRam036143f4 + 0x3614380);
          if (*pcVar7 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
            *pcVar7 = '\x01';
          }
          if (iVar10 != 0) {
            iVar10 = *(int *)(iVar10 + 8);
            if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
            }
            UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
              *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
            }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(iVar10,iVar2);
            return;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
        uVar5 = thunk_FUN_00f00cdc();
        uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
        System_ArgumentException___ctor_2b113a4(uVar5,uVar3,0);
      }
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
      FUN_01f4fe28(uVar5,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe2c();
    }
    return;
  }
  Rotatelab_MetaProgressionController___ShowJourney_g__SetLatestLevelCredentials_34_0_fbd70c();
  iVar10 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar11 = *(int **)(iVar10 + 0x24);
  if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar10 = (**(code **)(*piVar11 + 0xf0))(piVar11,*(undefined4 *)(*piVar11 + 0xf4));
  if (*(int *)(param_1 + 0x44) == iVar10) {
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
  iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcdcd8 + 0xfcd9dc));
  System_Object___ctor_2bb93bc(iVar10,0);
  if (iVar10 != 0) {
    *(int *)(iVar10 + 0x10) = param_1;
    thunk_FUN_00ec5080((int *)(iVar10 + 0x10),param_1);
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar11 = *(int **)(iVar2 + 0x24);
    if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = (**(code **)(*piVar11 + 0xf0))(piVar11,*(undefined4 *)(*piVar11 + 0xf4));
    uVar3 = Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(param_1,uVar3);
    uVar5 = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(iVar10 + 0xc) = uVar3;
    iVar2 = Rotatelab_MetaProgressionController__GetStageIndex_fbdcf0(param_1,uVar5);
    iVar9 = *(int *)(iVar10 + 0xc);
    *(int *)(iVar10 + 8) = iVar2;
    fVar1 = _UNK_00fcdcb8;
    if (iVar2 < iVar9) {
      piVar11 = *(int **)(_UNK_00fcdcdc + 0xfcda98);
      fVar13 = _UNK_00fcdcb8;
      do {
        iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fcdce0 + 0xfcdaa0));
        System_Object___ctor_2bb93bc(iVar2,0);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar4 = (int *)(iVar2 + 0xc);
        *piVar4 = iVar10;
        thunk_FUN_00ec5080(piVar4,iVar10);
        puVar8 = *(undefined4 **)(_UNK_00fcdce4 + 0xfcdadc);
        *(int *)(iVar2 + 8) = iVar9;
        uVar3 = thunk_FUN_00f00cdc(*puVar8);
        System_Action___ctor_2b10bac(uVar3,iVar2,**(undefined4 **)(_UNK_00fcdce8 + 0xfcdafc),0);
        if (*(int *)(*piVar11 + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__Delay_2ce9f2c(auStack_58,fVar13,uVar3,0,0,0);
        if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        fVar12 = fVar1;
        if (iVar9 == *(int *)(*piVar4 + 0xc)) {
          fVar12 = 0.5;
        }
        iVar9 = iVar9 + -1;
        fVar13 = fVar13 + 1.5 + fVar12;
      } while (*(int *)(iVar10 + 8) <= iVar9);
      uVar14 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if ((int)uVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar11 = *(int **)((int)uVar14 + 0x24);
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar11 + 0xf8))
                (piVar11,(int)((ulonglong)uVar14 >> 0x20),*(int *)(param_1 + 0x44),
                 *(int *)(param_1 + 0x44) >> 0x1f,*(undefined4 *)(*piVar11 + 0xfc));
      uVar3 = *(undefined4 *)(param_1 + 0x44);
      fVar13 = fVar13 + -0.5;
    }
    else {
      if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar10 = System_Collections_Generic_List_object___get_Item_267d814
                         (*(int *)(param_1 + 0x40),iVar9,**(undefined4 **)(_UNK_00fcdcec + 0xfcdc00)
                         );
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x44),(byte)(in_fpscr >> 0x16) & 3);
      Rotatelab_MetaProgressionBaseStage__SetSliderValue_fbb8dc
                (iVar10,uVar3,1,0x3fc00000,0x3f000000);
      iVar10 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar11 = *(int **)(iVar10 + 0x24);
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = *(undefined4 *)(*piVar11 + 0xfc);
      (**(code **)(*piVar11 + 0xf8))
                (piVar11,uVar3,*(int *)(param_1 + 0x44),*(int *)(param_1 + 0x44) >> 0x1f,uVar3);
      uVar3 = *(undefined4 *)(param_1 + 0x44);
      fVar13 = 1.0;
    }
    Rotatelab_MetaProgressionController___ShowJourney_g__SetContentHeight_34_2_fbe234
              (param_1,uVar3,1,fVar13,0x3e800000);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

