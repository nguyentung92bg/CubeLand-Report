/* IL2CPP: Rotatelab.Networking.AddressablesManager$$InitializeAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_AddressablesManager__InitializeAsync (Rotatelab_Networking_AddressablesManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.AddressablesManager$$InitializeAsync
   Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_AddressablesManager__InitializeAsync
   (Rotatelab_Networking_AddressablesManager_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_AddressablesManager__InitializeAsync_113fc44(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  pcVar1 = (char *)(_UNK_0114fcf0 + 0x114fc5c);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114fcf4 + 0x114fc70));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_14 = 0;
  uStack_28 = 0;
  uStack_18 = 0;
  thunk_FUN_00ec5080((uint)&uStack_28 | 4,0);
  uStack_28 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0114fcf8 + 0x114fcb4) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_AddressablesManager__InitializeAsync_d__0__MoveNext_1140278(&uStack_28);
  FUN_00ff43c0(&uStack_30,(uint)&uStack_28 | 4,0);
  *param_1 = uStack_30;
  param_1[1] = uStack_2c;
  return;
}

