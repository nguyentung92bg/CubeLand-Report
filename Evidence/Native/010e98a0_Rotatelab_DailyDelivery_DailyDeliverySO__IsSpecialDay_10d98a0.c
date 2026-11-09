/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO$$IsSpecialDay
bool Rotatelab_DailyDelivery_DailyDeliverySO__IsSpecialDay (Rotatelab_DailyDelivery_DailyDeliverySO_o* __this, int32_t cycleNumber, int32_t dayIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.DailyDelivery.DailyDeliverySO$$IsSpecialDay
   bool Rotatelab_DailyDelivery_DailyDeliverySO__IsSpecialDay
   (Rotatelab_DailyDelivery_DailyDeliverySO_o* __this, int32_t cycleNumber, int32_t dayIndex, const
   MethodInfo* method); */

bool Rotatelab_DailyDelivery_DailyDeliverySO__IsSpecialDay_10d98a0
               (int param_1,uint param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010e990c + 0x10e98bc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e9910 + 0x10e98d0));
    *pcVar2 = '\x01';
  }
  iVar1 = 0xc;
  if ((param_2 & 1) == 0) {
    iVar1 = 0x10;
  }
  if (*(int *)(param_1 + iVar1) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return ~param_3 + *(int *)(*(int *)(param_1 + iVar1) + 0xc) == 0;
}

