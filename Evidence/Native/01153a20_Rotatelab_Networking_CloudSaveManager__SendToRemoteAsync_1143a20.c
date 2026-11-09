/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$SendToRemoteAsync
Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync (Rotatelab_Networking_CloudSaveManager_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$SendToRemoteAsync
   Cysharp_Threading_Tasks_UniTask_o Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync
   (Rotatelab_Networking_CloudSaveManager_o* __this, System_Threading_CancellationToken_o
   cancellationToken, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_1143a20
               (undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar1 = (char *)(_UNK_01153af4 + 0x1153a40);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153af8 + 0x1153a54));
    *pcVar1 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_24 = 0;
  uStack_38 = 0;
  uStack_28 = 0;
  thunk_FUN_00ec5080((uint)&uStack_38 | 4,0);
  uStack_2c = param_2;
  thunk_FUN_00ec5080(&uStack_2c,param_2);
  uStack_28 = param_3;
  thunk_FUN_00ec5080(&uStack_28,0);
  uStack_38 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_01153afc + 0x1153ab8) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_CloudSaveManager__SendToRemoteAsync_d__35__MoveNext_1148ea4(&uStack_38);
  FUN_00ff43c0(&uStack_40,(uint)&uStack_38 | 4,0);
  *param_1 = uStack_40;
  param_1[1] = uStack_3c;
  return;
}

