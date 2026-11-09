/* IL2CPP: Rotatelab.RemoteConfigManager$$RefreshSatoriFlagsAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$RefreshSatoriFlagsAsync
   Cysharp_Threading_Tasks_UniTask_o Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync
   (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method); */

void Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_10747f4
               (undefined4 *param_1,undefined4 param_2)

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
  undefined4 uStack_20;
  
  pcVar1 = (char *)(_UNK_010848b0 + 0x1084810);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010848b4 + 0x1084824));
    *pcVar1 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  thunk_FUN_00ec5080((uint)&uStack_40 | 4);
  uStack_34 = param_2;
  thunk_FUN_00ec5080(&uStack_34,param_2);
  uStack_40 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_010848b8 + 0x1084874) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_RemoteConfigManager__RefreshSatoriFlagsAsync_d__52__MoveNext_1078084(&uStack_40);
  FUN_00ff43c0(&uStack_48,(uint)&uStack_40 | 4,0);
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  return;
}

