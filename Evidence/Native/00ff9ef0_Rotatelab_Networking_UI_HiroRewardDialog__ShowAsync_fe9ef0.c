/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog$$ShowAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync (Rotatelab_Networking_UI_HiroRewardDialog_o* __this, Hiro_IRewardMailboxEntry_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog$$ShowAsync
   Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync
   (Rotatelab_Networking_UI_HiroRewardDialog_o* __this, Hiro_IRewardMailboxEntry_o* data, const
   MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync_fe9ef0
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
  
  pcVar1 = (char *)(_UNK_00ff9fc0 + 0xff9f10);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff9fc4 + 0xff9f24));
    *pcVar1 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = uStack_3c;
  uStack_2c = uStack_38;
  uStack_28 = uStack_34;
  thunk_FUN_00ec5080(&uStack_3c,0);
  uStack_34 = param_2;
  thunk_FUN_00ec5080(&uStack_34,param_2);
  uStack_30 = param_3;
  thunk_FUN_00ec5080(&uStack_30,param_3);
  uStack_40 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_00ff9fc8 + 0xff9f84) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_UI_HiroRewardDialog__ShowAsync_d__9__MoveNext_fedfcc(&uStack_40);
  FUN_00ff43c0(&uStack_48,&uStack_3c,0);
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  return;
}

