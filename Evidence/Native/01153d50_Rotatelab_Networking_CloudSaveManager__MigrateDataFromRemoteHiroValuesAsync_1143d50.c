/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$MigrateDataFromRemoteHiroValuesAsync
Cysharp_Threading_Tasks_UniTask_CloudSaveData__o Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync (Rotatelab_Networking_CloudSaveManager_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.CloudSaveManager$$MigrateDataFromRemoteHiroValuesAsync
   Cysharp_Threading_Tasks_UniTask_CloudSaveData__o
   Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync
   (Rotatelab_Networking_CloudSaveManager_o* __this, System_Threading_CancellationToken_o
   cancellationToken, const MethodInfo* method); */

void Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync_1143d50
               (undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = (char *)(_UNK_01153e54 + 0x1153d70);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153e58 + 0x1153d84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153e5c + 0x1153d90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01153e60 + 0x1153d9c));
    *pcVar1 = '\x01';
  }
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_28 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  thunk_FUN_00ec5080(&uStack_3c);
  uStack_30 = param_2;
  thunk_FUN_00ec5080(&uStack_30,param_2);
  uStack_2c = param_3;
  thunk_FUN_00ec5080(&uStack_2c,0);
  uStack_40 = 0xffffffff;
  if (*(int *)(**(int **)(_UNK_01153e64 + 0x1153e08) + 0x1c) == 0) {
    FUN_00efd7c4();
  }
  Rotatelab_Networking_CloudSaveManager__MigrateDataFromRemoteHiroValuesAsync_d__43__MoveNext_114759c
            (&uStack_40);
  func_0x010808ac(&uStack_50,&uStack_3c,**(undefined4 **)(_UNK_01153e68 + 0x1153e34));
  *(undefined4 *)(param_1 + 1) = uStack_48;
  *param_1 = uStack_50;
  return;
}

