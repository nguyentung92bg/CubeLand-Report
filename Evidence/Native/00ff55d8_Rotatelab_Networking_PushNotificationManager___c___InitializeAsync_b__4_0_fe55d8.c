/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<>c$$<InitializeAsync>b__4_0
bool Rotatelab_Networking_PushNotificationManager___c___InitializeAsync_b__4_0 (Rotatelab_Networking_PushNotificationManager___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<>c$$<InitializeAsync>b__4_0
   bool Rotatelab_Networking_PushNotificationManager___c___InitializeAsync_b__4_0
   (Rotatelab_Networking_PushNotificationManager___c_o* __this, const MethodInfo* method); */

undefined1 Rotatelab_Networking_PushNotificationManager___c___InitializeAsync_b__4_0_fe55d8(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_00ff566c + 0xff55e8);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5670 + 0xff55fc));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_00ff5674 + 0xff5610);
  if (*(int *)(*piVar3 + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar2 = (char *)(_UNK_00ff5678 + 0xff562c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff567c + 0xff5640));
    *pcVar2 = '\x01';
  }
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  return *(undefined1 *)(*(int *)(iVar1 + 0x5c) + 4);
}

