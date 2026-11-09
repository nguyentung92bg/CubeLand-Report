/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$OpenChests
void Rotatelab_DailyDelivery_DailyDeliveryDayBase__OpenChests (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$OpenChests
   void Rotatelab_DailyDelivery_DailyDeliveryDayBase__OpenChests
   (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliveryDayBase__OpenChests_10d88f8(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_010e8a38 + 0x10e8910);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8a3c + 0x10e8924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8a40 + 0x10e8930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8a44 + 0x10e893c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8a48 + 0x10e8948));
    *pcVar2 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_14 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_20,*(int *)(param_1 + 0x2c),**(undefined4 **)(_UNK_010e8a4c + 0x10e897c));
  puVar3 = *(undefined4 **)(_UNK_010e8a50 + 0x10e899c);
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_20,*puVar3)
    ;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_20,**(undefined4 **)(_UNK_010e8a54 + 0x10e89d4));
      return;
    }
    if (iStack_14 == 0) break;
    Rotatelab_DailyDelivery_DailyDeliveryChest__SetOpened_10d4ddc(iStack_14);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

