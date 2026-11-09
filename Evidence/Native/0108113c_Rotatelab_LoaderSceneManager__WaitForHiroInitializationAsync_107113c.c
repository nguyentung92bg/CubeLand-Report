/* IL2CPP: Rotatelab.LoaderSceneManager$$WaitForHiroInitializationAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_LoaderSceneManager__WaitForHiroInitializationAsync (Rotatelab_LoaderSceneManager_o* __this, Rotatelab_Networking_StopwatchEvent_o* stopwatch, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.LoaderSceneManager$$WaitForHiroInitializationAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o
   Rotatelab_LoaderSceneManager__WaitForHiroInitializationAsync (Rotatelab_LoaderSceneManager_o*
   __this, Rotatelab_Networking_StopwatchEvent_o* stopwatch, const MethodInfo* method); */

undefined4
Rotatelab_LoaderSceneManager__WaitForHiroInitializationAsync_107113c
          (undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_010811d4 + 0x1081154);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010811d8 + 0x1081168));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  thunk_FUN_00ec5080((uint)&uStack_28 | 4);
  uStack_20 = param_2;
  thunk_FUN_00ec5080(&uStack_20,param_2);
  uStack_28 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_LoaderSceneManager__WaitForHiroInitializationAsync_d__3__13ebd0c
            ((uint)&uStack_28 | 4,&uStack_28,**(undefined4 **)(_UNK_010811dc + 0x10811b8));
  return 0;
}

