/* IL2CPP: Rotatelab.Networking.HiroController$$<InitializeSystemsAsync>b__62_0
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController___InitializeSystemsAsync_b__62_0 (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$<InitializeSystemsAsync>b__62_0
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Networking_HiroController___InitializeSystemsAsync_b__62_0
   (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController___InitializeSystemsAsync_b__62_0_114d6d8
               (undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  pcVar1 = (char *)(_UNK_0115d790 + 0x115d6f4);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115d794 + 0x115d708));
    *pcVar1 = '\x01';
  }
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_30 = 0;
  uStack_20 = 0;
  thunk_FUN_00ec5080((uint)&uStack_30 | 4);
  uStack_24 = param_2;
  thunk_FUN_00ec5080(&uStack_24,param_2);
  uStack_30 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0115d798 + 0x115d754) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_HiroController___InitializeSystemsAsync_b__62_0_d__MoveNext_114e414
            (&uStack_30);
  FUN_00ff43c0(&uStack_38,(uint)&uStack_30 | 4,0);
  *param_1 = uStack_38;
  param_1[1] = uStack_34;
  return;
}

