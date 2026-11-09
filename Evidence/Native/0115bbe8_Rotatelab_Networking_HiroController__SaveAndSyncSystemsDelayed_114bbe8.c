/* IL2CPP: Rotatelab.Networking.HiroController$$SaveAndSyncSystemsDelayed
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Networking_HiroController__SaveAndSyncSystemsDelayed (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$SaveAndSyncSystemsDelayed
   Cysharp_Threading_Tasks_UniTaskVoid_o
   Rotatelab_Networking_HiroController__SaveAndSyncSystemsDelayed
   (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method); */

undefined4
Rotatelab_Networking_HiroController__SaveAndSyncSystemsDelayed_114bbe8(undefined4 param_1)

{
  char *pcVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_0115bc78 + 0x115bc00);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115bc7c + 0x115bc14));
    *pcVar1 = '\x01';
  }
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_18 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_14 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_20 = 0;
  thunk_FUN_00ec5080(&uStack_1c,0);
  uStack_18 = param_1;
  thunk_FUN_00ec5080(&uStack_18,param_1);
  uStack_20 = 0xffffffff;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start_HiroController__SaveAndSyncSystemsDelayed_d__80__13ebc08
            (&uStack_1c,&uStack_20,**(undefined4 **)(_UNK_0115bc80 + 0x115bc5c));
  return 0;
}

