/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<>c$$<InitializeAsync>b__4_1
bool Rotatelab_Networking_PushNotificationManager___c___InitializeAsync_b__4_1 (Rotatelab_Networking_PushNotificationManager___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<>c$$<InitializeAsync>b__4_1
   bool Rotatelab_Networking_PushNotificationManager___c___InitializeAsync_b__4_1
   (Rotatelab_Networking_PushNotificationManager___c_o* __this, const MethodInfo* method); */

bool Rotatelab_Networking_PushNotificationManager___c___InitializeAsync_b__4_1_fe5680(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_00ff5718 + 0xff5690);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff571c + 0xff56a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5720 + 0xff56b0));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00ff5724 + 0xff56c4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar1 + 0x11) != '\0') {
    return true;
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00ff5728 + 0xff56f4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(char *)(iVar1 + 0x10) != '\0';
}

