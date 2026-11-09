/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$CheckBonusBank
void Rotatelab_SeasonPass_SeasonPassResultController__CheckBonusBank (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$CheckBonusBank
   void Rotatelab_SeasonPass_SeasonPassResultController__CheckBonusBank
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassResultController__CheckBonusBank_10aa7a4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 uVar11;
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
  
  pcVar8 = (char *)(_UNK_010ba904 + 0x10ba7b8);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba908 + 0x10ba7cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba90c + 0x10ba7d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba910 + 0x10ba7e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba914 + 0x10ba7f0));
    *pcVar8 = '\x01';
  }
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar2 + 0x30),0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x40),
                       **(undefined4 **)(_UNK_010ba918 + 0x10ba850));
    if (0 < iVar2) {
      pcVar8 = (char *)(_UNK_010baf5c + 0x10bac44);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf60 + 0x10bac58));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf64 + 0x10bac64));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf68 + 0x10bac70));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf6c + 0x10bac7c));
        *pcVar8 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      piVar10 = *(int **)(param_1 + 0x1c);
      uStack_38 = 0;
      if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar6 = *(int **)(*(int *)(param_1 + 0x44) + 0x40);
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar3 = (**(code **)(*piVar6 + 0xd8))(piVar6,*(undefined4 *)(*piVar6 + 0xdc));
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar10 + 0x2b0))(piVar10,uVar3,*(undefined4 *)(*piVar10 + 0x2b4));
      if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x3c),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
      uVar3 = *(undefined4 *)(param_1 + 0x3c);
      if (*(int *)(**(int **)(_UNK_010baf70 + 0x10bad38) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__SetVisibility_fc2a78(uVar3,1,0,0);
      if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x28),0,0);
      iVar2 = *(int *)(param_1 + 0x2c);
      pcVar8 = (char *)(_UNK_010baf74 + 0x10bad90);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010baf78 + 0x10bada4));
        *pcVar8 = '\x01';
      }
      piVar10 = *(int **)(_UNK_010baf7c + 0x10badbc);
      puVar4 = *(undefined4 **)(*piVar10 + 0x5c);
      if (iVar2 != 0) {
        UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar4,puVar4[1],puVar4[2],0);
        PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
        uStack_38 = uStack_48;
        uStack_34 = uStack_44;
        uStack_30 = uStack_40;
        uStack_2c = uStack_3c;
        PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3f800000,0);
        uVar3 = *(undefined4 *)(param_1 + 0x2c);
        pcVar8 = (char *)(_UNK_010baf80 + 0x10bae40);
        uStack_38 = uStack_58;
        uStack_34 = uStack_54;
        uStack_30 = uStack_50;
        uStack_2c = uStack_4c;
        if (*pcVar8 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_010baf84 + 0x10bae5c));
          *pcVar8 = '\x01';
        }
        iVar2 = *(int *)(*piVar10 + 0x5c);
        uVar11 = *(undefined4 *)(iVar2 + 0xc);
        uVar9 = *(undefined4 *)(iVar2 + 0x10);
        uVar7 = *(undefined4 *)(iVar2 + 0x14);
        if (*(int *)(**(int **)(_UNK_010baf88 + 0x10bae70) + 0x74) == 0) {
          FUN_00ec3934();
        }
        PrimeTween_Tween__Scale_2ce6560
                  (&uStack_68,uVar3,uVar11,uVar9,uVar7,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
        PrimeTween_Sequence__Chain_2cee04c
                  (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
        uStack_38 = uStack_68;
        uStack_34 = uStack_64;
        uStack_30 = uStack_60;
        uStack_2c = uStack_5c;
        uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010baf8c + 0x10baf14));
        System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_010baf90 + 0x10baf34),0);
        PrimeTween_Sequence__OnComplete_2cf16e0(auStack_78,&uStack_38,uVar3,0,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  piVar10 = *(int **)(_UNK_010ba91c + 0x10ba878);
  iVar2 = *piVar10;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar10;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x114);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,1,**(undefined4 **)(_UNK_010ba920 + 0x10ba8b0));
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassController__ResetSeasonPass_10a4e14(*(int *)(param_1 + 0x44));
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010ba924 + 0x10ba8dc));
  if (iVar2 != 0) {
    pcVar8 = (char *)(_UNK_0108a5f4 + 0x108a59c);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),3,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
      *pcVar8 = '\x01';
    }
    pcVar8 = (char *)(iVar2 + 0x14);
    if ((*pcVar8 != '\0') && (*(int *)(iVar2 + 0x18) == 3)) {
      *(undefined4 *)(iVar2 + 0x18) = 0;
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
    }
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      *(undefined1 *)(iVar2 + 0x1c) = 1;
      iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar2);
      if (iVar1 == 0) {
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
        uVar7 = thunk_FUN_00f00cdc();
        uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
        System_NullReferenceException___ctor_2b721e8(uVar7,uVar3,0);
      }
      else {
        iVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
        if (iVar5 != 0) {
          pcVar8 = (char *)(iRam036143f4 + 0x3614380);
          if (*pcVar8 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
            *pcVar8 = '\x01';
          }
          if (iVar2 != 0) {
            iVar2 = *(int *)(iVar2 + 8);
            if (iVar2 == 0) {
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
            (*UNRECOVERED_JUMPTABLE)(iVar2,iVar1);
            return;
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
        uVar7 = thunk_FUN_00f00cdc();
        uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
        System_ArgumentException___ctor_2b113a4(uVar7,uVar3,0);
      }
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
      FUN_01f4fe28(uVar7,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe2c();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

