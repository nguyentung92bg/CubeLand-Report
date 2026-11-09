/* IL2CPP: Rotatelab.CloudRush.CloudRushRegistrationController$$OnCloudRushRegistrationPopupRequestedHandler
void Rotatelab_CloudRush_CloudRushRegistrationController__OnCloudRushRegistrationPopupRequestedHandler (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.CloudRush.CloudRushRegistrationController$$OnCloudRushRegistrationPopupRequestedHandler
   void 
   Rotatelab_CloudRush_CloudRushRegistrationController__OnCloudRushRegistrationPopupRequestedHandler
   (Rotatelab_CloudRush_CloudRushRegistrationController_o* __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushRegistrationController__OnCloudRushRegistrationPopupRequestedHandler_10e687c
              (int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar8;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_lr;
  
  pcVar8 = (char *)(_UNK_010f6a10 + 0x10f6894);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6a14 + 0x10f68a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6a18 + 0x10f68b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6a1c + 0x10f68c0));
    *pcVar8 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  Rotatelab_CloudRush_CloudRushRegistrationController__SetPlayerCountText_10e64bc(param_1,0);
  Rotatelab_CloudRush_CloudRushRegistrationController__SetupPlayerAvatars_10e6620(param_1);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_transform_35fe190(*(int *)(param_1 + 0x14),0);
  pcVar8 = (char *)(_UNK_010f6a20 + 0x10f6910);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f6a24 + 0x10f6924));
    *pcVar8 = '\x01';
  }
  puVar4 = *(undefined4 **)(**(int **)(_UNK_010f6a28 + 0x10f693c) + 0x5c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar3,*puVar4,puVar4[1],puVar4[2],0);
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
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f6a2c + 0x10f69b4));
  System_Action___ctor_2b10bac(uVar5,param_1,**(undefined4 **)(_UNK_010f6a30 + 0x10f69d0),0);
  if (*(int *)(**(int **)(_UNK_010f6a34 + 0x10f69e4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar8 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8),1,uVar5,0,unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7,unaff_r8,unaff_lr);
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c1c + 0xfd2ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c20 + 0xfd2ac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c24 + 0xfd2acc));
    *pcVar8 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c28 + 0xfd2ae0));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar7 = (int *)(iVar2 + 8);
  *piVar7 = iVar3;
  thunk_FUN_00ec5080(piVar7,iVar3);
  *(undefined4 *)(iVar2 + 0x10) = uVar5;
  *(undefined1 *)(iVar2 + 0xc) = 1;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),uVar5);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar7,0,0);
  }
  if (*piVar7 != 0) {
    UnityEngine_CanvasGroup__set_interactable_39a3940(*piVar7,0,0);
    if (*piVar7 != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*piVar7,1,0);
      uVar5 = 0x3f800000;
      if (*(char *)(iVar2 + 0xc) == '\0') {
        uVar5 = _UNK_00fd2c10;
      }
      iVar3 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                        (*(undefined4 *)(iVar2 + 8),uVar5,0x3e4ccccd,0);
      uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar5,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
      uVar6 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
      cVar1 = '\0';
      if (iVar3 != 0) {
        cVar1 = *(char *)(iVar3 + 0x94);
      }
      if (iVar3 != 0 && cVar1 != '\0') {
        *(undefined4 *)(iVar3 + 0x4c) = uVar5;
        thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x4c),uVar5,uVar6);
      }
      return iVar3;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

