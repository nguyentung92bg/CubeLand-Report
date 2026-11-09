/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO$$InitializeCycle
void Rotatelab_DailyDelivery_DailyDeliverySO__InitializeCycle (Rotatelab_DailyDelivery_DailyDeliverySO_o* __this, System_Collections_Generic_List_DailyDeliverySO_DayData__o* cycleDays, System_String_o* cycleName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO$$InitializeCycle
   void Rotatelab_DailyDelivery_DailyDeliverySO__InitializeCycle
   (Rotatelab_DailyDelivery_DailyDeliverySO_o* __this,
   System_Collections_Generic_List_DailyDeliverySO_DayData__o* cycleDays, System_String_o*
   cycleName, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliverySO__InitializeCycle_10d9bfc
               (undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_28;
  
  pcVar3 = (char *)(_UNK_010e9d28 + 0x10e9c1c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9d2c + 0x10e9c30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9d30 + 0x10e9c3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9d34 + 0x10e9c48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9d38 + 0x10e9c54));
    *pcVar3 = '\x01';
  }
  puVar4 = *(undefined4 **)(_UNK_010e9d3c + 0x10e9c70);
  iVar2 = 0;
  while( true ) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_2 + 0xc) <= iVar2) break;
    iVar5 = iVar2 + 1;
    iStack_28 = iVar5;
    uVar1 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_010e9d40 + 0x10e9c98) + 0x24),&iStack_28);
    uVar1 = System_String__Format_2a0c264
                      (**(undefined4 **)(_UNK_010e9d44 + 0x10e9cb8),param_3,uVar1,0);
    if (iVar5 == *(int *)(param_2 + 0xc)) {
      uVar1 = System_String__Concat_29fee38(uVar1,**(undefined4 **)(_UNK_010e9d48 + 0x10e9cdc),0);
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814(param_2,iVar2,*puVar4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_DailyDelivery_DailyDeliverySO_DayData__Initialize_10d9d6c(iVar2,param_1,uVar1);
    iVar2 = iVar5;
  }
  return;
}

