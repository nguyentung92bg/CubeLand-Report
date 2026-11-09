/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$HandleTerminal
void Rotatelab_Scripts_AutoPlayerBot__HandleTerminal (Rotatelab_Scripts_AutoPlayerBot_o* __this, System_String_o* outcome, bool reloadOnFlow, int32_t reloadIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.AutoPlayerBot$$HandleTerminal
   void Rotatelab_Scripts_AutoPlayerBot__HandleTerminal (Rotatelab_Scripts_AutoPlayerBot_o* __this,
   System_String_o* outcome, bool reloadOnFlow, int32_t reloadIndex, const MethodInfo* method); */

void Rotatelab_Scripts_AutoPlayerBot__HandleTerminal_ff2e50
               (int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  
  if (*(char *)(param_1 + 0x44) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x44) = 1;
  Rotatelab_Scripts_AutoPlayerBot__StopLoop_ff207c(param_1);
  if (*(int *)(param_1 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_BotClickHand__Hide_ff2f98(*(int *)(param_1 + 0x2c));
  Rotatelab_Scripts_AutoPlayerBot__Report_ff2fc0(param_1,param_2);
  if (*(int *)(param_1 + 0x28) < 1) {
    if (param_3 == 0) {
      return;
    }
    iVar4 = Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay_ff3228(param_1,param_4);
  }
  else {
    pcVar5 = (char *)(_UNK_01003210 + 0x1003120);
    if (*pcVar5 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01003214 + 0x1003134));
      FUN_00ec37c0(*(undefined4 *)(_UNK_01003218 + 0x1003140));
      *pcVar5 = '\x01';
    }
    iVar4 = *(int *)(param_1 + 0x58) + 1;
    *(int *)(param_1 + 0x58) = iVar4;
    if (*(int *)(param_1 + 0x28) <= iVar4) {
      iVar4 = *(int *)(_UNK_01003220 + 0x10031bc);
      uVar1 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&stack0xffffffec);
      uVar3 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&stack0xffffffe8);
      uVar1 = System_String__Format_2a0c264
                        (**(undefined4 **)(_UNK_01003224 + 0x10031f8),uVar1,uVar3,0);
      Rotatelab_Scripts_AutoPlayerBot__Report_ff2fc0(param_1,uVar1);
      return;
    }
    if (*(int *)(**(int **)(_UNK_0100321c + 0x100316c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    uVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
    iVar4 = Rotatelab_Scripts_AutoPlayerBot__LoadAfterDelay_ff3228(param_1,uVar1);
  }
  if (iVar4 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
    uVar3 = thunk_FUN_00f00cdc();
    uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar3,uVar1,0);
  }
  else {
    iVar2 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar2 != 0) {
      pcVar5 = (char *)(iRam036143f4 + 0x3614380);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
        *pcVar5 = '\x01';
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(param_1 + 8);
      if (iVar2 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
          *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar2,iVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar3 = thunk_FUN_00f00cdc();
    uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar3,uVar1,0);
  }
  uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar3,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

