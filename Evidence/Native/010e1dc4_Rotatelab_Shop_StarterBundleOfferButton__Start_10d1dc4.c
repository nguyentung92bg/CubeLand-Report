/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$Start
void Rotatelab_Shop_StarterBundleOfferButton__Start (Rotatelab_Shop_StarterBundleOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarterBundleOfferButton$$Start
   void Rotatelab_Shop_StarterBundleOfferButton__Start (Rotatelab_Shop_StarterBundleOfferButton_o*
   __this, const MethodInfo* method); */

void Rotatelab_Shop_StarterBundleOfferButton__Start_10d1dc4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int *piVar6;
  undefined4 unaff_r6;
  int iVar7;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_010e1e84 + 0x10e1ddc);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1e88 + 0x10e1df0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1e8c + 0x10e1dfc));
    *pcVar5 = '\x01';
  }
  Rotatelab_Shop_BaseOfferButton__Start_10cc570(param_1);
  Rotatelab_Shop_IapOfferButton__RefreshOfferState_10ce724(param_1);
  piVar6 = *(int **)(_UNK_010e1e90 + 0x10e1e20);
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xd8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar1,param_1[5],1,2,**(undefined4 **)(_UNK_010e1e94 + 0x10e1e64));
  pcVar5 = (char *)(_UNK_010e1fd8 + 0x10e1eb0);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1fdc + 0x10e1ec4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1fe0 + 0x10e1ed0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1fe4 + 0x10e1edc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010e1fe8 + 0x10e1ee8));
    *pcVar5 = '\x01';
  }
  iVar1 = (**(code **)(*param_1 + 0x160))(param_1,*(undefined4 *)(*param_1 + 0x164));
  if (iVar1 != 0) {
    iVar7 = param_1[0x17];
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010e1fec + 0x10e1f18));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_ForcedOfferPopupTracker__ShouldRequestOnMainMenuArrival_10798bc
                      (iVar7,*(undefined4 *)(*(int *)(iVar1 + 0x78) + 0xc),1,0);
    if (iVar1 != 0) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010e1ff0 + 0x10e1f78));
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010e1ff4 + 0x10e1f8c));
      System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010e1ff8 + 0x10e1fa8),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar5 = (char *)(_UNK_0108a578 + 0x108a524);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),0xe,uVar2,0,unaff_r4,unaff_r5,
                     unaff_r6,unaff_r7,unaff_r11,unaff_lr);
        *pcVar5 = '\x01';
      }
      if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
                (*(int *)(iVar1 + 0x10),0xe,uVar2,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
      if (*(char *)(iVar1 + 0x1c) != '\0') {
        return;
      }
      *(undefined1 *)(iVar1 + 0x1c) = 1;
      iVar7 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar1);
      if (iVar7 == 0) {
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
        uVar4 = thunk_FUN_00f00cdc();
        uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
        System_NullReferenceException___ctor_2b721e8(uVar4,uVar2,0);
      }
      else {
        iVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
        if (iVar3 != 0) {
          pcVar5 = (char *)(iRam036143f4 + 0x3614380);
          if (*pcVar5 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
            *pcVar5 = '\x01';
          }
          if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar1 = *(int *)(iVar1 + 8);
          if (iVar1 != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
              *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
            }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(iVar1,iVar7);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
        uVar4 = thunk_FUN_00f00cdc();
        uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
        System_ArgumentException___ctor_2b113a4(uVar4,uVar2,0);
      }
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
      FUN_01f4fe28(uVar4,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe2c();
    }
  }
  return;
}

