/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController.<Start>d__9$$MoveNext
bool Rotatelab_Ads_Debugging_AdModuleTestSceneController__Start_d__9__MoveNext (Rotatelab_Ads_Debugging_AdModuleTestSceneController__Start_d__9_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.Debugging.AdModuleTestSceneController.<Start>d__9$$MoveNext
   bool Rotatelab_Ads_Debugging_AdModuleTestSceneController__Start_d__9__MoveNext
   (Rotatelab_Ads_Debugging_AdModuleTestSceneController__Start_d__9_o* __this, const MethodInfo*
   method); */

bool Rotatelab_Ads_Debugging_AdModuleTestSceneController__Start_d__9__MoveNext_10fa740(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  
  pcVar3 = (char *)(_UNK_0110abc8 + 0x110a758);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110abcc + 0x110a76c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110abd0 + 0x110a778));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110abd4 + 0x110a784));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110abd8 + 0x110a790));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110abdc + 0x110a79c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110abe0 + 0x110a7a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110abe4 + 0x110a7b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110abe8 + 0x110a7c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110abec + 0x110a7cc));
    *pcVar3 = '\x01';
  }
  iVar8 = *(int *)(param_1 + 8);
  if (iVar8 == 0) {
    puVar9 = *(undefined4 **)(_UNK_0110ac08 + 0x110a968);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar9);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Ads_AdManager__WaitForInitializationCoroutine_10f63e8(iVar4);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar1);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar8 == 1) {
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Ads_Debugging_AdModuleTestSceneController__SetCurrentLevel_10fa060
              (iVar4,*(undefined4 *)(iVar4 + 0x2c));
    if (*(int *)(iVar4 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar9 = *(undefined4 **)(_UNK_0110abf0 + 0x110a828);
    iVar5 = *(int *)(*(int *)(iVar4 + 0x24) + 0xb4);
    uVar1 = thunk_FUN_00f00cdc(*puVar9);
    UnityEngine_Events_UnityAction___ctor_361afc4
              (uVar1,iVar4,**(undefined4 **)(_UNK_0110abf4 + 0x110a848),0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar1,0);
    puVar10 = *(undefined4 **)(_UNK_0110abf8 + 0x110a878);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 0x4c) == 0) {
      if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar4 + 0x10),0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar5,0,0);
    }
    else {
      iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(iVar5 + 0x4c);
      uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110abfc + 0x110a8bc));
      System_Action_RewardedAdFormat_CustomReward____ctor_1f159c0
                (uVar1,iVar4,**(undefined4 **)(_UNK_0110ac00 + 0x110a8dc),0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_RewardedAdFormat__add_AdReceivedCustomRewardEvent_10f3e40(iVar5,uVar1);
      if (*(int *)(iVar4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(*(int *)(iVar4 + 0x10) + 0xb4);
      uVar1 = thunk_FUN_00f00cdc(*puVar9);
      UnityEngine_Events_UnityAction___ctor_361afc4
                (uVar1,iVar4,**(undefined4 **)(_UNK_0110ac04 + 0x110a930),0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar1,0);
    }
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(iVar4 + 0x1c);
    if (*(int *)(iVar5 + 0x48) == 0) {
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = UnityEngine_Component__get_gameObject_35fe360(iVar6,0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar5,0,0);
    }
    else {
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar11 = *(int **)(_UNK_0110ac0c + 0x110aa20);
      iVar6 = *(int *)(iVar6 + 0xb4);
      iVar5 = *piVar11;
      if (*(int *)(iVar5 + 0x74) == 0) {
        FUN_00ec3934();
        iVar5 = *piVar11;
      }
      puVar2 = *(undefined4 **)(iVar5 + 0x5c);
      iVar7 = puVar2[1];
      if (iVar7 == 0) {
        if (*(int *)(iVar5 + 0x74) == 0) {
          FUN_00ec3934();
          puVar2 = *(undefined4 **)(*piVar11 + 0x5c);
        }
        uVar1 = *puVar2;
        iVar7 = thunk_FUN_00f00cdc(*puVar9);
        UnityEngine_Events_UnityAction___ctor_361afc4
                  (iVar7,uVar1,**(undefined4 **)(_UNK_0110ac10 + 0x110aa84),0);
        piVar11 = (int *)(*(int *)(*piVar11 + 0x5c) + 4);
        *piVar11 = iVar7;
        thunk_FUN_00ec5080(piVar11,iVar7);
      }
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Events_UnityEvent__AddListener_361b098(iVar6,iVar7,0);
    }
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar10);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar6 = *(int *)(iVar4 + 0x20);
    if (*(int *)(iVar5 + 0x44) == 0) {
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar4 = UnityEngine_Component__get_gameObject_35fe360(iVar6,0);
      if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar4,0,0);
    }
    else {
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar5 = *(int *)(iVar6 + 0xb4);
      uVar1 = thunk_FUN_00f00cdc(*puVar9);
      UnityEngine_Events_UnityAction___ctor_361afc4
                (uVar1,iVar4,**(undefined4 **)(_UNK_0110ac14 + 0x110ab50),0);
      if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Events_UnityEvent__AddListener_361b098(iVar5,uVar1,0);
      Rotatelab_Ads_Debugging_AdModuleTestSceneController__RefreshBannerButtonText_10fa14c(iVar4);
    }
  }
  return iVar8 == 0;
}

