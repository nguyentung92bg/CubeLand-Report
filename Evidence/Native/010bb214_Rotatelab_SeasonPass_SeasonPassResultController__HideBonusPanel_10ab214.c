/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$HideBonusPanel
void Rotatelab_SeasonPass_SeasonPassResultController__HideBonusPanel (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassResultController$$HideBonusPanel
   void Rotatelab_SeasonPass_SeasonPassResultController__HideBonusPanel
   (Rotatelab_SeasonPass_SeasonPassResultController_o* __this, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassResultController__HideBonusPanel_10ab214(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  int *piVar6;
  undefined4 uVar7;
  
  pcVar5 = (char *)(_UNK_010bb37c + 0x10bb228);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb380 + 0x10bb23c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb384 + 0x10bb248));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb388 + 0x10bb254));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb38c + 0x10bb260));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb390 + 0x10bb26c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb394 + 0x10bb278));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010bb398 + 0x10bb28c);
  iVar2 = *piVar6;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar6;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x114);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,1,**(undefined4 **)(_UNK_010bb39c + 0x10bb2c4));
  uVar7 = *(undefined4 *)(param_1 + 0x3c);
  uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010bb3a0 + 0x10bb2dc));
  System_Action___ctor_2b10bac(uVar3,param_1,**(undefined4 **)(_UNK_010bb3a4 + 0x10bb2f8),0);
  if (*(int *)(**(int **)(_UNK_010bb3a8 + 0x10bb30c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Extensions__SetVisibility_fc2a78(uVar7,0,uVar3,0);
  if (*(int *)(param_1 + 0x44) != 0) {
    Rotatelab_SeasonPass_SeasonPassController__ResetSeasonPass_10a4e14(*(int *)(param_1 + 0x44));
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010bb3ac + 0x10bb354));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar5 = (char *)(_UNK_0108a5f4 + 0x108a59c);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5f8 + 0x108a5b0),3,0);
      FUN_00ec37c0(*(undefined4 *)(_UNK_0108a5fc + 0x108a5bc));
      *pcVar5 = '\x01';
    }
    pcVar5 = (char *)(iVar2 + 0x14);
    if ((*pcVar5 != '\0') && (*(int *)(iVar2 + 0x18) == 3)) {
      *(undefined4 *)(iVar2 + 0x18) = 0;
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
    }
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      *(undefined1 *)(iVar2 + 0x1c) = 1;
      iVar1 = Rotatelab_HomePageCoordinator__DrainNextFrame_107a618(iVar2);
      if (iVar1 == 0) {
        thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
        uVar7 = thunk_FUN_00f00cdc();
        uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
        System_NullReferenceException___ctor_2b721e8(uVar7,uVar3,0);
      }
      else {
        iVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
        if (iVar4 != 0) {
          pcVar5 = (char *)(iRam036143f4 + 0x3614380);
          if (*pcVar5 == '\0') {
            thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
            *pcVar5 = '\x01';
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
        uVar7 = thunk_FUN_00f00cdc();
        uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
        System_ArgumentException___ctor_2b113a4(uVar7,uVar3,0);
      }
      uVar3 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
      FUN_01f4fe28(uVar7,uVar3);
                    /* WARNING: Subroutine does not return */
      FUN_01f4fe2c();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

