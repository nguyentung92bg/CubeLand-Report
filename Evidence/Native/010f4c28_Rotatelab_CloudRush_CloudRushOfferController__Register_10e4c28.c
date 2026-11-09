/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$Register
void Rotatelab_CloudRush_CloudRushOfferController__Register (Rotatelab_CloudRush_CloudRushOfferController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushOfferController$$Register
   void Rotatelab_CloudRush_CloudRushOfferController__Register
   (Rotatelab_CloudRush_CloudRushOfferController_o* __this, const MethodInfo* method); */

int Rotatelab_CloudRush_CloudRushOfferController__Register_10e4c28(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar7;
  int *piVar8;
  undefined4 unaff_r6;
  
  pcVar7 = (char *)(_UNK_010f4ca4 + 0x10f4c3c);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4ca8 + 0x10f4c50));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(_UNK_010f4cac + 0x10f4c64);
  iVar3 = *piVar8;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar8;
  }
  iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x194);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction__Raise_fc08b8(iVar3,0);
  pcVar7 = (char *)(_UNK_010f4d88 + 0x10f4cc4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4d8c + 0x10f4cd8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4d90 + 0x10f4ce4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f4d94 + 0x10f4cf0));
    *pcVar7 = '\x01';
  }
  piVar8 = *(int **)(param_1 + 0x14);
  if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = *(code **)(*piVar8 + 0x188);
  (*pcVar6)(piVar8,0,*(undefined4 *)(*piVar8 + 0x18c),pcVar6,unaff_r4,unaff_r5);
  iVar3 = *(int *)(param_1 + 0x10);
  uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010f4d98 + 0x10f4d30));
  System_Action___ctor_2b10bac(uVar4,param_1,**(undefined4 **)(_UNK_010f4d9c + 0x10f4d4c),0);
  if (*(int *)(**(int **)(_UNK_010f4da0 + 0x10f4d60) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8),0,uVar4,0,unaff_r4,unaff_r5,unaff_r6);
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c1c + 0xfd2ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c20 + 0xfd2ac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c24 + 0xfd2acc));
    *pcVar7 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c28 + 0xfd2ae0));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 != 0) {
    piVar8 = (int *)(iVar2 + 8);
    *piVar8 = iVar3;
    thunk_FUN_00ec5080(piVar8,iVar3);
    *(undefined4 *)(iVar2 + 0x10) = uVar4;
    *(undefined1 *)(iVar2 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),uVar4);
    if (*(char *)(iVar2 + 0xc) != '\0') {
      if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar8,0,0);
    }
    if (*piVar8 != 0) {
      UnityEngine_CanvasGroup__set_interactable_39a3940(*piVar8,0,0);
      if (*piVar8 != 0) {
        UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*piVar8,1,0);
        uVar4 = 0x3f800000;
        if (*(char *)(iVar2 + 0xc) == '\0') {
          uVar4 = _UNK_00fd2c10;
        }
        iVar3 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                          (*(undefined4 *)(iVar2 + 8),uVar4,0x3e4ccccd,0);
        uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
        DG_Tweening_TweenCallback___ctor_11657e8
                  (uVar4,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
        uVar5 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
        cVar1 = '\0';
        if (iVar3 != 0) {
          cVar1 = *(char *)(iVar3 + 0x94);
        }
        if (iVar3 != 0 && cVar1 != '\0') {
          *(undefined4 *)(iVar3 + 0x4c) = uVar4;
          thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x4c),uVar4,uVar5);
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

