/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$<AnimateHit>b__26_0
void Rotatelab_Scripts_FlyingPiggyController___AnimateHit_b__26_0 (Rotatelab_Scripts_FlyingPiggyController_o* __this, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.FlyingPiggyController$$<AnimateHit>b__26_0
   void Rotatelab_Scripts_FlyingPiggyController___AnimateHit_b__26_0
   (Rotatelab_Scripts_FlyingPiggyController_o* __this, float value, const MethodInfo* method); */

void Rotatelab_Scripts_FlyingPiggyController___AnimateHit_b__26_0_100e884
               (int param_1,undefined4 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(_UNK_035de654 + 0x35de5d4);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_035de658 + 0x35de5e8),0,param_2,0);
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_035de65c + 0x35de620);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_035de660 + 0x35de630);
    *(code **)(_UNK_035de664 + 0x35de640) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x035de650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar3,0,param_2);
  return;
}

