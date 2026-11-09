/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ClosePopup
void Rotatelab_CloudRush_CloudRushManager__ClosePopup (Rotatelab_CloudRush_CloudRushManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushManager$$ClosePopup
   void Rotatelab_CloudRush_CloudRushManager__ClosePopup (Rotatelab_CloudRush_CloudRushManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushManager__ClosePopup_10e1014(int param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  pcVar2 = (char *)(_UNK_010f1234 + 0x10f1028);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1238 + 0x10f103c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f123c + 0x10f1048));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f1240 + 0x10f1054));
    *pcVar2 = '\x01';
  }
  if (*(char *)(param_1 + 0x7c) == '\0') {
    if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_UI_PopupController__Hide_1124930(*(int *)(param_1 + 0x3c),0);
    puVar3 = *(undefined4 **)(_UNK_010f1248 + 0x10f10c4);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    if (iVar1 - 1U < 2) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010f124c + 0x10f10f0));
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Scripts_GameManager__OnLevelCompleted_1066254(iVar1,0);
    }
    else {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
      if (iVar1 == 3) {
        iVar1 = *(int *)(param_1 + 0x80);
        if (iVar1 == 2) {
          piVar4 = *(int **)(_UNK_010f1258 + 0x10f11fc);
          iVar1 = *piVar4;
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            iVar1 = *piVar4;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x88);
        }
        else if (iVar1 == 1) {
          piVar4 = *(int **)(_UNK_010f1254 + 0x10f11d0);
          iVar1 = *piVar4;
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            iVar1 = *piVar4;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x80);
        }
        else {
          if (iVar1 != 0) goto LAB_010f1150;
          piVar4 = *(int **)(_UNK_010f1250 + 0x10f11a4);
          iVar1 = *piVar4;
          if (*(int *)(iVar1 + 0x74) == 0) {
            FUN_00ec3934();
            iVar1 = *piVar4;
          }
          iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x94);
        }
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0xb5) == '\0') {
      if (*(char *)(param_1 + 0x1d) == '\0') {
        return;
      }
      Rotatelab_Shop_BaseOfferButton__ClosePopup_10ccc08(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 0xb5) = 0;
      if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_UI_PopupController__Hide_1124930(*(int *)(param_1 + 0x3c),0);
    }
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010f1244 + 0x10f1134));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushController__NotifyFlowClosed_10dd4bc(iVar1);
  }
LAB_010f1150:
  *(undefined1 *)(param_1 + 0x7c) = 1;
  return;
}

