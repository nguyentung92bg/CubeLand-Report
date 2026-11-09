/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$SetWeeklyContents
void Rotatelab_Shop_DailyQuestCanvasController__SetWeeklyContents (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$SetWeeklyContents
   void Rotatelab_Shop_DailyQuestCanvasController__SetWeeklyContents
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__SetWeeklyContents_10ba91c(int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint in_fpscr;
  undefined4 uVar9;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar2 = (char *)(_UNK_010cabf0 + 0x10ca934);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cabf4 + 0x10ca948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cabf8 + 0x10ca954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cabfc + 0x10ca960));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cac00 + 0x10ca96c));
    *pcVar2 = '\x01';
  }
  iVar3 = 0;
  uStack_24 = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  uStack_28 = 0;
  puVar7 = *(undefined4 **)(_UNK_010cac04 + 0x10ca990);
  puVar8 = *(undefined4 **)(_UNK_010cac08 + 0x10ca998);
  while( true ) {
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x5c) + 0x14);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 0xc) <= iVar3) {
      if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_UI_Slider__set_minValue_39c2514(*(int *)(param_1 + 0x60),0,0);
      if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = VectorSignedToFloat(*(undefined4 *)(param_1 + 0x84),(byte)(in_fpscr >> 0x16) & 3);
      UnityEngine_UI_Slider__set_maxValue_39c25a4(*(int *)(param_1 + 0x60),uVar9,0);
      piVar4 = *(int **)(param_1 + 0x60);
      uVar9 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestWeeklyValue_10b9274();
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = VectorSignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      (**(code **)(*piVar4 + 0x238))(piVar4,uVar9,*(undefined4 *)(*piVar4 + 0x23c));
      piVar4 = *(int **)(param_1 + 100);
      uStack_24 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestWeeklyValue_10b9274();
      uVar9 = System_Int32__ToString_2b6b9ec(&uStack_24,0);
      if (*(int *)(param_1 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_28 = *(undefined4 *)(*(int *)(param_1 + 0x60) + 0xc4);
      uVar1 = System_Single__ToString_2b8501c(&uStack_28,0);
      uVar9 = System_String__Concat_2a0b574
                        (uVar9,**(undefined4 **)(_UNK_010cac0c + 0x10cabb8),uVar1,0);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar4 + 0x2b0))(piVar4,uVar9,*(undefined4 *)(*piVar4 + 0x2b4));
      return;
    }
    iVar5 = *(int *)(param_1 + 0x84);
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 0x14);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = System_Collections_Generic_List_object___get_Item_267d814(iVar6,iVar3,*puVar7);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(param_1 + 0x84) = *(int *)(iVar6 + 8) + iVar5;
    if (*(int *)(param_1 + 0x4c) == 0) break;
    iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(param_1 + 0x4c),iVar3,*puVar8);
    if (*(int *)(param_1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(*(int *)(param_1 + 0x5c) + 0x14);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = System_Collections_Generic_List_object___get_Item_267d814(iVar6,iVar3,*puVar7);
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_DailyQuestChest__Init_10bbc1c(iVar5,*(undefined4 *)(iVar6 + 0xc));
    iVar5 = Rotatelab_Shop_DailyQuestCanvasController__get_DailyQuestCollectedWeeklyChestCount_10b9320
                      ();
    if (iVar3 <= iVar5 + -1) {
      if (*(int *)(param_1 + 0x4c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = System_Collections_Generic_List_object___get_Item_267d814
                        (*(int *)(param_1 + 0x4c),iVar3,*puVar8);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Shop_DailyQuestChest__SetCollected_10bbfd8(iVar5);
    }
    iVar3 = iVar3 + 1;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

