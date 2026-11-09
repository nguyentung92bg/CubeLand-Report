/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.DayData$$Initialize
void Rotatelab_DailyDelivery_DailyDeliverySO_DayData__Initialize (Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* __this, Rotatelab_DailyDelivery_DailyDeliverySO_o* so, System_String_o* dayTitle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO.DayData$$Initialize
   void Rotatelab_DailyDelivery_DailyDeliverySO_DayData__Initialize
   (Rotatelab_DailyDelivery_DailyDeliverySO_DayData_o* __this,
   Rotatelab_DailyDelivery_DailyDeliverySO_o* so, System_String_o* dayTitle, const MethodInfo*
   method); */

void Rotatelab_DailyDelivery_DailyDeliverySO_DayData__Initialize_10d9d6c
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  pcVar2 = (char *)(_UNK_010e9ec8 + 0x10e9d8c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9ecc + 0x10e9da0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9ed0 + 0x10e9dac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9ed4 + 0x10e9db8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9ed8 + 0x10e9dc4));
    *pcVar2 = '\x01';
  }
  *(undefined4 *)(param_1 + 0xc) = param_3;
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  iStack_1c = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),param_3);
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&uStack_28,*(int *)(param_1 + 8),**(undefined4 **)(_UNK_010e9edc + 0x10e9e08));
  puVar3 = *(undefined4 **)(_UNK_010e9ee0 + 0x10e9e28);
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720(&uStack_28,*puVar3)
    ;
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&uStack_28,**(undefined4 **)(_UNK_010e9ee4 + 0x10e9e64));
      return;
    }
    if (iStack_1c == 0) break;
    Rotatelab_DailyDelivery_DailyDeliverySO_RewardSlot__SetOwner_10da684(iStack_1c,param_2);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

