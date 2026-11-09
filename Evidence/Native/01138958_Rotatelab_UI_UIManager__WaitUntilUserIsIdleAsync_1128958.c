/* IL2CPP: Rotatelab.UI.UIManager$$WaitUntilUserIsIdleAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.UIManager$$WaitUntilUserIsIdleAsync
   Cysharp_Threading_Tasks_UniTask_o Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync (const
   MethodInfo* method); */

void Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_1128958(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar1 = (char *)(_UNK_01138a00 + 0x1138970);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01138a04 + 0x1138984));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  thunk_FUN_00ec5080((uint)&uStack_28 | 4,0);
  uStack_28 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_01138a08 + 0x11389c4) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_UI_UIManager__WaitUntilUserIsIdleAsync_d__40__MoveNext_1128d80(&uStack_28);
  FUN_00ff43c0(&uStack_30,(uint)&uStack_28 | 4,0);
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}

