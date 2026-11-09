/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$CheckAvailable
void Rotatelab_CloudRush_CloudRushController__CheckAvailable (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushController$$CheckAvailable
   void Rotatelab_CloudRush_CloudRushController__CheckAvailable
   (Rotatelab_CloudRush_CloudRushController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushController__CheckAvailable_10dc5d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar6;
  int *piVar7;
  undefined4 unaff_r6;
  
  pcVar6 = (char *)(_UNK_010ec6e0 + 0x10ec5e4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec6e4 + 0x10ec5f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec6e8 + 0x10ec604));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec6ec + 0x10ec610));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec6f0 + 0x10ec61c));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010ec6f4 + 0x10ec630));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x6c);
  if (*(int *)(**(int **)(_UNK_010ec6f8 + 0x10ec650) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
  iVar4 = Rotatelab_Networking_SatoriFlag_int___op_Implicit_1a88bec
                    (iVar1,**(undefined4 **)(_UNK_010ec6fc + 0x10ec684));
  if (iVar3 < iVar4) {
    iVar3 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    if (iVar3 == 1) {
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = Rotatelab_Networking_SatoriFlag_int___get_HasRemoteValue_1a88b34
                        (iVar1,**(undefined4 **)(_UNK_010ec700 + 0x10ec6b8));
      if (iVar1 == 0) goto LAB_010ec6d4;
    }
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentState_10dc18c();
    if (iVar1 == 1) {
      Rotatelab_CloudRush_CloudRushController__ResetCloudRush_10dcd48(param_1);
    }
    if (*(char *)(param_1 + 0x18) != '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
    UnityEngine_MonoBehaviour__StopCoroutine_3604570(param_1,*(undefined4 *)(param_1 + 0x1c),0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_CloudRush_CloudRushManager__SetOfferButtonVisibility_10dc384
              (*(int *)(param_1 + 0x10),0);
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar6 = (char *)(iRam036120c4 + 0x3612050);
    if (*pcVar6 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
      *pcVar6 = '\x01';
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar1 + 8);
    if (iVar1 != 0) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(iRam036120cc + 0x3612090);
      if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
        *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE_00;
      }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(iVar1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
  }
LAB_010ec6d4:
  pcVar6 = (char *)(_UNK_010ec834 + 0x10ec718);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ec838 + 0x10ec72c));
    *pcVar6 = '\x01';
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  Rotatelab_CloudRush_CloudRushController__CheckSystem_10dc8d8(param_1);
  uVar2 = Rotatelab_CloudRush_CloudRushController__CheckRefreshRoutine_10dcb44(param_1);
  uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_36042a4(param_1,uVar2,0);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x1c),uVar2);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x10),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_CloudRush_CloudRushManager__Init_10dcbbc(*(int *)(param_1 + 0x10));
  piVar7 = *(int **)(_UNK_010ec83c + 0x10ec7dc);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_IsForcedCloudRushShown_10dbcd8();
  if (iVar1 == 0) {
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_CloudRush_CloudRushController__set_IsForcedCloudRushShown_10dbd2c(1);
  }
  else {
    iVar1 = Rotatelab_CloudRush_CloudRushController__get_ShowCloudRushProgressOnSessionStarted_10dc0e0
                      ();
    if (iVar1 == 0) {
      return;
    }
  }
  pcVar6 = (char *)(_UNK_010ecd2c + 0x10ecc90);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecd30 + 0x10ecca4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecd34 + 0x10eccb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ecd38 + 0x10eccbc));
    *pcVar6 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010ecd3c + 0x10eccd0));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010ecd40 + 0x10ecce4));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010ecd44 + 0x10ecd00),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_0108a578 + 0x108a524);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),0x12,uVar2,0,unaff_r4,unaff_r5,unaff_r6)
    ;
    *pcVar6 = '\x01';
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
            (*(int *)(iVar1 + 0x10),0x12,uVar2,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    return;
  }
  *(undefined1 *)(iVar1 + 0x1c) = 1;
  iVar3 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar1);
  if (iVar3 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
    uVar5 = thunk_FUN_00f00cdc();
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar5,uVar2,0);
  }
  else {
    iVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar4 != 0) {
      pcVar6 = (char *)(iRam036143f4 + 0x3614380);
      if (*pcVar6 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
        *pcVar6 = '\x01';
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 != 0) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(iRam036143fc + 0x36143c0);
        if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
          UNRECOVERED_JUMPTABLE_00 = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
          *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE_00;
        }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)(iVar1,iVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar5 = thunk_FUN_00f00cdc();
    uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar5,uVar2,0);
  }
  uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar5,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

