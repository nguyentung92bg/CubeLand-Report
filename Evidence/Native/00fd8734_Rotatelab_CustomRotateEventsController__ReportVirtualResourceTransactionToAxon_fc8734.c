/* IL2CPP: Rotatelab.CustomRotateEventsController$$ReportVirtualResourceTransactionToAxon
void Rotatelab_CustomRotateEventsController__ReportVirtualResourceTransactionToAxon (Rotatelab_CustomRotateEventsController_o* __this, int64_t value, System_String_o* resourceType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$ReportVirtualResourceTransactionToAxon
   void Rotatelab_CustomRotateEventsController__ReportVirtualResourceTransactionToAxon
   (Rotatelab_CustomRotateEventsController_o* __this, int64_t value, System_String_o* resourceType,
   const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__ReportVirtualResourceTransactionToAxon_fc8734
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_00fd8898 + 0xfd8754);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd889c + 0xfd8768));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd88a0 + 0xfd8774));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd88a4 + 0xfd8780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd88a8 + 0xfd878c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd88ac + 0xfd8798));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd88b0 + 0xfd87a4));
    *pcVar3 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd88b4 + 0xfd87bc));
  System_Collections_Generic_Dictionary_object__object____ctor_20688f4
            (iVar1,**(undefined4 **)(_UNK_00fd88b8 + 0xfd87d0));
  uStack_20 = param_3;
  uStack_1c = param_4;
  uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fd88bc + 0xfd87e8) + 0x34),&uStack_20);
  if (iVar1 != 0) {
    System_Collections_Generic_Dictionary_object__object___Add_206933c
              (iVar1,**(undefined4 **)(_UNK_00fd88c4 + 0xfd881c),uVar2,
               **(undefined4 **)(_UNK_00fd88c0 + 0xfd8810));
    System_Collections_Generic_Dictionary_object__object___Add_206933c
              (iVar1,**(undefined4 **)(_UNK_00fd88d4 + 0xfd8870),param_5,
               **(undefined4 **)(_UNK_00fd88d0 + 0xfd8864));
    Rotatelab_CustomRotateEventsController__ReportToAxon_fc83ec
              (param_1,**(undefined4 **)(_UNK_00fd88d8 + 0xfd8888),iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

