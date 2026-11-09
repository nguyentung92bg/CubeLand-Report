/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$GetDailyQuest
Rotatelab_Shop_DailyQuestCanvasController_CurrentDailyQuest_o* Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuest (Rotatelab_Shop_DailyQuestCanvasController_o* __this, Rotatelab_Shop_DailyQuestSo_DailyQuestData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$GetDailyQuest
   Rotatelab_Shop_DailyQuestCanvasController_CurrentDailyQuest_o*
   Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuest
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this,
   Rotatelab_Shop_DailyQuestSo_DailyQuestData_o* data, const MethodInfo* method); */

undefined4 Rotatelab_Shop_DailyQuestCanvasController__GetDailyQuest_10bc9e0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uStack_1c;
  
  pcVar5 = (char *)(_UNK_010ccb24 + 0x10cc9f8);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccb28 + 0x10cca0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccb2c + 0x10cca18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccb30 + 0x10cca24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccb34 + 0x10cca30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ccb38 + 0x10cca3c));
    *pcVar5 = '\x01';
  }
  uVar8 = *(undefined4 *)(param_1 + 0x70);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(_UNK_010ccb3c + 0x10cca60);
  uVar4 = *(undefined4 *)(param_2 + 8);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar2[4];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar3 + 0x5c);
    }
    uVar7 = *puVar2;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ccb40 + 0x10ccaac));
    System_Func_object__int__bool____ctor_239e2d8
              (iVar6,uVar7,**(undefined4 **)(_UNK_010ccb44 + 0x10ccacc),0);
    piVar3 = (int *)(*(int *)(*piVar3 + 0x5c) + 0x10);
    *piVar3 = iVar6;
    thunk_FUN_00ec5080(piVar3,iVar6);
  }
  if (*(int *)(**(int **)(_UNK_010ccb48 + 0x10ccaf4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = **(int **)(_UNK_010ccb4c + 0x10ccb18);
  if ((*(int *)(iVar1 + 0x1c) == 0) &&
     (FUN_00ec37c0(*(undefined4 *)(_UNK_01496c74 + 0x1496c08)), *(int *)(iVar1 + 0x1c) == 0)) {
    FUN_00efd7c4(iVar1);
  }
  uStack_1c = 0;
  if (*(int *)(**(int **)(_UNK_01496c78 + 0x1496c2c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_Extensions__TryFind_object__int__1489b34
                    (uVar8,uVar4,iVar6,&uStack_1c,*(undefined4 *)(*(int *)(iVar1 + 0x1c) + 0xc));
  uVar8 = 0;
  if (iVar1 != 0) {
    uVar8 = uStack_1c;
  }
  return uVar8;
}

