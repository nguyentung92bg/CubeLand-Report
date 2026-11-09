/* IL2CPP: Rotatelab.Scripts.GameManager$$OnLevelProgressChangedExternallyAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.GameManager$$OnLevelProgressChangedExternallyAsync
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync (const MethodInfo* method);
    */

void Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync_1066b4c
               (undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  pcVar1 = (char *)(_UNK_01076bf4 + 0x1076b64);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01076bf8 + 0x1076b78));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  thunk_FUN_00ec5080((uint)&uStack_28 | 4,0);
  uStack_28 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_01076bfc + 0x1076bb8) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Scripts_GameManager__OnLevelProgressChangedExternallyAsync_d__10__MoveNext_1067494
            (&uStack_28);
  FUN_00ff43c0(&uStack_30,(uint)&uStack_28 | 4,0);
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}

