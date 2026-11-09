/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SendEvent
void Rotatelab_Scripts_ControllerFirebase__SendEvent (System_String_o* eventName, System_Collections_Generic_List_Parameter__o* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SendEvent
   void Rotatelab_Scripts_ControllerFirebase__SendEvent (System_String_o* eventName,
   System_Collections_Generic_List_Parameter__o* parameters, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__SendEvent_10609ac(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined1 uStack_11;
  
  pcVar4 = (char *)(_UNK_01070a40 + 0x10709c4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070a44 + 0x10709d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070a48 + 0x10709e4));
    *pcVar4 = '\x01';
  }
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = System_Collections_Generic_List_object___ToArray_267f7a0
                      (param_2,**(undefined4 **)(_UNK_01070a4c + 0x1070a00));
  }
  if (*(int *)(**(int **)(_UNK_01070a50 + 0x1070a20) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_01070b30 + 0x1070a70);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070b34 + 0x1070a84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070b38 + 0x1070a90));
    *pcVar4 = '\x01';
  }
  uStack_11 = 0;
  if (*(int *)(**(int **)(_UNK_01070b3c + 0x1070aa8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Cysharp_Threading_Tasks_PlayerLoopHelper__get_IsMainThread_3213808(0);
  iVar3 = *(int *)(**(int **)(_UNK_01070b40 + 0x1070ad8) + 0x74);
  if (iVar2 == 0) {
    if (iVar3 == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_ControllerFirebase__QueueEvent_1060b44(param_1,uVar1);
    uStack_11 = Rotatelab_Scripts_ControllerFirebase__SendQueuedEventsAsync_10604d8();
  }
  else {
    if (iVar3 == 0) {
      FUN_00ec3934();
    }
    uStack_11 = Rotatelab_Scripts_ControllerFirebase__SendEventAsync_1060df8(param_1,uVar1);
  }
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  return;
}

