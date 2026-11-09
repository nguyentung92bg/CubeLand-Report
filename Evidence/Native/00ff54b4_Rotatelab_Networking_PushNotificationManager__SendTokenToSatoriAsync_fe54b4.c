/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$SendTokenToSatoriAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Networking_PushNotificationManager__SendTokenToSatoriAsync (Rotatelab_Networking_PushNotificationManager_o* __this, System_String_o* pushToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$SendTokenToSatoriAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o
   Rotatelab_Networking_PushNotificationManager__SendTokenToSatoriAsync
   (Rotatelab_Networking_PushNotificationManager_o* __this, System_String_o* pushToken, const
   MethodInfo* method); */

undefined4
Rotatelab_Networking_PushNotificationManager__SendTokenToSatoriAsync_fe54b4
          (undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_00ff5548 + 0xff54cc);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff554c + 0xff54e0));
    *pcVar1 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_1c = uStack_2c;
  uStack_18 = uStack_28;
  uStack_14 = uStack_24;
  thunk_FUN_00ec5080((uint)&uStack_30 | 4,0);
  uStack_28 = param_2;
  thunk_FUN_00ec5080(&uStack_28,param_2);
  uStack_30 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_PushNotificationManager__SendTokenToSatoriAsync_d__9__13ebee0
            ((uint)&uStack_30 | 4,&uStack_30,**(undefined4 **)(_UNK_00ff5550 + 0xff552c));
  return 0;
}

