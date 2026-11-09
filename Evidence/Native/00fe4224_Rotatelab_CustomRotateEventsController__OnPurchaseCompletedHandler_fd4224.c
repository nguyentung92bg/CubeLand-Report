/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnPurchaseCompletedHandler
void Rotatelab_CustomRotateEventsController__OnPurchaseCompletedHandler (Rotatelab_CustomRotateEventsController_o* __this, double localizedPrice, System_String_o* isoCurrencyCode, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnPurchaseCompletedHandler
   void Rotatelab_CustomRotateEventsController__OnPurchaseCompletedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, double localizedPrice, System_String_o*
   isoCurrencyCode, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnPurchaseCompletedHandler_fd4224
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uStack_28;
  
  pcVar3 = (char *)(_UNK_00fe4388 + 0xfe4244);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe438c + 0xfe4258));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4390 + 0xfe4264));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4394 + 0xfe4270));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4398 + 0xfe427c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe439c + 0xfe4288));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe43a0 + 0xfe4294));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe43a4 + 0xfe42ac));
  System_Collections_Generic_Dictionary_object__object____ctor_20688f4
            (iVar1,**(undefined4 **)(_UNK_00fe43a8 + 0xfe42c0));
  uStack_28 = CONCAT44(param_4,param_3);
  uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fe43ac + 0xfe42d8) + 0x40),&uStack_28);
  if (iVar1 != 0) {
    System_Collections_Generic_Dictionary_object__object___Add_206933c
              (iVar1,**(undefined4 **)(_UNK_00fe43b4 + 0xfe4308),uVar2,
               **(undefined4 **)(_UNK_00fe43b0 + 0xfe42fc));
    System_Collections_Generic_Dictionary_object__object___Add_206933c
              (iVar1,**(undefined4 **)(_UNK_00fe43c4 + 0xfe435c),param_5,
               **(undefined4 **)(_UNK_00fe43c0 + 0xfe4350));
    Rotatelab_CustomRotateEventsController__ReportToAxon_fc83ec
              (param_1,**(undefined4 **)(_UNK_00fe43c8 + 0xfe4374),iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

