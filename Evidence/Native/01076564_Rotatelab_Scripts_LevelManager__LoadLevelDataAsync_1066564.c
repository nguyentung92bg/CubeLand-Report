/* IL2CPP: Rotatelab.Scripts.LevelManager$$LoadLevelDataAsync
Cysharp_Threading_Tasks_UniTask_SoLevelData__o Rotatelab_Scripts_LevelManager__LoadLevelDataAsync (Rotatelab_Scripts_LevelManager_o* __this, int32_t levelIndex, bool includeRemoteLevels, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$LoadLevelDataAsync
   Cysharp_Threading_Tasks_UniTask_SoLevelData__o Rotatelab_Scripts_LevelManager__LoadLevelDataAsync
   (Rotatelab_Scripts_LevelManager_o* __this, int32_t levelIndex, bool includeRemoteLevels, const
   MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_1066564
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char *pcVar1;
  undefined8 uStack_60;
  undefined4 uStack_58;
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
  
  pcVar1 = (char *)(_UNK_0107666c + 0x1076584);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076670 + 0x107659c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076674 + 0x10765a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076678 + 0x10765b4));
    *pcVar1 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_4c = 0;
  uStack_44 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  thunk_FUN_00ec5080((uint)&uStack_50 | 4,0);
  uStack_3c = param_2;
  thunk_FUN_00ec5080(&uStack_3c,param_2);
  uStack_40 = CONCAT31(uStack_40._1_3_,param_4);
  uStack_50 = 0xffffffff;
  uStack_38 = param_3;
  if (*(int *)(**(int **)(_UNK_0107667c + 0x1076618) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Scripts_LevelManager__LoadLevelDataAsync_d__42__MoveNext_106b600(&uStack_50);
  func_0x010808ac(&uStack_60,(uint)&uStack_50 | 4,**(undefined4 **)(_UNK_01076680 + 0x107664c));
  *(undefined4 *)(param_1 + 1) = uStack_58;
  *param_1 = uStack_60;
  return;
}

