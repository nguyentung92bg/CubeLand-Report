/* IL2CPP: Rotatelab.CustomRotateEventsController$$GetUnixTimeStamp
int32_t Rotatelab_CustomRotateEventsController__GetUnixTimeStamp (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$GetUnixTimeStamp
   int32_t Rotatelab_CustomRotateEventsController__GetUnixTimeStamp (const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__GetUnixTimeStamp_fd568c(void)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_00fe5710 + 0xfe56a0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5714 + 0xfe56b4));
    *pcVar1 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  if (*(int *)(**(int **)(_UNK_00fe5718 + 0xfe56d0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTimeOffset__get_UtcNow_2b4da3c(&uStack_30,0);
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  uStack_18 = uStack_28;
  uStack_14 = uStack_24;
  System_DateTimeOffset__ToUnixTimeSeconds_2b4faac(&uStack_20,0);
  return;
}

