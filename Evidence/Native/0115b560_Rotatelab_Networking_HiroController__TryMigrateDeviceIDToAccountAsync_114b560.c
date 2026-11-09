/* IL2CPP: Rotatelab.Networking.HiroController$$TryMigrateDeviceIDToAccountAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_HiroController__TryMigrateDeviceIDToAccountAsync (Rotatelab_Networking_HiroController_o* __this, Nakama_IClient_o* client, Nakama_ISession_o* deviceIDSession, Nakama_ISession_o* newSession, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$TryMigrateDeviceIDToAccountAsync
   Cysharp_Threading_Tasks_UniTask_o
   Rotatelab_Networking_HiroController__TryMigrateDeviceIDToAccountAsync
   (Rotatelab_Networking_HiroController_o* __this, Nakama_IClient_o* client, Nakama_ISession_o*
   deviceIDSession, Nakama_ISession_o* newSession, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__TryMigrateDeviceIDToAccountAsync_114b560
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5)

{
  char *pcVar1;
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
  
  pcVar1 = (char *)(_UNK_0115b664 + 0x115b588);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115b668 + 0x115b59c));
    *pcVar1 = '\x01';
  }
  uStack_44 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_40 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_38 = 0;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  thunk_FUN_00ec5080((uint)&uStack_48 | 4,0);
  uStack_3c = param_2;
  thunk_FUN_00ec5080(&uStack_3c,param_2);
  uStack_30 = param_3;
  thunk_FUN_00ec5080(&uStack_30,param_3);
  uStack_38 = param_4;
  thunk_FUN_00ec5080(&uStack_38,param_4);
  uStack_34 = param_5;
  thunk_FUN_00ec5080(&uStack_34,param_5);
  uStack_48 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_0115b66c + 0x115b620) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_HiroController__TryMigrateDeviceIDToAccountAsync_d__74__MoveNext_115edb0
            (&uStack_48);
  FUN_00ff43c0(&uStack_50,(uint)&uStack_48 | 4,0);
  *param_1 = uStack_50;
  param_1[1] = uStack_4c;
  return;
}

