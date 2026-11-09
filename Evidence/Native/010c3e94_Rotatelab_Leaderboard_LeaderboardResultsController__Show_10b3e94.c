/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$Show
void Rotatelab_Leaderboard_LeaderboardResultsController__Show (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, Rotatelab_Leaderboard_CycleData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Leaderboard.LeaderboardResultsController$$Show
   void Rotatelab_Leaderboard_LeaderboardResultsController__Show
   (Rotatelab_Leaderboard_LeaderboardResultsController_o* __this, Rotatelab_Leaderboard_CycleData_o*
   data, const MethodInfo* method); */

void Rotatelab_Leaderboard_LeaderboardResultsController__Show_10b3e94
               (int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r7;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  pcVar5 = (char *)(_UNK_010c3f5c + 0x10c3eac);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3f60 + 0x10c3ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3f64 + 0x10c3ecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c3f68 + 0x10c3ed8));
    *pcVar5 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x10),param_2);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010c3f6c + 0x10c3efc));
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010c3f70 + 0x10c3f14));
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_010c3f74 + 0x10c3f30),0);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar5 = (char *)(_UNK_0108a578 + 0x108a524);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108a57c + 0x108a538),uVar6,uVar3,0,unaff_r4,unaff_r5,unaff_r6
                 ,unaff_r7,unaff_r11,unaff_lr);
    *pcVar5 = '\x01';
  }
  if (*(int *)(iVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  System_Collections_Generic_Dictionary_Int32Enum__object___set_Item_2000ccc
            (*(int *)(iVar2 + 0x10),uVar6,uVar3,**(undefined4 **)(_UNK_0108a580 + 0x108a564));
  if (*(char *)(iVar2 + 0x1c) != '\0') {
    return;
  }
  *(undefined1 *)(iVar2 + 0x1c) = 1;
  iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar2);
  if (iVar1 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
    uVar6 = thunk_FUN_00f00cdc();
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar6,uVar3,0);
  }
  else {
    iVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar4 != 0) {
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
        (*UNRECOVERED_JUMPTABLE)(iVar2,iVar1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar6 = thunk_FUN_00f00cdc();
    uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar6,uVar3,0);
  }
  uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar6,uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

