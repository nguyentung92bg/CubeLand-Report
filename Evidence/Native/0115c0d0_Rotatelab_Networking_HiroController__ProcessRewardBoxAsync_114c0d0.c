/* IL2CPP: Rotatelab.Networking.HiroController$$ProcessRewardBoxAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController__ProcessRewardBoxAsync (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$ProcessRewardBoxAsync
   Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController__ProcessRewardBoxAsync
   (Rotatelab_Networking_HiroController_o* __this, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__ProcessRewardBoxAsync_114c0d0
               (undefined4 *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  undefined4 uStack_20;
  
  pcVar1 = (char *)(_UNK_0115c190 + 0x115c0ec);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115c194 + 0x115c100));
    *pcVar1 = '\x01';
  }
  uStack_4c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_48 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_20 = 0;
  uStack_3c = uStack_4c;
  uStack_38 = uStack_48;
  uStack_34 = uStack_44;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  thunk_FUN_00ec5080((uint)&uStack_50 | 4);
  uStack_44 = param_2;
  thunk_FUN_00ec5080(&uStack_44,param_2);
  uStack_50 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0115c198 + 0x115c154) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_HiroController__ProcessRewardBoxAsync_d__84__MoveNext_1158f3c(&uStack_50);
  FUN_00ff43c0(&uStack_58,(uint)&uStack_50 | 4,0);
  *param_1 = uStack_58;
  param_1[1] = uStack_54;
  return;
}

