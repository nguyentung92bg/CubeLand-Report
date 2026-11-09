/* IL2CPP: Rotatelab.Scripts.LevelManager$$InitializeAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Scripts_LevelManager__InitializeAsync (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$InitializeAsync
   Cysharp_Threading_Tasks_UniTask_o Rotatelab_Scripts_LevelManager__InitializeAsync
   (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__InitializeAsync_1068218(undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_010782d0 + 0x1078234);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010782d4 + 0x1078248));
    *pcVar1 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  thunk_FUN_00ec5080((uint)&uStack_38 | 4,0);
  uStack_2c = param_2;
  thunk_FUN_00ec5080(&uStack_2c,param_2);
  uStack_38 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_010782d8 + 0x1078294) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Scripts_LevelManager__InitializeAsync_d__31__MoveNext_106aaf0(&uStack_38);
  FUN_00ff43c0(&uStack_40,(uint)&uStack_38 | 4,0);
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  return;
}

