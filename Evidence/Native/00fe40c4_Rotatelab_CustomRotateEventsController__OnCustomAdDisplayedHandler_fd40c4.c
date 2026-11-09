/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomAdDisplayedHandler
void Rotatelab_CustomRotateEventsController__OnCustomAdDisplayedHandler (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* arg1, MaxSdkBase_AdInfo_o* arg2, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x00fd84a8) */
/* WARNING: Removing unreachable block (ram,0x00fd84c0) */
/* WARNING: Removing unreachable block (ram,0x00fd84c8) */
/* WARNING: Removing unreachable block (ram,0x00fd84d8) */
/* WARNING: Removing unreachable block (ram,0x00fd84e4) */
/* WARNING: Removing unreachable block (ram,0x00fd84f0) */
/* WARNING: Removing unreachable block (ram,0x00fd853c) */
/* WARNING: Removing unreachable block (ram,0x00fd8548) */
/* WARNING: Removing unreachable block (ram,0x00fd8550) */
/* WARNING: Removing unreachable block (ram,0x00fd8560) */
/* WARNING: Removing unreachable block (ram,0x00fd856c) */
/* WARNING: Removing unreachable block (ram,0x00fd8578) */
/* WARNING: Removing unreachable block (ram,0x00fd85c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomAdDisplayedHandler
   void Rotatelab_CustomRotateEventsController__OnCustomAdDisplayedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* arg1, MaxSdkBase_AdInfo_o*
   arg2, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnCustomAdDisplayedHandler_fd40c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar3 = (char *)(_UNK_00fe4110 + 0xfe40d8);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4114 + 0xfe40ec));
    *pcVar3 = '\x01';
  }
  uVar2 = **(undefined4 **)(_UNK_00fe4118 + 0xfe4104);
  pcVar3 = (char *)(_UNK_00fd86d8 + 0xfd840c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86dc + 0xfd8420));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86e0 + 0xfd842c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86e4 + 0xfd8438));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86e8 + 0xfd8444));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86ec + 0xfd8450));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86f0 + 0xfd845c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86f4 + 0xfd8468));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86f8 + 0xfd8474));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd86fc + 0xfd8480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8700 + 0xfd848c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd8704 + 0xfd8498));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fd8720 + 0xfd85f4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar1 + 0x10) != '\0') {
    if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(param_1 + 0x20) + 0x14) == 0) {
      if (*(int *)(**(int **)(_UNK_00fd8724 + 0xfd8690) + 0x74) == 0) {
        FUN_00ec3934();
      }
      MaxSdkAndroid__TrackEvent_29b1698(uVar2,0,0);
      goto LAB_00fd86b0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  uStack_24 = 0;
  uStack_28 = 0;
  System_ValueTuple_object__object____ctor_1d537e8
            (&uStack_28,uVar2,0,**(undefined4 **)(_UNK_00fd8728 + 0xfd8644));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Queue_ValueTuple_object__object____Enqueue_18f961c
            (iVar1,uStack_28,uStack_24,**(undefined4 **)(_UNK_00fd872c + 0xfd8678));
LAB_00fd86b0:
  uVar2 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_00fd8730 + 0xfd86c4),uVar2,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c(uVar2,uVar2);
  return;
}

