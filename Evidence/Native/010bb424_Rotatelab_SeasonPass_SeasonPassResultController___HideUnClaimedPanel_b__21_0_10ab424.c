/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$<HideUnClaimedPanel>b__21_0
void Rotatelab_SeasonPass_SeasonPassResultController___HideUnClaimedPanel_b__21_0 (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$<HideUnClaimedPanel>b__21_0
   void Rotatelab_SeasonPass_SeasonPassResultController___HideUnClaimedPanel_b__21_0
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassResultController___HideUnClaimedPanel_b__21_0_10ab424
               (int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined1 auStack_78 [16];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_010bb5bc + 0x10bb438);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb5c0 + 0x10bb44c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb5c4 + 0x10bb458));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb5c8 + 0x10bb464));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb5cc + 0x10bb470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb5d0 + 0x10bb47c));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x38),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  piVar11 = *(int **)(_UNK_010bb5d4 + 0x10bb4cc);
  iVar7 = *(int *)(param_1 + 0x40);
  iVar1 = *piVar11;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar11;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar8 = puVar2[2];
  if (iVar8 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar11 + 0x5c);
    }
    uVar10 = *puVar2;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bb5d8 + 0x10bb518));
    System_Action_object____ctor_1f11414
              (iVar8,uVar10,**(undefined4 **)(_UNK_010bb5dc + 0x10bb538),0);
    piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 8);
    *piVar11 = iVar8;
    thunk_FUN_00ec5080(piVar11,iVar8);
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar7,iVar8,**(undefined4 **)(_UNK_010bb5e0 + 0x10bb570));
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = *(int *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (0 < iVar7) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar1 + 8),0,iVar7,0);
  }
  pcVar6 = (char *)(_UNK_010ba904 + 0x10ba7b8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba908 + 0x10ba7cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba90c + 0x10ba7d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba910 + 0x10ba7e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba914 + 0x10ba7f0));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar1 + 0x30),0);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x40),
                       **(undefined4 **)(_UNK_010ba918 + 0x10ba850));
    if (0 < iVar1) {
      pcVar6 = (char *)(_UNK_010baf5c + 0x10bac44);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf60 + 0x10bac58));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf64 + 0x10bac64));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf68 + 0x10bac70));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf6c + 0x10bac7c));
        *pcVar6 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      piVar11 = *(int **)(param_1 + 0x1c);
      uStack_38 = 0;
      if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar3 = *(int **)(*(int *)(param_1 + 0x44) + 0x40);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar10 = (**(code **)(*piVar3 + 0xd8))(piVar3,*(undefined4 *)(*piVar3 + 0xdc));
      if (piVar11 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar11 + 0x2b0))(piVar11,uVar10,*(undefined4 *)(*piVar11 + 0x2b4));
      if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x3c),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
      uVar10 = *(undefined4 *)(param_1 + 0x3c);
      if (*(int *)(**(int **)(_UNK_010baf70 + 0x10bad38) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__SetVisibility_fc2a78(uVar10,1,0,0);
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x28),0,0);
      iVar1 = *(int *)(param_1 + 0x2c);
      pcVar6 = (char *)(_UNK_010baf74 + 0x10bad90);
      if (*pcVar6 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf78 + 0x10bada4));
        *pcVar6 = '\x01';
      }
      piVar11 = *(int **)(_UNK_010baf7c + 0x10badbc);
      puVar2 = *(undefined4 **)(*piVar11 + 0x5c);
      if (iVar1 != 0) {
        UnityEngine_Transform__set_localScale_36155dc(iVar1,*puVar2,puVar2[1],puVar2[2],0);
        PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3f800000,0);
        uVar10 = *(undefined4 *)(param_1 + 0x2c);
        pcVar6 = (char *)(_UNK_010baf80 + 0x10bae40);
        uStack_38 = uStack_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        if (*pcVar6 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_010baf84 + 0x10bae5c));
          *pcVar6 = '\x01';
        }
        iVar1 = *(int *)(*piVar11 + 0x5c);
        uVar9 = *(undefined4 *)(iVar1 + 0xc);
        uVar5 = *(undefined4 *)(iVar1 + 0x10);
        uVar4 = *(undefined4 *)(iVar1 + 0x14);
        if (*(int *)(**(int **)(_UNK_010baf88 + 0x10bae70) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__Scale_2ce6560
                  (&uStack_68,uVar10,uVar9,uVar5,uVar4,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
        PrimeTween_Sequence__Chain_2cee04c
                  (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
        uStack_38 = uStack_68;
        uStack_34 = uStack_64;
        uStack_30 = uStack_60;
        uStack_2c = uStack_5c;
        uVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010baf8c + 0x10baf14));
        System_Action___ctor_2b10bac(uVar10,param_1,**(undefined4 **)(_UNK_010baf90 + 0x10baf34),0);
        PrimeTween_Sequence__OnComplete_2cf16e0(auStack_78,&uStack_38,uVar10,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  piVar11 = *(int **)(_UNK_010ba91c + 0x10ba878);
  iVar1 = *piVar11;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar11;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x114);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,**(undefined4 **)(_UNK_010ba920 + 0x10ba8b0));
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassController__ResetSeasonPass_10a4e14(*(int *)(param_1 + 0x44));
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010ba924 + 0x10ba8dc));
  if (iVar1 != 0) {
    pcVar6 = (char *)(_UNK_0108a5f4 + 0x108a59c);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),3,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
      *pcVar6 = '\x01';
    }
    pcVar6 = (char *)(iVar1 + 0x14);
    if ((*pcVar6 != '\0') && (*(int *)(iVar1 + 0x18) == 3)) {
      *(undefined4 *)(iVar1 + 0x18) = 0;
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
    }
    if (*(char *)(iVar1 + 0x1c) != '\0') {
      return;
    }
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    iVar7 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar1);
    if (iVar7 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
      uVar4 = thunk_FUN_00f00cdc();
      uVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar4,uVar10,0);
    }
    else {
      iVar8 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar8 != 0) {
        pcVar6 = (char *)(iRam036143f4 + 0x3614380);
        if (*pcVar6 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
          *pcVar6 = '\x01';
        }
        if (iVar1 != 0) {
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 == 0) {
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
          (*UNRECOVERED_JUMPTABLE)(iVar1,iVar7);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar4 = thunk_FUN_00f00cdc();
      uVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar4,uVar10,0);
    }
    uVar10 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar4,uVar10);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

