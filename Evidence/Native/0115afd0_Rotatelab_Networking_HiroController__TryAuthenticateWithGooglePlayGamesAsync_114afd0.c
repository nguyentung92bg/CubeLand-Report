/* IL2CPP: Rotatelab.Networking.HiroController$$TryAuthenticateWithGooglePlayGamesAsync
Cysharp_Threading_Tasks_UniTask_ISession__o Rotatelab_Networking_HiroController__TryAuthenticateWithGooglePlayGamesAsync (Rotatelab_Networking_HiroController_o* __this, Nakama_IClient_o* client, Nakama_ISession_o* deviceIDSession, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$TryAuthenticateWithGooglePlayGamesAsync
   Cysharp_Threading_Tasks_UniTask_ISession__o
   Rotatelab_Networking_HiroController__TryAuthenticateWithGooglePlayGamesAsync
   (Rotatelab_Networking_HiroController_o* __this, Nakama_IClient_o* client, Nakama_ISession_o*
   deviceIDSession, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__TryAuthenticateWithGooglePlayGamesAsync_114afd0
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_58 [14];
  
  pcVar1 = (char *)(_UNK_0115b0e4 + 0x115aff0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b0e8 + 0x115b008));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b0ec + 0x115b014));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b0f0 + 0x115b020));
    *pcVar1 = '\x01';
  }
  FUN_00f88e5c(&uStack_70,0x4c);
  uVar2 = (uint)&uStack_70 | 4;
  uStack_68 = 0;
  uStack_6c = 0;
  uStack_64 = 0;
  thunk_FUN_00ec5080(uVar2,0);
  uStack_60 = param_2;
  thunk_FUN_00ec5080(&uStack_60,param_2);
  uStack_5c = param_3;
  thunk_FUN_00ec5080(&uStack_5c,param_3);
  auStack_58[0] = param_4;
  thunk_FUN_00ec5080(auStack_58,param_4);
  uStack_70 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0115b0f4 + 0x115b098) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_HiroController__TryAuthenticateWithGooglePlayGamesAsync_d__71__MoveNext_115d7d0
            (&uStack_70);
  func_0x010808ac(&uStack_80,uVar2,**(undefined4 **)(_UNK_0115b0f8 + 0x115b0c4));
  *(undefined4 *)(param_1 + 1) = uStack_78;
  *param_1 = uStack_80;
  return;
}

