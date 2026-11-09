/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$Start
void Rotatelab_Scripts_ControllerFirebase__Start (Rotatelab_Scripts_ControllerFirebase_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase$$Start
   void Rotatelab_Scripts_ControllerFirebase__Start (Rotatelab_Scripts_ControllerFirebase_o* __this,
   const MethodInfo* method); */

void Rotatelab_Scripts_ControllerFirebase__Start_106039c(undefined4 param_1)

{
  char *pcVar1;
  undefined1 uStack_11;
  
  pcVar1 = (char *)(_UNK_01070428 + 0x10703b4);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0107042c + 0x10703c8));
    *pcVar1 = '\x01';
  }
  uStack_11 = 0;
  uStack_11 = Rotatelab_Scripts_ControllerFirebase__InitializeAsync_1060434(param_1);
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  if (*(int *)(**(int **)(_UNK_01070430 + 0x10703fc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uStack_11 = Rotatelab_Scripts_ControllerFirebase__SendQueuedEventsAsync_10604d8();
  Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  return;
}

