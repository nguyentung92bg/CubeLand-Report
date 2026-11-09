/* IL2CPP: Rotatelab.Networking.PushNotificationManager.<RegisterToTokenReceivedEventAsync>d__6$$MoveNext
void Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync_d__6__MoveNext (Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.Networking.PushNotificationManager.<RegisterToTokenReceivedEventAsync>d__6$$MoveNext
   void 
   Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync_d__6__MoveNext
   (Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync_d__6_o __this,
   const MethodInfo* method); */

void Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync_d__6__MoveNext_fe62fc
               (int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  int iVar8;
  int *piVar9;
  int *piStack_38;
  int iStack_34;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar7 = (char *)(_UNK_00ff6790 + 0xff6314);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6794 + 0xff6328));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff6798 + 0xff6334));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff679c + 0xff6340));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff67a0 + 0xff634c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff67a4 + 0xff6358));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff67a8 + 0xff6364));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff67ac + 0xff6370));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff67b0 + 0xff637c));
    *pcVar7 = '\x01';
  }
  iVar8 = param_1[2];
  iStack_24 = 0;
  piStack_28 = (int *)0x0;
  uStack_2c = 0;
  if (*param_1 == 0) {
    piVar9 = (int *)param_1[3];
    iVar1 = param_1[4];
    *param_1 = -1;
    param_1[3] = 0;
    param_1[4] = 0;
    piStack_28 = piVar9;
    iStack_24 = iVar1;
  }
  else {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff67b4 + 0xff63b0));
    System_Object___ctor_2bb93bc(iVar1,0);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff67b8 + 0xff63cc));
    Unity_Notifications_Android_PermissionRequest___ctor_32894d0(uVar2,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar1 + 8) = uVar2;
    thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),uVar2);
    uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff67bc + 0xff6404));
    System_Func_bool____ctor_23938dc(uVar2,iVar1,**(undefined4 **)(_UNK_00ff67c0 + 0xff6418),0);
    piVar9 = *(int **)(_UNK_00ff67c4 + 0xff6434);
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__WaitUntil_3217d44(&piStack_38,uVar2,8,0,0,0);
    thunk_FUN_00ec5080(&piStack_38,0);
    pcVar7 = (char *)(_UNK_00ff67c8 + 0xff6490);
    iStack_24 = iStack_34;
    piStack_28 = piStack_38;
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ff67cc + 0xff64b0));
      *pcVar7 = '\x01';
    }
    if (*(int *)(*piVar9 + 0x74) == 0) {
      FUN_00ec3934();
    }
    pcVar7 = (char *)(_UNK_00ff67d0 + 0xff64d8);
    if (*pcVar7 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_00ff67d4 + 0xff64ec));
      *pcVar7 = '\x01';
    }
    iVar1 = (int)(short)iStack_34;
    if (piStack_38 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      iVar3 = *piStack_38;
      uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(int *)(iVar3 + 0x58) + 4);
        do {
          if (piVar9[-1] == **(int **)(_UNK_00ff67d8 + 0xff6510)) {
            puVar4 = (undefined4 *)(iVar3 + *piVar9 * 8 + 0xc0);
            goto LAB_00ff6580;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 2;
        } while (uVar5 != 0);
      }
      puVar4 = (undefined4 *)FUN_00efdb38(piStack_38,**(int **)(_UNK_00ff67d8 + 0xff6510),0);
LAB_00ff6580:
      iVar3 = (*(code *)*puVar4)(piStack_38,iVar1,puVar4[1]);
      piVar9 = piStack_38;
      if (iVar3 == 0) {
        param_1[4] = iStack_34;
        *param_1 = 0;
        param_1[3] = (int)piStack_38;
        thunk_FUN_00ec5080(param_1 + 3,0);
        func_0x0101229c(param_1 + 1,&piStack_28,param_1,**(undefined4 **)(_UNK_00ff67dc + 0xff66bc))
        ;
        return;
      }
    }
  }
  pcVar7 = (char *)(_UNK_00ff67e0 + 0xff65ac);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff67e4 + 0xff65c0));
    *pcVar7 = '\x01';
  }
  if (piVar9 != (int *)0x0) {
    iVar3 = *piVar9;
    uVar5 = (uint)*(ushort *)(iVar3 + 0xb6);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(int *)(iVar3 + 0x58) + 4);
      do {
        if (piVar6[-1] == **(int **)(_UNK_00ff67e8 + 0xff65e0)) {
          puVar4 = (undefined4 *)(iVar3 + *piVar6 * 8 + 0xd0);
          goto LAB_00ff6628;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 2;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined4 *)FUN_00efdb38(piVar9,**(int **)(_UNK_00ff67e8 + 0xff65e0),2);
LAB_00ff6628:
    (*(code *)*puVar4)(piVar9,(int)(short)iVar1,puVar4[1]);
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff67ec + 0xff6648));
  System_EventHandler_object____ctor_23479ac
            (uVar2,iVar8,**(undefined4 **)(_UNK_00ff67f0 + 0xff665c),0);
  Firebase_Messaging_FirebaseMessaging__add_TokenReceived_1202370(uVar2,0);
  *param_1 = -2;
  func_0x00fcef34(param_1 + 1,0);
  return;
}

