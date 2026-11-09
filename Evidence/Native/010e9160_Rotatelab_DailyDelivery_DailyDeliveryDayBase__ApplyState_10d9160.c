/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$ApplyState
void Rotatelab_DailyDelivery_DailyDeliveryDayBase__ApplyState (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this, int32_t dayState, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryDayBase$$ApplyState
   void Rotatelab_DailyDelivery_DailyDeliveryDayBase__ApplyState
   (Rotatelab_DailyDelivery_DailyDeliveryDayBase_o* __this, int32_t dayState, const MethodInfo*
   method); */

void Rotatelab_DailyDelivery_DailyDeliveryDayBase__ApplyState_10d9160(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char *pcVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x18);
  if (param_2 == 2) {
    pcVar5 = (char *)(_UNK_010e9264 + 0x10e9188);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010e9268 + 0x10e919c));
      *pcVar5 = '\x01';
    }
    iVar1 = *(int *)(**(int **)(_UNK_010e926c + 0x10e91b0) + 0x5c);
    puVar3 = (undefined4 *)(iVar1 + 0x14);
    puVar4 = (undefined4 *)(iVar1 + 0x10);
    puVar2 = (undefined4 *)(iVar1 + 0xc);
  }
  else {
    pcVar5 = (char *)(_UNK_010e9258 + 0x10e91d0);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010e925c + 0x10e91e4));
      *pcVar5 = '\x01';
    }
    puVar2 = *(undefined4 **)(**(int **)(_UNK_010e9260 + 0x10e91f8) + 0x5c);
    puVar3 = puVar2 + 2;
    puVar4 = puVar2 + 1;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Transform__set_localScale_36155dc(iVar6,*puVar2,*puVar4,*puVar3,0);
  if (param_2 != 2) {
    return;
  }
  pcVar5 = (char *)(_UNK_010e8a38 + 0x10e8910);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8a3c + 0x10e8924));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8a40 + 0x10e8930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8a44 + 0x10e893c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e8a48 + 0x10e8948));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___GetEnumerator_267e7a4
            (&stack0xffffffe0,*(int *)(param_1 + 0x2c),**(undefined4 **)(_UNK_010e8a4c + 0x10e897c))
  ;
  puVar2 = *(undefined4 **)(_UNK_010e8a50 + 0x10e899c);
  while( true ) {
    iVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext_2190720
                      (&stack0xffffffe0,*puVar2);
    if (iVar1 == 0) {
      System_Collections_Generic_List_Enumerator_object___Dispose_219071c
                (&stack0xffffffe0,**(undefined4 **)(_UNK_010e8a54 + 0x10e89d4));
      return;
    }
    if (iVar6 == 0) break;
    Rotatelab_DailyDelivery_DailyDeliveryChest__SetOpened_10d4ddc(iVar6);
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

