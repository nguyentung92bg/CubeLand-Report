/* IL2CPP: Rotatelab.Networking.HiroServices.CubeLandServiceClient$$GetLegacyPlayerDataAsync
System_Threading_Tasks_Task_GetLegacyPlayerDataResponse__o* Rotatelab_Networking_HiroServices_CubeLandServiceClient__GetLegacyPlayerDataAsync (Hiro_NakamaSystem_o* nakamaSystem, Rotatelab_Networking_HiroServices_EmptyRequest_o* request, System_Threading_CancellationToken_o canceller, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.HiroServices.CubeLandServiceClient$$GetLegacyPlayerDataAsync
   System_Threading_Tasks_Task_GetLegacyPlayerDataResponse__o*
   Rotatelab_Networking_HiroServices_CubeLandServiceClient__GetLegacyPlayerDataAsync
   (Hiro_NakamaSystem_o* nakamaSystem, Rotatelab_Networking_HiroServices_EmptyRequest_o* request,
   System_Threading_CancellationToken_o canceller, const MethodInfo* method); */

void Rotatelab_Networking_HiroServices_CubeLandServiceClient__GetLegacyPlayerDataAsync_ff1228
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar1 = (char *)(_UNK_01001358 + 0x1001248);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0100135c + 0x100125c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01001360 + 0x1001268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01001364 + 0x1001274));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01001368 + 0x1001280));
    *pcVar1 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_2c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_38 = 0;
  uStack_34 = CONCAT44(uStack_20,uStack_24);
  uStack_28 = 0;
  uStack_1c = uStack_2c;
  if (*(int *)(**(int **)(_UNK_0100136c + 0x10012a0) + 0x74) == 0) {
    FUN_00ec3934();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Create_17c081c
            (&uStack_48,**(undefined4 **)(_UNK_01001370 + 0x10012c4));
  uVar2 = (uint)&uStack_38 | 4;
  uStack_2c = uStack_40;
  uStack_34 = uStack_48;
  thunk_FUN_00ec5080(uVar2,0);
  uStack_28 = param_1;
  thunk_FUN_00ec5080(&uStack_28,param_1);
  uStack_24 = param_2;
  thunk_FUN_00ec5080(&uStack_24,param_2);
  uStack_20 = param_3;
  thunk_FUN_00ec5080(&uStack_20,0);
  uStack_38 = 0xffffffff;
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___Start_CubeLandServiceClient__GetLegacyPlayerDataAsync_d__2__1222b1c
            (uVar2,&uStack_38,**(undefined4 **)(_UNK_01001374 + 0x100132c));
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder_object___get_Task_17c0838
            (uVar2,**(undefined4 **)(_UNK_01001378 + 0x1001348));
  return;
}

