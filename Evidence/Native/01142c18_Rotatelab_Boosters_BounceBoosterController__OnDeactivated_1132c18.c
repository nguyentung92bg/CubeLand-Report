/* IL2CPP: Rotatelab.Boosters.BounceBoosterController$$OnDeactivated
void Rotatelab_Boosters_BounceBoosterController__OnDeactivated (Rotatelab_Boosters_BounceBoosterController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.BounceBoosterController$$OnDeactivated
   void Rotatelab_Boosters_BounceBoosterController__OnDeactivated
   (Rotatelab_Boosters_BounceBoosterController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_BounceBoosterController__OnDeactivated_1132c18(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 uVar4;
  char *pcVar5;
  
  Rotatelab_Boosters_BaseBoosterController__OnDeactivated_11323e4();
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614620 + 0x36145ac),0,0,extraout_r3,unaff_r4);
    uVar2 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614624 + 0x36145c0));
    System_NullReferenceException___ctor_2b721e8(uVar2,uVar4,0);
  }
  else {
    iVar1 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar1 != 0) {
      pcVar5 = (char *)(_UNK_036146cc + 0x361464c);
      if (*pcVar5 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_036146d0 + 0x3614660));
        *pcVar5 = '\x01';
      }
      if (param_1 != 0) {
        iVar1 = *(int *)(param_1 + 8);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
        }
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined4 *)(iVar3 + 8);
        }
        UNRECOVERED_JUMPTABLE = *(code **)(_UNK_036146d4 + 0x3614698);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_036146d8 + 0x36146a8);
          *(code **)(_UNK_036146dc + 0x36146b8) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x036146c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar1,uVar4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_0361462c + 0x36145e0));
    uVar2 = thunk_FUN_00f00cdc();
    uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_03614630 + 0x36145f4));
    System_ArgumentException___ctor_2b113a4(uVar2,uVar4,0);
  }
  uVar4 = thunk_FUN_00f23fd0(*(undefined4 *)(_UNK_03614628 + 0x3614610));
  FUN_01f4fe28(uVar2,uVar4);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

