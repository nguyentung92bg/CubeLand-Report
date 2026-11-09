/* IL2CPP: Rotatelab.Networking.HiroController$$TryAuthenticateWithSilentSignInAsync
Cysharp_Threading_Tasks_UniTask_ISession__o Rotatelab_Networking_HiroController__TryAuthenticateWithSilentSignInAsync (Rotatelab_Networking_HiroController_o* __this, Nakama_IClient_o* client, Nakama_ISession_o* deviceIDSession, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroController$$TryAuthenticateWithSilentSignInAsync
   Cysharp_Threading_Tasks_UniTask_ISession__o
   Rotatelab_Networking_HiroController__TryAuthenticateWithSilentSignInAsync
   (Rotatelab_Networking_HiroController_o* __this, Nakama_IClient_o* client, Nakama_ISession_o*
   deviceIDSession, const MethodInfo* method); */

void Rotatelab_Networking_HiroController__TryAuthenticateWithSilentSignInAsync_114aecc
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  undefined8 uStack_28;
  undefined4 uStack_20;
  
  pcVar2 = (char *)(_UNK_0115afb4 + 0x115aeec);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115afb8 + 0x115af04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115afbc + 0x115af10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0115afc0 + 0x115af1c));
    *pcVar2 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0115afc4 + 0x115af30) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Application__get_platform_35a81fc(0);
  if (iVar1 == 0xb) {
    Rotatelab_Networking_HiroController__TryAuthenticateWithGooglePlayGamesAsync_114afd0
              (&uStack_28,param_2,param_3,param_4);
  }
  else {
    if (*(int *)(**(int **)(_UNK_0115afc8 + 0x115af74) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Cysharp_Threading_Tasks_UniTask__FromResult_object__164e9d8
              (&uStack_28,param_4,**(undefined4 **)(_UNK_0115afcc + 0x115af94));
  }
  *(undefined4 *)(param_1 + 1) = uStack_20;
  *param_1 = uStack_28;
  return;
}

