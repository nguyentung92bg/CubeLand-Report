/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$CheckResult
void Rotatelab_SeasonPass_SeasonPassController__CheckResult (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassController$$CheckResult
   void Rotatelab_SeasonPass_SeasonPassController__CheckResult
   (Rotatelab_SeasonPass_SeasonPassController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassController__CheckResult_10a49f0(int param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  int iVar3;
  undefined4 unaff_r6;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  
  pcVar2 = (char *)(_UNK_010b4ad8 + 0x10b4a04);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4adc + 0x10b4a18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4ae0 + 0x10b4a24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4ae4 + 0x10b4a30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b4ae8 + 0x10b4a3c));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_Save_SavedValue_int___op_Implicit_1a8b9b4
                    (*(undefined4 *)(param_1 + 0x34),**(undefined4 **)(_UNK_010b4aec + 0x10b4a50));
  if (1 < iVar1) {
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010b4af0 + 0x10b4a78));
    uVar4 = *(undefined4 *)(param_1 + 0x24);
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b4af4 + 0x10b4a90));
    System_Action___ctor_2b10bac(uVar7,uVar4,**(undefined4 **)(_UNK_010b4af8 + 0x10b4aac),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar2 = (char *)(_UNK_0108a578 + 0x108a524);
    if (*pcVar2 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),3,uVar7,0,unaff_r4,unaff_r5,unaff_r6);
      *pcVar2 = '\x01';
    }
    if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
              (*(int *)(iVar1 + 0x10),3,uVar7,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
    if (*(char *)(iVar1 + 0x1c) != '\0') {
      return;
    }
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    iVar3 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar1);
    if (iVar3 == 0) {
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
      uVar4 = thunk_FUN_00f00cdc();
      uVar7 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
      System_NullReferenceException___ctor_2b721e8(uVar4,uVar7,0);
    }
    else {
      iVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
      if (iVar6 != 0) {
        pcVar2 = (char *)(iRam036143f4 + 0x3614380);
        if (*pcVar2 == '\0') {
          thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
          *pcVar2 = '\x01';
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
          (*UNRECOVERED_JUMPTABLE)(iVar1,iVar3);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
      }
      thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
      uVar4 = thunk_FUN_00f00cdc();
      uVar7 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
      System_ArgumentException___ctor_2b113a4(uVar4,uVar7,0);
    }
    uVar7 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
    FUN_01f4fe28(uVar4,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_01f4fe2c();
  }
  pcVar2 = (char *)(_UNK_010b505c + 0x10b4e28);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5060 + 0x10b4e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5064 + 0x10b4e48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5068 + 0x10b4e54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b506c + 0x10b4e60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5070 + 0x10b4e6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b5074 + 0x10b4e78));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_010b5078 + 0x10b4ea4);
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 0x34),1,*puVar5);
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 0x38),0,*puVar5);
  if (*(int *)(param_1 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 0x3c),0,*puVar5);
  if (*(int *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Save_SavedValue_int___set_Value_1a8b820(*(int *)(param_1 + 0x40),0,*puVar5);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_ObservableBool__set_Value_fa6d68(*(int *)(iVar1 + 0x30),0,0);
  UnityEngine_PlayerPrefs__DeleteKey_35f76ec(**(undefined4 **)(_UNK_010b507c + 0x10b4f50),0);
  piVar8 = *(int **)(_UNK_010b5080 + 0x10b4f60);
  iVar3 = *(int *)(param_1 + 0x4c);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar5 = *(undefined4 **)(iVar1 + 0x5c);
  iVar6 = puVar5[1];
  if (iVar6 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar5 = *(undefined4 **)(*piVar8 + 0x5c);
    }
    uVar7 = *puVar5;
    iVar6 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010b5084 + 0x10b4fac));
    System_Action_object____ctor_1f11414(iVar6,uVar7,**(undefined4 **)(_UNK_010b5088 + 0x10b4fcc),0)
    ;
    piVar8 = (int *)(*(int *)(*piVar8 + 0x5c) + 4);
    *piVar8 = iVar6;
    thunk_FUN_00ec5080(piVar8,iVar6);
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_List_object___ForEach_267e6f0
            (iVar3,iVar6,**(undefined4 **)(_UNK_010b508c + 0x10b5004));
  Rotatelab_SeasonPass_SeasonPassController__SaveClaimedRewardData_10a4514(param_1);
  Rotatelab_SeasonPass_SeasonPassController__CheckAvailable_10a30f8(param_1);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassManager__ResetNeeds_10a5090(*(int *)(param_1 + 0x10));
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_SeasonPass_SeasonPassManager__SetButtonVisibility_10a5180(*(int *)(param_1 + 0x10),0);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}

