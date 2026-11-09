/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$RegisterToTokenReceivedEventAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync (Rotatelab_Networking_PushNotificationManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$RegisterToTokenReceivedEventAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o
   Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync
   (Rotatelab_Networking_PushNotificationManager_o* __this, const MethodInfo* method); */

undefined4
Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync_fe52b4
          (undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar1 = (char *)(_UNK_00ff5348 + 0xff52cc);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff534c + 0xff52e0));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  thunk_FUN_00ec5080((uint)&uStack_28 | 4);
  uStack_20 = param_1;
  thunk_FUN_00ec5080(&uStack_20,param_1);
  uStack_28 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_PushNotificationManager__RegisterToTokenReceivedEventAsync_d__6__13ebeac
            ((uint)&uStack_28 | 4,&uStack_28,**(undefined4 **)(_UNK_00ff5350 + 0xff532c));
  return 0;
}

