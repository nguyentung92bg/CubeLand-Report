/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$Start
void Rotatelab_Shop_NoAdsOfferButton__Start (Rotatelab_Shop_NoAdsOfferButton_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.NoAdsOfferButton$$Start
   void Rotatelab_Shop_NoAdsOfferButton__Start (Rotatelab_Shop_NoAdsOfferButton_o* __this, const
   MethodInfo* method); */

void Rotatelab_Shop_NoAdsOfferButton__Start_10cfd20(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_010dfde0 + 0x10dfd38);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfde4 + 0x10dfd4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfde8 + 0x10dfd58));
    *pcVar5 = '\x01';
  }
  Rotatelab_Shop_BaseOfferButton__Start_10cc570(param_1);
  Rotatelab_Shop_IapOfferButton__RefreshOfferState_10ce724(param_1);
  piVar6 = *(int **)(_UNK_010dfdec + 0x10dfd7c);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0xd8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__Int32Enum__int___Raise_23a644c
            (iVar2,param_1[5],1,4,**(undefined4 **)(_UNK_010dfdf0 + 0x10dfdc0));
  pcVar5 = (char *)(_UNK_010dfcfc + 0x10dfbd4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfd00 + 0x10dfbe8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfd04 + 0x10dfbf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfd08 + 0x10dfc00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dfd0c + 0x10dfc0c));
    *pcVar5 = '\x01';
  }
  iVar2 = (**(code **)(*param_1 + 0x160))(param_1,*(undefined4 *)(*param_1 + 0x164));
  if (iVar2 != 0) {
    iVar7 = param_1[0x15];
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010dfd10 + 0x10dfc3c));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_ForcedOfferPopupTracker__ShouldRequestOnMainMenuArrival_10798bc
                      (iVar7,*(undefined4 *)(*(int *)(iVar2 + 0x78) + 0x10),1,0);
    if (iVar2 != 0) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010dfd14 + 0x10dfc9c));
      uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010dfd18 + 0x10dfcb0));
      System_Action___ctor_2b10bac(uVar1,param_1,**(undefined4 **)(_UNK_010dfd1c + 0x10dfccc),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar5 = (char *)(_UNK_0108a578 + 0x108a524);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),0xc,uVar1,0,unaff_r4,unaff_r5,
                     unaff_r6,unaff_r7,unaff_r11,unaff_lr);
        *pcVar5 = '\x01';
      }
      if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
                (*(int *)(iVar2 + 0x10),0xc,uVar1,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
      if (*(char *)(iVar2 + 0x1c) != '\0') {
        return;
      }
      *(undefined1 *)(iVar2 + 0x1c) = 1;
      iVar7 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar2);
      if (iVar7 == 0) {
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
        uVar4 = thunk_FUN_00f00cdc();
        uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
        System_NullReferenceException___ctor_2b721e8(uVar4,uVar1,0);
      }
      else {
        iVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
        if (iVar3 != 0) {
          pcVar5 = (char *)(iRam036143f4 + 0x3614380);
          if (*pcVar5 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
            *pcVar5 = '\x01';
          }
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 != 0) {
            UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
            if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
              UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
              *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
            }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)(iVar2,iVar7);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
        uVar4 = thunk_FUN_00f00cdc();
        uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
        System_ArgumentException___ctor_2b113a4(uVar4,uVar1,0);
      }
      uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
      FUN_01f4fe28(uVar4,uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe2c();
    }
  }
  return;
}

