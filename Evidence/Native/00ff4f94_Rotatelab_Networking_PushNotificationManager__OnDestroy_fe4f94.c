/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$OnDestroy
void Rotatelab_Networking_PushNotificationManager__OnDestroy (Rotatelab_Networking_PushNotificationManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$OnDestroy
   void Rotatelab_Networking_PushNotificationManager__OnDestroy
   (Rotatelab_Networking_PushNotificationManager_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_PushNotificationManager__OnDestroy_fe4f94(undefined4 param_1)

{
  bool bVar1;
  uint *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar6 = (char *)(_UNK_00ff50c4 + 0xff4fa8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff50c8 + 0xff4fbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff50cc + 0xff4fc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff50d0 + 0xff4fd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff50d4 + 0xff4fe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff50d8 + 0xff4fec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff50dc + 0xff4ff8));
    *pcVar6 = '\x01';
  }
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff50e0 + 0xff500c));
  System_EventHandler_object____ctor_23479ac
            (uVar3,param_1,**(undefined4 **)(_UNK_00ff50e4 + 0xff5028),0);
  Firebase_Messaging_FirebaseMessaging__remove_TokenReceived_1202528(uVar3,0);
  piVar8 = *(int **)(_UNK_00ff50e8 + 0xff5048);
  iVar4 = *piVar8;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar8;
  }
  uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x120);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff50ec + 0xff506c));
  System_Action_Int32Enum__bool____ctor_1f185a4
            (uVar3,param_1,**(undefined4 **)(_UNK_00ff50f0 + 0xff508c),0);
  uVar3 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                    (uVar7,uVar3,**(undefined4 **)(_UNK_00ff50f4 + 0xff50a4));
  puVar5 = (undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x120);
  *puVar5 = uVar3;
  if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
    puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar5 >> 0x11) * 4 + 0xf547cc);
    do {
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = *puVar2 | 1 << (((uint)puVar5 & 0x1ffff) >> 0xc);
    return;
  }
  return;
}

