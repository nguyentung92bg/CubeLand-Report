/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<>c$$<SendQueuedEventsAsync>b__28_0
bool Rotatelab_Scripts_ControllerFirebase___c___SendQueuedEventsAsync_b__28_0 (Rotatelab_Scripts_ControllerFirebase___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.ControllerFirebase.<>c$$<SendQueuedEventsAsync>b__28_0
   bool Rotatelab_Scripts_ControllerFirebase___c___SendQueuedEventsAsync_b__28_0
   (Rotatelab_Scripts_ControllerFirebase___c_o* __this, const MethodInfo* method); */

undefined1 Rotatelab_Scripts_ControllerFirebase___c___SendQueuedEventsAsync_b__28_0_106214c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_010721e0 + 0x107215c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010721e4 + 0x1072170));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_010721e8 + 0x1072184);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar2 = (char *)(_UNK_010721ec + 0x10721a0);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010721f0 + 0x10721b4));
    *pcVar2 = '\x01';
  }
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  return *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4);
}

