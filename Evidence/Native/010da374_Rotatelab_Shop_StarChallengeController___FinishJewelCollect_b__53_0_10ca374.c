/* IL2CPP: Rotatelab.Shop.StarChallengeController$$<FinishJewelCollect>b__53_0
void Rotatelab_Shop_StarChallengeController___FinishJewelCollect_b__53_0 (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController$$<FinishJewelCollect>b__53_0
   void Rotatelab_Shop_StarChallengeController___FinishJewelCollect_b__53_0
   (Rotatelab_Shop_StarChallengeController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_StarChallengeController___FinishJewelCollect_b__53_0_10ca374(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  
  pcVar6 = (char *)(_UNK_010da418 + 0x10da388);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da41c + 0x10da39c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010da420 + 0x10da3a8));
    *pcVar6 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_010da424 + 0x10da3bc));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIInputBlocker__TrySetInputAllowed_1124020(iVar2,1,param_1,0);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010da428 + 0x10da3f0));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar6 = (char *)(_UNK_0108a5f4 + 0x108a59c);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),1,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
    *pcVar6 = '\x01';
  }
  pcVar6 = (char *)(iVar2 + 0x14);
  if ((*pcVar6 != '\0') && (*(int *)(iVar2 + 0x18) == 1)) {
    *(undefined4 *)(iVar2 + 0x18) = 0;
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
  }
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    *(undefined1 *)(iVar2 + 0x1c) = 1;
    iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar2);
    if (iVar1 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
      uVar4 = thunk_FUN_00f00cdc();
      uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar4,uVar5,0);
    }
    else {
      iVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar3 != 0) {
        pcVar6 = (char *)(iRam036143f4 + 0x3614380);
        if (*pcVar6 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
          *pcVar6 = '\x01';
        }
        if (iVar2 != 0) {
          iVar2 = *(int *)(iVar2 + 8);
          if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
          }
          UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
          if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
            UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
            *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
          }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(iVar2,iVar1);
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar4 = thunk_FUN_00f00cdc();
      uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar4,uVar5,0);
    }
    uVar5 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar4,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
  return;
}

