/* IL2CPP: Rotatelab.RemoteConfigManager$$ActivateRemoteConfigAsync
Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync (Rotatelab_RemoteConfigManager_o* __this, Rotatelab_Networking_StopwatchEvent_o* initializationStopwatch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$ActivateRemoteConfigAsync
   Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync
   (Rotatelab_RemoteConfigManager_o* __this, Rotatelab_Networking_StopwatchEvent_o*
   initializationStopwatch, const MethodInfo* method); */

void Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync_10746d8
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar1 = (char *)(_UNK_010847dc + 0x10846f8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010847e0 + 0x108470c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010847e4 + 0x1084718));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010847e8 + 0x1084724));
    *pcVar1 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_3c = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  thunk_FUN_00ec5080((uint)&uStack_40 | 4,0);
  uStack_2c = param_2;
  thunk_FUN_00ec5080(&uStack_2c,param_2);
  uStack_30 = param_3;
  thunk_FUN_00ec5080(&uStack_30,param_3);
  uStack_40 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_010847ec + 0x1084798) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_RemoteConfigManager__ActivateRemoteConfigAsync_d__51__MoveNext_1075ae4(&uStack_40);
  func_0x0109f558(&uStack_48,(uint)&uStack_40 | 4,**(undefined4 **)(_UNK_010847f0 + 0x10847c4));
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  return;
}

