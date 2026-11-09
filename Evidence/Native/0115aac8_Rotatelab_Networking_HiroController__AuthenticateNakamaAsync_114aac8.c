/* IL2CPP: Rotatelab.Networking.HiroController$$AuthenticateNakamaAsync
Cysharp_Threading_Tasks_UniTask_ISession__o Rotatelab_Networking_HiroController__AuthenticateNakamaAsync (Rotatelab_Networking_HiroController_o* __this, Nakama_IClient_o* client, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$AuthenticateNakamaAsync
   Cysharp_Threading_Tasks_UniTask_ISession__o
   Rotatelab_Networking_HiroController__AuthenticateNakamaAsync
   (Rotatelab_Networking_HiroController_o* __this, Nakama_IClient_o* client, const MethodInfo*
   method); */

void Rotatelab_Networking_HiroController__AuthenticateNakamaAsync_114aac8
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined8 uStack_68;
  undefined4 uStack_60;
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
  
  pcVar1 = (char *)(_UNK_0115abd4 + 0x115aae8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115abd8 + 0x115aafc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115abdc + 0x115ab08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115abe0 + 0x115ab14));
    *pcVar1 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_50 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  thunk_FUN_00ec5080((uint)&uStack_58 | 4);
  uStack_44 = param_2;
  thunk_FUN_00ec5080(&uStack_44,param_2);
  uStack_48 = param_3;
  thunk_FUN_00ec5080(&uStack_48,param_3);
  uStack_58 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0115abe4 + 0x115ab88) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_HiroController__AuthenticateNakamaAsync_d__67__MoveNext_1150558(&uStack_58);
  func_0x010808ac(&uStack_68,(uint)&uStack_58 | 4,**(undefined4 **)(_UNK_0115abe8 + 0x115abb4));
  *(undefined4 *)(param_1 + 1) = uStack_60;
  *param_1 = uStack_68;
  return;
}

