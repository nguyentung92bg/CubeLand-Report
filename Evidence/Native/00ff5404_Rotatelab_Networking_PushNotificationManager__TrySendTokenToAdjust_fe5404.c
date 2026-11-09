/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$TrySendTokenToAdjust
void Rotatelab_Networking_PushNotificationManager__TrySendTokenToAdjust (Rotatelab_Networking_PushNotificationManager_o* __this, System_String_o* pushToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$TrySendTokenToAdjust
   void Rotatelab_Networking_PushNotificationManager__TrySendTokenToAdjust
   (Rotatelab_Networking_PushNotificationManager_o* __this, System_String_o* pushToken, const
   MethodInfo* method); */

void Rotatelab_Networking_PushNotificationManager__TrySendTokenToAdjust_fe5404
               (int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar5 = (char *)(_UNK_00ff54a0 + 0xff541c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff54a4 + 0xff5430));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff54a8 + 0xff543c));
    *pcVar5 = '\x01';
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return;
  }
  AdjustSdk_Adjust__SetPushToken_f8af84(param_2,0);
  puVar1 = *(undefined4 **)(_UNK_00ff54ac + 0xff546c);
  *(undefined1 *)(param_1 + 0x10) = 1;
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = **(undefined4 **)(_UNK_00ff54b0 + 0xff5494);
  pcVar5 = (char *)(_UNK_0111ea54 + 0x111e8f4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea58 + 0x111e908),uVar4,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea5c + 0x111e914));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea60 + 0x111e920));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea64 + 0x111e92c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0111ea68 + 0x111e938));
    *pcVar5 = '\x01';
  }
  uStack_14 = 0;
  uStack_18 = 0;
  if (*(int *)(iVar2 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a16604
                    (*(int *)(iVar2 + 0x68),**(undefined4 **)(_UNK_0111ea6c + 0x111e96c),0);
  if (*(int *)(**(int **)(_UNK_0111ea70 + 0x111e984) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_DateTime__get_Now_2b4a124(&uStack_18,0);
  uVar3 = System_DateTime__ToString_2b4b52c
                    (&uStack_18,**(undefined4 **)(_UNK_0111ea74 + 0x111e9b4),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a16604(iVar2,uVar3,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a16604
                    (iVar2,**(undefined4 **)(_UNK_0111ea78 + 0x111e9fc),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = System_Text_StringBuilder__Append_2a16604(iVar2,uVar4,0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Text_StringBuilder__Append_2a16604(iVar2,**(undefined4 **)(_UNK_0111ea7c + 0x111ea44),0);
  return;
}

