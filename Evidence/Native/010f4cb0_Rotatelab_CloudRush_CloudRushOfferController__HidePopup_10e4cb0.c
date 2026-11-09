/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$HidePopup
void Rotatelab_CloudRush_CloudRushOfferController__HidePopup (Rotatelab_CloudRush_CloudRushOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$HidePopup
   void Rotatelab_CloudRush_CloudRushOfferController__HidePopup
   (Rotatelab_CloudRush_CloudRushOfferController_o* __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushOfferController__HidePopup_10e4cb0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 unaff_r6;
  
  pcVar5 = (char *)(_UNK_010f4d88 + 0x10f4cc4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4d8c + 0x10f4cd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4d90 + 0x10f4ce4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4d94 + 0x10f4cf0));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(param_1 + 0x14);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar6 + 0x188))(piVar6,0,*(undefined4 *)(*piVar6 + 0x18c));
  iVar7 = *(int *)(param_1 + 0x10);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f4d98 + 0x10f4d30));
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_010f4d9c + 0x10f4d4c),0);
  if (*(int *)(**(int **)(_UNK_010f4da0 + 0x10f4d60) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar5 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8),0,uVar3,0,unaff_r4,unaff_r5,unaff_r6);
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c1c + 0xfd2ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c20 + 0xfd2ac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c24 + 0xfd2acc));
    *pcVar5 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c28 + 0xfd2ae0));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 != 0) {
    piVar6 = (int *)(iVar2 + 8);
    *piVar6 = iVar7;
    thunk_FUN_00ec5080(piVar6,iVar7);
    *(undefined4 *)(iVar2 + 0x10) = uVar3;
    *(undefined1 *)(iVar2 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),uVar3);
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
        uVar3 = 0x3f800000;
        if (*(char *)(iVar2 + 0xc) == '\0') {
          uVar3 = _UNK_00fd2c10;
        }
        iVar7 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                          (*(undefined4 *)(iVar2 + 8),uVar3,0x3e4ccccd,0);
        uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
        DG_Tweening_TweenCallback___ctor_11657e8
                  (uVar3,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
        uVar4 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
        cVar1 = '\0';
        if (iVar7 != 0) {
          cVar1 = *(char *)(iVar7 + 0x94);
        }
        if (iVar7 != 0 && cVar1 != '\0') {
          *(undefined4 *)(iVar7 + 0x4c) = uVar3;
          thunk_FUN_00ec5080((undefined4 *)(iVar7 + 0x4c),uVar3,uVar4);
        }
        return iVar7;
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

