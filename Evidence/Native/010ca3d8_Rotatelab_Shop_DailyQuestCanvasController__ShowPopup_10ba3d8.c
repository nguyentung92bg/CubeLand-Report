/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$ShowPopup
void Rotatelab_Shop_DailyQuestCanvasController__ShowPopup (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$ShowPopup
   void Rotatelab_Shop_DailyQuestCanvasController__ShowPopup
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__ShowPopup_10ba3d8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 unaff_r4;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int iVar9;
  undefined4 unaff_r7;
  int iVar10;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(_UNK_010ca670 + 0x10ca3f0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca674 + 0x10ca404));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca678 + 0x10ca410));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca67c + 0x10ca41c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca680 + 0x10ca428));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca684 + 0x10ca434));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca688 + 0x10ca440));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca68c + 0x10ca44c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca690 + 0x10ca458));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca694 + 0x10ca464));
    *pcVar6 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ca698 + 0x10ca478));
  System_Object___ctor_2bb93bc(iVar1,0);
  piVar7 = *(int **)(_UNK_010ca69c + 0x10ca494);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x170);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,0,**(undefined4 **)(_UNK_010ca6a0 + 0x10ca4cc));
  iVar2 = *(int *)(param_1 + 0x6c);
  pcVar6 = (char *)(_UNK_010ca6a4 + 0x10ca4e4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ca6a8 + 0x10ca4f8));
    *pcVar6 = '\x01';
  }
  puVar3 = *(undefined4 **)(**(int **)(_UNK_010ca6ac + 0x10ca510) + 0x5c);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar2,*puVar3,puVar3[1],puVar3[2],0);
  piVar7 = *(int **)(_UNK_010ca6b0 + 0x10ca54c);
  iVar9 = *(int *)(param_1 + 0x58);
  iVar2 = *piVar7;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar7;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar10 = puVar3[1];
  if (iVar10 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar8 = *puVar3;
    iVar10 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ca6b4 + 0x10ca598));
    System_Predicate_object____ctor_1876380
              (iVar10,uVar8,**(undefined4 **)(_UNK_010ca6b8 + 0x10ca5b8),0);
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 4);
    *piVar7 = iVar10;
    thunk_FUN_00ec5080(piVar7,iVar10);
  }
  if (iVar9 != 0) {
    uVar8 = System_Collections_Generic_List_object___FindAll_267e288
                      (iVar9,iVar10,**(undefined4 **)(_UNK_010ca6bc + 0x10ca5f0));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar1 + 8) = uVar8;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),uVar8);
    Rotatelab_Shop_BaseOfferButton__ShowPopup_10cc820(param_1,0);
    uVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ca6c0 + 0x10ca630));
    DG_Tweening_TweenCallback___ctor_11657e8
              (uVar8,iVar1,**(undefined4 **)(_UNK_010ca6c4 + 0x10ca64c),0);
    pcVar6 = (char *)(_UNK_01178688 + 0x11785dc);
    if (*pcVar6 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar8,1,0,unaff_r4,unaff_r5,unaff_r6,
                   unaff_r7,unaff_r11,unaff_lr);
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
      *pcVar6 = '\x01';
    }
    if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar4 = DG_Tweening_DOTween__Sequence_1167c00();
    uVar4 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar4,0x3f000000);
    uVar8 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                      (uVar4,uVar8,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
    iVar1 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                      (uVar8,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
    uVar5 = **(uint **)(_UNK_011786a8 + 0x117867c);
    if (iVar1 != 0) {
      uVar5 = (uint)*(byte *)(iVar1 + 0x94);
    }
    if (iVar1 != 0 && uVar5 != 0) {
      if (*(char *)(iVar1 + 0xa4) == '\0') {
        *(undefined1 *)(iVar1 + 0x5c) = 1;
      }
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

