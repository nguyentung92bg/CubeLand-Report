/* IL2CPP: Rotatelab.Scripts.BotRecorderGate$$WhenStablyClean
void Rotatelab_Scripts_BotRecorderGate__WhenStablyClean (System_Func_bool__o* isClean, float settleSeconds, System_Action_o* onReady, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.BotRecorderGate$$WhenStablyClean
   void Rotatelab_Scripts_BotRecorderGate__WhenStablyClean (System_Func_bool__o* isClean, float
   settleSeconds, System_Action_o* onReady, const MethodInfo* method); */

void Rotatelab_Scripts_BotRecorderGate__WhenStablyClean_ff42fc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  pcVar5 = (char *)(_UNK_010044b4 + 0x100431c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010044b8 + 0x1004330));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010044bc + 0x100433c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010044c0 + 0x1004348));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010044c4 + 0x1004354));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010044c8 + 0x1004360));
    *pcVar5 = '\x01';
  }
  piVar6 = *(int **)(_UNK_010044cc + 0x1004374);
  piVar7 = *(int **)(_UNK_010044d0 + 0x1004380);
  uVar8 = **(undefined4 **)(*piVar6 + 0x5c);
  if (*(int *)(*piVar7 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = UnityEngine_Object__op_Equality_36033f4(uVar8,0,0);
  if (iVar1 != 0) {
    iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010044d4 + 0x10043bc));
    UnityEngine_GameObject___ctor_360257c(iVar1,**(undefined4 **)(_UNK_010044d8 + 0x10043d4),0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_Object__set_hideFlags_3609e5c(iVar1,0x3d,0);
    if (*(int *)(*piVar7 + 0x74) == 0) {
      FUN_00ec3934();
    }
    UnityEngine_Object__DontDestroyOnLoad_3609c1c(iVar1,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar8 = UnityEngine_GameObject__AddComponent_object__1490548
                      (iVar1,**(undefined4 **)(_UNK_010044dc + 0x1004430));
    **(undefined4 **)(*piVar6 + 0x5c) = uVar8;
    thunk_FUN_00ec5080(*(undefined4 *)(*piVar6 + 0x5c));
  }
  iVar1 = **(int **)(*piVar6 + 0x5c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = Rotatelab_Scripts_BotRecorderGate__Wait_ff44e0
                    (*(int **)(*piVar6 + 0x5c),param_1,param_2,param_3);
  if (iVar2 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
    uVar4 = thunk_FUN_00f00cdc();
    uVar8 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar4,uVar8,0);
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
        (*UNRECOVERED_JUMPTABLE)(iVar1,iVar2);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar4 = thunk_FUN_00f00cdc();
    uVar8 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar4,uVar8,0);
  }
  uVar8 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar4,uVar8);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

