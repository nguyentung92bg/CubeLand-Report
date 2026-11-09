/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$Init
void Rotatelab_Shop_StarChallengePopup__Init (Rotatelab_Shop_StarChallengePopup_o* __this, Rotatelab_Shop_StarChallengeSO_o* starChallengeSo, UnityEngine_RectTransform_o* targetRect, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengePopup$$Init
   void Rotatelab_Shop_StarChallengePopup__Init (Rotatelab_Shop_StarChallengePopup_o* __this,
   Rotatelab_Shop_StarChallengeSO_o* starChallengeSo, UnityEngine_RectTransform_o* targetRect, const
   MethodInfo* method); */

void Rotatelab_Shop_StarChallengePopup__Init_10c84a8
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  char *pcVar6;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar6 = (char *)(_UNK_010d85ec + 0x10d84c4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d85f0 + 0x10d84d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d85f4 + 0x10d84e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d85f8 + 0x10d84f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d85fc + 0x10d84fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d8600 + 0x10d8508));
    *pcVar6 = '\x01';
  }
  if (*(int *)(param_1 + 0x34) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x38) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x38),param_2);
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d8604 + 0x10d853c));
  System_Collections_Generic_List_object____ctor_267d274
            (uVar2,**(undefined4 **)(_UNK_010d8608 + 0x10d8550));
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x34),uVar2);
  Rotatelab_Shop_StarChallengePopup__GenerateChallenges_10caea8(param_1,param_3);
  iVar3 = Rotatelab_Shop_StarChallengePopup__get_IsJewelForcedShowed_10cadfc();
  if (iVar3 != 0) {
    return;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010d860c + 0x10d8590));
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d8610 + 0x10d85a4));
  System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010d8614 + 0x10d85c0),0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_0108a578 + 0x108a524);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),0x14,uVar2,0,unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7,unaff_r11,unaff_lr);
    *pcVar6 = '\x01';
  }
  if (*(int *)(iVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
            (*(int *)(iVar3 + 0x10),0x14,uVar2,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
  if (*(char *)(iVar3 + 0x1c) != '\0') {
    return;
  }
  *(undefined1 *)(iVar3 + 0x1c) = 1;
  iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar3);
  if (iVar1 == 0) {
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
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(iVar3 + 8);
      if (iVar3 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
          *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar3,iVar1);
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

