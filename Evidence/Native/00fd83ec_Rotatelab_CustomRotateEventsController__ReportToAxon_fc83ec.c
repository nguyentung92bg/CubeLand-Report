/* IL2CPP: Rotatelab.CustomRotateEventsController$$ReportToAxon
void Rotatelab_CustomRotateEventsController__ReportToAxon (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* eventName, System_Collections_Generic_Dictionary_string__object__o* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$ReportToAxon
   void Rotatelab_CustomRotateEventsController__ReportToAxon
   (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* eventName,
   System_Collections_Generic_Dictionary_string__object__o* parameters, const MethodInfo* method);
    */

void Rotatelab_CustomRotateEventsController__ReportToAxon_fc83ec
               (int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar4 = (char *)(_UNK_00fd86d8 + 0xfd840c);
  if (*pcVar4 == '\0') {
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
    *pcVar4 = '\x01';
  }
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    piVar8 = *(int **)(_UNK_00fd8708 + 0xfd84b4);
    iVar1 = *piVar8;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar8;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    iVar7 = puVar3[3];
    if (iVar7 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar5 = *puVar3;
      iVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd870c + 0xfd84fc));
      System_Func_KeyValuePair_object__object___object____ctor_2398a20
                (iVar7,uVar5,**(undefined4 **)(_UNK_00fd8710 + 0xfd851c),0);
      piVar2 = (int *)(*(int *)(*piVar8 + 0x5c) + 0xc);
      *piVar2 = iVar7;
      thunk_FUN_00ec5080(piVar2,iVar7);
      iVar1 = *piVar8;
    }
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar8;
    }
    puVar3 = *(undefined4 **)(iVar1 + 0x5c);
    iVar6 = puVar3[4];
    if (iVar6 == 0) {
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        puVar3 = *(undefined4 **)(*piVar8 + 0x5c);
      }
      uVar5 = *puVar3;
      iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fd8714 + 0xfd8584));
      System_Func_KeyValuePair_object__object___object____ctor_2398a20
                (iVar6,uVar5,**(undefined4 **)(_UNK_00fd8718 + 0xfd85a4),0);
      piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 0x10);
      *piVar8 = iVar6;
      thunk_FUN_00ec5080(piVar8,iVar6);
    }
    uVar5 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object__1477178
                      (param_3,iVar7,iVar6,**(undefined4 **)(_UNK_00fd871c + 0xfd85d4));
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
      MaxSdkAndroid__TrackEvent_29b1698(param_2,uVar5,0);
      goto LAB_00fd86b0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  uStack_24 = 0;
  uStack_28 = 0;
  System_ValueTuple_object__object____ctor_1d537e8
            (&uStack_28,param_2,uVar5,**(undefined4 **)(_UNK_00fd8728 + 0xfd8644));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Queue_ValueTuple_object__object____Enqueue_18f961c
            (iVar1,uStack_28,uStack_24,**(undefined4 **)(_UNK_00fd872c + 0xfd8678));
LAB_00fd86b0:
  uVar5 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_00fd8730 + 0xfd86c4),param_2,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c(uVar5,uVar5);
  return;
}

