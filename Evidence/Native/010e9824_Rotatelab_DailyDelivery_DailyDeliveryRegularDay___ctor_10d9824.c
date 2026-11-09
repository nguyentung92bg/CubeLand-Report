/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryRegularDay$$.ctor
void Rotatelab_DailyDelivery_DailyDeliveryRegularDay___ctor (Rotatelab_DailyDelivery_DailyDeliveryRegularDay_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliveryRegularDay$$.ctor
   void Rotatelab_DailyDelivery_DailyDeliveryRegularDay___ctor
   (Rotatelab_DailyDelivery_DailyDeliveryRegularDay_o* __this, const MethodInfo* method); */

int Rotatelab_DailyDelivery_DailyDeliveryRegularDay___ctor_10d9824(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar3;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_010e9364 + 0x10e9298);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9368 + 0x10e92ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e936c + 0x10e92b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9370 + 0x10e92c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9374 + 0x10e92d0));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_010e9378 + 0x10e92ec);
  *(undefined4 *)(param_1 + 0x10) = 0x3e99999a;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Collections_Generic_List_object____ctor_267d274
            (uVar2,**(undefined4 **)(_UNK_010e937c + 0x10e9304));
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x28),uVar2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e9380 + 0x10e9328));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar2,**(undefined4 **)(_UNK_010e9384 + 0x10e933c));
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x2c),uVar2);
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0,extraout_r2,extraout_r3,unaff_r4
                       ,unaff_r5,unaff_r11,unaff_lr);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

