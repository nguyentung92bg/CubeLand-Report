/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$OnMainCanvasChangeEndedHandler
void Rotatelab_Networking_PushNotificationManager__OnMainCanvasChangeEndedHandler (Rotatelab_Networking_PushNotificationManager_o* __this, int32_t canvasType, bool __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Networking.PushNotificationManager$$OnMainCanvasChangeEndedHandler
   void Rotatelab_Networking_PushNotificationManager__OnMainCanvasChangeEndedHandler
   (Rotatelab_Networking_PushNotificationManager_o* __this, int32_t canvasType, bool __, const
   MethodInfo* method); */

void Rotatelab_Networking_PushNotificationManager__OnMainCanvasChangeEndedHandler_fe50f8
               (undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  undefined1 uStack_19;
  
  pcVar5 = (char *)(_UNK_00ff5280 + 0xff5114);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5284 + 0xff5128));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5288 + 0xff5134));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff528c + 0xff5140));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5290 + 0xff514c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5294 + 0xff5158));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00ff5298 + 0xff5164));
    *pcVar5 = '\x01';
  }
  uStack_19 = 0;
  if (param_2 == 0) {
    if (*(int *)(**(int **)(_UNK_00ff529c + 0xff5188) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
    piVar6 = *(int **)(_UNK_00ff52a0 + 0xff51b8);
    iVar3 = *piVar6;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar6;
    }
    if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x30) <= iVar2) {
      uStack_19 = Rotatelab_Networking_PushNotificationManager__RegisterToTokenReceivedEventAsync_fe52b4
                            (param_1);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_321f674(&uStack_19,0);
      piVar6 = *(int **)(_UNK_00ff52a4 + 0xff5200);
      iVar2 = *piVar6;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar6;
      }
      uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x120);
      uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00ff52a8 + 0xff5224));
      System_Action_Int32Enum__bool____ctor_1f185a4
                (uVar1,param_1,**(undefined4 **)(_UNK_00ff52ac + 0xff5244),0);
      uVar1 = Rotatelab_GameAction_Int32Enum__bool___op_Subtraction_23a44a8
                        (uVar4,uVar1,**(undefined4 **)(_UNK_00ff52b0 + 0xff525c));
      *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x120) = uVar1;
      thunk_FUN_00ec5080();
    }
  }
  return;
}

