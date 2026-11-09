/* IL2CPP: Rotatelab.GameExtensions$$WriteStorageObjectAsync
System_Threading_Tasks_Task_IApiStorageObjectAck__o* Rotatelab_GameExtensions__WriteStorageObjectAsync (Hiro_NakamaSystem_o* nakama, Nakama_IApiWriteStorageObject_o* obj, Nakama_RetryConfiguration_o* retryConfiguration, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.GameExtensions$$WriteStorageObjectAsync
   System_Threading_Tasks_Task_IApiStorageObjectAck__o*
   Rotatelab_GameExtensions__WriteStorageObjectAsync (Hiro_NakamaSystem_o* nakama,
   Nakama_IApiWriteStorageObject_o* obj, Nakama_RetryConfiguration_o* retryConfiguration,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void Rotatelab_GameExtensions__WriteStorageObjectAsync_fb5c80
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar1 = (char *)(_UNK_00fc5dcc + 0xfc5ca0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5dd0 + 0xfc5cb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5dd4 + 0xfc5cc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5dd8 + 0xfc5cd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fc5ddc + 0xfc5cdc));
    *pcVar1 = '\x01';
  }
  uStack_34 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_30 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_3c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_48 = 0;
  uStack_44 = CONCAT44(uStack_30,uStack_34);
  uStack_38 = 0;
  uStack_28 = 0;
  uStack_2c = uStack_3c;
  if (*(int *)(**(int **)(_UNK_00fc5de0 + 0xfc5d00) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17c081c
            (&uStack_58,**(undefined4 **)(_UNK_00fc5de4 + 0xfc5d28));
  uVar2 = (uint)&uStack_48 | 4;
  uStack_3c = uStack_50;
  uStack_44 = uStack_58;
  thunk_FUN_00ec5080(uVar2,0);
  uStack_38 = param_1;
  thunk_FUN_00ec5080(&uStack_38,param_1);
  uStack_34 = param_2;
  thunk_FUN_00ec5080(&uStack_34,param_2);
  uStack_30 = param_3;
  thunk_FUN_00ec5080(&uStack_30,param_3);
  uStack_2c = param_4;
  thunk_FUN_00ec5080(&uStack_2c,0);
  uStack_48 = 0xffffffff;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_GameExtensions__WriteStorageObjectAsync_d__15__1222d04
            (uVar2,&uStack_48,**(undefined4 **)(_UNK_00fc5de8 + 0xfc5da0));
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17c0838
            (uVar2,**(undefined4 **)(_UNK_00fc5dec + 0xfc5dbc));
  return;
}

