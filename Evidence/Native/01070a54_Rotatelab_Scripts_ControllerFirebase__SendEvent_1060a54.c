/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SendEvent
void Rotatelab_Scripts_ControllerFirebase__SendEvent (System_String_o* eventName, Firebase_Analytics_Parameter_array* parameters, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$SendEvent
   void Rotatelab_Scripts_ControllerFirebase__SendEvent (System_String_o* eventName,
   Firebase_Analytics_Parameter_array* parameters, const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined1 uStack_11;
  
  pcVar3 = (char *)(_UNK_01070b30 + 0x1070a70);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070b34 + 0x1070a84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01070b38 + 0x1070a90));
    *pcVar3 = '\x01';
  }
  uStack_11 = 0;
  if (*(int *)(**(int **)(_UNK_01070b3c + 0x1070aa8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Cysharp_Threading_Tasks_PlayerLoopHelper__get_IsMainThread_3213808(0);
  iVar2 = *(int *)(**(int **)(_UNK_01070b40 + 0x1070ad8) + 0x74);
  if (iVar1 == 0) {
    if (iVar2 == 0) {
      FUN_00ec3934();
    }
    Rotatelab_Scripts_ControllerFirebase__QueueEvent_1060b44(param_1,param_2);
    uStack_11 = Rotatelab_Scripts_ControllerFirebase__SendQueuedEventsAsync_10604d8();
  }
  else {
    if (iVar2 == 0) {
      FUN_00ec3934();
    }
    uStack_11 = Rotatelab_Scripts_ControllerFirebase__SendEventAsync_1060df8(param_1,param_2);
  }
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  return;
}

