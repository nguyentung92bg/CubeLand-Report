/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$Start
void Rotatelab_Networking_LocalNotificationManager__Start (Rotatelab_Networking_LocalNotificationManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$Start
   void Rotatelab_Networking_LocalNotificationManager__Start
   (Rotatelab_Networking_LocalNotificationManager_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_LocalNotificationManager__Start_1162294(void)

{
  char *pcVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_0117236c + 0x11722a8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172370 + 0x11722bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172374 + 0x11722c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01172378 + 0x11722d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117237c + 0x11722e0));
    *pcVar1 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  Unity_Notifications_Android_AndroidNotificationChannel___ctor_3288e18
            (&uStack_38,**(undefined4 **)(_UNK_01172380 + 0x1172300),
             **(undefined4 **)(_UNK_01172384 + 0x117230c),
             **(undefined4 **)(_UNK_01172388 + 0x1172318),4,0);
  if (*(int *)(**(int **)(_UNK_0117238c + 0x117233c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Unity_Notifications_Android_AndroidNotificationCenter__RegisterNotificationChannel_3286b40
            (uStack_38,uStack_34,uStack_30,uStack_2c,uStack_28,uStack_24,uStack_20,uStack_1c,0);
  Rotatelab_Networking_LocalNotificationManager__CancelNotifications_1162390();
  return;
}

