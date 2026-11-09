/* IL2CPP: Rotatelab.CloudRush.CloudRushManager.<RequestOfferPopupWhenOnlineCoroutine>d__47$$MoveNext
bool Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47__MoveNext (Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP:
   Rotatelab.CloudRush.CloudRushManager.<RequestOfferPopupWhenOnlineCoroutine>d__47$$MoveNext
   bool Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47__MoveNext
   (Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47_o* __this,
   const MethodInfo* method); */

undefined4
Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47__MoveNext_10e392c
          (int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  longlong lVar7;
  
  pcVar5 = (char *)(_UNK_010f3c48 + 0x10f3948);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f3c4c + 0x10f395c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f3c50 + 0x10f3968));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f3c54 + 0x10f3974));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f3c58 + 0x10f3980));
    *pcVar5 = '\x01';
  }
  iVar6 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    bVar1 = false;
    iVar3 = UnityEngine_Networking_UnityWebRequest__get_result_39e94f4(*(int *)(param_1 + 0x14),0);
    if (iVar3 == 1) {
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      lVar7 = UnityEngine_Networking_UnityWebRequest__get_responseCode_39e9564
                        (*(int *)(param_1 + 0x14),0);
      bVar1 = lVar7 == 0xcc;
    }
    Rotatelab_CloudRush_CloudRushManager__RequestOfferPopupWhenOnlineCoroutine_d__47____m__Finally1_10e3c6c
              (param_1);
    *(undefined4 *)(param_1 + 0x14) = 0;
    thunk_FUN_00ec5080();
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iVar6 + 0x98) = 0;
    if (bVar1) {
      piVar2 = *(int **)(_UNK_010f3c68 + 0x10f3b34);
      iVar6 = *piVar2;
      if (*(int *)(iVar6 + 0x74) == 0) {
        FUN_00ec3934();
        iVar6 = *piVar2;
      }
      iVar6 = *(int *)(*(int *)(iVar6 + 0x5c) + 400);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction__Raise_fc08b8(iVar6,0);
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar6 + 0x98) != '\0') {
      return 0;
    }
    piVar2 = *(int **)(_UNK_010f3c5c + 0x10f39e0);
    *(undefined1 *)(iVar6 + 0x98) = 1;
    if (*(int *)(*piVar2 + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = UnityEngine_Application__get_internetReachability_35a8364(0);
    if (iVar3 != 0) {
      uVar4 = UnityEngine_Networking_UnityWebRequest__Get_39eab50
                        (**(undefined4 **)(_UNK_010f3c64 + 0x10f3a10),0);
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      thunk_FUN_00ec5080();
      *(undefined4 *)(param_1 + 8) = 0xfffffffd;
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Networking_UnityWebRequest__set_timeout_39eaa1c(*(int *)(param_1 + 0x14),3,0);
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = UnityEngine_Networking_UnityWebRequest__SendWebRequest_39e8aa4
                        (*(int *)(param_1 + 0x14),0);
      *(undefined4 *)(param_1 + 0xc) = uVar4;
      thunk_FUN_00ec5080();
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
    *(undefined1 *)(iVar6 + 0x98) = 0;
  }
  Rotatelab_CloudRush_CloudRushManager__ShowNoInternetWarning_10e0cbc(iVar6);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010f3c60 + 0x10f3b8c));
  if (iVar6 != 0) {
    Rotatelab_CloudRush_CloudRushController__NotifyFlowClosed_10dd4bc(iVar6);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

