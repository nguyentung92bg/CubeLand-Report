/* IL2CPP: Rotatelab.UI.ProfileManager$$SaveChangesAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_UI_ProfileManager__SaveChangesAsync (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.ProfileManager$$SaveChangesAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_UI_ProfileManager__SaveChangesAsync
   (Rotatelab_UI_ProfileManager_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_UI_ProfileManager__SaveChangesAsync_1114754(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_011247ec + 0x112476c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011247f0 + 0x1124780));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  thunk_FUN_00ec5080((uint)&uStack_28 | 4);
  uStack_20 = param_1;
  thunk_FUN_00ec5080(&uStack_20,param_1);
  uStack_28 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_ProfileManager__SaveChangesAsync_d__23__13ebddc
            ((uint)&uStack_28 | 4,&uStack_28,**(undefined4 **)(_UNK_011247f4 + 0x11247d0));
  return 0;
}

