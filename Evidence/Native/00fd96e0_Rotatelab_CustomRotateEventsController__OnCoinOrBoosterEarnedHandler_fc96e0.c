/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCoinOrBoosterEarnedHandler
void Rotatelab_CustomRotateEventsController__OnCoinOrBoosterEarnedHandler (Rotatelab_CustomRotateEventsController_o* __this, int32_t type, int64_t amount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCoinOrBoosterEarnedHandler
   void Rotatelab_CustomRotateEventsController__OnCoinOrBoosterEarnedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, int32_t type, int64_t amount, const
   MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnCoinOrBoosterEarnedHandler_fc96e0
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int extraout_r1;
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = (char *)(_UNK_00fd9774 + 0xfd9700);
  iVar1 = param_2;
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd9778 + 0xfd9718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd977c + 0xfd9724));
    *pcVar2 = '\x01';
    iVar1 = extraout_r1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = **(undefined4 **)(_UNK_00fd9780 + 0xfd973c);
  if (param_2 == 0) {
    uVar3 = **(undefined4 **)(_UNK_00fd9784 + 0xfd9748);
  }
  Rotatelab_CustomRotateEventsController__ReportVirtualResourceTransactionToAxon_fc8734
            (param_1,iVar1,param_3,param_4,uVar3);
  return;
}

