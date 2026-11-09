/* IL2CPP: Rotatelab.Shop.DailyQuestInfoController$$ShowButtonPrevent
void Rotatelab_Shop_DailyQuestInfoController__ShowButtonPrevent (Rotatelab_Shop_DailyQuestInfoController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestInfoController$$ShowButtonPrevent
   void Rotatelab_Shop_DailyQuestInfoController__ShowButtonPrevent
   (Rotatelab_Shop_DailyQuestInfoController_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_DailyQuestInfoController__ShowButtonPrevent_10beb8c(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 unaff_r4;
  int iVar6;
  undefined4 unaff_r5;
  char *pcVar7;
  
  pcVar7 = (char *)(_UNK_010cebf4 + 0x10ceba0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cebf8 + 0x10cebb4));
    *pcVar7 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (*(int *)(**(int **)(_UNK_010cebfc + 0x10cebc8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_00fd2c14 + 0xfd2a94);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c18 + 0xfd2aa8),1,0,0,unaff_r4,unaff_r5);
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c1c + 0xfd2ab4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c20 + 0xfd2ac0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd2c24 + 0xfd2acc));
    *pcVar7 = '\x01';
  }
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c28 + 0xfd2ae0));
  System_Object___ctor_2bb93bc(iVar2,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)(iVar2 + 8);
  *piVar5 = iVar6;
  thunk_FUN_00ec5080(piVar5,iVar6);
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar2 + 0xc) = 1;
  thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10),0);
  if (*(char *)(iVar2 + 0xc) != '\0') {
    if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_CanvasGroup__set_alpha_39a3758(*piVar5,0,0);
  }
  if (*piVar5 != 0) {
    UnityEngine_CanvasGroup__set_interactable_39a3940(*piVar5,0,0);
    if (*piVar5 != 0) {
      UnityEngine_CanvasGroup__set_blocksRaycasts_39a3b28(*piVar5,1,0);
      uVar3 = 0x3f800000;
      if (*(char *)(iVar2 + 0xc) == '\0') {
        uVar3 = _UNK_00fd2c10;
      }
      iVar6 = DG_Tweening_DOTweenModuleUI__DOFade_f9e6a0
                        (*(undefined4 *)(iVar2 + 8),uVar3,0x3e4ccccd,0);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd2c2c + 0xfd2bd0));
      DG_Tweening_TweenCallback___ctor_11657e8
                (uVar3,iVar2,**(undefined4 **)(_UNK_00fd2c30 + 0xfd2bec),0);
      uVar4 = **(undefined4 **)(_UNK_00fd2c34 + 0xfd2c04);
      cVar1 = '\0';
      if (iVar6 != 0) {
        cVar1 = *(char *)(iVar6 + 0x94);
      }
      if (iVar6 != 0 && cVar1 != '\0') {
        *(undefined4 *)(iVar6 + 0x4c) = uVar3;
        thunk_FUN_00ec5080((undefined4 *)(iVar6 + 0x4c),uVar3,uVar4);
      }
      return iVar6;
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

