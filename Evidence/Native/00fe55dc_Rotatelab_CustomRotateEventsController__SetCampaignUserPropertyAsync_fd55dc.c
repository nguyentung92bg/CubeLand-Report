/* IL2CPP: Rotatelab.CustomRotateEventsController$$SetCampaignUserPropertyAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$SetCampaignUserPropertyAsync
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync_fd55dc
               (undefined4 *param_1)

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
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_00fe5680 + 0xfe55f4);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5684 + 0xfe5608));
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
  uStack_30 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_00fe5688 + 0xfe5644) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync_d__79__MoveNext_fd8c7c
            (&uStack_30);
  FUN_00ff43c0(&uStack_38,(uint)&uStack_30 | 4,0);
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return;
}

