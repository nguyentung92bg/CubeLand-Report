/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$CancelNotifications
void Rotatelab_Networking_LocalNotificationManager__CancelNotifications (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x03599d50) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.LocalNotificationManager$$CancelNotifications
   void Rotatelab_Networking_LocalNotificationManager__CancelNotifications (const MethodInfo*
   method); */

void Rotatelab_Networking_LocalNotificationManager__CancelNotifications_1162390(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 unaff_r4;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *****pppppuVar8;
  uint unaff_r7;
  undefined4 ****appppuStack_48 [3];
  undefined1 uStack_39;
  undefined4 ***pppuStack_38;
  uint uStack_34;
  int iStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_18;
  
  pcVar4 = (char *)(_UNK_011723e4 + 0x11723a0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011723e8 + 0x11723b4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_011723ec + 0x11723c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_032970b4 + 0x3297050);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_032970b8 + 0x3297064));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_032970bc + 0x3297078);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar1 = Unity_Notifications_Android_AndroidNotificationCenter__Initialize_32860d8();
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  Unity_Notifications_Android_AndroidNotificationCenter__CancelAllScheduledNotifications_32870c0();
  pcVar4 = (char *)(_UNK_032971c4 + 0x3297158);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_032971c8 + 0x329716c));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_032971cc + 0x3297180);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar1 = Unity_Notifications_Android_AndroidNotificationCenter__Initialize_32860d8();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
    iVar1 = *piVar6;
  }
  iVar1 = *(int *)(iVar1 + 0x5c);
  pcVar4 = (char *)(_UNK_03292d68 + 0x3292ca8);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03292d6c + 0x3292cbc));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03292d70 + 0x3292cc8));
    *pcVar4 = '\x01';
  }
  iVar5 = *(int *)(iVar1 + 0x1c);
  iVar7 = **(int **)(_UNK_03292d74 + 0x3292cdc);
  iVar1 = *(int *)(iVar7 + 0x1c);
  if (iVar1 == 0) {
    thunk_FUN_00efd7c4(iVar7);
    iVar1 = *(int *)(iVar7 + 0x1c);
  }
  iVar1 = *(int *)(iVar1 + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = thunk_FUN_00efd768();
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  iVar1 = *(int *)(*(int *)(iVar7 + 0x1c) + 8);
  if ((*(ushort *)(iVar1 + 0xbd) & 1) == 0) {
    iVar1 = thunk_FUN_00efd768();
  }
  iVar1 = **(int **)(iVar1 + 0x5c);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = unaff_r4;
  uVar2 = UnityEngine_AndroidJNIHelper__GetMethodID_3577dcc
                    (*(undefined4 *)(*(int *)(iVar5 + 0xc) + 0xc),
                     **(undefined4 **)(_UNK_03292d78 + 0x3292d5c),iVar1,0);
  uStack_24 = uStack_18;
  pcVar4 = (char *)(_UNK_03599e10 + 0x3599c34);
  iStack_2c = **(int **)(_UNK_03599e14 + 0x3599c3c);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03599e18 + 0x3599c5c));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03599e1c + 0x3599c68));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_03599e20 + 0x3599c74));
    *pcVar4 = '\x01';
  }
  if (iVar1 != 0) {
    unaff_r7 = *(uint *)(iVar1 + 0xc);
  }
  pppppuVar8 = (undefined4 *****)0x0;
  uStack_34 = 0;
  pppuStack_38 = (undefined4 ***)0x0;
  uStack_39 = 0;
  if (iVar1 != 0 && unaff_r7 != 0) {
    if ((unaff_r7 & 0x1fffffff) != 0) {
      pppppuVar8 = appppuStack_48 + unaff_r7 * -2;
    }
    thunk_FUN_00f88e5c(pppppuVar8);
    if (0x7fffffff < unaff_r7) {
                    /* WARNING: Subroutine does not return */
      System_ThrowHelper__ThrowArgumentOutOfRangeException_2b94878(0);
    }
    pppuStack_38 = pppppuVar8;
    uStack_34 = unaff_r7;
    if (0 < (int)unaff_r7) {
      UnityEngine_AndroidJNISafe__PushLocalFrame_3582d60(unaff_r7);
      UnityEngine_AndroidJNIHelper__CreateJNIArgArray_35778f0(iVar1,pppppuVar8,unaff_r7);
    }
  }
  else {
    uStack_34 = 0;
    unaff_r7 = 0;
    pppuStack_38 = (undefined4 *****)0x0;
  }
  appppuStack_48[2] = (undefined4 ****)&uStack_39;
  appppuStack_48[0] = (undefined4 ****)0x0;
  appppuStack_48[1] = &pppuStack_38;
  if (*(int *)(iVar5 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AndroidJNISafe__CallVoidMethod_3584f78
            (*(undefined4 *)(*(int *)(iVar5 + 8) + 0xc),uVar2,pppppuVar8,unaff_r7);
  iVar1 = *(int *)((uint)&pppuStack_38 | 4);
  uStack_39 = 0 < iVar1;
  if (0 < iVar1) {
    pcVar3 = *(code **)(_UNK_03599e24 + 0x3599d20);
    if (pcVar3 == (code *)0x0) {
      pcVar3 = (code *)thunk_FUN_00ec3774(_UNK_03599e28 + 0x3599d30);
      *(code **)(_UNK_03599e2c + 0x3599d40) = pcVar3;
    }
    (*pcVar3)(0);
  }
  if (**(int **)(_UNK_03599e30 + 0x3599d68) != iStack_2c) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

