/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$OnCloudRushOfferPopupRequestedHandler
void Rotatelab_CloudRush_CloudRushOfferController__OnCloudRushOfferPopupRequestedHandler (Rotatelab_CloudRush_CloudRushOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$OnCloudRushOfferPopupRequestedHandler
   void Rotatelab_CloudRush_CloudRushOfferController__OnCloudRushOfferPopupRequestedHandler
   (Rotatelab_CloudRush_CloudRushOfferController_o* __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushOfferController__OnCloudRushOfferPopupRequestedHandler_10e53fc
              (int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 unaff_r6;
  undefined4 *puVar8;
  
  pcVar5 = (char *)(_UNK_010f56d0 + 0x10f5410);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f56d4 + 0x10f5424));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f56d8 + 0x10f5430));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f56dc + 0x10f543c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f56e0 + 0x10f5448));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f56e4 + 0x10f5454));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f56e8 + 0x10f5460));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010f56ec + 0x10f5474);
  iVar3 = *piVar6;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar6;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x114);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar3,0,**(undefined4 **)(_UNK_010f56f0 + 0x10f54ac));
  puVar8 = *(undefined4 **)(_UNK_010f56f4 + 0x10f54c0);
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    TMPro_TMP_Text__SetText_34ffb2c
              (*(int *)(param_1 + 0x38),**(undefined4 **)(_UNK_010f56f8 + 0x10f55a8),0);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = Rotatelab_CloudRush_CloudRushController__get_CloudRushIsEntryRewardReady_10dc034();
    Rotatelab_CloudRush_CloudRushOfferController__UpdatePlayButton_10e4e88(param_1,uVar7);
    Rotatelab_CloudRush_CloudRushOfferController__UpdateOfferImage_10e4f34(param_1,0);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x20),1,0);
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_010f56fc + 0x10f560c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = 0x42e60000;
  }
  else {
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    if (iVar3 != 3) goto LAB_010f5634;
    if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    TMPro_TMP_Text__SetText_34ffb2c
              (*(int *)(param_1 + 0x38),**(undefined4 **)(_UNK_010f5700 + 0x10f551c),0);
    Rotatelab_CloudRush_CloudRushOfferController__UpdatePlayButton_10e4e88(param_1,0);
    Rotatelab_CloudRush_CloudRushOfferController__UpdateOfferImage_10e4f34(param_1,1);
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x20),0,0);
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    if (*(int *)(**(int **)(_UNK_010f5704 + 0x10f5568) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = 0xc3888000;
  }
  Rotatelab_Extensions__SetAnchoredPosY_fc1f84(uVar7,uVar4,0);
LAB_010f5634:
  piVar6 = *(int **)(param_1 + 0x14);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar6 + 0x188))(piVar6,1,*(undefined4 *)(*piVar6 + 0x18c));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar3,1,0);
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_010f5708 + 0x10f56a4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8),1,0,0,unaff_r4,unaff_r5,unaff_r6);
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c1c + 0xfd2ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c20 + 0xfd2ac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c24 + 0xfd2acc));
    *pcVar5 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c28 + 0xfd2ae0));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar2 + 8);
    *piVar6 = iVar3;
    thunk_FUN_00ec5080(piVar6,iVar3);
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0xc) = 1;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),0);
    if (*(char *)(iVar2 + 0xc) != '\0') {
      if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar6,0,0);
    }
    if (*piVar6 != 0) {
      UnityEngine_CanvasGroup__set_interactable_39a3940(*piVar6,0,0);
      if (*piVar6 != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*piVar6,1,0);
        uVar7 = 0x3f800000;
        if (*(char *)(iVar2 + 0xc) == '\0') {
          uVar7 = _UNK_00fd2c10;
        }
        iVar3 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                          (*(undefined4 *)(iVar2 + 8),uVar7,0x3e4ccccd,0);
        uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
        DG_Tweening_TweenCallback___ctor_11657e8
                  (uVar7,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
        uVar4 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
        cVar1 = '\0';
        if (iVar3 != 0) {
          cVar1 = *(char *)(iVar3 + 0x94);
        }
        if (iVar3 != 0 && cVar1 != '\0') {
          *(undefined4 *)(iVar3 + 0x4c) = uVar7;
          thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x4c),uVar7,uVar4);
        }
        return iVar3;
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

