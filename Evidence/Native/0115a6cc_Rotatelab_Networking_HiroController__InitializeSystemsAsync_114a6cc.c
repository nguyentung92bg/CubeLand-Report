/* IL2CPP: Rotatelab.Networking.HiroController$$InitializeSystemsAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Networking_HiroController__InitializeSystemsAsync (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$InitializeSystemsAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Networking_HiroController__InitializeSystemsAsync
   (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Networking_HiroController__InitializeSystemsAsync_114a6cc(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_0115a764 + 0x115a6e4);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115a768 + 0x115a6f8));
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
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_HiroController__InitializeSystemsAsync_d__62__13ebb38
            ((uint)&uStack_28 | 4,&uStack_28,**(undefined4 **)(_UNK_0115a76c + 0x115a748));
  return 0;
}

