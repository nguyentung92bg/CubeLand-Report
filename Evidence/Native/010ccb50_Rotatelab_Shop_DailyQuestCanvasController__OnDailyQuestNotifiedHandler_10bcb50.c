/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$OnDailyQuestNotifiedHandler
void Rotatelab_Shop_DailyQuestCanvasController__OnDailyQuestNotifiedHandler (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$OnDailyQuestNotifiedHandler
   void Rotatelab_Shop_DailyQuestCanvasController__OnDailyQuestNotifiedHandler
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController__OnDailyQuestNotifiedHandler_10bcb50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_24;
  
  pcVar3 = (char *)(_UNK_010ccd40 + 0x10ccb68);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccd44 + 0x10ccb7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccd48 + 0x10ccb88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccd4c + 0x10ccb94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccd50 + 0x10ccba0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccd54 + 0x10ccbac));
    *pcVar3 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x6c);
  pcVar3 = (char *)(_UNK_010ccd58 + 0x10ccbc8);
  iStack_24 = 0;
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccd5c + 0x10ccbe0));
    *pcVar3 = '\x01';
  }
  iVar1 = *(int *)(**(int **)(_UNK_010ccd60 + 0x10ccbf8) + 0x5c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc
            (iVar5,*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar1 + 0x10),
             *(undefined4 *)(iVar1 + 0x14),0);
  piVar8 = *(int **)(_UNK_010ccd64 + 0x10ccc38);
  uVar6 = *(undefined4 *)(param_1 + 0x58);
  piVar4 = *(int **)(param_1 + 0x68);
  iVar5 = *piVar8;
  if (*(int *)(iVar5 + 0x74) == 0) {
    FUN_00ec3934();
    iVar5 = *piVar8;
  }
  puVar2 = *(undefined4 **)(iVar5 + 0x5c);
  iVar1 = puVar2[6];
  if (iVar1 == 0) {
    if (*(int *)(iVar5 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ccd68 + 0x10ccc88));
    System_Predicate_object____ctor_1876380
              (iVar1,uVar7,**(undefined4 **)(_UNK_010ccd6c + 0x10ccca8),0);
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x18);
    *piVar8 = iVar1;
    thunk_FUN_00ec5080(piVar8,iVar1);
  }
  if (*(int *)(**(int **)(_UNK_010ccd70 + 0x10cccd0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iStack_24 = Rotatelab_Extensions__Count_object__1486434
                        (uVar6,iVar1,**(undefined4 **)(_UNK_010ccd74 + 0x10cccf0));
  if (iStack_24 < 2) {
    iStack_24 = 1;
  }
  uVar6 = System_Int32__ToString_2b6b9ec(&iStack_24,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar4 + 0x2b0))(piVar4,uVar6,*(undefined4 *)(*piVar4 + 0x2b4));
  return;
}

