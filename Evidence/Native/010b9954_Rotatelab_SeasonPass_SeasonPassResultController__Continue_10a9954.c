/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$Continue
void Rotatelab_SeasonPass_SeasonPassResultController__Continue (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$Continue
   void Rotatelab_SeasonPass_SeasonPassResultController__Continue
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassResultController__Continue_10a9954(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
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
  uint uStack_28;
  
  pcVar5 = (char *)(_UNK_010b9a0c + 0x10b9968);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9a10 + 0x10b997c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9a14 + 0x10b9988));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9a18 + 0x10b9994));
    *pcVar5 = '\x01';
  }
  uVar6 = *(undefined4 *)(param_1 + 0x34);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b9a1c + 0x10b99a8));
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_010b9a20 + 0x10b99c8),0);
  if (*(int *)(**(int **)(_UNK_010b9a24 + 0x10b99dc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar6,0,uVar1,0);
  pcVar5 = (char *)(_UNK_010b9ca8 + 0x10b9a40);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9cac + 0x10b9a54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9cb0 + 0x10b9a60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9cb4 + 0x10b9a6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9cb8 + 0x10b9a78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b9cbc + 0x10b9a84));
    *pcVar5 = '\x01';
  }
  iVar7 = *(int *)(param_1 + 0x48);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar7 + 0xc);
  *(undefined4 *)(iVar7 + 0xc) = 0;
  *(int *)(iVar7 + 0x10) = *(int *)(iVar7 + 0x10) + 1;
  if (0 < iVar3) {
    System_Array__Clear_2b96cdc(*(undefined4 *)(iVar7 + 8),0,iVar3,0);
  }
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = 0;
  iVar7 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = *(undefined4 *)(iVar7 + 0x30);
  puVar13 = *(undefined4 **)(_UNK_010b9cc0 + 0x10b9b04);
  uStack_28 = 0;
  while( true ) {
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x44) + 0x4c);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar7 + 0xc) <= iVar3) break;
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = *(int *)(*(int *)(param_1 + 0x44) + 0x4c);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar7,iVar3,**(undefined4 **)(_UNK_010b9cc4 + 0x10b9b60));
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(*(int *)(param_1 + 0x44) + 0x20);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(iVar9 + 0xc);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = System_Collections_Generic_List_object___get_Item_267d814
                      (iVar9,iVar3,**(undefined4 **)(_UNK_010b9cc8 + 0x10b9bac));
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                      (*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x34),*puVar13);
    if (iVar3 < iVar2) {
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(char *)(iVar7 + 8) == '\0') {
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar9 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_SeasonPass_SeasonPassResultController__AddRewards_10a9ccc
                  (param_1,*(undefined4 *)(*(int *)(iVar9 + 8) + 0xc));
        uStack_28 = 1;
      }
      iVar2 = Rotatelab_ObservableBool__op_Implicit_fac238(uVar1,0);
      if ((iVar2 != 0) && (*(char *)(iVar7 + 9) == '\0')) {
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar9 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_SeasonPass_SeasonPassResultController__AddRewards_10a9ccc
                  (param_1,*(undefined4 *)(*(int *)(iVar9 + 0x10) + 0xc));
        uStack_28 = 1;
      }
    }
    iVar3 = iVar3 + 1;
  }
  if ((uStack_28 & 1) == 0) {
    pcVar5 = (char *)(_UNK_010ba904 + 0x10ba7b8);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010ba908 + 0x10ba7cc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010ba90c + 0x10ba7d8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010ba910 + 0x10ba7e4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010ba914 + 0x10ba7f0));
      *pcVar5 = '\x01';
    }
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar7 = Rotatelab_ObservableBool__op_Implicit_fac238(*(undefined4 *)(iVar7 + 0x30),0);
    if (iVar7 != 0) {
      if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar7 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                        (*(undefined4 *)(*(int *)(param_1 + 0x44) + 0x40),
                         **(undefined4 **)(_UNK_010ba918 + 0x10ba850));
      if (0 < iVar7) {
        pcVar5 = (char *)(_UNK_010baf5c + 0x10bac44);
        if (*pcVar5 == '\0') {
          FUN_00ec37c0(*(undefined4 *)(_UNK_010baf60 + 0x10bac58));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010baf64 + 0x10bac64));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010baf68 + 0x10bac70));
          FUN_00ec37c0(*(undefined4 *)(_UNK_010baf6c + 0x10bac7c));
          *pcVar5 = '\x01';
        }
        uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
        uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
        uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
        piVar8 = *(int **)(param_1 + 0x1c);
        uStack_38 = 0;
        if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar4 = *(int **)(*(int *)(param_1 + 0x44) + 0x40);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar1 = (**(code **)(*piVar4 + 0xd8))(piVar4,*(undefined4 *)(*piVar4 + 0xdc));
        if (piVar8 != (int *)0x0) {
          (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x2b4));
          if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar7 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x3c),0);
          if (iVar7 != 0) {
            UnityEngine_GameObject__SetActive_3602038(iVar7,1,0);
            uVar1 = *(undefined4 *)(param_1 + 0x3c);
            if (*(int *)(**(int **)(_UNK_010baf70 + 0x10bad38) + 0x74) == 0) {
              FUN_00ec3934();
            }
            Rotatelab_Extensions__SetVisibility_fc2a78(uVar1,1,0,0);
            if (*(int *)(param_1 + 0x28) != 0) {
              UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x28),0,0);
              iVar7 = *(int *)(param_1 + 0x2c);
              pcVar5 = (char *)(_UNK_010baf74 + 0x10bad90);
              if (*pcVar5 == '\0') {
                FUN_00ec37c0(*(undefined4 *)(_UNK_010baf78 + 0x10bada4));
                *pcVar5 = '\x01';
              }
              piVar8 = *(int **)(_UNK_010baf7c + 0x10badbc);
              puVar13 = *(undefined4 **)(*piVar8 + 0x5c);
              if (iVar7 != 0) {
                UnityEngine_Transform__set_localScale_36155dc
                          (iVar7,*puVar13,puVar13[1],puVar13[2],0);
                PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
                uStack_38 = uStack_48;
                uStack_34 = uStack_44;
                uStack_30 = uStack_40;
                uStack_2c = uStack_3c;
                PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3f800000,0);
                uVar1 = *(undefined4 *)(param_1 + 0x2c);
                pcVar5 = (char *)(_UNK_010baf80 + 0x10bae40);
                uStack_38 = uStack_58;
                uStack_34 = uStack_54;
                uStack_30 = uStack_50;
                uStack_2c = uStack_4c;
                if (*pcVar5 == '\0') {
                  FUN_00ec37c0(*(undefined4 *)(_UNK_010baf84 + 0x10bae5c));
                  *pcVar5 = '\x01';
                }
                iVar7 = *(int *)(*piVar8 + 0x5c);
                uVar12 = *(undefined4 *)(iVar7 + 0xc);
                uVar10 = *(undefined4 *)(iVar7 + 0x10);
                uVar6 = *(undefined4 *)(iVar7 + 0x14);
                if (*(int *)(**(int **)(_UNK_010baf88 + 0x10bae70) + 0x74) == 0) {
                  FUN_00ec3934();
                }
                PrimeTween_Tween__Scale_2ce6560
                          (&uStack_68,uVar1,uVar12,uVar10,uVar6,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
                PrimeTween_Sequence__Chain_2cee04c
                          (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
                uStack_38 = uStack_68;
                uStack_34 = uStack_64;
                uStack_30 = uStack_60;
                uStack_2c = uStack_5c;
                uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010baf8c + 0x10baf14));
                System_Action___ctor_2b10bac
                          (uVar1,param_1,**(undefined4 **)(_UNK_010baf90 + 0x10baf34),0);
                PrimeTween_Sequence__OnComplete_2cf16e0(auStack_78,&uStack_38,uVar1,0,0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              thunk_FUN_00f078d4();
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    piVar8 = *(int **)(_UNK_010ba91c + 0x10ba878);
    iVar7 = *piVar8;
    if (*(int *)(iVar7 + 0x74) == 0) {
      FUN_00ec3934();
      iVar7 = *piVar8;
    }
    iVar7 = *(int *)(*(int *)(iVar7 + 0x5c) + 0x114);
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool___Raise_23a280c(iVar7,1,**(undefined4 **)(_UNK_010ba920 + 0x10ba8b0));
    if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_SeasonPass_SeasonPassController__ResetSeasonPass_10a4e14(*(int *)(param_1 + 0x44));
    iVar7 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010ba924 + 0x10ba8dc));
    if (iVar7 != 0) {
      pcVar5 = (char *)(_UNK_0108a5f4 + 0x108a59c);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),3,0);
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
        *pcVar5 = '\x01';
      }
      pcVar5 = (char *)(iVar7 + 0x14);
      if ((*pcVar5 != '\0') && (*(int *)(iVar7 + 0x18) == 3)) {
        *(undefined4 *)(iVar7 + 0x18) = 0;
        pcVar5[0] = '\0';
        pcVar5[1] = '\0';
        pcVar5[2] = '\0';
        pcVar5[3] = '\0';
      }
      if (*(char *)(iVar7 + 0x1c) == '\0') {
        *(undefined1 *)(iVar7 + 0x1c) = 1;
        iVar3 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar7);
        if (iVar3 == 0) {
          thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
          uVar6 = thunk_FUN_00f00cdc();
          uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
          System_NullReferenceException___ctor_2b721e8(uVar6,uVar1,0);
        }
        else {
          iVar9 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
          if (iVar9 != 0) {
            pcVar5 = (char *)(iRam036143f4 + 0x3614380);
            if (*pcVar5 == '\0') {
              thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
              *pcVar5 = '\x01';
            }
            if (iVar7 != 0) {
              iVar7 = *(int *)(iVar7 + 8);
              if (iVar7 == 0) {
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
              (*UNRECOVERED_JUMPTABLE)(iVar7,iVar3);
              return;
            }
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
          uVar6 = thunk_FUN_00f00cdc();
          uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
          System_ArgumentException___ctor_2b113a4(uVar6,uVar1,0);
        }
        uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
        FUN_01f4fe28(uVar6,uVar1);
                    /* WARNING: Subroutine does not return */
        FUN_01f4fe2c();
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_010ba738 + 0x10ba290);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba73c + 0x10ba2a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba740 + 0x10ba2b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba744 + 0x10ba2bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba748 + 0x10ba2c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba74c + 0x10ba2d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba750 + 0x10ba2e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba754 + 0x10ba2ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba758 + 0x10ba2f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba75c + 0x10ba304));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba760 + 0x10ba310));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba764 + 0x10ba31c));
    *pcVar5 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar7 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x38),0);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar7,1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(**(int **)(_UNK_010ba768 + 0x10ba378) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar1,1,0,0);
  piVar8 = *(int **)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = Rotatelab_SeasonPass_SeasonPassController__get_GetCurrentSeasonName_10a01dc
                    (*(int *)(param_1 + 0x44));
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar8 + 0x2b0))(piVar8,uVar1,*(undefined4 *)(*piVar8 + 0x2b4));
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(*(int *)(param_1 + 0x20),0,0);
  iVar7 = *(int *)(param_1 + 0x24);
  pcVar5 = (char *)(_UNK_010ba76c + 0x10ba414);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba770 + 0x10ba428));
    *pcVar5 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010ba774 + 0x10ba440);
  puVar13 = *(undefined4 **)(*piVar8 + 0x5c);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar7,*puVar13,puVar13[1],puVar13[2],0);
  PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  PrimeTween_Sequence__ChainDelay_2cf0394(&uStack_58,&uStack_38,0x3f800000,0);
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  pcVar5 = (char *)(_UNK_010ba778 + 0x10ba4c8);
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  uStack_30 = uStack_50;
  uStack_2c = uStack_4c;
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ba77c + 0x10ba4e4));
    *pcVar5 = '\x01';
  }
  iVar7 = *(int *)(*piVar8 + 0x5c);
  uVar12 = *(undefined4 *)(iVar7 + 0xc);
  uVar6 = *(undefined4 *)(iVar7 + 0x10);
  uVar10 = *(undefined4 *)(iVar7 + 0x14);
  if (*(int *)(**(int **)(_UNK_010ba780 + 0x10ba4f8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Scale_2ce6560
            (&uStack_68,uVar1,uVar12,uVar6,uVar10,0x3e800000,0,0,0,0,0,1,0,0,0,0,0);
  PrimeTween_Sequence__Chain_2cee04c
            (&uStack_68,&uStack_38,uStack_68,uStack_64,uStack_60,uStack_5c,0);
  uStack_38 = uStack_68;
  uStack_34 = uStack_64;
  uStack_30 = uStack_60;
  uStack_2c = uStack_5c;
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ba784 + 0x10ba59c));
  System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_010ba788 + 0x10ba5bc),0);
  PrimeTween_Sequence__OnComplete_2cf16e0(auStack_78,&uStack_38,uVar1,0,0);
  piVar8 = *(int **)(_UNK_010ba78c + 0x10ba5e8);
  iVar3 = *(int *)(param_1 + 0x40);
  iVar7 = *piVar8;
  if (*(int *)(iVar7 + 0x74) == 0) {
    FUN_00ec3934();
    iVar7 = *piVar8;
  }
  puVar13 = *(undefined4 **)(iVar7 + 0x5c);
  iVar9 = puVar13[1];
  if (iVar9 == 0) {
    if (*(int *)(iVar7 + 0x74) == 0) {
      FUN_00ec3934();
      puVar13 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar1 = *puVar13;
    iVar9 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ba790 + 0x10ba634));
    System_Action_object____ctor_1f11414(iVar9,uVar1,**(undefined4 **)(_UNK_010ba794 + 0x10ba654),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar9;
    thunk_FUN_00ec5080(piVar8,iVar9);
  }
  if (iVar3 != 0) {
    System_Collections_Generic_List_object___ForEach_267e6f0
              (iVar3,iVar9,**(undefined4 **)(_UNK_010ba798 + 0x10ba68c));
    iVar7 = 0;
    puVar13 = *(undefined4 **)(_UNK_010ba79c + 0x10ba6a4);
    puVar11 = *(undefined4 **)(_UNK_010ba7a0 + 0x10ba6ac);
    while( true ) {
      if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(param_1 + 0x48) + 0xc) <= iVar7) {
        return;
      }
      if (*(int *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar1 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x48),iVar7,*puVar13);
      if (*(int *)(param_1 + 0x40) == 0) break;
      iVar3 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x40),iVar7,*puVar11);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_SeasonPassUnClaimedReward__Init_fc43c0(iVar3,uVar1,0);
      iVar7 = iVar7 + 1;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

