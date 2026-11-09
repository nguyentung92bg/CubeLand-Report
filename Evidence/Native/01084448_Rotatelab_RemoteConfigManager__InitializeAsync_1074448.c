/* IL2CPP: Rotatelab.RemoteConfigManager$$InitializeAsync
Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_RemoteConfigManager__InitializeAsync (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.RemoteConfigManager$$InitializeAsync
   Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_RemoteConfigManager__InitializeAsync
   (Rotatelab_RemoteConfigManager_o* __this, const MethodInfo* method); */

void Rotatelab_RemoteConfigManager__InitializeAsync_1074448(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  
  pcVar1 = (char *)(_UNK_0108453c + 0x1084464);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084540 + 0x1084478));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084544 + 0x1084484));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01084548 + 0x1084490));
    *pcVar1 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_2c = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_28 = uStack_44;
  uStack_24 = uStack_40;
  uStack_20 = uStack_3c;
  thunk_FUN_00ec5080((uint)&uStack_58 | 4);
  uStack_48 = param_2;
  thunk_FUN_00ec5080(&uStack_48,param_2);
  uStack_58 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0108454c + 0x10844f8) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_RemoteConfigManager__InitializeAsync_d__50__MoveNext_1076590(&uStack_58);
  func_0x0109f558(&uStack_60,(uint)&uStack_58 | 4,**(undefined4 **)(_UNK_01084550 + 0x1084524));
  *param_1 = uStack_60;
  param_1[1] = uStack_5c;
  return;
}

