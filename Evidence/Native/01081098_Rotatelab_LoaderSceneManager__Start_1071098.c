/* IL2CPP: Rotatelab.LoaderSceneManager$$Start
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_LoaderSceneManager__Start (Rotatelab_LoaderSceneManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.LoaderSceneManager$$Start
   Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_LoaderSceneManager__Start
   (Rotatelab_LoaderSceneManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_LoaderSceneManager__Start_1071098(undefined4 param_1)

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
  
  pcVar1 = (char *)(_UNK_01081130 + 0x10810b0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01081134 + 0x10810c4));
    *pcVar1 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_18 = 0;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  thunk_FUN_00ec5080((uint)&uStack_38 | 4);
  uStack_30 = param_1;
  thunk_FUN_00ec5080(&uStack_30,param_1);
  uStack_38 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_LoaderSceneManager__Start_d__2__13ebcd8
            ((uint)&uStack_38 | 4,&uStack_38,**(undefined4 **)(_UNK_01081138 + 0x1081114));
  return 0;
}

