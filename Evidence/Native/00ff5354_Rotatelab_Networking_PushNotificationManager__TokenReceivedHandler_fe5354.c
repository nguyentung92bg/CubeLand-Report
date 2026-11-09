/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$TokenReceivedHandler
void Rotatelab_Networking_PushNotificationManager__TokenReceivedHandler (Rotatelab_Networking_PushNotificationManager_o* __this, Il2CppObject* sender, Firebase_Messaging_TokenReceivedEventArgs_o* receivedToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$TokenReceivedHandler
   void Rotatelab_Networking_PushNotificationManager__TokenReceivedHandler
   (Rotatelab_Networking_PushNotificationManager_o* __this, Il2CppObject* sender,
   Firebase_Messaging_TokenReceivedEventArgs_o* receivedToken, const MethodInfo* method); */

void Rotatelab_Networking_PushNotificationManager__TokenReceivedHandler_fe5354
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined1 uStack_11;
  
  pcVar2 = (char *)(_UNK_00ff53f8 + 0xff5370);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff53fc + 0xff5384));
    *pcVar2 = '\x01';
  }
  uStack_11 = 0;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Networking_PushNotificationManager__TrySendTokenToAdjust_fe5404
            (param_1,*(undefined4 *)(param_3 + 8));
  if (*(int *)(**(int **)(_UNK_00ff5400 + 0xff53b8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
  if (iVar1 == 0xb) {
    uStack_11 = Rotatelab_Networking_PushNotificationManager__SendTokenToSatoriAsync_fe54b4
                          (0xb,*(undefined4 *)(param_3 + 8));
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_11,0);
  }
  return;
}

