/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO$$.ctor
void Rotatelab_DailyDelivery_DailyDeliverySO___ctor (Rotatelab_DailyDelivery_DailyDeliverySO_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO$$.ctor
   void Rotatelab_DailyDelivery_DailyDeliverySO___ctor (Rotatelab_DailyDelivery_DailyDeliverySO_o*
   __this, const MethodInfo* method); */

void Rotatelab_DailyDelivery_DailyDeliverySO___ctor_10da56c(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_010ea660 + 0x10ea580);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ea664 + 0x10ea594));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ea668 + 0x10ea5a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ea66c + 0x10ea5ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ea670 + 0x10ea5b8));
    *pcVar2 = '\x01';
  }
  puVar3 = *(undefined4 **)(_UNK_010ea674 + 0x10ea5cc);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  puVar4 = *(undefined4 **)(_UNK_010ea678 + 0x10ea5e0);
  System_Collections_Generic_List_object____ctor_267d274(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
  uVar1 = thunk_FUN_00f00cdc(*puVar3);
  System_Collections_Generic_List_object____ctor_267d274(uVar1,*puVar4);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),uVar1);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ea67c + 0x10ea624));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar1,**(undefined4 **)(_UNK_010ea680 + 0x10ea638));
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),uVar1);
  pcVar2 = (char *)(_UNK_03615540 + 0x36154c4);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03615544 + 0x36154d8),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_03615548 + 0x36154ec) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  System_Object___ctor_2bb93bc(param_1,0);
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_0361554c + 0x3615514);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_03615550 + 0x3615524);
    *(code **)(_UNK_03615554 + 0x3615534) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x0361553c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1);
  return;
}

