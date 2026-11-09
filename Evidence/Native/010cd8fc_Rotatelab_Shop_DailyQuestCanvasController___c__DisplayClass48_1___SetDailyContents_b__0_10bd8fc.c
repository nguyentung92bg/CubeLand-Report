/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController.<>c__DisplayClass48_1$$<SetDailyContents>b__0
bool Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass48_1___SetDailyContents_b__0 (Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass48_1_o* __this, Rotatelab_Shop_DailyQuestSo_DailyQuestData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController.<>c__DisplayClass48_1$$<SetDailyContents>b__0
   bool Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass48_1___SetDailyContents_b__0
   (Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass48_1_o* __this,
   Rotatelab_Shop_DailyQuestSo_DailyQuestData_o* e, const MethodInfo* method); */

uint Rotatelab_Shop_DailyQuestCanvasController___c__DisplayClass48_1___SetDailyContents_b__0_10bd8fc
               (int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010cd994 + 0x10cd914);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd998 + 0x10cd928));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = 0;
  if (*(int *)(param_2 + 0xc) == *(int *)(param_1 + 8)) {
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4(0);
    }
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0xc);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4(0);
    }
    uVar1 = System_Collections_Generic_List_Int32Enum___Contains_261e7a0
                      (iVar2,*(undefined4 *)(param_2 + 0x10),
                       **(undefined4 **)(_UNK_010cd99c + 0x10cd984));
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}

