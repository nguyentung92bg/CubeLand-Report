/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog$$OnBeforeClaimOrDiscardButtonClickedAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync (Rotatelab_Networking_UI_HiroRewardDialog_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.UI.HiroRewardDialog$$OnBeforeClaimOrDiscardButtonClickedAsync
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync
   (Rotatelab_Networking_UI_HiroRewardDialog_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync_fea10c
               (undefined4 *param_1,undefined4 param_2)

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
  
  pcVar1 = (char *)(_UNK_00ffa1c8 + 0xffa128);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ffa1cc + 0xffa13c));
    *pcVar1 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_1c = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  thunk_FUN_00ec5080((uint)&uStack_30 | 4);
  uStack_24 = param_2;
  thunk_FUN_00ec5080(&uStack_24,param_2);
  uStack_30 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_00ffa1d0 + 0xffa18c) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_UI_HiroRewardDialog__OnBeforeClaimOrDiscardButtonClickedAsync_d__12__MoveNext_fec6dc
            (&uStack_30);
  FUN_00ff43c0(&uStack_38,(uint)&uStack_30 | 4,0);
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return;
}

