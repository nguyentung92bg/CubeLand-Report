/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$OnMainCanvasChangeEndedHandler
void Rotatelab_WinStreak_WinStreakManager__OnMainCanvasChangeEndedHandler (Rotatelab_WinStreak_WinStreakManager_o* __this, int32_t mainCanvasType, bool isAnimationPlayed, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$OnMainCanvasChangeEndedHandler
   void Rotatelab_WinStreak_WinStreakManager__OnMainCanvasChangeEndedHandler
   (Rotatelab_WinStreak_WinStreakManager_o* __this, int32_t mainCanvasType, bool isAnimationPlayed,
   const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__OnMainCanvasChangeEndedHandler_1092bdc
               (int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar4;
  undefined4 unaff_r6;
  char *pcVar5;
  int iVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_010a2d2c + 0x10a2bf4);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2d30 + 0x10a2c08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2d34 + 0x10a2c14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a2d38 + 0x10a2c20));
    *pcVar5 = '\x01';
  }
  if (param_2 != 0) {
    return;
  }
  Rotatelab_WinStreak_WinStreakManager__Refresh_10921e0(param_1);
  if (*(char *)(param_1 + 0x44) != '\0') {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc
                      (iVar4,*(undefined4 *)(iVar1 + 0xa0));
    iVar6 = *(int *)(param_1 + 0x10);
    iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar4 = Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc
                      (iVar6,*(undefined4 *)(iVar4 + 0x9c));
    if (iVar1 != iVar4) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_010a2d3c + 0x10a2cd0));
      uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a2d40 + 0x10a2ce4));
      System_Action___ctor_2b10bac(uVar2,param_1,**(undefined4 **)(_UNK_010a2d44 + 0x10a2d00),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar5 = (char *)(_UNK_0108a578 + 0x108a524);
      if (*pcVar5 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),10,uVar2,0,unaff_r4,unaff_r5,
                     unaff_r6,unaff_r7,unaff_r11,unaff_lr);
        *pcVar5 = '\x01';
      }
      if (*(int *)(iVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
                (*(int *)(iVar1 + 0x10),10,uVar2,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
      if (*(char *)(iVar1 + 0x1c) != '\0') {
        return;
      }
      *(undefined1 *)(iVar1 + 0x1c) = 1;
      iVar4 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar1);
      if (iVar4 == 0) {
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
        uVar3 = thunk_FUN_00f00cdc();
        uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
        System_NullReferenceException___ctor_2b721e8(uVar3,uVar2,0);
      }
      else {
        iVar6 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
        if (iVar6 != 0) {
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
            (*UNRECOVERED_JUMPTABLE)(iVar1,iVar4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
        }
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
        uVar3 = thunk_FUN_00f00cdc();
        uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
        System_ArgumentException___ctor_2b113a4(uVar3,uVar2,0);
      }
      uVar2 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
      FUN_01f4fe28(uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe2c();
    }
  }
  return;
}

