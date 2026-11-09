/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController.<>c__DisplayClass44_0$$<ShowPopup>b__1
void Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass44_0___ShowPopup_b__1 (Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass44_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController.<>c__DisplayClass44_0$$<ShowPopup>b__1
   void Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass44_0___ShowPopup_b__1
   (Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass44_0_o* __this, const MethodInfo*
   method); */

void Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass44_0___ShowPopup_b__1_10bd7c8
               (int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  int iVar5;
  undefined4 unaff_r5;
  char *pcVar6;
  int iVar7;
  undefined4 unaff_r6;
  undefined4 uVar8;
  undefined4 unaff_r7;
  int *piVar9;
  uint uVar10;
  
  pcVar6 = (char *)(_UNK_010cd8d8 + 0x10cd7dc);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd8dc + 0x10cd7f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd8e0 + 0x10cd7fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd8e4 + 0x10cd808));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd8e8 + 0x10cd814));
    *pcVar6 = '\x01';
  }
  piVar9 = *(int **)(_UNK_010cd8ec + 0x10cd828);
  iVar5 = *(int *)(param_1 + 8);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar4 = *(undefined4 **)(iVar1 + 0x5c);
  iVar7 = puVar4[2];
  if (iVar7 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar4 = *(undefined4 **)(*piVar9 + 0x5c);
    }
    uVar8 = *puVar4;
    iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010cd8f0 + 0x10cd874));
    System_Action_object____ctor_1f11414(iVar7,uVar8,**(undefined4 **)(_UNK_010cd8f4 + 0x10cd894),0)
    ;
    piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
    *piVar9 = iVar7;
    thunk_FUN_00ec5080(piVar9,iVar7);
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    System_ThrowHelper__ThrowArgumentNullException_2b8422c
              (0x21,0,**(undefined4 **)(_UNK_010cd8f8 + 0x10cd8cc));
  }
  if (0 < *(int *)(iVar5 + 0xc)) {
    iVar1 = *(int *)(iVar5 + 0x10);
    uVar10 = 0;
    do {
      iVar2 = *(int *)(iVar5 + 0x10);
      if (iVar1 != iVar2) goto LAB_0268e78c;
      iVar2 = *(int *)(iVar5 + 8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(uint *)(iVar2 + 0xc) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(iVar7 + 0xc))
                (*(undefined4 *)(iVar7 + 0x20),*(undefined4 *)(iVar2 + uVar10 * 4 + 0x10),
                 *(undefined4 *)(iVar7 + 0x14),*(code **)(iVar7 + 0xc),unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7);
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < *(int *)(iVar5 + 0xc));
    iVar2 = *(int *)(iVar5 + 0x10);
LAB_0268e78c:
    if (iVar1 != iVar2) {
      thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d4 + 0x2ba5394));
      uVar8 = thunk_FUN_00f00cdc();
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53d8 + 0x2ba53a8));
      System_InvalidOperationException___ctor_2b6e948(uVar8,uVar3,0);
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_02ba53dc + 0x2ba53c4));
      func_0x00ec3920(uVar8,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_00ec3760();
    }
  }
  return;
}

