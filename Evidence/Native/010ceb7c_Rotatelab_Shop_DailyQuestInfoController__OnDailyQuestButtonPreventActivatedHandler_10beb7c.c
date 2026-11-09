/* IL2CPP: Rotatelab.Shop.DailyQuestInfoController$$OnDailyQuestButtonPreventActivatedHandler
void Rotatelab_Shop_DailyQuestInfoController__OnDailyQuestButtonPreventActivatedHandler (Rotatelab_Shop_DailyQuestInfoController_o* __this, bool isActive, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestInfoController$$OnDailyQuestButtonPreventActivatedHandler
   void Rotatelab_Shop_DailyQuestInfoController__OnDailyQuestButtonPreventActivatedHandler
   (Rotatelab_Shop_DailyQuestInfoController_o* __this, bool isActive, const MethodInfo* method); */

int Rotatelab_Shop_DailyQuestInfoController__OnDailyQuestButtonPreventActivatedHandler_10beb7c
              (int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 unaff_r4;
  int iVar7;
  undefined4 unaff_r5;
  char *pcVar8;
  
  if (param_2 == 0) {
    pcVar8 = (char *)(_UNK_010cec68 + 0x10cec14);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010cec6c + 0x10cec28));
      *pcVar8 = '\x01';
    }
    iVar7 = *(int *)(param_1 + 0x10);
    if (*(int *)(**(int **)(_UNK_010cec70 + 0x10cec3c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = 0;
  }
  else {
    pcVar8 = (char *)(_UNK_010cebf4 + 0x10ceba0);
    if (*pcVar8 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010cebf8 + 0x10cebb4));
      *pcVar8 = '\x01';
    }
    iVar7 = *(int *)(param_1 + 0x10);
    if (*(int *)(**(int **)(_UNK_010cebfc + 0x10cebc8) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = 1;
  }
  pcVar8 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8),uVar4,0,0,unaff_r4,unaff_r5);
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
  piVar6 = (int *)(iVar2 + 8);
  *piVar6 = iVar7;
  thunk_FUN_00ec5080(piVar6,iVar7);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0xc) = uVar4;
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
      uVar3 = 0x3f800000;
      if (*(char *)(iVar2 + 0xc) == '\0') {
        uVar3 = _UNK_00fd2c10;
      }
      iVar7 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                        (*(undefined4 *)(iVar2 + 8),uVar3,0x3e4ccccd,0);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar3,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
      uVar5 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
      cVar1 = '\0';
      if (iVar7 != 0) {
        cVar1 = *(char *)(iVar7 + 0x94);
      }
      if (iVar7 != 0 && cVar1 != '\0') {
        *(undefined4 *)(iVar7 + 0x4c) = uVar3;
        thunk_FUN_00ec5080((undefined4 *)(iVar7 + 0x4c),uVar3,uVar5);
      }
      return iVar7;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

