/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ShowPopup
void Rotatelab_CloudRush_CloudRushManager__ShowPopup (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ShowPopup
   void Rotatelab_CloudRush_CloudRushManager__ShowPopup (Rotatelab_CloudRush_CloudRushManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__ShowPopup_10e0a18(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int extraout_r1;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar7;
  char *pcVar8;
  undefined4 *puVar9;
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
  
  pcVar8 = (char *)(_UNK_010f0b9c + 0x10f0a2c);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0ba0 + 0x10f0a40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f0ba4 + 0x10f0a4c));
    *pcVar8 = '\x01';
  }
  puVar9 = *(undefined4 **)(_UNK_010f0ba8 + 0x10f0a60);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = *puVar9;
  *(undefined1 *)(iVar3 + 0x20) = 1;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(uVar4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_CloudRush_CloudRushController__get_ShowCloudRushProgressOnSessionStarted_10dc0e0
                    ();
  if (iVar3 == 0) {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar4 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    switch(uVar4) {
    case 0:
      iVar3 = Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_10e0c28
                        (param_1);
      break;
    case 1:
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_CanvasGroup__set_interactable_39a3940(*(int *)(param_1 + 0x18),1,0);
      pcVar8 = (char *)(_UNK_010dcbc4 + 0x10dc838);
      if (*pcVar8 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbc8 + 0x10dc84c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbcc + 0x10dc858));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbd0 + 0x10dc864));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbd4 + 0x10dc870));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbd8 + 0x10dc87c));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbdc + 0x10dc888));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbe0 + 0x10dc894));
        FUN_00ec37c0(*(undefined4 *)(_UNK_010dcbe4 + 0x10dc8a0));
        *pcVar8 = '\x01';
      }
      uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
      uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
      uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
      *(undefined1 *)(param_1 + 0x1d) = 1;
      uStack_38 = 0;
      if (*(char *)(param_1 + 0x1c) != '\0') {
        iVar3 = UnityEngine_Component__get_gameObject_35fe360(param_1,0);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
      }
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_CanvasGroup__set_alpha_39a3758(*(int *)(param_1 + 0x18),0,0);
      if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*(int *)(param_1 + 0x18),1,0);
      PrimeTween_Sequence__Stop_2cf07bc((undefined4 *)(param_1 + 0x20),0);
      PrimeTween_Sequence__Create_2cef1e0(&uStack_48,1,0,1,0,0,0);
      uVar4 = *(undefined4 *)(param_1 + 0x18);
      uStack_38 = uStack_48;
      uStack_34 = uStack_44;
      uStack_30 = uStack_40;
      uStack_2c = uStack_3c;
      if (*(int *)(**(int **)(_UNK_010dcbe8 + 0x10dc97c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      PrimeTween_Tween__Alpha_2ce7b44(&uStack_58,uVar4,0x3f800000,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
      PrimeTween_Sequence__Chain_2cee04c
                (&uStack_58,&uStack_38,uStack_58,uStack_54,uStack_50,uStack_4c,0);
      piVar7 = *(int **)(_UNK_010dcbec + 0x10dca10);
      iVar3 = *piVar7;
      uStack_38 = uStack_58;
      uStack_34 = uStack_54;
      uStack_30 = uStack_50;
      uStack_2c = uStack_4c;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar7;
      }
      puVar9 = *(undefined4 **)(iVar3 + 0x5c);
      iVar5 = puVar9[1];
      if (iVar5 == 0) {
        if (*(int *)(iVar3 + 0x74) == 0) {
          FUN_00ec3934();
          puVar9 = *(undefined4 **)(*piVar7 + 0x5c);
        }
        uVar4 = *puVar9;
        iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dcbf0 + 0x10dca60));
        System_Action_object____ctor_1f11414
                  (iVar5,uVar4,**(undefined4 **)(_UNK_010dcbf4 + 0x10dca80),0);
        piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
        *piVar7 = iVar5;
        thunk_FUN_00ec5080(piVar7,iVar5);
      }
      PrimeTween_Sequence__ChainCallback_object__15b4c64
                (&uStack_48,&uStack_38,param_1,iVar5,0,**(undefined4 **)(_UNK_010dcbf8 + 0x10dcab8))
      ;
      uVar2 = uStack_3c;
      uVar1 = uStack_40;
      uVar6 = uStack_44;
      uVar4 = uStack_48;
      iVar3 = *(int *)(**(int **)(_UNK_010dcbfc + 0x10dcad8) + 0x74);
      if (iVar3 == 0) {
        FUN_00ec3934();
        iVar3 = extraout_r1;
      }
      Rotatelab_Extensions__BlockInputDuringAnimation_fc2e14
                (&uStack_48,iVar3,uVar4,uVar6,uVar1,uVar2,0);
      *(undefined4 *)(param_1 + 0x20) = uStack_48;
      *(undefined4 *)(param_1 + 0x24) = uStack_44;
      *(undefined4 *)(param_1 + 0x28) = uStack_40;
      *(undefined4 *)(param_1 + 0x2c) = uStack_3c;
      thunk_FUN_00ec5080(param_1 + 0x28,0);
      piVar7 = *(int **)(_UNK_010dcc00 + 0x10dcb2c);
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar7;
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x104);
      if (iVar3 != 0) {
        puVar9 = *(undefined4 **)(_UNK_010dcc04 + 0x10dcb68);
        Rotatelab_GameAction_bool___Raise_23a280c(iVar3,1,*puVar9);
        iVar3 = *(int *)(*(int *)(*piVar7 + 0x5c) + 0xfc);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_GameAction_bool___Raise_23a280c(iVar3,1,*puVar9);
        iVar3 = *(int *)(*(int *)(*piVar7 + 0x5c) + 0x114);
        if (iVar3 != 0) {
          Rotatelab_GameAction_bool___Raise_23a280c(iVar3,0,*puVar9);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    case 2:
    case 3:
      piVar7 = *(int **)(&UNK_010f0b28 + _UNK_010f0bac);
      iVar3 = *piVar7;
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        iVar3 = *piVar7;
      }
      iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 400);
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar3 + 8);
        if (iVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(iVar3 + 0xc))(*(undefined4 *)(iVar3 + 0x20),*(undefined4 *)(iVar3 + 0x14));
          return;
        }
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    default:
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xb5) = 1;
    if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_PopupController__Show_1124734(*(int *)(param_1 + 0x3c),0,0);
    iVar3 = Rotatelab_CloudRush_CloudRushManager__UpdateProgressionCoroutine_10e0bb0(param_1);
  }
  if (iVar3 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
    uVar6 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar6,uVar4,0);
  }
  else {
    iVar5 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar5 != 0) {
      pcVar8 = (char *)(iRam036143f4 + 0x3614380);
      if (*pcVar8 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
        *pcVar8 = '\x01';
      }
      if (param_1 != 0) {
        iVar5 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
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
        (*UNRECOVERED_JUMPTABLE)(iVar5,iVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar6 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar6,uVar4,0);
  }
  uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar6,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

