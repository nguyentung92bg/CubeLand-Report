/* IL2CPP: Rotatelab.Networking.HiroController$$ExecuteTask
Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_Networking_HiroController__ExecuteTask (System_Func_UniTask__o* task, int32_t attemptCount, System_Action_Exception__int__o* onError, float retryDelayMultiplier, bool skipFirstOnlineCheck, Rotatelab_Networking_StopwatchEvent_o* stopwatch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$ExecuteTask
   Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_Networking_HiroController__ExecuteTask
   (System_Func_UniTask__o* task, int32_t attemptCount, System_Action_Exception__int__o* onError,
   float retryDelayMultiplier, bool skipFirstOnlineCheck, Rotatelab_Networking_StopwatchEvent_o*
   stopwatch, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__ExecuteTask_114cc9c
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined1 param_6,undefined4 param_7)

{
  char *pcVar1;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
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
  
  pcVar1 = (char *)(_UNK_0115cdec + 0x115cccc);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cdf0 + 0x115cce4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cdf4 + 0x115ccf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115cdf8 + 0x115ccfc));
    *pcVar1 = '\x01';
  }
  uStack_54 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_50 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_34 = 0;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_60 = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  thunk_FUN_00ec5080((uint)&uStack_68 | 4);
  uStack_50 = param_2;
  thunk_FUN_00ec5080(&uStack_50,param_2);
  uStack_4c = param_4;
  uStack_44 = param_3;
  thunk_FUN_00ec5080(&uStack_4c,param_4);
  uStack_54 = CONCAT31(uStack_54._1_3_,param_6);
  uStack_48 = param_5;
  uStack_58 = param_7;
  thunk_FUN_00ec5080(&uStack_58,param_7);
  uStack_68 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0115cdfc + 0x115cd98) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_HiroController__ExecuteTask_d__88__MoveNext_1155dec(&uStack_68);
  func_0x0109f558(&uStack_70,(uint)&uStack_68 | 4,**(undefined4 **)(_UNK_0115ce00 + 0x115cdc4));
  *param_1 = uStack_70;
  param_1[1] = uStack_6c;
  return;
}

