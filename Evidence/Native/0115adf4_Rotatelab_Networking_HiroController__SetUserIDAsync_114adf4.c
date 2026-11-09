/* IL2CPP: Rotatelab.Networking.HiroController$$SetUserIDAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController__SetUserIDAsync (Rotatelab_Networking_HiroController_o* __this, System_String_o* userID, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$SetUserIDAsync
   Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController__SetUserIDAsync
   (Rotatelab_Networking_HiroController_o* __this, System_String_o* userID, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__SetUserIDAsync_114adf4
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
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
  
  pcVar1 = (char *)(_UNK_0115aec0 + 0x115ae14);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115aec4 + 0x115ae28));
    *pcVar1 = '\x01';
  }
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_38 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_2c = uStack_3c;
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  thunk_FUN_00ec5080((uint)&uStack_40 | 4,0);
  uStack_30 = param_2;
  thunk_FUN_00ec5080(&uStack_30,param_2);
  uStack_34 = param_3;
  thunk_FUN_00ec5080(&uStack_34,param_3);
  uStack_40 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0115aec8 + 0x115ae84) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_HiroController__SetUserIDAsync_d__69__MoveNext_115cb1c(&uStack_40);
  FUN_00ff43c0(&uStack_48,(uint)&uStack_40 | 4,0);
  *param_1 = uStack_48;
  param_1[1] = uStack_44;
  return;
}

